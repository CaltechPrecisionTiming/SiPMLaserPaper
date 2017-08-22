{
//=========Macro generated from canvas: c/c
//=========  (Thu Aug  3 03:52:26 2017) by ROOT version5.34/36
   TCanvas *c = new TCanvas("c", "c",2,51,800,700);
   c->SetHighLightColor(2);
   c->Range(1.106789,-22.22222,3.702497,162.963);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetLogx();
   c->SetLeftMargin(0.12);
   c->SetRightMargin(0.08);
   c->SetTopMargin(0.07);
   c->SetBottomMargin(0.12);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("Graph0");
   gre->SetTitle(";Number of Photons;Time Resolution [ps]");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.5);
   gre->SetPoint(0,2842.841,7.11);
   gre->SetPointError(0,0.6484584,0.05);
   gre->SetPoint(1,1778.073,8.15);
   gre->SetPointError(1,0.6484584,0.06);
   gre->SetPoint(2,1172.413,9.41);
   gre->SetPointError(2,0.6484584,0.07);
   gre->SetPoint(3,637.4995,11.81);
   gre->SetPointError(3,0.6484584,0.08);
   gre->SetPoint(4,384.9897,15.87);
   gre->SetPointError(4,0.6484584,0.11);
   gre->SetPoint(5,250.4346,19.49);
   gre->SetPointError(5,0.6484584,0.14);
   gre->SetPoint(6,69.48875,48.18102);
   gre->SetPointError(6,0.6484584,0.37);
   gre->SetPoint(7,40.82894,64.89152);
   gre->SetPointError(7,0.6484584,0.52);
   gre->SetPoint(8,29.75776,85.98);
   gre->SetPointError(8,0.6484584,1.47);
   
   TH1F *Graph_Graph_Graph11 = new TH1F("Graph_Graph_Graph11","",100,26.19837,3124.928);
   Graph_Graph_Graph11->SetMinimum(0);
   Graph_Graph_Graph11->SetMaximum(100);
   Graph_Graph_Graph11->SetDirectory(0);
   Graph_Graph_Graph11->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph11->SetLineColor(ci);
   Graph_Graph_Graph11->GetXaxis()->SetTitle("Number of Photons");
   Graph_Graph_Graph11->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph11->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph11->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph11->GetYaxis()->SetTitle("Time Resolution [ps]");
   Graph_Graph_Graph11->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph11->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph11->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph11->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph11->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph11->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph11->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph11);
   
   
   // TF1 *f1Res = new TF1("f1Res","[0]/x+[1]/sqrt(x)+[2]",26.19837,3124.928);
   // f1Res->SetFillColor(19);
   // f1Res->SetFillStyle(0);
   // f1Res->SetLineColor(kBlack);
   // f1Res->SetLineWidth(2);
   // f1Res->SetChisquare(67.67426);
   // f1Res->SetNDF(6);
   // f1Res->GetXaxis()->SetLabelFont(42);
   // f1Res->GetXaxis()->SetLabelSize(0.035);
   // f1Res->GetXaxis()->SetTitleSize(0.035);
   // f1Res->GetXaxis()->SetTitleFont(42);
   // f1Res->GetYaxis()->SetLabelFont(42);
   // f1Res->GetYaxis()->SetLabelSize(0.035);
   // f1Res->GetYaxis()->SetTitleSize(0.035);
   // f1Res->GetYaxis()->SetTitleFont(42);
   // f1Res->SetParameter(0,1796.349);
   // f1Res->SetParError(0,52.86172);
   // f1Res->SetParLimits(0,0,0);
   // f1Res->SetParameter(1,135.8505);
   // f1Res->SetParError(1,5.504426);
   // f1Res->SetParLimits(1,0,0);
   // f1Res->SetParameter(2,3.90121);
   // f1Res->SetParError(2,0.1156077);
   // f1Res->SetParLimits(2,0,0);
   // gre->GetListOfFunctions()->Add(f1Res);

   gre->SetLineWidth(2);
   gre->Draw("ap");
   
