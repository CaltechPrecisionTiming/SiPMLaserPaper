void ShashlikRisetimeVsAmplitude()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Mar 21 17:10:37 2018) by ROOT version6.08/05
   TCanvas *c1 = new TCanvas("c1", "c1",4,77,700,500);
   gStyle->SetOptStat(0);
   c1->Range(-47.05883,-1.5,423.5294,13.5);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetRightMargin(0.05);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1[5] = {
   90.44224,
   152.7351,
   247.1463,
   330.0815,
   386.127};
   Double_t Graph_fy1[5] = {
   5.390289,
   4.352716,
   3.668646,
   3.271307,
   3.034147};
   TGraph *graph = new TGraph(5,Graph_fx1,Graph_fy1);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,60.87376,415.6955);
   Graph_Graph1->SetMinimum(2.798532);
   Graph_Graph1->SetMaximum(5.625903);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx2[5] = {
   11.02832,
   15.9683,
   22.20535,
   30.45302,
   35.12685};
   Double_t Graph_fy2[5] = {
   4.469928,
   2.531439,
   1.976925,
   1.793087,
   1.704055};
   graph = new TGraph(5,Graph_fx2,Graph_fy2);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetMarkerStyle(8);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Graph",100,8.618465,37.5367);
   Graph_Graph2->SetMinimum(1.427468);
   Graph_Graph2->SetMaximum(4.746516);
   Graph_Graph2->SetDirectory(0);
   Graph_Graph2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2->SetLineColor(ci);
   Graph_Graph2->GetXaxis()->SetLabelFont(42);
   Graph_Graph2->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetXaxis()->SetTitleFont(42);
   Graph_Graph2->GetYaxis()->SetLabelFont(42);
   Graph_Graph2->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetYaxis()->SetTitleFont(42);
   Graph_Graph2->GetZaxis()->SetLabelFont(42);
   Graph_Graph2->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx3[5] = {
   17.43668,
   41.56393,
   62.72704,
   75.67995,
   88.96733};
   Double_t Graph_fy3[5] = {
   3.692981,
   2.867792,
   2.47747,
   2.292751,
   2.180103};
   graph = new TGraph(5,Graph_fx3,Graph_fy3);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#009900");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(8);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","Graph",100,10.28361,96.1204);
   Graph_Graph3->SetMinimum(2.028815);
   Graph_Graph3->SetMaximum(3.844269);
   Graph_Graph3->SetDirectory(0);
   Graph_Graph3->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3->SetLineColor(ci);
   Graph_Graph3->GetXaxis()->SetLabelFont(42);
   Graph_Graph3->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetXaxis()->SetTitleFont(42);
   Graph_Graph3->GetYaxis()->SetLabelFont(42);
   Graph_Graph3->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetYaxis()->SetTitleFont(42);
   Graph_Graph3->GetZaxis()->SetLabelFont(42);
   Graph_Graph3->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph3);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx4[5] = {
   55.68883,
   103.1429,
   169.3717,
   226.8866,
   261.8027};
   Double_t Graph_fy4[5] = {
   2.513894,
   2.101685,
   1.870116,
   1.761492,
   1.697313};
   graph = new TGraph(5,Graph_fx4,Graph_fy4);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(8);
   
   TH1F *Graph_Graph4 = new TH1F("Graph_Graph4","Graph",100,35.07745,282.4141);
   Graph_Graph4->SetMinimum(1.615654);
   Graph_Graph4->SetMaximum(2.595552);
   Graph_Graph4->SetDirectory(0);
   Graph_Graph4->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph4->SetLineColor(ci);
   Graph_Graph4->GetXaxis()->SetLabelFont(42);
   Graph_Graph4->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph4->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph4->GetXaxis()->SetTitleFont(42);
   Graph_Graph4->GetYaxis()->SetLabelFont(42);
   Graph_Graph4->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph4->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph4->GetYaxis()->SetTitleFont(42);
   Graph_Graph4->GetZaxis()->SetLabelFont(42);
   Graph_Graph4->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph4->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph4->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph4);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx5[5] = {
   7.591516,
   12.86665,
   18.05159,
   22.26703,
   23.95225};
   Double_t Graph_fy5[5] = {
   6.392888,
   5.214025,
   2.729537,
   2.70476,
   2.157021};
   graph = new TGraph(5,Graph_fx5,Graph_fy5);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetMarkerStyle(34);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph5 = new TH1F("Graph_Graph5","Graph",100,5.955443,25.58832);
   Graph_Graph5->SetMinimum(1.733435);
   Graph_Graph5->SetMaximum(6.816475);
   Graph_Graph5->SetDirectory(0);
   Graph_Graph5->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph5->SetLineColor(ci);
   Graph_Graph5->GetXaxis()->SetLabelFont(42);
   Graph_Graph5->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph5->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph5->GetXaxis()->SetTitleFont(42);
   Graph_Graph5->GetYaxis()->SetLabelFont(42);
   Graph_Graph5->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph5->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph5->GetYaxis()->SetTitleFont(42);
   Graph_Graph5->GetZaxis()->SetLabelFont(42);
   Graph_Graph5->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph5->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph5->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph5);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx6[5] = {
   21.7414,
   50.97084,
   80.54996,
   122.0514,
   139.8799};
   Double_t Graph_fy6[5] = {
   7.710097,
   6.499035,
   5.836679,
   5.214005,
   4.992131};
   graph = new TGraph(5,Graph_fx6,Graph_fy6);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(34);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph6 = new TH1F("Graph_Graph6","Graph",100,9.927555,151.6937);
   Graph_Graph6->SetMinimum(4.720335);
   Graph_Graph6->SetMaximum(7.981894);
   Graph_Graph6->SetDirectory(0);
   Graph_Graph6->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph6->SetLineColor(ci);
   Graph_Graph6->GetXaxis()->SetLabelFont(42);
   Graph_Graph6->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph6->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph6->GetXaxis()->SetTitleFont(42);
   Graph_Graph6->GetYaxis()->SetLabelFont(42);
   Graph_Graph6->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph6->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph6->GetYaxis()->SetTitleFont(42);
   Graph_Graph6->GetZaxis()->SetLabelFont(42);
   Graph_Graph6->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph6->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph6->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph6);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx7[5] = {
   6.750097,
   13.61094,
   21.47561,
   31.56975,
   31.21043};
   Double_t Graph_fy7[5] = {
   3.842098,
   4.322503,
   3.919666,
   3.341736,
   3.155716};
   graph = new TGraph(5,Graph_fx7,Graph_fy7);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#00ff00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(34);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph7 = new TH1F("Graph_Graph7","Graph",100,4.268131,34.05172);
   Graph_Graph7->SetMinimum(3.039038);
   Graph_Graph7->SetMaximum(4.439181);
   Graph_Graph7->SetDirectory(0);
   Graph_Graph7->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph7->SetLineColor(ci);
   Graph_Graph7->GetXaxis()->SetLabelFont(42);
   Graph_Graph7->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph7->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph7->GetXaxis()->SetTitleFont(42);
   Graph_Graph7->GetYaxis()->SetLabelFont(42);
   Graph_Graph7->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph7->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph7->GetYaxis()->SetTitleFont(42);
   Graph_Graph7->GetZaxis()->SetLabelFont(42);
   Graph_Graph7->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph7->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph7->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph7);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx8[5] = {
   29.40817,
   58.50867,
   77.49403,
   122.028,
   132.0564};
   Double_t Graph_fy8[5] = {
   3.569329,
   2.749218,
   2.673666,
   2.188232,
   2.291208};
   graph = new TGraph(5,Graph_fx8,Graph_fy8);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(34);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph8 = new TH1F("Graph_Graph8","Graph",100,19.14335,142.3212);
   Graph_Graph8->SetMinimum(2.050122);
   Graph_Graph8->SetMaximum(3.707439);
   Graph_Graph8->SetDirectory(0);
   Graph_Graph8->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph8->SetLineColor(ci);
   Graph_Graph8->GetXaxis()->SetLabelFont(42);
   Graph_Graph8->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph8->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph8->GetXaxis()->SetTitleFont(42);
   Graph_Graph8->GetYaxis()->SetLabelFont(42);
   Graph_Graph8->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph8->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph8->GetYaxis()->SetTitleFont(42);
   Graph_Graph8->GetZaxis()->SetLabelFont(42);
   Graph_Graph8->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph8->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph8->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph8);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ap");
   multigraph->GetXaxis()->SetTitle("Amplitude [mV]");
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetTitleSize(0.05);
   multigraph->GetXaxis()->SetTitleOffset(0.9);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("Rise Time [ns]");
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetTitleSize(0.05);
   multigraph->GetYaxis()->SetTitleOffset(0.85);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   TLegend *leg = new TLegend(0.35,0.5,0.88,0.88,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph","SiPM 3x3 mm^{2}, 15 #mu m pitch, DSB fiber","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","SiPM 3x3 mm^{2}, 25 #mu m pitch, DSB fiber","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","SiPM 1x1 mm^{2}, 10 #mu m pitch, DSB fiber","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#009900");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","SiPM 1x1 mm^{2}  15 #mu m pitch, DSB fiber","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","SiPM 3x3 mm^{2}, 15 #mu m pitch, Quartz Capillary","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(34);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","SiPM 3x3 mm^{2}, 25 #mu m pitch, Quartz Capillary","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(34);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","SiPM 1x1 mm^{2}, 10 #mu m pitch, Quartz Capillary","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ff00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(34);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","SiPM 1x1 mm^{2}  15 #mu m pitch, Quartz Capillary","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(34);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   leg->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
