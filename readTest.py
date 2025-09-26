import ROOT

def collect_hists_from_pad(pad, out):
    if not pad:
        return
    prims = pad.GetListOfPrimitives()
    if not prims:
        return

    for obj in prims:
        if not obj:
            continue

        # Recurse into sub-pads
        if obj.InheritsFrom("TPad"):
            collect_hists_from_pad(obj, out)
            continue

        # Direct histograms
        if obj.InheritsFrom("TH1"):
            out.append(obj)
            continue

        # THStack contents
        if obj.InheritsFrom("THStack"):
            hs = obj
            hs_hists = hs.GetHists()
            if hs_hists:
                for hobj in hs_hists:
                    if hobj and hobj.InheritsFrom("TH1"):
                        out.append(hobj)
            continue

def collect_hists_from_main_pad(c):
    """
    Collect histograms only from the main pad, excluding ratio pads
    """
    out = []
    if not c:
        return out
    
    prims = c.GetListOfPrimitives()
    if not prims:
        return out
    
    # Look for the main pad specifically
    main_pad = None
    for obj in prims:
        if obj and obj.InheritsFrom("TPad"):
            pad_name = obj.GetName()
            # Look for main pad (avoid ratio pads)
            if "main" in pad_name.lower() or ("ratio" not in pad_name.lower() and "Main" in pad_name):
                main_pad = obj
                break
    
    # If no explicitly named main pad, use the largest pad or the first non-ratio pad
    if not main_pad:
        for obj in prims:
            if obj and obj.InheritsFrom("TPad"):
                pad_name = obj.GetName()
                if "ratio" not in pad_name.lower():
                    main_pad = obj
                    break
    
    # Extract histograms from main pad only
    if main_pad:
        collect_hists_from_pad(main_pad, out)
    
    return out

def collect_hists_from_canvas(c):
    """
    Wrapper function that uses the main pad extraction for better compatibility
    """
    # First try to get histograms from main pad only
    hists_main = collect_hists_from_main_pad(c)
    
    # If we found histograms in main pad, use those
    if hists_main:
        return hists_main
    
    # Otherwise fall back to the original method
    out = []
    if c:
        collect_hists_from_pad(c, out)
    return out

if __name__ == "__main__":
    # Example usage (only runs when script is executed directly)
    import os
    data_dir = "data_Alejandro"
    root_file_path = os.path.join(data_dir, "Figure41a.root")
    
    if os.path.exists(root_file_path):
        f = ROOT.TFile.Open(root_file_path)
        c = f.Get("c")
        hists = collect_hists_from_canvas(c)
        print("Found", len(hists), "histogram(s):", [h.GetName() for h in hists])
        f.Close()
    else:
        print(f"ROOT file not found: {root_file_path}")
    
    
    # Example of writing histograms to a new file:
    # fout = ROOT.TFile("hists.root", "RECREATE")
    # for h in hists:
    #     name = h.GetName()
    #     if fout.Get(name):
    #         name = name + "_copy"
    #     h.Write(name)
    # fout.Close()
