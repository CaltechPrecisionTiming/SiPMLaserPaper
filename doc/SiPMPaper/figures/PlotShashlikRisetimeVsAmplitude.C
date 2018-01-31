{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jan 31 17:31:03 2018) by ROOT version5.34/36
   TCanvas *c1 = new TCanvas("c1", "c1",48,89,700,500);
   gStyle->SetOptStat(0);
   c1->Range(-50,-1.125,450,10.125);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   TGraph *graph = new TGraph(5);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(8);
   graph->SetPoint(0,90.44223785,4.312231064);
   graph->SetPoint(1,152.7351074,3.482173157);
   graph->SetPoint(2,247.1463165,2.934916878);
   graph->SetPoint(3,330.081543,2.617045784);
   graph->SetPoint(4,386.1269836,2.427317238);
   
   TH1F *Graph_Graph_Graph147155 = new TH1F("Graph_Graph_Graph147155","Graph",100,60.87376,415.6955);
   Graph_Graph_Graph147155->SetMinimum(2.238826);
   Graph_Graph_Graph147155->SetMaximum(4.500722);
   Graph_Graph_Graph147155->SetDirectory(0);
   Graph_Graph_Graph147155->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph147155->SetLineColor(ci);
   Graph_Graph_Graph147155->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph147155->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph147155->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph147155->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph147155->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph147155->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph147155->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph147155->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph147155->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph147155->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph147155->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph147155->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph147155);
   
   multigraph->Add(graph,"");
   
   graph = new TGraph(5);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetMarkerStyle(8);
   graph->SetPoint(0,11.02831745,3.575942612);
   graph->SetPoint(1,15.96829987,2.025150871);
   graph->SetPoint(2,22.20534515,1.581539726);
   graph->SetPoint(3,30.4530201,1.434469986);
   graph->SetPoint(4,35.12684631,1.363244152);
   
   TH1F *Graph_Graph_Graph148156 = new TH1F("Graph_Graph_Graph148156","Graph",100,8.618465,37.5367);
   Graph_Graph_Graph148156->SetMinimum(1.141974);
   Graph_Graph_Graph148156->SetMaximum(3.797212);
   Graph_Graph_Graph148156->SetDirectory(0);
   Graph_Graph_Graph148156->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph148156->SetLineColor(ci);
   Graph_Graph_Graph148156->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph148156->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph148156->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph148156->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph148156->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph148156->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph148156->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph148156->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph148156->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph148156->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph148156->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph148156->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph148156);
   
   multigraph->Add(graph,"");
   
   graph = new TGraph(5);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#00ff00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(8);
   graph->SetPoint(0,17.43667984,2.954384613);
   graph->SetPoint(1,41.5639267,2.294233704);
   graph->SetPoint(2,62.72704315,1.981976318);
   graph->SetPoint(3,75.67995453,1.83420105);
   graph->SetPoint(4,88.96733093,1.744082069);
   
   TH1F *Graph_Graph_Graph149157 = new TH1F("Graph_Graph_Graph149157","Graph",100,10.28361,96.1204);
   Graph_Graph_Graph149157->SetMinimum(1.623052);
   Graph_Graph_Graph149157->SetMaximum(3.075415);
   Graph_Graph_Graph149157->SetDirectory(0);
   Graph_Graph_Graph149157->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph149157->SetLineColor(ci);
   Graph_Graph_Graph149157->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph149157->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph149157->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph149157->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph149157->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph149157->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph149157->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph149157->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph149157->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph149157->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph149157->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph149157->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph149157);
   
   multigraph->Add(graph,"");
   
   graph = new TGraph(5);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(8);
   graph->SetPoint(0,55.68883133,2.011115074);
   graph->SetPoint(1,103.1428528,1.681347847);
   graph->SetPoint(2,169.3717499,1.496092701);
   graph->SetPoint(3,226.8866272,1.409193611);
   graph->SetPoint(4,261.8026733,1.357850075);
   
   TH1F *Graph_Graph_Graph150158 = new TH1F("Graph_Graph_Graph150158","Graph",100,35.07745,282.4141);
   Graph_Graph_Graph150158->SetMinimum(1.292524);
   Graph_Graph_Graph150158->SetMaximum(2.076442);
   Graph_Graph_Graph150158->SetDirectory(0);
   Graph_Graph_Graph150158->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph150158->SetLineColor(ci);
   Graph_Graph_Graph150158->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph150158->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph150158->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph150158->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph150158->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph150158->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph150158->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph150158->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph150158->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph150158->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph150158->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph150158->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph150158);
   
   multigraph->Add(graph,"");
   
   graph = new TGraph(4);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetMarkerStyle(34);
   graph->SetMarkerSize(1.2);
   graph->SetPoint(0,12.86664867,4.171219635);
   graph->SetPoint(1,18.05158997,2.183629417);
   graph->SetPoint(2,22.26703072,2.163807678);
   graph->SetPoint(3,23.95224953,1.725617027);
   
   TH1F *Graph_Graph_Graph151159 = new TH1F("Graph_Graph_Graph151159","Graph",100,5.955443,25.58832);
   Graph_Graph_Graph151159->SetMinimum(1.386748);
   Graph_Graph_Graph151159->SetMaximum(5.45318);
   Graph_Graph_Graph151159->SetDirectory(0);
   Graph_Graph_Graph151159->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph151159->SetLineColor(ci);
   Graph_Graph_Graph151159->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph151159->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph151159->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph151159->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph151159->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph151159->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph151159->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph151159->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph151159->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph151159->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph151159->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph151159->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph151159);
   
   multigraph->Add(graph,"");
   
   graph = new TGraph(5);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(34);
   graph->SetMarkerSize(1.2);
   graph->SetPoint(0,21.74139977,6.16807785);
   graph->SetPoint(1,50.97084045,5.199227905);
   graph->SetPoint(2,80.54995728,4.669343185);
   graph->SetPoint(3,122.0513611,4.171203613);
   graph->SetPoint(4,139.8798523,3.993704987);
   
   TH1F *Graph_Graph_Graph152160 = new TH1F("Graph_Graph_Graph152160","Graph",100,9.927555,151.6937);
   Graph_Graph_Graph152160->SetMinimum(3.776268);
   Graph_Graph_Graph152160->SetMaximum(6.385515);
   Graph_Graph_Graph152160->SetDirectory(0);
   Graph_Graph_Graph152160->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph152160->SetLineColor(ci);
   Graph_Graph_Graph152160->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph152160->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph152160->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph152160->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph152160->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph152160->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph152160->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph152160->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph152160->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph152160->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph152160->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph152160->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph152160);
   
   multigraph->Add(graph,"");
   
   graph = new TGraph(4);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#00ff00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(34);
   graph->SetMarkerSize(1.2);
   graph->SetPoint(0,13.61094379,3.45800209);
   graph->SetPoint(1,21.47560501,3.13573246);
   graph->SetPoint(2,31.56975174,2.673389053);
   graph->SetPoint(3,31.21043205,2.524572945);
   
   TH1F *Graph_Graph_Graph153161 = new TH1F("Graph_Graph_Graph153161","Graph",100,4.268131,34.05172);
   Graph_Graph_Graph153161->SetMinimum(2.43123);
   Graph_Graph_Graph153161->SetMaximum(3.551345);
   Graph_Graph_Graph153161->SetDirectory(0);
   Graph_Graph_Graph153161->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph153161->SetLineColor(ci);
   Graph_Graph_Graph153161->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph153161->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph153161->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph153161->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph153161->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph153161->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph153161->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph153161->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph153161->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph153161->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph153161->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph153161->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph153161);
   
   multigraph->Add(graph,"");
   
   graph = new TGraph(5);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(34);
   graph->SetMarkerSize(1.2);
   graph->SetPoint(0,29.4081707,2.855463219);
   graph->SetPoint(1,58.50867081,2.19937458);
   graph->SetPoint(2,77.49403381,2.138932991);
   graph->SetPoint(3,122.0279922,1.750585365);
   graph->SetPoint(4,132.056366,1.832966423);
   
   TH1F *Graph_Graph_Graph154162 = new TH1F("Graph_Graph_Graph154162","Graph",100,19.14335,142.3212);
   Graph_Graph_Graph154162->SetMinimum(1.640098);
   Graph_Graph_Graph154162->SetMaximum(2.965951);
   Graph_Graph_Graph154162->SetDirectory(0);
   Graph_Graph_Graph154162->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph154162->SetLineColor(ci);
   Graph_Graph_Graph154162->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph154162->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph154162->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph154162->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph154162->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph154162->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph154162->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph154162->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph154162->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph154162->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph154162->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph154162->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph154162);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ap");
   multigraph->GetXaxis()->SetTitle("Amplitude [mV]");
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelSize(0.035);
   multigraph->GetXaxis()->SetTitleSize(0.035);
   multigraph->GetXaxis()->SetTitleOffset(1.1);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("Rise Time [ns]");
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetLabelSize(0.035);
   multigraph->GetYaxis()->SetTitleSize(0.035);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   TLegend *leg = new TLegend(0.45,0.5,0.88,0.88,NULL,"brNDC");
   leg->SetBorderSize(1);
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

   ci = TColor::GetColor("#00ff00");
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