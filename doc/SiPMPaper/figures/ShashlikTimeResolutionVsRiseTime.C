{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jan 31 16:53:19 2018) by ROOT version5.34/36
   TCanvas *c1 = new TCanvas("c1", "c1",2,51,800,600);
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
   
   TGraph *graph = new TGraph(5);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(8);
   graph->SetMarkerSize(1.2);
   graph->SetPoint(0,4.312231064,146.7129439);
   graph->SetPoint(1,3.482173157,95.3323245);
   graph->SetPoint(2,2.934916878,80.40045202);
   graph->SetPoint(3,2.617045784,65.34430385);
   graph->SetPoint(4,2.427317238,61.70852855);
   
   TH1F *Graph_Graph41 = new TH1F("Graph_Graph41","Graph",100,2.238826,4.500722);
   Graph_Graph41->SetMinimum(53.20809);
   Graph_Graph41->SetMaximum(155.2134);
   Graph_Graph41->SetDirectory(0);
   Graph_Graph41->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph41->SetLineColor(ci);
   Graph_Graph41->GetXaxis()->SetLabelFont(42);
   Graph_Graph41->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph41->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph41->GetXaxis()->SetTitleFont(42);
   Graph_Graph41->GetYaxis()->SetLabelFont(42);
   Graph_Graph41->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph41->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph41->GetYaxis()->SetTitleFont(42);
   Graph_Graph41->GetZaxis()->SetLabelFont(42);
   Graph_Graph41->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph41->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph41->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph41);
   
   multigraph->Add(graph,"");
   
   graph = new TGraph(5);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetMarkerStyle(8);
   graph->SetMarkerSize(1.2);
   graph->SetPoint(0,3.575942612,249.4980842);
   graph->SetPoint(1,2.025150871,136.2524778);
   graph->SetPoint(2,1.581539726,94.58239377);
   graph->SetPoint(3,1.434469986,72.8186816);
   graph->SetPoint(4,1.363244152,62.9395172);
   
   TH1F *Graph_Graph42 = new TH1F("Graph_Graph42","Graph",100,1.141974,3.797212);
   Graph_Graph42->SetMinimum(44.28366);
   Graph_Graph42->SetMaximum(268.1539);
   Graph_Graph42->SetDirectory(0);
   Graph_Graph42->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph42->SetLineColor(ci);
   Graph_Graph42->GetXaxis()->SetLabelFont(42);
   Graph_Graph42->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph42->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph42->GetXaxis()->SetTitleFont(42);
   Graph_Graph42->GetYaxis()->SetLabelFont(42);
   Graph_Graph42->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph42->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph42->GetYaxis()->SetTitleFont(42);
   Graph_Graph42->GetZaxis()->SetLabelFont(42);
   Graph_Graph42->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph42->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph42->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph42);
   
   multigraph->Add(graph,"");
   
   graph = new TGraph(5);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#009900");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(8);
   graph->SetMarkerSize(1.2);
   graph->SetPoint(0,2.954384613,223.3129591);
   graph->SetPoint(1,2.294233704,121.1410537);
   graph->SetPoint(2,1.981976318,92.54781902);
   graph->SetPoint(3,1.83420105,79.38335091);
   graph->SetPoint(4,1.744082069,76.43973827);
   
   TH1F *Graph_Graph43 = new TH1F("Graph_Graph43","Graph",100,1.623052,3.075415);
   Graph_Graph43->SetMinimum(61.75242);
   Graph_Graph43->SetMaximum(238.0003);
   Graph_Graph43->SetDirectory(0);
   Graph_Graph43->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph43->SetLineColor(ci);
   Graph_Graph43->GetXaxis()->SetLabelFont(42);
   Graph_Graph43->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph43->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph43->GetXaxis()->SetTitleFont(42);
   Graph_Graph43->GetYaxis()->SetLabelFont(42);
   Graph_Graph43->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph43->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph43->GetYaxis()->SetTitleFont(42);
   Graph_Graph43->GetZaxis()->SetLabelFont(42);
   Graph_Graph43->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph43->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph43->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph43);
   
   multigraph->Add(graph,"");
   
   graph = new TGraph(5);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(8);
   graph->SetMarkerSize(1.2);
   graph->SetPoint(0,2.011115074,135.1501346);
   graph->SetPoint(1,1.681347847,92.25574881);
   graph->SetPoint(2,1.496092701,73.02962244);
   graph->SetPoint(3,1.409193611,62.29272112);
   graph->SetPoint(4,1.357850075,62.6796484);
   
   TH1F *Graph_Graph44 = new TH1F("Graph_Graph44","Graph",100,1.292524,2.076442);
   Graph_Graph44->SetMinimum(55.00698);
   Graph_Graph44->SetMaximum(142.4359);
   Graph_Graph44->SetDirectory(0);
   Graph_Graph44->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph44->SetLineColor(ci);
   Graph_Graph44->GetXaxis()->SetLabelFont(42);
   Graph_Graph44->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph44->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph44->GetXaxis()->SetTitleFont(42);
   Graph_Graph44->GetYaxis()->SetLabelFont(42);
   Graph_Graph44->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph44->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph44->GetYaxis()->SetTitleFont(42);
   Graph_Graph44->GetZaxis()->SetLabelFont(42);
   Graph_Graph44->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph44->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph44->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph44);
   
   multigraph->Add(graph,"");
   
   graph = new TGraph(5);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetMarkerStyle(34);
   graph->SetMarkerSize(1.2);
   graph->SetPoint(0,5.114310455,1438.879967);
   graph->SetPoint(1,4.171219635,248.8028258);
   graph->SetPoint(2,2.183629417,125.4156977);
   graph->SetPoint(3,2.163807678,108.1744805);
   graph->SetPoint(4,1.725617027,93.00245345);
   
   TH1F *Graph_Graph45 = new TH1F("Graph_Graph45","Graph",100,1.386748,5.45318);
   Graph_Graph45->SetMinimum(0);
   Graph_Graph45->SetMaximum(1573.468);
   Graph_Graph45->SetDirectory(0);
   Graph_Graph45->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph45->SetLineColor(ci);
   Graph_Graph45->GetXaxis()->SetLabelFont(42);
   Graph_Graph45->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph45->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph45->GetXaxis()->SetTitleFont(42);
   Graph_Graph45->GetYaxis()->SetLabelFont(42);
   Graph_Graph45->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph45->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph45->GetYaxis()->SetTitleFont(42);
   Graph_Graph45->GetZaxis()->SetLabelFont(42);
   Graph_Graph45->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph45->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph45->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph45);
   
   multigraph->Add(graph,"");
   
   graph = new TGraph(5);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(34);
   graph->SetMarkerSize(1.2);
   graph->SetPoint(0,6.16807785,372.4462092);
   graph->SetPoint(1,5.199227905,215.9164548);
   graph->SetPoint(2,4.669343185,155.5174142);
   graph->SetPoint(3,4.171203613,141.908139);
   graph->SetPoint(4,3.993704987,124.3282184);
   
   TH1F *Graph_Graph46 = new TH1F("Graph_Graph46","Graph",100,3.776268,6.385515);
   Graph_Graph46->SetMinimum(99.51642);
   Graph_Graph46->SetMaximum(397.258);
   Graph_Graph46->SetDirectory(0);
   Graph_Graph46->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph46->SetLineColor(ci);
   Graph_Graph46->GetXaxis()->SetLabelFont(42);
   Graph_Graph46->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph46->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph46->GetXaxis()->SetTitleFont(42);
   Graph_Graph46->GetYaxis()->SetLabelFont(42);
   Graph_Graph46->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph46->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph46->GetYaxis()->SetTitleFont(42);
   Graph_Graph46->GetZaxis()->SetLabelFont(42);
   Graph_Graph46->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph46->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph46->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph46);
   
   multigraph->Add(graph,"");
   
   graph = new TGraph(5);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#009900");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(34);
   graph->SetMarkerSize(1.2);
   graph->SetPoint(0,3.073678589,740.7095432);
   graph->SetPoint(1,3.45800209,296.8145609);
   graph->SetPoint(2,3.13573246,207.157284);
   graph->SetPoint(3,2.673389053,155.3982794);
   graph->SetPoint(4,2.524572945,136.7897838);
   
   TH1F *Graph_Graph47 = new TH1F("Graph_Graph47","Graph",100,2.43123,3.551345);
   Graph_Graph47->SetMinimum(76.39781);
   Graph_Graph47->SetMaximum(801.1015);
   Graph_Graph47->SetDirectory(0);
   Graph_Graph47->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph47->SetLineColor(ci);
   Graph_Graph47->GetXaxis()->SetLabelFont(42);
   Graph_Graph47->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph47->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph47->GetXaxis()->SetTitleFont(42);
   Graph_Graph47->GetYaxis()->SetLabelFont(42);
   Graph_Graph47->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph47->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph47->GetYaxis()->SetTitleFont(42);
   Graph_Graph47->GetZaxis()->SetLabelFont(42);
   Graph_Graph47->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph47->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph47->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph47);
   
   multigraph->Add(graph,"");
   
   graph = new TGraph(5);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(34);
   graph->SetMarkerSize(1.2);
   graph->SetPoint(0,2.855463219,229.3730527);
   graph->SetPoint(1,2.19937458,133.8950545);
   graph->SetPoint(2,2.138932991,113.6417314);
   graph->SetPoint(3,1.750585365,80.12779057);
   graph->SetPoint(4,1.832966423,96.45751864);
   
   TH1F *Graph_Graph48 = new TH1F("Graph_Graph48","Graph",100,1.640098,2.965951);
   Graph_Graph48->SetMinimum(65.20326);
   Graph_Graph48->SetMaximum(244.2976);
   Graph_Graph48->SetDirectory(0);
   Graph_Graph48->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph48->SetLineColor(ci);
   Graph_Graph48->GetXaxis()->SetLabelFont(42);
   Graph_Graph48->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph48->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph48->GetXaxis()->SetTitleFont(42);
   Graph_Graph48->GetYaxis()->SetLabelFont(42);
   Graph_Graph48->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph48->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph48->GetYaxis()->SetTitleFont(42);
   Graph_Graph48->GetZaxis()->SetLabelFont(42);
   Graph_Graph48->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph48->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph48->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph48);
   
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

   ci = TColor::GetColor("#009900");
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
