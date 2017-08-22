void ShashlikTimeResolutionVsEnergy_DSB()
{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Aug 22 18:42:41 2017) by ROOT version6.08/05
   TCanvas *c1 = new TCanvas("c1", "c1",1009,74,800,600);
   gStyle->SetOptStat(0);
   c1->Range(-38.46154,-30.76923,282.0513,225.641);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetLeftMargin(0.12);
   c1->SetBottomMargin(0.12);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH2F *DSB1ch1__5 = new TH2F("DSB1ch1__5","",250,0,250,600,0,400);
   DSB1ch1__5->SetBinContent(24141,1);
   DSB1ch1__5->SetBinContent(27871,1);
   DSB1ch1__5->SetBinContent(35885,1);
   DSB1ch1__5->SetBinContent(51711,1);
   DSB1ch1__5->SetEntries(4);
   DSB1ch1__5->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   DSB1ch1__5->SetLineColor(ci);
   DSB1ch1__5->SetMarkerStyle(20);
   DSB1ch1__5->SetMarkerSize(1.4);
   DSB1ch1__5->GetXaxis()->SetTitle("Energy [GeV]");
   DSB1ch1__5->GetXaxis()->SetLabelFont(42);
   DSB1ch1__5->GetXaxis()->SetLabelSize(0.05);
   DSB1ch1__5->GetXaxis()->SetTitleSize(0.05);
   DSB1ch1__5->GetXaxis()->SetTitleOffset(1.1);
   DSB1ch1__5->GetXaxis()->SetTitleFont(42);
   DSB1ch1__5->GetYaxis()->SetTitle("#sigma t [ps]");
   DSB1ch1__5->GetYaxis()->SetRange(1,300);
   DSB1ch1__5->GetYaxis()->SetLabelFont(42);
   DSB1ch1__5->GetYaxis()->SetLabelOffset(0.01);
   DSB1ch1__5->GetYaxis()->SetLabelSize(0.05);
   DSB1ch1__5->GetYaxis()->SetTitleSize(0.05);
   DSB1ch1__5->GetYaxis()->SetTitleOffset(1.2);
   DSB1ch1__5->GetYaxis()->SetTitleFont(42);
   DSB1ch1__5->GetZaxis()->SetLabelFont(42);
   DSB1ch1__5->GetZaxis()->SetLabelSize(0.035);
   DSB1ch1__5->GetZaxis()->SetTitleSize(0.035);
   DSB1ch1__5->GetZaxis()->SetTitleFont(42);
   DSB1ch1__5->Draw("");
   
   TH2F *DSB1ch2__6 = new TH2F("DSB1ch2__6","1000*tree_DSB1_time_2:tree_Energy {tree_Energy>40}",250,0,250,600,0,400);
   DSB1ch2__6->SetBinContent(23637,1);
   DSB1ch2__6->SetBinContent(25099,1);
   DSB1ch2__6->SetBinContent(30593,1);
   DSB1ch2__6->SetBinContent(36087,1);
   DSB1ch2__6->SetEntries(4);
   DSB1ch2__6->SetStats(0);

   ci = TColor::GetColor("#000099");
   DSB1ch2__6->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   DSB1ch2__6->SetMarkerColor(ci);
   DSB1ch2__6->SetMarkerStyle(21);
   DSB1ch2__6->SetMarkerSize(1.4);
   DSB1ch2__6->GetXaxis()->SetLabelFont(42);
   DSB1ch2__6->GetXaxis()->SetLabelSize(0.035);
   DSB1ch2__6->GetXaxis()->SetTitleSize(0.035);
   DSB1ch2__6->GetXaxis()->SetTitleFont(42);
   DSB1ch2__6->GetYaxis()->SetRange(7,294);
   DSB1ch2__6->GetYaxis()->SetLabelFont(42);
   DSB1ch2__6->GetYaxis()->SetLabelSize(0.035);
   DSB1ch2__6->GetYaxis()->SetTitleSize(0.035);
   DSB1ch2__6->GetYaxis()->SetTitleFont(42);
   DSB1ch2__6->GetZaxis()->SetLabelFont(42);
   DSB1ch2__6->GetZaxis()->SetLabelSize(0.035);
   DSB1ch2__6->GetZaxis()->SetTitleSize(0.035);
   DSB1ch2__6->GetZaxis()->SetTitleFont(42);
   DSB1ch2__6->Draw("same");
   
   TH2F *DSB1ch3__7 = new TH2F("DSB1ch3__7","1000*tree_DSB1_time_3:tree_Energy {tree_Energy>40}",250,0,250,1200,0,800);
   DSB1ch3__7->SetBinContent(29181,1);
   DSB1ch3__7->SetBinContent(30391,1);
   DSB1ch3__7->SetBinContent(35129,1);
   DSB1ch3__7->SetBinContent(45915,1);
   DSB1ch3__7->SetEntries(4);
   DSB1ch3__7->SetStats(0);

   ci = TColor::GetColor("#000099");
   DSB1ch3__7->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   DSB1ch3__7->SetMarkerColor(ci);
   DSB1ch3__7->SetMarkerStyle(34);
   DSB1ch3__7->SetMarkerSize(1.4);
   DSB1ch3__7->GetXaxis()->SetLabelFont(42);
   DSB1ch3__7->GetXaxis()->SetLabelSize(0.035);
   DSB1ch3__7->GetXaxis()->SetTitleSize(0.035);
   DSB1ch3__7->GetXaxis()->SetTitleFont(42);
   DSB1ch3__7->GetYaxis()->SetRange(7,294);
   DSB1ch3__7->GetYaxis()->SetLabelFont(42);
   DSB1ch3__7->GetYaxis()->SetLabelSize(0.035);
   DSB1ch3__7->GetYaxis()->SetTitleSize(0.035);
   DSB1ch3__7->GetYaxis()->SetTitleFont(42);
   DSB1ch3__7->GetZaxis()->SetLabelFont(42);
   DSB1ch3__7->GetZaxis()->SetLabelSize(0.035);
   DSB1ch3__7->GetZaxis()->SetTitleSize(0.035);
   DSB1ch3__7->GetZaxis()->SetTitleFont(42);
   DSB1ch3__7->Draw("same");
   
   TH2F *DSB1ch4__8 = new TH2F("DSB1ch4__8","1000*tree_DSB1_time_4:tree_Energy {tree_Energy>40}",250,0,250,600,0,400);
   DSB1ch4__8->SetBinContent(23839,1);
   DSB1ch4__8->SetBinContent(24141,1);
   DSB1ch4__8->SetBinContent(27821,1);
   DSB1ch4__8->SetBinContent(35079,1);
   DSB1ch4__8->SetEntries(4);
   DSB1ch4__8->SetStats(0);

   ci = TColor::GetColor("#000099");
   DSB1ch4__8->SetLineColor(ci);

   ci = TColor::GetColor("#009900");
   DSB1ch4__8->SetMarkerColor(ci);
   DSB1ch4__8->SetMarkerStyle(22);
   DSB1ch4__8->SetMarkerSize(1.4);
   DSB1ch4__8->GetXaxis()->SetLabelFont(42);
   DSB1ch4__8->GetXaxis()->SetLabelSize(0.035);
   DSB1ch4__8->GetXaxis()->SetTitleSize(0.035);
   DSB1ch4__8->GetXaxis()->SetTitleFont(42);
   DSB1ch4__8->GetYaxis()->SetRange(7,294);
   DSB1ch4__8->GetYaxis()->SetLabelFont(42);
   DSB1ch4__8->GetYaxis()->SetLabelSize(0.035);
   DSB1ch4__8->GetYaxis()->SetTitleSize(0.035);
   DSB1ch4__8->GetYaxis()->SetTitleFont(42);
   DSB1ch4__8->GetZaxis()->SetLabelFont(42);
   DSB1ch4__8->GetZaxis()->SetLabelSize(0.035);
   DSB1ch4__8->GetZaxis()->SetTitleSize(0.035);
   DSB1ch4__8->GetZaxis()->SetTitleFont(42);
   DSB1ch4__8->Draw("same");
   
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

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(42);
   entry=leg->AddEntry("DSB1ch3","SiPM 1x1 mm^{2}, 10 #mu m pitch","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(34);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(42);
   entry=leg->AddEntry("DSB1ch4","SiPM 1x1 mm^{2}  15 #mu m pitch","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#009900");
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
