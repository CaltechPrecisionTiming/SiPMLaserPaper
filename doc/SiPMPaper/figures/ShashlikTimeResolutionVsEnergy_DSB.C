{
//=========Macro generated from canvas: c1/c1
//=========  (Fri Jan 26 22:23:10 2018) by ROOT version5.34/36
   TCanvas *c1 = new TCanvas("c1", "c1",6,103,800,600);
   gStyle->SetOptStat(0);
   c1->Range(-38.46154,-30.76923,282.0513,225.641);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetLeftMargin(0.12);
   c1->SetBottomMargin(0.12);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH2F *DSB1ch1 = new TH2F("DSB1ch1","",250,0,250,600,0,400);
   DSB1ch1->SetBinContent(24141,1);
   DSB1ch1->SetBinContent(27871,1);
   DSB1ch1->SetBinContent(35885,1);
   DSB1ch1->SetBinContent(51711,1);
   DSB1ch1->SetEntries(4);
   DSB1ch1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   DSB1ch1->SetLineColor(ci);
   DSB1ch1->SetMarkerStyle(20);
   DSB1ch1->SetMarkerSize(1.4);
   DSB1ch1->GetXaxis()->SetTitle("Energy [GeV]");
   DSB1ch1->GetXaxis()->SetLabelFont(42);
   DSB1ch1->GetXaxis()->SetLabelSize(0.05);
   DSB1ch1->GetXaxis()->SetTitleSize(0.05);
   DSB1ch1->GetXaxis()->SetTitleOffset(1.1);
   DSB1ch1->GetXaxis()->SetTitleFont(42);
   DSB1ch1->GetYaxis()->SetTitle("#sigma t [ps]");
   DSB1ch1->GetYaxis()->SetRange(1,300);
   DSB1ch1->GetYaxis()->SetLabelFont(42);
   DSB1ch1->GetYaxis()->SetLabelOffset(0.01);
   DSB1ch1->GetYaxis()->SetLabelSize(0.05);
   DSB1ch1->GetYaxis()->SetTitleSize(0.05);
   DSB1ch1->GetYaxis()->SetTitleOffset(1.2);
   DSB1ch1->GetYaxis()->SetTitleFont(42);
   DSB1ch1->GetZaxis()->SetLabelFont(42);
   DSB1ch1->GetZaxis()->SetLabelSize(0.035);
   DSB1ch1->GetZaxis()->SetTitleSize(0.035);
   DSB1ch1->GetZaxis()->SetTitleFont(42);
   DSB1ch1->Draw("");
   
   TH2F *DSB1ch2 = new TH2F("DSB1ch2","1000*tree_DSB1_time_2:tree_Energy {tree_Energy>40}",250,0,250,600,0,400);
   DSB1ch2->SetBinContent(23637,1);
   DSB1ch2->SetBinContent(25099,1);
   DSB1ch2->SetBinContent(30593,1);
   DSB1ch2->SetBinContent(36087,1);
   DSB1ch2->SetEntries(4);
   DSB1ch2->SetStats(0);

   ci = TColor::GetColor("#000099");
   DSB1ch2->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   DSB1ch2->SetMarkerColor(ci);
   DSB1ch2->SetMarkerStyle(21);
   DSB1ch2->SetMarkerSize(1.4);
   DSB1ch2->GetXaxis()->SetLabelFont(42);
   DSB1ch2->GetXaxis()->SetLabelSize(0.035);
   DSB1ch2->GetXaxis()->SetTitleSize(0.035);
   DSB1ch2->GetXaxis()->SetTitleFont(42);
   DSB1ch2->GetYaxis()->SetLabelFont(42);
   DSB1ch2->GetYaxis()->SetLabelSize(0.035);
   DSB1ch2->GetYaxis()->SetTitleSize(0.035);
   DSB1ch2->GetYaxis()->SetTitleFont(42);
   DSB1ch2->GetZaxis()->SetLabelFont(42);
   DSB1ch2->GetZaxis()->SetLabelSize(0.035);
   DSB1ch2->GetZaxis()->SetTitleSize(0.035);
   DSB1ch2->GetZaxis()->SetTitleFont(42);
   DSB1ch2->Draw("same");
   
   TH2F *DSB1ch3 = new TH2F("DSB1ch3","1000*tree_DSB1_time_3:tree_Energy {tree_Energy>40}",250,0,250,1200,0,800);
   DSB1ch3->SetBinContent(29181,1);
   DSB1ch3->SetBinContent(30391,1);
   DSB1ch3->SetBinContent(35129,1);
   DSB1ch3->SetBinContent(45915,1);
   DSB1ch3->SetEntries(4);
   DSB1ch3->SetStats(0);

   ci = TColor::GetColor("#000099");
   DSB1ch3->SetLineColor(ci);

   ci = TColor::GetColor("#009900");
   DSB1ch3->SetMarkerColor(ci);
   DSB1ch3->SetMarkerStyle(34);
   DSB1ch3->SetMarkerSize(1.4);
   DSB1ch3->GetXaxis()->SetLabelFont(42);
   DSB1ch3->GetXaxis()->SetLabelSize(0.035);
   DSB1ch3->GetXaxis()->SetTitleSize(0.035);
   DSB1ch3->GetXaxis()->SetTitleFont(42);
   DSB1ch3->GetYaxis()->SetLabelFont(42);
   DSB1ch3->GetYaxis()->SetLabelSize(0.035);
   DSB1ch3->GetYaxis()->SetTitleSize(0.035);
   DSB1ch3->GetYaxis()->SetTitleFont(42);
   DSB1ch3->GetZaxis()->SetLabelFont(42);
   DSB1ch3->GetZaxis()->SetLabelSize(0.035);
   DSB1ch3->GetZaxis()->SetTitleSize(0.035);
   DSB1ch3->GetZaxis()->SetTitleFont(42);
   DSB1ch3->Draw("same");
   
   TH2F *DSB1ch4 = new TH2F("DSB1ch4","1000*tree_DSB1_time_4:tree_Energy {tree_Energy>40}",250,0,250,600,0,400);
   DSB1ch4->SetBinContent(23839,1);
   DSB1ch4->SetBinContent(24141,1);
   DSB1ch4->SetBinContent(27821,1);
   DSB1ch4->SetBinContent(35079,1);
   DSB1ch4->SetEntries(4);
   DSB1ch4->SetStats(0);

   ci = TColor::GetColor("#000099");
   DSB1ch4->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   DSB1ch4->SetMarkerColor(ci);
   DSB1ch4->SetMarkerStyle(22);
   DSB1ch4->SetMarkerSize(1.4);
   DSB1ch4->GetXaxis()->SetLabelFont(42);
   DSB1ch4->GetXaxis()->SetLabelSize(0.035);
   DSB1ch4->GetXaxis()->SetTitleSize(0.035);
   DSB1ch4->GetXaxis()->SetTitleFont(42);
   DSB1ch4->GetYaxis()->SetLabelFont(42);
   DSB1ch4->GetYaxis()->SetLabelSize(0.035);
   DSB1ch4->GetYaxis()->SetTitleSize(0.035);
   DSB1ch4->GetYaxis()->SetTitleFont(42);
   DSB1ch4->GetZaxis()->SetLabelFont(42);
   DSB1ch4->GetZaxis()->SetLabelSize(0.035);
   DSB1ch4->GetZaxis()->SetTitleSize(0.035);
   DSB1ch4->GetZaxis()->SetTitleFont(42);
   DSB1ch4->Draw("same");
   
   TLegend *leg = new TLegend(0.4,0.65,0.88,0.88,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("DSB1ch1","SiPM 3x3 mm^{2}, 15 #mu m pitch","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(42);
   entry=leg->AddEntry("DSB1ch2","SiPM 3x3 mm^{2}, 25 #mu m pitch","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(42);
   entry=leg->AddEntry("DSB1ch3","SiPM 1x1 mm^{2}, 10 #mu m pitch","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#009900");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(34);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(42);
   entry=leg->AddEntry("DSB1ch4","SiPM 1x1 mm^{2}  15 #mu m pitch","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.32,0.93,"DSB-doped WLS fiber");
tex->SetNDC();
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
