from __future__ import print_function
from hepdata_lib import Submission, Table, Variable, Uncertainty, RootFileReader

def makeVariable(plot, label, is_independent, is_binned, is_symmetric, units, CME=13.6, uncertainty=True):
    var = Variable(label, is_independent=is_independent, is_binned=is_binned, units=units)
    var.values = plot["y"]
    if uncertainty:
        unc = Uncertainty("", is_symmetric=is_symmetric)
        unc.values = plot["dy"]
        var.add_uncertainty(unc)
    var.add_qualifier("SQRT(S)", CME, "TeV")
    #var.add_qualifier("HLT rate","2016")
    return var

#########################################################

def makeDoubleDispL3MuonSigEffTable():
    table = Table("Double displaced L3 muon signal eff vs min($\mathrm{p_{T}}$)")
    table.description = "L1T+HLT efficiency of the double displaced L3 muon trigger as a function of min($\mathrm{p_{T}}$) of the two global or tracker muons in the event. The efficiency is plotted for HAHM signal events in 2022 conditions with $m_{Z_D} = 50$ GeV and $\epsilon = 4 \\times 10^{-9}$ (black triangles), $m_{Z_D} = 60$ GeV and $\epsilon = 2 \\times 10^{-9}$ (red triangles), and $m_H=125$ GeV in both cases. The events are required to have at least two good global or tracker muons with $\mathrm{p_T}>23$ GeV."
    table.location = "Data from Fig. 45"
    table.add_image("data/pat_2022_minpt_REP_PRESEL_PT23_add_HLTDoubleMu43.pdf")

    reader = RootFileReader("data/DoubleDispL3MuonSigEff.root")
    g_125_50_4 = reader.read_teff("HHTo2ZdTo2Mu2X_125_50_4e-09preHLTDoubleMu43_clone;1")
    g_125_60_2 = reader.read_teff("HHTo2ZdTo2Mu2X_125_60_2e-09preHLTDoubleMu43_clone;1")

    minpT = Variable("min($\mathrm{p_{T}}$)", is_independent=True, is_binned=False, units="GeV")
    minpT.values = g_125_50_4["x"]

    ### add variables and add table to submission
    table.add_variable(minpT)
    table.add_variable(makeVariable(plot = g_125_50_4, label = "$\mathrm{H} \\to 2\mathrm{Z_D} \\to 2\\mu 2\mathrm{X}$ (125, 50, 4e-09)", is_independent=False, is_binned=False, is_symmetric=False, units=""))
    table.add_variable(makeVariable(plot = g_125_60_2, label = "$\mathrm{H} \\to 2\mathrm{Z_D} \\to 2\\mu 2\mathrm{X}$ (125, 60, 2e-09)", is_independent=False, is_binned=False, is_symmetric=False, units=""))

    return table