TGraphErrors *gre2 = new TGraphErrors(7);
   gre2->SetName("Graph1");
   gre2->SetTitle("Graph");
   gre2->SetFillColor(1);
   gre2->SetMarkerColor(2);
   gre2->SetMarkerStyle(20);
   gre2->SetMarkerSize(1.5);
   gre2->SetPoint(0,549.4915,11.99);
   gre2->SetPointError(0,0.08474576,0.05);
   gre2->SetPoint(1,309.5763,14.21);
   gre2->SetPointError(1,0.08474576,0.05);
   gre2->SetPoint(2,136.1017,21.17);
   gre2->SetPointError(2,0.08474576,0.09);
   gre2->SetPoint(3,72.37288,29.68);
   gre2->SetPointError(3,0.08474576,0.1);
   gre2->SetPoint(4,34.88671,44.07188);
   gre2->SetPointError(4,0.03389831,0.15);
   gre2->SetPoint(5,16.36441,63.85);
   gre2->SetPointError(5,0.04237288,0.28);
   gre2->SetPoint(6,8.245763,82.15);
   gre2->SetPointError(6,0.03389831,0.62);
   
   TH1F *Graph_Graph_Graph22 = new TH1F("Graph_Graph_Graph22","Graph",100,7.390678,603.7127);
   Graph_Graph_Graph22->SetMinimum(0);
   Graph_Graph_Graph22->SetMaximum(100);
   Graph_Graph_Graph22->SetDirectory(0);
   Graph_Graph_Graph22->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph22->SetLineColor(ci);
   Graph_Graph_Graph22->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph22->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph22->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph22->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph22->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph22->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph22->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph22->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph22->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph22->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph22->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph22->GetZaxis()->SetTitleFont(42);
   gre2->SetHistogram(Graph_Graph_Graph22);
   
   
   // TF1 *f1Res2 = new TF1("f1Res2","[0]/x+[1]/sqrt(x)+[2]",7.390678,603.7127);
   // f1Res2->SetFillColor(19);
   // f1Res2->SetFillStyle(0);
   // f1Res2->SetLineColor(2);
   // f1Res2->SetLineWidth(2);
   // f1Res2->SetChisquare(580.2718);
   // f1Res2->SetNDF(4);
   // f1Res2->GetXaxis()->SetLabelFont(42);
   // f1Res2->GetXaxis()->SetLabelSize(0.035);
   // f1Res2->GetXaxis()->SetTitleSize(0.035);
   // f1Res2->GetXaxis()->SetTitleFont(42);
   // f1Res2->GetYaxis()->SetLabelFont(42);
   // f1Res2->GetYaxis()->SetLabelSize(0.035);
   // f1Res2->GetYaxis()->SetTitleSize(0.035);
   // f1Res2->GetYaxis()->SetTitleFont(42);
   // f1Res2->SetParameter(0,46.25606);
   // f1Res2->SetParError(0,9.569436);
   // f1Res2->SetParLimits(0,0,0);
   // f1Res2->SetParameter(1,236.6133);
   // f1Res2->SetParError(1,2.451995);
   // f1Res2->SetParLimits(1,0,0);
   // f1Res2->SetParameter(2,1.198284);
   // f1Res2->SetParError(2,0.1166295);
   // f1Res2->SetParLimits(2,0,0);
   // gre2->GetListOfFunctions()->Add(f1Res2);

   gre->SetLineWidth(2);
   gre2->Draw("p");


//    TLatex *   tex = new TLatex(0.9,0.85,"3x3mm^{2} SiPM: #sigma_{t} = #frac{1800 #pm 50 [ps]}{N} + #frac{136 #pm 6 [ps]}{#sqrt{N}} + 3.9 #pm 0.1 [ps]");
// tex->SetNDC();
//    tex->SetTextAlign(31);
//    tex->SetTextFont(42);
//    tex->SetTextSize(0.03);
//    tex->SetLineWidth(2);
//    tex->Draw();
//       tex = new TLatex(0.9,0.7,"1x1mm^{2} SiPM: #sigma_{t} = #frac{46 #pm 10 [ps]}{N} + #frac{237 #pm 2 [ps]}{#sqrt{N}} + 1.2 #pm 0.1 [ps]");
// tex->SetNDC();
//    tex->SetTextAlign(31);
//    tex->SetTextColor(2);
//    tex->SetTextFont(42);
//    tex->SetTextSize(0.03);
//    tex->SetLineWidth(2);
//    tex->Draw();

  
   TLegend *leg = new TLegend(0.40,0.65,0.88,0.88);
   leg->SetTextSize(0.035);
   leg->SetLineColor(kBlack);
   leg->AddEntry(gre,"SiPM 3x3 mm^{2}","p");
   leg->AddEntry(gre2,"SiPM 1x1 mm^{2}","p");
   leg->Draw();



  c->Modified();
   c->cd();
   c->SetSelected(c);
   c->SaveAs("TimeResolutionVsNPhotons.pdf");
}
