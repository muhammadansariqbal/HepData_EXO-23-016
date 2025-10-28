void HLTMuonsRes_vs_genpt()
{
//=========Macro generated from canvas: c/Canvas
//=========  (Tue Oct 28 10:26:44 2025) by ROOT version 6.12/07
   TCanvas *c = new TCanvas("c", "Canvas",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetFillStyle(4000);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.14);
   c->SetRightMargin(0.04);
   c->SetTopMargin(0.06);
   c->SetBottomMargin(0.13);
   c->SetFrameFillStyle(0);
   c->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: main
   TPad *main = new TPad("main", "Main",0,0,1,1);
   main->Draw();
   main->cd();
   main->Range(-43.03805,-2.879421,264.3766,0.8242822);
   main->SetFillColor(0);
   main->SetFillStyle(4000);
   main->SetBorderMode(0);
   main->SetBorderSize(2);
   main->SetLogy();
   main->SetTickx(1);
   main->SetTicky(1);
   main->SetLeftMargin(0.14);
   main->SetRightMargin(0.04);
   main->SetTopMargin(0.06);
   main->SetBottomMargin(0.13);
   main->SetFrameFillStyle(0);
   main->SetFrameBorderMode(0);
   main->SetFrameFillStyle(0);
   main->SetFrameBorderMode(0);
   
   Double_t L2ptres_fx1001[6] = {
   25,
   55,
   85,
   120,
   165,
   220};
   Double_t L2ptres_fy1001[6] = {
   0.2238153,
   0.2328808,
   0.2527073,
   0.2588466,
   0.2794232,
   0.4552705};
   Double_t L2ptres_fex1001[6] = {
   15,
   15,
   15,
   20,
   25,
   30};
   Double_t L2ptres_fey1001[6] = {
   0.0004653563,
   0.001196564,
   0.004160851,
   0.008201512,
   0.01953946,
   0.1500752};
   TGraphErrors *gre = new TGraphErrors(6,L2ptres_fx1001,L2ptres_fy1001,L2ptres_fex1001,L2ptres_fey1001);
   gre->SetName("L2ptres");
   gre->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);
   gre->SetLineStyle(0);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_L2ptres1001 = new TH1F("Graph_L2ptres1001","Graph",100,0,274);
   Graph_L2ptres1001->SetMinimum(0.004);
   Graph_L2ptres1001->SetMaximum(4);
   Graph_L2ptres1001->SetDirectory(0);
   Graph_L2ptres1001->SetStats(0);
   Graph_L2ptres1001->SetLineStyle(0);
   Graph_L2ptres1001->SetLineWidth(2);
   Graph_L2ptres1001->SetMarkerStyle(20);
   Graph_L2ptres1001->SetMarkerSize(1.3);
   Graph_L2ptres1001->GetXaxis()->SetTitle("p_{T}^{gen} [GeV]");
   Graph_L2ptres1001->GetXaxis()->SetRange(1,92);
   Graph_L2ptres1001->GetXaxis()->SetLabelFont(42);
   Graph_L2ptres1001->GetXaxis()->SetLabelOffset(0.007);
   Graph_L2ptres1001->GetXaxis()->SetLabelSize(0.05);
   Graph_L2ptres1001->GetXaxis()->SetTitleSize(0.06);
   Graph_L2ptres1001->GetXaxis()->SetTitleOffset(0.9);
   Graph_L2ptres1001->GetXaxis()->SetTitleFont(42);
   Graph_L2ptres1001->GetYaxis()->SetTitle("Fitted #sigma : (1/p_{T}^{HLT} #minus 1/p_{T}^{gen}) / 1/p_{T}^{gen}");
   Graph_L2ptres1001->GetYaxis()->SetLabelFont(42);
   Graph_L2ptres1001->GetYaxis()->SetLabelOffset(0.007);
   Graph_L2ptres1001->GetYaxis()->SetLabelSize(0.05);
   Graph_L2ptres1001->GetYaxis()->SetTitleSize(0.06);
   Graph_L2ptres1001->GetYaxis()->SetTitleOffset(1.05);
   Graph_L2ptres1001->GetYaxis()->SetTitleFont(42);
   Graph_L2ptres1001->GetZaxis()->SetLabelFont(42);
   Graph_L2ptres1001->GetZaxis()->SetLabelOffset(0.007);
   Graph_L2ptres1001->GetZaxis()->SetLabelSize(0.05);
   Graph_L2ptres1001->GetZaxis()->SetTitleSize(0.06);
   Graph_L2ptres1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_L2ptres1001);
   
   gre->Draw("ape");
   
   Double_t L3ptres_fx1002[6] = {
   25,
   55,
   85,
   120,
   165,
   220};
   Double_t L3ptres_fy1002[6] = {
   0.01526451,
   0.01684209,
   0.02010497,
   0.02369753,
   0.02708414,
   0.03096388};
   Double_t L3ptres_fex1002[6] = {
   15,
   15,
   15,
   20,
   25,
   30};
   Double_t L3ptres_fey1002[6] = {
   9.691961e-06,
   2.346155e-05,
   7.378454e-05,
   0.0001453648,
   0.0003036479,
   0.0006114334};
   gre = new TGraphErrors(6,L3ptres_fx1002,L3ptres_fy1002,L3ptres_fex1002,L3ptres_fey1002);
   gre->SetName("L3ptres");
   gre->SetTitle("Graph");

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);
   gre->SetLineStyle(0);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_L3ptres1002 = new TH1F("Graph_L3ptres1002","Graph",100,0,274);
   Graph_L3ptres1002->SetMinimum(0.01362277);
   Graph_L3ptres1002->SetMaximum(0.03320736);
   Graph_L3ptres1002->SetDirectory(0);
   Graph_L3ptres1002->SetStats(0);
   Graph_L3ptres1002->SetLineStyle(0);
   Graph_L3ptres1002->SetLineWidth(2);
   Graph_L3ptres1002->SetMarkerStyle(20);
   Graph_L3ptres1002->SetMarkerSize(1.3);
   Graph_L3ptres1002->GetXaxis()->SetLabelFont(42);
   Graph_L3ptres1002->GetXaxis()->SetLabelOffset(0.007);
   Graph_L3ptres1002->GetXaxis()->SetLabelSize(0.05);
   Graph_L3ptres1002->GetXaxis()->SetTitleSize(0.06);
   Graph_L3ptres1002->GetXaxis()->SetTitleOffset(0.9);
   Graph_L3ptres1002->GetXaxis()->SetTitleFont(42);
   Graph_L3ptres1002->GetYaxis()->SetLabelFont(42);
   Graph_L3ptres1002->GetYaxis()->SetLabelOffset(0.007);
   Graph_L3ptres1002->GetYaxis()->SetLabelSize(0.05);
   Graph_L3ptres1002->GetYaxis()->SetTitleSize(0.06);
   Graph_L3ptres1002->GetYaxis()->SetTitleOffset(1.05);
   Graph_L3ptres1002->GetYaxis()->SetTitleFont(42);
   Graph_L3ptres1002->GetZaxis()->SetLabelFont(42);
   Graph_L3ptres1002->GetZaxis()->SetLabelOffset(0.007);
   Graph_L3ptres1002->GetZaxis()->SetLabelSize(0.05);
   Graph_L3ptres1002->GetZaxis()->SetTitleSize(0.06);
   Graph_L3ptres1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_L3ptres1002);
   
   gre->Draw("pe ");
   TLatex *   tex = new TLatex(0.175,0.85,"#color[1]{CMS}");