def makeDoubleDispL3MuonDataMCEffTable(xvar):
    if(xvar=="min($\mathrm{d_{0}}$)"):
        units = "cm"
        location = "left"
        image = "data/pat_2022_mind0pv_REP_PT45_JPSIMASS_add_HLTDoubleMu43_Jpsi_eff.pdf"
        reader = RootFileReader("data/DoubleDispL3MuonDataMCEff_mind0.root")
    elif(xvar=="min($\mathrm{p_{T}}$)"):
        units = "GeV"
        location = "right"
        image = "data/pat_2022_minpt_REP_JPSIMASS_PT23_add_HLTDoubleMu43_Jpsi_eff.pdf"
        reader = RootFileReader("data/DoubleDispL3MuonDataMCEff_minpT.root")
        
    table = Table("Double disp. L3mu data&bkg eff vs "+xvar)
    table.description = "L1T+HLT efficiency of the double displaced L3 muon trigger as a function of min($\mathrm{p_{T}}$) of the two global or tracker muons in the event. The efficiency is plotted for HAHM signal events in 2022 conditions with $m_{Z_D} = 50$ GeV and $\epsilon = 4 \\times 10^{-9}$ (black triangles), $m_{Z_D} = 60$ GeV and $\epsilon = 2 \\times 10^{-9}$ (red triangles), and $m_H=125$ GeV in both cases. The events are required to have at least two good global or tracker muons with $\mathrm{p_T}>23$ GeV."
    table.location = "Data from Fig. 46 "+location
    table.add_image(image)

    MC = reader.read_teff("HBtoJPsipreHLTDoubleMu43_clone;1")
    data = reader.read_teff("HJetMETData2022preHLTDoubleMu43_clone;1")

    xAxisVar = Variable(xvar, is_independent=True, is_binned=False, units=units)
    xAxisVar.values = MC["x"]

    ### add variables and add table to submission
    table.add_variable(xAxisVar)
    table.add_variable(makeVariable(plot = MC, label = "Nonprompt $J/\\psi \\to \\mu\\mu$", is_independent=False, is_binned=False, is_symmetric=False, units=""))
    table.add_variable(makeVariable(plot = data, label = "Data (2022)", is_independent=False, is_binned=False, is_symmetric=False, units=""))

    return table


def makeMuonNoBPTXRateVsNBunchesTable(year):
    if(year=="2016" or year=="2017" or year=="2018"):
        CME="13"
    elif(year=="2022" or year=="2023" or year=="2024"):
        CME="13.6"
    table = Table("Muon NoBPTX HLT rate vs number of colliding bunches ("+year+")")
    table.description = "Rate of the main muon No-BPTX HLT path as a function of the number of colliding bunches, for "+year+"."
    table.location = "Data from Fig. 58"
    table.add_image("data/NoBPTXL2Mu40_RateVsNCollidingBunches.pdf")

    reader = RootFileReader("data/juliette.root")
    g = reader.read_graph("g_"+year+";1")

    nBunches = Variable("Number of colliding bunches", is_independent=True, is_binned=False, units="")
    nBunches.values = g["x"]
    
    ### add variables and add table to submission
    table.add_variable(nBunches)
    table.add_variable(makeVariable(plot = g, label = "HLT rate in "+year, is_independent=False, is_binned=False, is_symmetric=True, units="Hz", CME=CME))
    
    return table


###################################################################################################### 

def main():

    #create submission
    submission = Submission()

    submission.read_abstract("data/abstract.txt")
    #submission.add_link("Webpage with all figures and tables", "https://cms-results.web.cern.ch/cms-results/public-results/publications/EXO-18-003/")
    #submission.add_link("arXiv", "http://arxiv.org/abs/arXiv:2110.04809")
    #submission.add_record_id(1940976, "inspire")

    submission.add_table(makeDoubleDispL3MuonSigEffTable())
    submission.add_table(makeDoubleDispL3MuonDataMCEffTable("min($\mathrm{d_{0}}$)"))
    submission.add_table(makeDoubleDispL3MuonDataMCEffTable("min($\mathrm{p_{T}}$)"))
    
    submission.add_table(makeMuonNoBPTXRateVsNBunchesTable("2016"))
    submission.add_table(makeMuonNoBPTXRateVsNBunchesTable("2017"))
    submission.add_table(makeMuonNoBPTXRateVsNBunchesTable("2018"))
    submission.add_table(makeMuonNoBPTXRateVsNBunchesTable("2022"))
    submission.add_table(makeMuonNoBPTXRateVsNBunchesTable("2023"))
    submission.add_table(makeMuonNoBPTXRateVsNBunchesTable("2024"))

    for table in submission.tables:
        table.keywords["cmenergies"] = [13000,13600]

    #submission.add_additional_resource("Signal generation", "data/signalGeneration.tar.gz", copy_file=True)

    submission.create_files("hepdataRecord",remove_old=True)

    
if __name__ == '__main__':
    main()

