void HLTMuonsRes_vs_genlxy()
{
//=========Macro generated from canvas: c/Canvas
//=========  (Tue Oct 28 10:46:18 2025) by ROOT version 6.12/07
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
   main->Range(-68.36098,-2.879421,419.9317,0.8242822);
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
   
   Double_t Graph0_fx1[2] = {
   0,
   400};
   Double_t Graph0_fy1[2] = {
   1e-10,
   1e-10};
   TGraph *graph = new TGraph(2,Graph0_fx1,Graph0_fy1);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetLineStyle(0);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,0,440);
   Graph_Graph1->SetMinimum(0.004);
   Graph_Graph1->SetMaximum(4);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);
   Graph_Graph1->SetLineStyle(0);
   Graph_Graph1->SetLineWidth(2);
   Graph_Graph1->SetMarkerStyle(20);
   Graph_Graph1->SetMarkerSize(1.3);
   Graph_Graph1->GetXaxis()->SetTitle("L_{xy}^{gen} [cm]");
   Graph_Graph1->GetXaxis()->SetRange(1,91);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph1->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetTitle("Fitted #sigma : (1/p_{T}^{HLT} #minus 1/p_{T}^{gen}) / 1/p_{T}^{gen}");
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph1->GetYaxis()->SetTitleOffset(1.05);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1);
   
   graph->Draw("al");
   
   Double_t Graph1_fx2[2] = {
   3,
   3};
   Double_t Graph1_fy2[2] = {
   0.004,
   0.4093172};
   graph = new TGraph(2,Graph1_fx2,Graph1_fy2);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   graph->SetLineColor(ci);
   graph->SetLineStyle(9);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Graph",100,2.9,4.1);
   Graph_Graph2->SetMinimum(0.0036);
   Graph_Graph2->SetMaximum(0.4498489);
   Graph_Graph2->SetDirectory(0);
   Graph_Graph2->SetStats(0);
   Graph_Graph2->SetLineStyle(0);
   Graph_Graph2->SetLineWidth(2);
   Graph_Graph2->SetMarkerStyle(20);
   Graph_Graph2->SetMarkerSize(1.3);
   Graph_Graph2->GetXaxis()->SetLabelFont(42);
   Graph_Graph2->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph2->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph2->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph2->GetXaxis()->SetTitleFont(42);
   Graph_Graph2->GetYaxis()->SetLabelFont(42);
   Graph_Graph2->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph2->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph2->GetYaxis()->SetTitleOffset(1.05);
   Graph_Graph2->GetYaxis()->SetTitleFont(42);
   Graph_Graph2->GetZaxis()->SetLabelFont(42);
   Graph_Graph2->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph2->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph2->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2);
   
   graph->Draw("l ");
   
   Double_t Graph2_fx3[2] = {
   7,
   7};
   Double_t Graph2_fy3[2] = {
   0.004,
   0.4093172};
   graph = new TGraph(2,Graph2_fx3,Graph2_fy3);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#ffcc00");
   graph->SetLineColor(ci);
   graph->SetLineStyle(9);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","Graph",100,6.9,8.1);
   Graph_Graph3->SetMinimum(0.0036);
   Graph_Graph3->SetMaximum(0.4498489);
   Graph_Graph3->SetDirectory(0);
   Graph_Graph3->SetStats(0);
   Graph_Graph3->SetLineStyle(0);
   Graph_Graph3->SetLineWidth(2);
   Graph_Graph3->SetMarkerStyle(20);
   Graph_Graph3->SetMarkerSize(1.3);
   Graph_Graph3->GetXaxis()->SetLabelFont(42);
   Graph_Graph3->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3->GetXaxis()->SetTitleFont(42);
   Graph_Graph3->GetYaxis()->SetLabelFont(42);
   Graph_Graph3->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3->GetYaxis()->SetTitleOffset(1.05);
   Graph_Graph3->GetYaxis()->SetTitleFont(42);
   Graph_Graph3->GetZaxis()->SetLabelFont(42);
   Graph_Graph3->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph3);
   
   graph->Draw("l ");
   
   Double_t Graph3_fx4[2] = {
   11,
   11};
   Double_t Graph3_fy4[2] = {
   0.004,
   0.4093172};
   graph = new TGraph(2,Graph3_fx4,Graph3_fy4);
   graph->SetName("Graph3");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#ffcc00");
   graph->SetLineColor(ci);
   graph->SetLineStyle(9);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph4 = new TH1F("Graph_Graph4","Graph",100,10.9,12.1);
   Graph_Graph4->SetMinimum(0.0036);
   Graph_Graph4->SetMaximum(0.4498489);
   Graph_Graph4->SetDirectory(0);
   Graph_Graph4->SetStats(0);
   Graph_Graph4->SetLineStyle(0);
   Graph_Graph4->SetLineWidth(2);
   Graph_Graph4->SetMarkerStyle(20);
   Graph_Graph4->SetMarkerSize(1.3);
   Graph_Graph4->GetXaxis()->SetLabelFont(42);
   Graph_Graph4->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph4->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph4->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph4->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph4->GetXaxis()->SetTitleFont(42);
   Graph_Graph4->GetYaxis()->SetLabelFont(42);
   Graph_Graph4->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph4->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph4->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph4->GetYaxis()->SetTitleOffset(1.05);
   Graph_Graph4->GetYaxis()->SetTitleFont(42);
   Graph_Graph4->GetZaxis()->SetLabelFont(42);
   Graph_Graph4->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph4->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph4->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph4->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph4);
   
   graph->Draw("l ");
   
   Double_t Graph4_fx5[2] = {
   16,
   16};
   Double_t Graph4_fy5[2] = {
   0.004,
   0.4093172};
   graph = new TGraph(2,Graph4_fx5,Graph4_fy5);
   graph->SetName("Graph4");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#ffcc00");
   graph->SetLineColor(ci);
   graph->SetLineStyle(9);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph5 = new TH1F("Graph_Graph5","Graph",100,15.9,17.1);
   Graph_Graph5->SetMinimum(0.0036);
   Graph_Graph5->SetMaximum(0.4498489);
   Graph_Graph5->SetDirectory(0);
   Graph_Graph5->SetStats(0);
   Graph_Graph5->SetLineStyle(0);
   Graph_Graph5->SetLineWidth(2);
   Graph_Graph5->SetMarkerStyle(20);
   Graph_Graph5->SetMarkerSize(1.3);
   Graph_Graph5->GetXaxis()->SetLabelFont(42);
   Graph_Graph5->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph5->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph5->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph5->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph5->GetXaxis()->SetTitleFont(42);
   Graph_Graph5->GetYaxis()->SetLabelFont(42);
   Graph_Graph5->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph5->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph5->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph5->GetYaxis()->SetTitleOffset(1.05);
   Graph_Graph5->GetYaxis()->SetTitleFont(42);
   Graph_Graph5->GetZaxis()->SetLabelFont(42);
   Graph_Graph5->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph5->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph5->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph5->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph5);
   
   graph->Draw("l ");
   
   Double_t Graph5_fx6[2] = {
   24.5,
   24.5};
   Double_t Graph5_fy6[2] = {
   0.004,
   0.4093172};
   graph = new TGraph(2,Graph5_fx6,Graph5_fy6);
   graph->SetName("Graph5");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#cccc99");
   graph->SetLineColor(ci);
   graph->SetLineStyle(9);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph6 = new TH1F("Graph_Graph6","Graph",100,24.4,25.6);
   Graph_Graph6->SetMinimum(0.0036);
   Graph_Graph6->SetMaximum(0.4498489);
   Graph_Graph6->SetDirectory(0);
   Graph_Graph6->SetStats(0);
   Graph_Graph6->SetLineStyle(0);
   Graph_Graph6->SetLineWidth(2);
   Graph_Graph6->SetMarkerStyle(20);
   Graph_Graph6->SetMarkerSize(1.3);
   Graph_Graph6->GetXaxis()->SetLabelFont(42);
   Graph_Graph6->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph6->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph6->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph6->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph6->GetXaxis()->SetTitleFont(42);
   Graph_Graph6->GetYaxis()->SetLabelFont(42);
   Graph_Graph6->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph6->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph6->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph6->GetYaxis()->SetTitleOffset(1.05);
   Graph_Graph6->GetYaxis()->SetTitleFont(42);
   Graph_Graph6->GetZaxis()->SetLabelFont(42);
   Graph_Graph6->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph6->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph6->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph6->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph6);
   
   graph->Draw("l ");
   
   Double_t Graph6_fx7[2] = {
   33.5,
   33.5};
   Double_t Graph6_fy7[2] = {
   0.004,
   0.4093172};
   graph = new TGraph(2,Graph6_fx7,Graph6_fy7);
   graph->SetName("Graph6");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#cccc99");
   graph->SetLineColor(ci);
   graph->SetLineStyle(9);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph7 = new TH1F("Graph_Graph7","Graph",100,33.4,34.6);
   Graph_Graph7->SetMinimum(0.0036);
   Graph_Graph7->SetMaximum(0.4498489);
   Graph_Graph7->SetDirectory(0);
   Graph_Graph7->SetStats(0);
   Graph_Graph7->SetLineStyle(0);
   Graph_Graph7->SetLineWidth(2);
   Graph_Graph7->SetMarkerStyle(20);
   Graph_Graph7->SetMarkerSize(1.3);
   Graph_Graph7->GetXaxis()->SetLabelFont(42);
   Graph_Graph7->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph7->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph7->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph7->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph7->GetXaxis()->SetTitleFont(42);
   Graph_Graph7->GetYaxis()->SetLabelFont(42);
   Graph_Graph7->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph7->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph7->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph7->GetYaxis()->SetTitleOffset(1.05);
   Graph_Graph7->GetYaxis()->SetTitleFont(42);
   Graph_Graph7->GetZaxis()->SetLabelFont(42);
   Graph_Graph7->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph7->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph7->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph7->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph7);
   
   graph->Draw("l ");
   
   Double_t Graph7_fx8[2] = {
   41.5,
   41.5};
   Double_t Graph7_fy8[2] = {
   0.004,
   0.4093172};
   graph = new TGraph(2,Graph7_fx8,Graph7_fy8);
   graph->SetName("Graph7");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#cccc99");
   graph->SetLineColor(ci);
   graph->SetLineStyle(9);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph8 = new TH1F("Graph_Graph8","Graph",100,41.4,42.6);
   Graph_Graph8->SetMinimum(0.0036);
   Graph_Graph8->SetMaximum(0.4498489);
   Graph_Graph8->SetDirectory(0);
   Graph_Graph8->SetStats(0);
   Graph_Graph8->SetLineStyle(0);
   Graph_Graph8->SetLineWidth(2);
   Graph_Graph8->SetMarkerStyle(20);
   Graph_Graph8->SetMarkerSize(1.3);
   Graph_Graph8->GetXaxis()->SetLabelFont(42);
   Graph_Graph8->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph8->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph8->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph8->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph8->GetXaxis()->SetTitleFont(42);
   Graph_Graph8->GetYaxis()->SetLabelFont(42);
   Graph_Graph8->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph8->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph8->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph8->GetYaxis()->SetTitleOffset(1.05);
   Graph_Graph8->GetYaxis()->SetTitleFont(42);
   Graph_Graph8->GetZaxis()->SetLabelFont(42);
   Graph_Graph8->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph8->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph8->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph8->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph8);
   
   graph->Draw("l ");
   
   Double_t Graph8_fx9[2] = {
   49.5,
   49.5};
   Double_t Graph8_fy9[2] = {
   0.004,
   0.4093172};
   graph = new TGraph(2,Graph8_fx9,Graph8_fy9);
   graph->SetName("Graph8");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#cccc99");
   graph->SetLineColor(ci);
   graph->SetLineStyle(9);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph9 = new TH1F("Graph_Graph9","Graph",100,49.4,50.6);
   Graph_Graph9->SetMinimum(0.0036);
   Graph_Graph9->SetMaximum(0.4498489);
   Graph_Graph9->SetDirectory(0);
   Graph_Graph9->SetStats(0);
   Graph_Graph9->SetLineStyle(0);
   Graph_Graph9->SetLineWidth(2);
   Graph_Graph9->SetMarkerStyle(20);
   Graph_Graph9->SetMarkerSize(1.3);
   Graph_Graph9->GetXaxis()->SetLabelFont(42);
   Graph_Graph9->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph9->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph9->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph9->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph9->GetXaxis()->SetTitleFont(42);
   Graph_Graph9->GetYaxis()->SetLabelFont(42);
   Graph_Graph9->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph9->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph9->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph9->GetYaxis()->SetTitleOffset(1.05);
   Graph_Graph9->GetYaxis()->SetTitleFont(42);
   Graph_Graph9->GetZaxis()->SetLabelFont(42);
   Graph_Graph9->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph9->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph9->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph9->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph9);
   
   graph->Draw("l ");
   
   Double_t Graph9_fx10[2] = {
   61,
   61};
   Double_t Graph9_fy10[2] = {
   0.004,
   0.4093172};
   graph = new TGraph(2,Graph9_fx10,Graph9_fy10);
   graph->SetName("Graph9");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#cccccc");
   graph->SetLineColor(ci);
   graph->SetLineStyle(9);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph10 = new TH1F("Graph_Graph10","Graph",100,60.9,62.1);
   Graph_Graph10->SetMinimum(0.0036);
   Graph_Graph10->SetMaximum(0.4498489);
   Graph_Graph10->SetDirectory(0);
   Graph_Graph10->SetStats(0);
   Graph_Graph10->SetLineStyle(0);
   Graph_Graph10->SetLineWidth(2);
   Graph_Graph10->SetMarkerStyle(20);
   Graph_Graph10->SetMarkerSize(1.3);
   Graph_Graph10->GetXaxis()->SetLabelFont(42);
   Graph_Graph10->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph10->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph10->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph10->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph10->GetXaxis()->SetTitleFont(42);
   Graph_Graph10->GetYaxis()->SetLabelFont(42);
   Graph_Graph10->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph10->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph10->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph10->GetYaxis()->SetTitleOffset(1.05);
   Graph_Graph10->GetYaxis()->SetTitleFont(42);
   Graph_Graph10->GetZaxis()->SetLabelFont(42);
   Graph_Graph10->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph10->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph10->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph10->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph10);
   
   graph->Draw("l ");
   
   Double_t Graph10_fx11[2] = {
   70,
   70};
   Double_t Graph10_fy11[2] = {
   0.004,
   0.4093172};
   graph = new TGraph(2,Graph10_fx11,Graph10_fy11);
   graph->SetName("Graph10");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#cccccc");
   graph->SetLineColor(ci);
   graph->SetLineStyle(9);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph11 = new TH1F("Graph_Graph11","Graph",100,69.9,71.1);
   Graph_Graph11->SetMinimum(0.0036);
   Graph_Graph11->SetMaximum(0.4498489);
   Graph_Graph11->SetDirectory(0);
   Graph_Graph11->SetStats(0);
   Graph_Graph11->SetLineStyle(0);
   Graph_Graph11->SetLineWidth(2);
   Graph_Graph11->SetMarkerStyle(20);
   Graph_Graph11->SetMarkerSize(1.3);
   Graph_Graph11->GetXaxis()->SetLabelFont(42);
   Graph_Graph11->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph11->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph11->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph11->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph11->GetXaxis()->SetTitleFont(42);
   Graph_Graph11->GetYaxis()->SetLabelFont(42);
   Graph_Graph11->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph11->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph11->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph11->GetYaxis()->SetTitleOffset(1.05);
   Graph_Graph11->GetYaxis()->SetTitleFont(42);
   Graph_Graph11->GetZaxis()->SetLabelFont(42);
   Graph_Graph11->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph11->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph11->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph11->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph11);
   
   graph->Draw("l ");
   
   Double_t Graph11_fx12[2] = {
   79,
   79};
   Double_t Graph11_fy12[2] = {
   0.004,
   0.4093172};
   graph = new TGraph(2,Graph11_fx12,Graph11_fy12);
   graph->SetName("Graph11");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#cccccc");
   graph->SetLineColor(ci);
   graph->SetLineStyle(9);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph12 = new TH1F("Graph_Graph12","Graph",100,78.9,80.1);
   Graph_Graph12->SetMinimum(0.0036);
   Graph_Graph12->SetMaximum(0.4498489);
   Graph_Graph12->SetDirectory(0);
   Graph_Graph12->SetStats(0);
   Graph_Graph12->SetLineStyle(0);
   Graph_Graph12->SetLineWidth(2);
   Graph_Graph12->SetMarkerStyle(20);
   Graph_Graph12->SetMarkerSize(1.3);
   Graph_Graph12->GetXaxis()->SetLabelFont(42);
   Graph_Graph12->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph12->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph12->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph12->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph12->GetXaxis()->SetTitleFont(42);
   Graph_Graph12->GetYaxis()->SetLabelFont(42);
   Graph_Graph12->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph12->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph12->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph12->GetYaxis()->SetTitleOffset(1.05);
   Graph_Graph12->GetYaxis()->SetTitleFont(42);
   Graph_Graph12->GetZaxis()->SetLabelFont(42);
   Graph_Graph12->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph12->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph12->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph12->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph12);
   
   graph->Draw("l ");
   
   Double_t Graph12_fx13[2] = {
   87,
   87};
   Double_t Graph12_fy13[2] = {
   0.004,
   0.4093172};
   graph = new TGraph(2,Graph12_fx13,Graph12_fy13);
   graph->SetName("Graph12");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#cccccc");
   graph->SetLineColor(ci);
   graph->SetLineStyle(9);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph13 = new TH1F("Graph_Graph13","Graph",100,86.9,88.1);
   Graph_Graph13->SetMinimum(0.0036);
   Graph_Graph13->SetMaximum(0.4498489);
   Graph_Graph13->SetDirectory(0);
   Graph_Graph13->SetStats(0);
   Graph_Graph13->SetLineStyle(0);
   Graph_Graph13->SetLineWidth(2);
   Graph_Graph13->SetMarkerStyle(20);
   Graph_Graph13->SetMarkerSize(1.3);
   Graph_Graph13->GetXaxis()->SetLabelFont(42);
   Graph_Graph13->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph13->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph13->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph13->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph13->GetXaxis()->SetTitleFont(42);
   Graph_Graph13->GetYaxis()->SetLabelFont(42);
   Graph_Graph13->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph13->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph13->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph13->GetYaxis()->SetTitleOffset(1.05);
   Graph_Graph13->GetYaxis()->SetTitleFont(42);
   Graph_Graph13->GetZaxis()->SetLabelFont(42);
   Graph_Graph13->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph13->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph13->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph13->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph13);
   
   graph->Draw("l ");
   
   Double_t Graph13_fx14[2] = {
   97,
   97};
   Double_t Graph13_fy14[2] = {
   0.004,
   0.4093172};
   graph = new TGraph(2,Graph13_fx14,Graph13_fy14);
   graph->SetName("Graph13");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#cccccc");
   graph->SetLineColor(ci);
   graph->SetLineStyle(9);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph14 = new TH1F("Graph_Graph14","Graph",100,96.9,98.1);
   Graph_Graph14->SetMinimum(0.0036);
   Graph_Graph14->SetMaximum(0.4498489);
   Graph_Graph14->SetDirectory(0);
   Graph_Graph14->SetStats(0);
   Graph_Graph14->SetLineStyle(0);
   Graph_Graph14->SetLineWidth(2);
   Graph_Graph14->SetMarkerStyle(20);
   Graph_Graph14->SetMarkerSize(1.3);
   Graph_Graph14->GetXaxis()->SetLabelFont(42);
   Graph_Graph14->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph14->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph14->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph14->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph14->GetXaxis()->SetTitleFont(42);
   Graph_Graph14->GetYaxis()->SetLabelFont(42);
   Graph_Graph14->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph14->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph14->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph14->GetYaxis()->SetTitleOffset(1.05);
   Graph_Graph14->GetYaxis()->SetTitleFont(42);
   Graph_Graph14->GetZaxis()->SetLabelFont(42);
   Graph_Graph14->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph14->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph14->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph14->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph14);
   
   graph->Draw("l ");
   
   Double_t Graph14_fx15[2] = {
   107,
   107};
   Double_t Graph14_fy15[2] = {
   0.004,
   0.4093172};
   graph = new TGraph(2,Graph14_fx15,Graph14_fy15);
   graph->SetName("Graph14");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#cccccc");
   graph->SetLineColor(ci);
   graph->SetLineStyle(9);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph15 = new TH1F("Graph_Graph15","Graph",100,106.9,108.1);
   Graph_Graph15->SetMinimum(0.0036);
   Graph_Graph15->SetMaximum(0.4498489);
   Graph_Graph15->SetDirectory(0);
   Graph_Graph15->SetStats(0);
   Graph_Graph15->SetLineStyle(0);
   Graph_Graph15->SetLineWidth(2);
   Graph_Graph15->SetMarkerStyle(20);
   Graph_Graph15->SetMarkerSize(1.3);
   Graph_Graph15->GetXaxis()->SetLabelFont(42);
   Graph_Graph15->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph15->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph15->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph15->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph15->GetXaxis()->SetTitleFont(42);
   Graph_Graph15->GetYaxis()->SetLabelFont(42);
   Graph_Graph15->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph15->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph15->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph15->GetYaxis()->SetTitleOffset(1.05);
   Graph_Graph15->GetYaxis()->SetTitleFont(42);
   Graph_Graph15->GetZaxis()->SetLabelFont(42);
   Graph_Graph15->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph15->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph15->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph15->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph15);
   
   graph->Draw("l ");
   TLatex *   tex = new TLatex(17,0.45,"#color[800]{BPX}");
   tex->SetTextSize(0.03);
   tex->SetTextAngle(90);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(37,0.45,"#color[392]{TIB}");
   tex->SetTextAlign(21);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(84,0.45,"#color[920]{TOB}");
   tex->SetTextAlign(21);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   
   Double_t L2ptres_fx1001[8] = {
   8,
   24.75,
   41.5,
   59.75,
   88.5,
   153.5,
   250,
   350};
   Double_t L2ptres_fy1001[8] = {
   0.229139,
   0.227072,
   0.2222885,
   0.224304,
   0.2258941,
   0.2277288,
   0.229895,
   0.2372051};
   Double_t L2ptres_fex1001[8] = {
   8,
   8.75,
   8,
   10.25,
   18.5,
   46.5,
   50,
   50};
   Double_t L2ptres_fey1001[8] = {
   0.002277244,
   0.001771023,
   0.001670954,
   0.001420688,
   0.001162122,
   0.001067819,
   0.001625893,
   0.002887636};
   TGraphErrors *gre = new TGraphErrors(8,L2ptres_fx1001,L2ptres_fy1001,L2ptres_fex1001,L2ptres_fey1001);
   gre->SetName("L2ptres");
   gre->SetTitle("Graph");

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);
   gre->SetLineStyle(0);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_L2ptres1001 = new TH1F("Graph_L2ptres1001","Graph",100,0,440);
   Graph_L2ptres1001->SetMinimum(0.2186701);
   Graph_L2ptres1001->SetMaximum(0.2420402);
   Graph_L2ptres1001->SetDirectory(0);
   Graph_L2ptres1001->SetStats(0);
   Graph_L2ptres1001->SetLineStyle(0);
   Graph_L2ptres1001->SetLineWidth(2);
   Graph_L2ptres1001->SetMarkerStyle(20);
   Graph_L2ptres1001->SetMarkerSize(1.3);
   Graph_L2ptres1001->GetXaxis()->SetLabelFont(42);
   Graph_L2ptres1001->GetXaxis()->SetLabelOffset(0.007);
   Graph_L2ptres1001->GetXaxis()->SetLabelSize(0.05);
   Graph_L2ptres1001->GetXaxis()->SetTitleSize(0.06);
   Graph_L2ptres1001->GetXaxis()->SetTitleOffset(0.9);
   Graph_L2ptres1001->GetXaxis()->SetTitleFont(42);
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
   
   gre->Draw("pe ");
   
   Double_t L3ptres_fx1002[8] = {
   8,
   24.75,
   41.5,
   59.75,
   88.5,
   153.5,
   250,
   350};
   Double_t L3ptres_fy1002[8] = {
   0.0154512,
   0.02565575,
   0.04133024,
   0.05640495,
   0,
   0,
   0,
   0};
   Double_t L3ptres_fex1002[8] = {
   8,
   8.75,
   8,
   10.25,
   18.5,
   46.5,
   50,
   50};
   Double_t L3ptres_fey1002[8] = {
   8.842986e-06,
   9.285831e-05,
   0.0003443114,
   0.001388045,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(8,L3ptres_fx1002,L3ptres_fy1002,L3ptres_fex1002,L3ptres_fey1002);
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
   
   TH1F *Graph_L3ptres1002 = new TH1F("Graph_L3ptres1002","Graph",100,0,440);
   Graph_L3ptres1002->SetMinimum(6.357229e-05);
   Graph_L3ptres1002->SetMaximum(0.06357229);
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
      tex = new TLatex(0.175,0.85,"#color[1]{CMS}");
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
   
   TH1F *Graph_copy = new TH1F("Graph_copy","Graph",100,0,440);
   Graph_copy->SetMinimum(0.004);
   Graph_copy->SetMaximum(4);
   Graph_copy->SetDirectory(0);
   Graph_copy->SetStats(0);
   Graph_copy->SetLineStyle(0);
   Graph_copy->SetLineWidth(2);
   Graph_copy->SetMarkerStyle(20);
   Graph_copy->SetMarkerSize(1.3);
   Graph_copy->GetXaxis()->SetTitle("L_{xy}^{gen} [cm]");
   Graph_copy->GetXaxis()->SetRange(1,91);
   Graph_copy->GetXaxis()->SetLabelFont(42);
   Graph_copy->GetXaxis()->SetLabelOffset(0.007);
   Graph_copy->GetXaxis()->SetLabelSize(0.05);
   Graph_copy->GetXaxis()->SetTitleSize(0.06);
   Graph_copy->GetXaxis()->SetTitleOffset(0.9);
   Graph_copy->GetXaxis()->SetTitleFont(42);
   Graph_copy->GetYaxis()->SetTitle("Fitted #sigma : (1/p_{T}^{HLT} #minus 1/p_{T}^{gen}) / 1/p_{T}^{gen}");
   Graph_copy->GetYaxis()->SetLabelFont(42);
   Graph_copy->GetYaxis()->SetLabelOffset(0.007);
   Graph_copy->GetYaxis()->SetLabelSize(0.05);
   Graph_copy->GetYaxis()->SetTitleSize(0.06);
   Graph_copy->GetYaxis()->SetTitleOffset(1.05);
   Graph_copy->GetYaxis()->SetTitleFont(42);
   Graph_copy->GetZaxis()->SetLabelFont(42);
   Graph_copy->GetZaxis()->SetLabelOffset(0.007);
   Graph_copy->GetZaxis()->SetLabelSize(0.05);
   Graph_copy->GetZaxis()->SetTitleSize(0.06);
   Graph_copy->GetZaxis()->SetTitleFont(42);
   Graph_copy->Draw("sameaxis");
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
