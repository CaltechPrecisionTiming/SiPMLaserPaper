void ShashlikTimeResolutionVsRiseTime()
{
//=========Macro generated from canvas: c1/c1
//=========  (Sat Aug 12 01:24:15 2017) by ROOT version6.08/05
   TCanvas *c1 = new TCanvas("c1", "c1",4,77,800,600);
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
   
   Double_t Graph_fx9[5] = {
   4.312231,
   3.482173,
   2.934917,
   2.617046,
   2.427317};
   Double_t Graph_fy9[5] = {
   146.7129,
   95.33232,
   80.40045,
   65.3443,
   61.70853};
   TGraph *graph = new TGraph(5,Graph_fx9,Graph_fy9);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(8);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph19 = new TH1F("Graph_Graph_Graph19","Graph",100,2.238826,4.500722);
   Graph_Graph_Graph19->SetMinimum(53.20809);
   Graph_Graph_Graph19->SetMaximum(155.2134);
   Graph_Graph_Graph19->SetDirectory(0);
   Graph_Graph_Graph19->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph19->SetLineColor(ci);
   Graph_Graph_Graph19->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph19->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph19->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph19->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph19->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph19->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph19->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph19->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph19->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph19->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph19->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph19->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph19);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx10[5] = {
   3.575943,
   2.025151,
   1.58154,
   1.43447,
   1.363244};
   Double_t Graph_fy10[5] = {
   249.4981,
   136.2525,
   94.58239,
   72.81868,
   62.93952};
   graph = new TGraph(5,Graph_fx10,Graph_fy10);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetMarkerStyle(8);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph210 = new TH1F("Graph_Graph_Graph210","Graph",100,1.141974,3.797212);
   Graph_Graph_Graph210->SetMinimum(44.28366);
   Graph_Graph_Graph210->SetMaximum(268.1539);
   Graph_Graph_Graph210->SetDirectory(0);
   Graph_Graph_Graph210->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph210->SetLineColor(ci);
   Graph_Graph_Graph210->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph210->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph210->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph210->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph210->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph210->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph210->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph210->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph210->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph210->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph210->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph210->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph210);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx11[5] = {
   2.954385,
   2.294234,
   1.981976,
   1.834201,
   1.744082};
   Double_t Graph_fy11[5] = {
   223.313,
   121.1411,
   92.54782,
   79.38335,
   76.43974};
   graph = new TGraph(5,Graph_fx11,Graph_fy11);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#009900");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(8);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph311 = new TH1F("Graph_Graph_Graph311","Graph",100,1.623052,3.075415);
   Graph_Graph_Graph311->SetMinimum(61.75242);
   Graph_Graph_Graph311->SetMaximum(238.0003);
   Graph_Graph_Graph311->SetDirectory(0);
   Graph_Graph_Graph311->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph311->SetLineColor(ci);
   Graph_Graph_Graph311->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph311->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph311->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph311->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph311->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph311->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph311->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph311->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph311->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph311->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph311->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph311->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph311);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx12[5] = {
   2.011115,
   1.681348,
   1.496093,
   1.409194,
   1.35785};
   Double_t Graph_fy12[5] = {
   135.1501,
   92.25575,
   73.02962,
   62.29272,
   62.67965};
   graph = new TGraph(5,Graph_fx12,Graph_fy12);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(8);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph412 = new TH1F("Graph_Graph_Graph412","Graph",100,1.292524,2.076442);
   Graph_Graph_Graph412->SetMinimum(55.00698);
   Graph_Graph_Graph412->SetMaximum(142.4359);
   Graph_Graph_Graph412->SetDirectory(0);
   Graph_Graph_Graph412->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph412->SetLineColor(ci);
   Graph_Graph_Graph412->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph412->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph412->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph412->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph412->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph412->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph412->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph412->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph412->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph412->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph412->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph412->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph412);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx13[5] = {
   5.11431,
   4.17122,
   2.183629,
   2.163808,
   1.725617};
   Double_t Graph_fy13[5] = {
   1438.88,
   248.8028,
   125.4157,
   108.1745,
   93.00245};
   graph = new TGraph(5,Graph_fx13,Graph_fy13);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph_Graph513 = new TH1F("Graph_Graph_Graph513","Graph",100,1.386748,5.45318);
   Graph_Graph_Graph513->SetMinimum(0);
   Graph_Graph_Graph513->SetMaximum(1573.468);
   Graph_Graph_Graph513->SetDirectory(0);
   Graph_Graph_Graph513->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph513->SetLineColor(ci);
   Graph_Graph_Graph513->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph513->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph513->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph513->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph513->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph513->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph513->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph513->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph513->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph513->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph513->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph513->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph513);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx14[5] = {
   6.168078,
   5.199228,
   4.669343,
   4.171204,
   3.993705};
   Double_t Graph_fy14[5] = {
   372.4462,
   215.9165,
   155.5174,
   141.9081,
   124.3282};
   graph = new TGraph(5,Graph_fx14,Graph_fy14);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph_Graph614 = new TH1F("Graph_Graph_Graph614","Graph",100,3.776268,6.385515);
   Graph_Graph_Graph614->SetMinimum(99.51642);
   Graph_Graph_Graph614->SetMaximum(397.258);
   Graph_Graph_Graph614->SetDirectory(0);
   Graph_Graph_Graph614->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph614->SetLineColor(ci);
   Graph_Graph_Graph614->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph614->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph614->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph614->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph614->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph614->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph614->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph614->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph614->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph614->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph614->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph614->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph614);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx15[5] = {
   3.073679,
   3.458002,
   3.135732,
   2.673389,
   2.524573};
   Double_t Graph_fy15[5] = {
   740.7095,
   296.8146,
   207.1573,
   155.3983,
   136.7898};
   graph = new TGraph(5,Graph_fx15,Graph_fy15);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#009900");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph_Graph715 = new TH1F("Graph_Graph_Graph715","Graph",100,2.43123,3.551345);
   Graph_Graph_Graph715->SetMinimum(76.39781);
   Graph_Graph_Graph715->SetMaximum(801.1015);
   Graph_Graph_Graph715->SetDirectory(0);
   Graph_Graph_Graph715->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph715->SetLineColor(ci);
   Graph_Graph_Graph715->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph715->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph715->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph715->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph715->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph715->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph715->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph715->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph715->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph715->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph715->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph715->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph715);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx16[5] = {
   2.855463,
   2.199375,
   2.138933,
   1.750585,
   1.832966};
   Double_t Graph_fy16[5] = {
   229.3731,
   133.8951,
   113.6417,
   80.12779,
   96.45752};
   graph = new TGraph(5,Graph_fx16,Graph_fy16);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph_Graph816 = new TH1F("Graph_Graph_Graph816","Graph",100,1.640098,2.965951);
   Graph_Graph_Graph816->SetMinimum(65.20326);
   Graph_Graph_Graph816->SetMaximum(244.2976);
   Graph_Graph_Graph816->SetDirectory(0);
   Graph_Graph_Graph816->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph816->SetLineColor(ci);
   Graph_Graph_Graph816->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph816->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph816->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph816->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph816->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph816->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph816->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph816->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph816->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph816->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph816->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph816->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph816);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx17[5] = {
   4.312231,
   3.482173,
   2.934917,
   2.617046,
   2.427317};
   Double_t Graph_fy17[5] = {
   146.7129,
   95.33232,
   80.40045,
   65.3443,
   61.70853};
   graph = new TGraph(5,Graph_fx17,Graph_fy17);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(8);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph1917 = new TH1F("Graph_Graph_Graph_Graph1917","Graph",100,2.238826,4.500722);
   Graph_Graph_Graph_Graph1917->SetMinimum(53.20809);
   Graph_Graph_Graph_Graph1917->SetMaximum(155.2134);
   Graph_Graph_Graph_Graph1917->SetDirectory(0);
   Graph_Graph_Graph_Graph1917->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph1917->SetLineColor(ci);
   Graph_Graph_Graph_Graph1917->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph1917->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph1917->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph1917->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph1917->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph1917->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph1917->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph1917->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph1917->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph1917->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph1917->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph1917->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph_Graph1917);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx18[5] = {
   3.575943,
   2.025151,
   1.58154,
   1.43447,
   1.363244};
   Double_t Graph_fy18[5] = {
   249.4981,
   136.2525,
   94.58239,
   72.81868,
   62.93952};
   graph = new TGraph(5,Graph_fx18,Graph_fy18);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetMarkerStyle(8);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph21018 = new TH1F("Graph_Graph_Graph_Graph21018","Graph",100,1.141974,3.797212);
   Graph_Graph_Graph_Graph21018->SetMinimum(44.28366);
   Graph_Graph_Graph_Graph21018->SetMaximum(268.1539);
   Graph_Graph_Graph_Graph21018->SetDirectory(0);
   Graph_Graph_Graph_Graph21018->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph21018->SetLineColor(ci);
   Graph_Graph_Graph_Graph21018->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph21018->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph21018->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph21018->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph21018->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph21018->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph21018->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph21018->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph21018->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph21018->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph21018->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph21018->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph_Graph21018);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx19[5] = {
   2.954385,
   2.294234,
   1.981976,
   1.834201,
   1.744082};
   Double_t Graph_fy19[5] = {
   223.313,
   121.1411,
   92.54782,
   79.38335,
   76.43974};
   graph = new TGraph(5,Graph_fx19,Graph_fy19);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#009900");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(8);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph31119 = new TH1F("Graph_Graph_Graph_Graph31119","Graph",100,1.623052,3.075415);
   Graph_Graph_Graph_Graph31119->SetMinimum(61.75242);
   Graph_Graph_Graph_Graph31119->SetMaximum(238.0003);
   Graph_Graph_Graph_Graph31119->SetDirectory(0);
   Graph_Graph_Graph_Graph31119->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph31119->SetLineColor(ci);
   Graph_Graph_Graph_Graph31119->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph31119->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph31119->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph31119->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph31119->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph31119->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph31119->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph31119->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph31119->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph31119->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph31119->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph31119->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph_Graph31119);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx20[5] = {
   2.011115,
   1.681348,
   1.496093,
   1.409194,
   1.35785};
   Double_t Graph_fy20[5] = {
   135.1501,
   92.25575,
   73.02962,
   62.29272,
   62.67965};
   graph = new TGraph(5,Graph_fx20,Graph_fy20);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(8);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph_Graph41220 = new TH1F("Graph_Graph_Graph_Graph41220","Graph",100,1.292524,2.076442);
   Graph_Graph_Graph_Graph41220->SetMinimum(55.00698);
   Graph_Graph_Graph_Graph41220->SetMaximum(142.4359);
   Graph_Graph_Graph_Graph41220->SetDirectory(0);
   Graph_Graph_Graph_Graph41220->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph41220->SetLineColor(ci);
   Graph_Graph_Graph_Graph41220->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph41220->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph41220->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph41220->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph41220->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph41220->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph41220->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph41220->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph41220->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph41220->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph41220->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph41220->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph_Graph41220);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx21[5] = {
   5.11431,
   4.17122,
   2.183629,
   2.163808,
   1.725617};
   Double_t Graph_fy21[5] = {
   1438.88,
   248.8028,
   125.4157,
   108.1745,
   93.00245};
   graph = new TGraph(5,Graph_fx21,Graph_fy21);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph_Graph_Graph51321 = new TH1F("Graph_Graph_Graph_Graph51321","Graph",100,1.386748,5.45318);
   Graph_Graph_Graph_Graph51321->SetMinimum(0);
   Graph_Graph_Graph_Graph51321->SetMaximum(1573.468);
   Graph_Graph_Graph_Graph51321->SetDirectory(0);
   Graph_Graph_Graph_Graph51321->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph51321->SetLineColor(ci);
   Graph_Graph_Graph_Graph51321->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph51321->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph51321->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph51321->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph51321->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph51321->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph51321->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph51321->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph51321->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph51321->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph51321->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph51321->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph_Graph51321);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx22[5] = {
   6.168078,
   5.199228,
   4.669343,
   4.171204,
   3.993705};
   Double_t Graph_fy22[5] = {
   372.4462,
   215.9165,
   155.5174,
   141.9081,
   124.3282};
   graph = new TGraph(5,Graph_fx22,Graph_fy22);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph_Graph_Graph61422 = new TH1F("Graph_Graph_Graph_Graph61422","Graph",100,3.776268,6.385515);
   Graph_Graph_Graph_Graph61422->SetMinimum(99.51642);
   Graph_Graph_Graph_Graph61422->SetMaximum(397.258);
   Graph_Graph_Graph_Graph61422->SetDirectory(0);
   Graph_Graph_Graph_Graph61422->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph61422->SetLineColor(ci);
   Graph_Graph_Graph_Graph61422->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph61422->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph61422->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph61422->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph61422->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph61422->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph61422->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph61422->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph61422->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph61422->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph61422->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph61422->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph_Graph61422);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx23[5] = {
   3.073679,
   3.458002,
   3.135732,
   2.673389,
   2.524573};
   Double_t Graph_fy23[5] = {
   740.7095,
   296.8146,
   207.1573,
   155.3983,
   136.7898};
   graph = new TGraph(5,Graph_fx23,Graph_fy23);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#009900");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph_Graph_Graph71523 = new TH1F("Graph_Graph_Graph_Graph71523","Graph",100,2.43123,3.551345);
   Graph_Graph_Graph_Graph71523->SetMinimum(76.39781);
   Graph_Graph_Graph_Graph71523->SetMaximum(801.1015);
   Graph_Graph_Graph_Graph71523->SetDirectory(0);
   Graph_Graph_Graph_Graph71523->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph71523->SetLineColor(ci);
   Graph_Graph_Graph_Graph71523->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph71523->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph71523->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph71523->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph71523->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph71523->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph71523->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph71523->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph71523->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph71523->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph71523->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph71523->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph_Graph71523);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx24[5] = {
   2.855463,
   2.199375,
   2.138933,
   1.750585,
   1.832966};
   Double_t Graph_fy24[5] = {
   229.3731,
   133.8951,
   113.6417,
   80.12779,
   96.45752};
   graph = new TGraph(5,Graph_fx24,Graph_fy24);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph_Graph_Graph81624 = new TH1F("Graph_Graph_Graph_Graph81624","Graph",100,1.640098,2.965951);
   Graph_Graph_Graph_Graph81624->SetMinimum(65.20326);
   Graph_Graph_Graph_Graph81624->SetMaximum(244.2976);
   Graph_Graph_Graph_Graph81624->SetDirectory(0);
   Graph_Graph_Graph_Graph81624->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph81624->SetLineColor(ci);
   Graph_Graph_Graph_Graph81624->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph81624->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph81624->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph81624->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph81624->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph81624->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph81624->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph81624->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph81624->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph81624->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph81624->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph81624->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph_Graph81624);
   
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
