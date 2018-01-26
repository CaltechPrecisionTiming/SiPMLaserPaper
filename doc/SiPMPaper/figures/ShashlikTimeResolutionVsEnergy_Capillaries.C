{
//=========Macro generated from canvas: c2/c2
//=========  (Fri Jan 26 22:23:11 2018) by ROOT version5.34/36
   TCanvas *c2 = new TCanvas("c2", "c2",8,129,800,600);
   gStyle->SetOptStat(0);
   c2->Range(-38.46154,-61.53846,282.0513,451.2821);
   c2->SetFillColor(0);
   c2->SetBorderMode(0);
   c2->SetBorderSize(2);
   c2->SetLeftMargin(0.12);
   c2->SetBottomMargin(0.12);
   c2->SetFrameBorderMode(0);
   c2->SetFrameBorderMode(0);
   
   TH2F *Capch1 = new TH2F("Capch1","",250,0,250,600,0,400);
   Capch1->SetBinContent(35481,1);
   Capch1->SetBinContent(41227,1);
   Capch1->SetBinContent(47729,1);
   Capch1->SetBinContent(94299,1);
   Capch1->SetEntries(4);
   Capch1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Capch1->SetLineColor(ci);
   Capch1->SetMarkerStyle(20);
   Capch1->SetMarkerSize(1.4);
   Capch1->GetXaxis()->SetTitle("Energy [GeV]");
   Capch1->GetXaxis()->SetLabelFont(42);
   Capch1->GetXaxis()->SetLabelSize(0.05);
   Capch1->GetXaxis()->SetTitleSize(0.05);
   Capch1->GetXaxis()->SetTitleOffset(1.1);
   Capch1->GetXaxis()->SetTitleFont(42);
   Capch1->GetYaxis()->SetTitle("#sigma t [ps]");
   Capch1->GetYaxis()->SetRange(1,600);
   Capch1->GetYaxis()->SetLabelFont(42);
   Capch1->GetYaxis()->SetLabelOffset(0.01);
   Capch1->GetYaxis()->SetLabelSize(0.05);
   Capch1->GetYaxis()->SetTitleSize(0.05);
   Capch1->GetYaxis()->SetTitleOffset(1.2);
   Capch1->GetYaxis()->SetTitleFont(42);
   Capch1->GetZaxis()->SetLabelFont(42);
   Capch1->GetZaxis()->SetLabelSize(0.035);
   Capch1->GetZaxis()->SetTitleSize(0.035);
   Capch1->GetZaxis()->SetTitleFont(42);
   Capch1->Draw("");
   
   TH2F *Capch2 = new TH2F("Capch2","1000*tree_Cap_time_2:tree_Energy {tree_Energy>40}",250,0,250,600,0,400);
   Capch2->SetBinContent(47325,1);
   Capch2->SetBinContent(53827,1);
   Capch2->SetBinContent(59069,1);
   Capch2->SetBinContent(81699,1);
   Capch2->SetEntries(4);
   Capch2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Capch2->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   Capch2->SetMarkerColor(ci);
   Capch2->SetMarkerStyle(21);
   Capch2->SetMarkerSize(1.4);
   Capch2->GetXaxis()->SetLabelFont(42);
   Capch2->GetXaxis()->SetLabelSize(0.035);
   Capch2->GetXaxis()->SetTitleSize(0.035);
   Capch2->GetXaxis()->SetTitleFont(42);
   Capch2->GetYaxis()->SetLabelFont(42);
   Capch2->GetYaxis()->SetLabelSize(0.035);
   Capch2->GetYaxis()->SetTitleSize(0.035);
   Capch2->GetYaxis()->SetTitleFont(42);
   Capch2->GetZaxis()->SetLabelFont(42);
   Capch2->GetZaxis()->SetLabelSize(0.035);
   Capch2->GetZaxis()->SetTitleSize(0.035);
   Capch2->GetZaxis()->SetTitleFont(42);
   Capch2->Draw("same");
   
   TH2F *Capch3 = new TH2F("Capch3","1000*tree_Cap_time_3:tree_Energy {tree_Energy>40}",250,0,250,1200,0,800);
   Capch3->SetBinContent(52113,1);
   Capch3->SetBinContent(59119,1);
   Capch3->SetBinContent(78473,1);
   Capch3->SetBinContent(112443,1);
   Capch3->SetEntries(4);
   Capch3->SetStats(0);

   ci = TColor::GetColor("#000099");
   Capch3->SetLineColor(ci);

   ci = TColor::GetColor("#009900");
   Capch3->SetMarkerColor(ci);
   Capch3->SetMarkerStyle(34);
   Capch3->SetMarkerSize(1.4);
   Capch3->GetXaxis()->SetLabelFont(42);
   Capch3->GetXaxis()->SetLabelSize(0.035);
   Capch3->GetXaxis()->SetTitleSize(0.035);
   Capch3->GetXaxis()->SetTitleFont(42);
   Capch3->GetYaxis()->SetLabelFont(42);
   Capch3->GetYaxis()->SetLabelSize(0.035);
   Capch3->GetYaxis()->SetTitleSize(0.035);
   Capch3->GetYaxis()->SetTitleFont(42);
   Capch3->GetZaxis()->SetLabelFont(42);
   Capch3->GetZaxis()->SetLabelSize(0.035);
   Capch3->GetZaxis()->SetTitleSize(0.035);
   Capch3->GetZaxis()->SetTitleFont(42);
   Capch3->Draw("same");
   
   TH2F *Capch4 = new TH2F("Capch4","1000*tree_Cap_time_4:tree_Energy {tree_Energy>40}",250,0,250,600,0,400);
   Capch4->SetBinContent(30643,1);
   Capch4->SetBinContent(36741,1);
   Capch4->SetBinContent(43193,1);
   Capch4->SetBinContent(50703,1);
   Capch4->SetEntries(4);
   Capch4->SetStats(0);

   ci = TColor::GetColor("#000099");
   Capch4->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   Capch4->SetMarkerColor(ci);
   Capch4->SetMarkerStyle(22);
   Capch4->SetMarkerSize(1.4);
   Capch4->GetXaxis()->SetLabelFont(42);
   Capch4->GetXaxis()->SetLabelSize(0.035);
   Capch4->GetXaxis()->SetTitleSize(0.035);
   Capch4->GetXaxis()->SetTitleFont(42);
   Capch4->GetYaxis()->SetLabelFont(42);
   Capch4->GetYaxis()->SetLabelSize(0.035);
   Capch4->GetYaxis()->SetTitleSize(0.035);
   Capch4->GetYaxis()->SetTitleFont(42);
   Capch4->GetZaxis()->SetLabelFont(42);
   Capch4->GetZaxis()->SetLabelSize(0.035);
   Capch4->GetZaxis()->SetTitleSize(0.035);
   Capch4->GetZaxis()->SetTitleFont(42);
   Capch4->Draw("same");
   
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

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Capch3","SiPM 1x1 mm^{2}, 10 #mu m pitch","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#009900");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(34);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Capch4","SiPM 1x1 mm^{2}  15 #mu m pitch","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
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
