void ShashlikTimeResolutionVsRiseTime()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Aug  9 18:00:25 2017) by ROOT version6.08/05
   TCanvas *c1 = new TCanvas("c1", "c1",10,155,800,600);
   gStyle->SetOptStat(0);
   c1->Range(-1,-87.50001,9,787.5);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1[5] = {
   5.390289,
   4.352716,
   3.668646,
   3.271307,
   3.034147};
   Double_t Graph_fy1[5] = {
   146.7129,
   95.33232,
   80.40045,
   65.3443,
   61.70853};
   TGraph *graph = new TGraph(5,Graph_fx1,Graph_fy1);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(8);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,2.798532,5.625903);
   Graph_Graph1->SetMinimum(53.20809);
   Graph_Graph1->SetMaximum(155.2134);
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
   4.469928,
   2.531439,
   1.976925,
   1.793087,
   1.704055};
   Double_t Graph_fy2[5] = {
   249.4981,
   136.2525,
   94.58239,
   72.81868,
   62.93952};
   graph = new TGraph(5,Graph_fx2,Graph_fy2);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetMarkerStyle(8);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Graph",100,1.427468,4.746516);
   Graph_Graph2->SetMinimum(44.28366);
   Graph_Graph2->SetMaximum(268.1539);
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
   3.692981,
   2.867792,
   2.47747,
   2.292751,
   2.180103};
   Double_t Graph_fy3[5] = {
   223.313,
   121.1411,
   92.54782,
   79.38335,
   76.43974};
   graph = new TGraph(5,Graph_fx3,Graph_fy3);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#009900");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(8);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","Graph",100,2.028815,3.844269);
   Graph_Graph3->SetMinimum(61.75242);
   Graph_Graph3->SetMaximum(238.0003);
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
   2.513894,
   2.101685,
   1.870116,
   1.761492,
   1.697313};
   Double_t Graph_fy4[5] = {
   135.1501,
   92.25575,
   73.02962,
   62.29272,
   62.67965};
   graph = new TGraph(5,Graph_fx4,Graph_fy4);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(8);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph4 = new TH1F("Graph_Graph4","Graph",100,1.615654,2.595552);
   Graph_Graph4->SetMinimum(55.00698);
   Graph_Graph4->SetMaximum(142.4359);
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
   6.392888,
   5.214025,
   2.729537,
   2.70476,
   2.157021};
   Double_t Graph_fy5[5] = {
   1438.88,
   248.8028,
   125.4157,
   108.1745,
   93.00245};
   graph = new TGraph(5,Graph_fx5,Graph_fy5);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph5 = new TH1F("Graph_Graph5","Graph",100,1.733435,6.816475);
   Graph_Graph5->SetMinimum(0);
   Graph_Graph5->SetMaximum(1573.468);
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
   7.710097,
   6.499035,
   5.836679,
   5.214005,
   4.992131};
   Double_t Graph_fy6[5] = {
   372.4462,
   215.9165,
   155.5174,
   141.9081,
   124.3282};
   graph = new TGraph(5,Graph_fx6,Graph_fy6);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph6 = new TH1F("Graph_Graph6","Graph",100,4.720335,7.981894);
   Graph_Graph6->SetMinimum(99.51642);
   Graph_Graph6->SetMaximum(397.258);
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
   3.842098,
   4.322503,
   3.919666,
   3.341736,
   3.155716};
   Double_t Graph_fy7[5] = {
   740.7095,
   296.8146,
   207.1573,
   155.3983,
   136.7898};
   graph = new TGraph(5,Graph_fx7,Graph_fy7);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#009900");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph7 = new TH1F("Graph_Graph7","Graph",100,3.039038,4.439181);
   Graph_Graph7->SetMinimum(76.39781);
   Graph_Graph7->SetMaximum(801.1015);
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
   3.569329,
   2.749218,
   2.673666,
   2.188232,
   2.291208};
   Double_t Graph_fy8[5] = {
   229.3731,
   133.8951,
   113.6417,
   80.12779,
   96.45752};
   graph = new TGraph(5,Graph_fx8,Graph_fy8);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph8 = new TH1F("Graph_Graph8","Graph",100,2.050122,3.707439);
   Graph_Graph8->SetMinimum(65.20326);
   Graph_Graph8->SetMaximum(244.2976);
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
   multigraph->GetXaxis()->SetTitle("Rise Time [ns]");
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetTitleSize(0.05);
   multigraph->GetXaxis()->SetTitleOffset(0.9);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("#sigma t [ps]");
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetTitleSize(0.05);
   multigraph->GetYaxis()->SetTitleOffset(0.9);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   TLegend *leg = new TLegend(0.13,0.55,0.4,0.88,NULL,"brNDC");
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
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","SiPM 3x3 mm^{2}, 25 #mu m pitch, DSB fiber","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","SiPM 1x1 mm^{2}, 10 #mu m pitch, DSB fiber","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#009900");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","SiPM 1x1 mm^{2}  15 #mu m pitch, DSB fiber","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","SiPM 3x3 mm^{2}, 15 #mu m pitch, Quartz Capillary","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","SiPM 3x3 mm^{2}, 25 #mu m pitch, Quartz Capillary","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","SiPM 1x1 mm^{2}, 10 #mu m pitch, Quartz Capillary","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#009900");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","SiPM 1x1 mm^{2}  15 #mu m pitch, Quartz Capillary","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