tex->SetNDC();
   tex->SetTextSize(0.07);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2905,0.85,"#color[1]{Simulation}");
tex->SetNDC();
   tex->SetTextFont(52);
   tex->SetTextSize(0.056);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.96,0.96,"#color[1]{(13.6 TeV)}");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetTextSize(0.048);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.73,0.76,0.93,0.91,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.04);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("L2ptres","L2 muons","pel");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry->SetTextFont(42);
   entry=leg->AddEntry("L3ptres","L3 muons","pel");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1.3);
   entry->SetTextFont(42);
   leg->Draw();
   
   TH1F *L2ptres_copy__25 = new TH1F("L2ptres_copy__25","Graph",100,0,274);
   L2ptres_copy__25->SetMinimum(0.004);
   L2ptres_copy__25->SetMaximum(4);
   L2ptres_copy__25->SetDirectory(0);
   L2ptres_copy__25->SetStats(0);
   L2ptres_copy__25->SetLineStyle(0);
   L2ptres_copy__25->SetLineWidth(2);
   L2ptres_copy__25->SetMarkerStyle(20);
   L2ptres_copy__25->SetMarkerSize(1.3);
   L2ptres_copy__25->GetXaxis()->SetTitle("p_{T}^{gen} [GeV]");
   L2ptres_copy__25->GetXaxis()->SetRange(1,92);
   L2ptres_copy__25->GetXaxis()->SetLabelFont(42);
   L2ptres_copy__25->GetXaxis()->SetLabelOffset(0.007);
   L2ptres_copy__25->GetXaxis()->SetLabelSize(0.05);
   L2ptres_copy__25->GetXaxis()->SetTitleSize(0.06);
   L2ptres_copy__25->GetXaxis()->SetTitleOffset(0.9);
   L2ptres_copy__25->GetXaxis()->SetTitleFont(42);
   L2ptres_copy__25->GetYaxis()->SetTitle("Fitted #sigma : (1/p_{T}^{HLT} #minus 1/p_{T}^{gen}) / 1/p_{T}^{gen}");
   L2ptres_copy__25->GetYaxis()->SetLabelFont(42);
   L2ptres_copy__25->GetYaxis()->SetLabelOffset(0.007);
   L2ptres_copy__25->GetYaxis()->SetLabelSize(0.05);
   L2ptres_copy__25->GetYaxis()->SetTitleSize(0.06);
   L2ptres_copy__25->GetYaxis()->SetTitleOffset(1.05);
   L2ptres_copy__25->GetYaxis()->SetTitleFont(42);
   L2ptres_copy__25->GetZaxis()->SetLabelFont(42);
   L2ptres_copy__25->GetZaxis()->SetLabelOffset(0.007);
   L2ptres_copy__25->GetZaxis()->SetLabelSize(0.05);
   L2ptres_copy__25->GetZaxis()->SetTitleSize(0.06);
   L2ptres_copy__25->GetZaxis()->SetTitleFont(42);
   L2ptres_copy__25->Draw("sameaxis");
   main->Modified();
   c->cd();
      tex = new TLatex(0.21,0.81,"#color[1]{H #rightarrow #lower[0]{Z_{D}Z_{D}}, #lower[0]{Z_{D}} #rightarrow #mu#mu}");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
