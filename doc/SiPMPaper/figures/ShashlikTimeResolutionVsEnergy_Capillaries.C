void ShashlikTimeResolutionVsEnergy_Capillaries()
{
//=========Macro generated from canvas: c2/c2
//=========  (Sat Aug 19 19:57:43 2017) by ROOT version6.08/05
   TCanvas *c2 = new TCanvas("c2", "c2",4,77,800,600);
   gStyle->SetOptStat(0);
   c2->Range(-38.46154,-61.53846,282.0513,451.2821);
   c2->SetFillColor(0);
   c2->SetBorderMode(0);
   c2->SetBorderSize(2);
   c2->SetLeftMargin(0.12);
   c2->SetBottomMargin(0.12);
   c2->SetFrameBorderMode(0);
   c2->SetFrameBorderMode(0);
   
   TH2F *Capch1__5 = new TH2F("Capch1__5","",250,0,250,600,0,400);
   Capch1__5->SetBinContent(35481,1);
   Capch1__5->SetBinContent(41227,1);
   Capch1__5->SetBinContent(47729,1);
   Capch1__5->SetBinContent(94299,1);
   Capch1__5->SetEntries(4);
   Capch1__5->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Capch1__5->SetLineColor(ci);
   Capch1__5->SetMarkerStyle(20);
   Capch1__5->SetMarkerSize(1.4);
   Capch1__5->GetXaxis()->SetTitle("Energy [GeV]");
   Capch1__5->GetXaxis()->SetLabelFont(42);
   Capch1__5->GetXaxis()->SetLabelSize(0.05);
   Capch1__5->GetXaxis()->SetTitleSize(0.05);
   Capch1__5->GetXaxis()->SetTitleOffset(1.1);
   Capch1__5->GetXaxis()->SetTitleFont(42);
   Capch1__5->GetYaxis()->SetTitle("#sigma t [ps]");
   Capch1__5->GetYaxis()->SetRange(1,600);
   Capch1__5->GetYaxis()->SetLabelFont(42);
   Capch1__5->GetYaxis()->SetLabelOffset(0.01);
   Capch1__5->GetYaxis()->SetLabelSize(0.05);
   Capch1__5->GetYaxis()->SetTitleSize(0.05);
   Capch1__5->GetYaxis()->SetTitleOffset(1.2);
   Capch1__5->GetYaxis()->SetTitleFont(42);
   Capch1__5->GetZaxis()->SetLabelFont(42);
   Capch1__5->GetZaxis()->SetLabelSize(0.035);
   Capch1__5->GetZaxis()->SetTitleSize(0.035);
   Capch1__5->GetZaxis()->SetTitleFont(42);
   Capch1__5->Draw("");
   
   TH2F *Capch2__6 = new TH2F("Capch2__6","1000*tree_Cap_time_2:tree_Energy {tree_Energy>40}",250,0,250,600,0,400);
   Capch2__6->SetBinContent(47325,1);
   Capch2__6->SetBinContent(53827,1);
   Capch2__6->SetBinContent(59069,1);
   Capch2__6->SetBinContent(81699,1);
   Capch2__6->SetEntries(4);
   Capch2__6->SetStats(0);

   ci = TColor::GetColor("#000099");
   Capch2__6->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   Capch2__6->SetMarkerColor(ci);
   Capch2__6->SetMarkerStyle(21);
   Capch2__6->SetMarkerSize(1.4);
   Capch2__6->GetXaxis()->SetLabelFont(42);
   Capch2__6->GetXaxis()->SetLabelSize(0.035);
   Capch2__6->GetXaxis()->SetTitleSize(0.035);
   Capch2__6->GetXaxis()->SetTitleFont(42);
   Capch2__6->GetYaxis()->SetLabelFont(42);
   Capch2__6->GetYaxis()->SetLabelSize(0.035);
   Capch2__6->GetYaxis()->SetTitleSize(0.035);
   Capch2__6->GetYaxis()->SetTitleFont(42);
   Capch2__6->GetZaxis()->SetLabelFont(42);
   Capch2__6->GetZaxis()->SetLabelSize(0.035);
   Capch2__6->GetZaxis()->SetTitleSize(0.035);
   Capch2__6->GetZaxis()->SetTitleFont(42);
   Capch2__6->Draw("same");
   
   TH2F *Capch3__7 = new TH2F("Capch3__7","1000*tree_Cap_time_3:tree_Energy {tree_Energy>40}",250,0,250,1200,0,800);
   Capch3__7->SetBinContent(52113,1);
   Capch3__7->SetBinContent(59119,1);
   Capch3__7->SetBinContent(78473,1);
   Capch3__7->SetBinContent(112443,1);
   Capch3__7->SetEntries(4);
   Capch3__7->SetStats(0);

   ci = TColor::GetColor("#000099");
   Capch3__7->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   Capch3__7->SetMarkerColor(ci);
   Capch3__7->SetMarkerStyle(34);
   Capch3__7->SetMarkerSize(1.4);
   Capch3__7->GetXaxis()->SetLabelFont(42);
   Capch3__7->GetXaxis()->SetLabelSize(0.035);
   Capch3__7->GetXaxis()->SetTitleSize(0.035);
   Capch3__7->GetXaxis()->SetTitleFont(42);
   Capch3__7->GetYaxis()->SetLabelFont(42);
   Capch3__7->GetYaxis()->SetLabelSize(0.035);
   Capch3__7->GetYaxis()->SetTitleSize(0.035);
   Capch3__7->GetYaxis()->SetTitleFont(42);
   Capch3__7->GetZaxis()->SetLabelFont(42);
   Capch3__7->GetZaxis()->SetLabelSize(0.035);
   Capch3__7->GetZaxis()->SetTitleSize(0.035);
   Capch3__7->GetZaxis()->SetTitleFont(42);
   Capch3__7->Draw("same");
   
   TH2F *Capch4__8 = new TH2F("Capch4__8","1000*tree_Cap_time_4:tree_Energy {tree_Energy>40}",250,0,250,600,0,400);
   Capch4__8->SetBinContent(30643,1);
   Capch4__8->SetBinContent(36741,1);
   Capch4__8->SetBinContent(43193,1);
   Capch4__8->SetBinContent(50703,1);
   Capch4__8->SetEntries(4);
   Capch4__8->SetStats(0);

   ci = TColor::GetColor("#000099");
   Capch4__8->SetLineColor(ci);

   ci = TColor::GetColor("#009900");
   Capch4__8->SetMarkerColor(ci);
   Capch4__8->SetMarkerStyle(22);
   Capch4__8->SetMarkerSize(1.4);
   Capch4__8->GetXaxis()->SetLabelFont(42);
   Capch4__8->GetXaxis()->SetLabelSize(0.035);
   Capch4__8->GetXaxis()->SetTitleSize(0.035);
   Capch4__8->GetXaxis()->SetTitleFont(42);
   Capch4__8->GetYaxis()->SetLabelFont(42);
   Capch4__8->GetYaxis()->SetLabelSize(0.035);
   Capch4__8->GetYaxis()->SetTitleSize(0.035);
   Capch4__8->GetYaxis()->SetTitleFont(42);
   Capch4__8->GetZaxis()->SetLabelFont(42);
   Capch4__8->GetZaxis()->SetLabelSize(0.035);
   Capch4__8->GetZaxis()->SetTitleSize(0.035);
   Capch4__8->GetZaxis()->SetTitleFont(42);
   Capch4__8->Draw("same");
   
   TLegend *leg = new TLegend(0.4,0.65,0.88,0.88,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Capch1","SiPM 3x3 mm^{2}, 15 #mu m pitch","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Capch2","SiPM 3x3 mm^{2}, 25 #mu m pitch","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Capch3","SiPM 1x1 mm^{2}, 10 #mu m pitch","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(34);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Capch4","SiPM 1x1 mm^{2}  15 #mu m pitch","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#009900");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.35,0.93,"Quartz Capillaries");
tex->SetNDC();
   tex->SetLineWidth(2);
   tex->Draw();
   c2->Modified();
   c2->cd();
   c2->SetSelected(c2);
}
