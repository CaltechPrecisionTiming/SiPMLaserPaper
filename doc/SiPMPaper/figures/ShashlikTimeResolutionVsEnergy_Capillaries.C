void ShashlikTimeResolutionVsEnergy_Capillaries()
{
//=========Macro generated from canvas: c2/c2
//=========  (Wed Aug  9 17:58:43 2017) by ROOT version6.08/05
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
   
   TH2F *Capch1__9 = new TH2F("Capch1__9","",250,0,250,600,0,400);
   Capch1__9->SetBinContent(35481,1);
   Capch1__9->SetBinContent(41227,1);
   Capch1__9->SetBinContent(47729,1);
   Capch1__9->SetBinContent(94299,1);
   Capch1__9->SetBinContent(151473,1);
   Capch1__9->SetEntries(5);
   Capch1__9->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Capch1__9->SetLineColor(ci);
   Capch1__9->SetMarkerStyle(20);
   Capch1__9->SetMarkerSize(1.4);
   Capch1__9->GetXaxis()->SetTitle("Energy [GeV]");
   Capch1__9->GetXaxis()->SetLabelFont(42);
   Capch1__9->GetXaxis()->SetLabelSize(0.05);
   Capch1__9->GetXaxis()->SetTitleSize(0.05);
   Capch1__9->GetXaxis()->SetTitleOffset(1.1);
   Capch1__9->GetXaxis()->SetTitleFont(42);
   Capch1__9->GetYaxis()->SetTitle("#sigma t [ps]");
   Capch1__9->GetYaxis()->SetRange(1,600);
   Capch1__9->GetYaxis()->SetLabelFont(42);
   Capch1__9->GetYaxis()->SetLabelOffset(0.01);
   Capch1__9->GetYaxis()->SetLabelSize(0.05);
   Capch1__9->GetYaxis()->SetTitleSize(0.05);
   Capch1__9->GetYaxis()->SetTitleOffset(1.2);
   Capch1__9->GetYaxis()->SetTitleFont(42);
   Capch1__9->GetZaxis()->SetLabelFont(42);
   Capch1__9->GetZaxis()->SetLabelSize(0.035);
   Capch1__9->GetZaxis()->SetTitleSize(0.035);
   Capch1__9->GetZaxis()->SetTitleFont(42);
   Capch1__9->Draw("");
   
   TH2F *Capch2__10 = new TH2F("Capch2__10","1000*tree_Cap_time_2:tree_Energy",250,0,250,600,0,400);
   Capch2__10->SetBinContent(47325,1);
   Capch2__10->SetBinContent(53827,1);
   Capch2__10->SetBinContent(59069,1);
   Capch2__10->SetBinContent(81699,1);
   Capch2__10->SetBinContent(140889,1);
   Capch2__10->SetEntries(5);
   Capch2__10->SetStats(0);

   ci = TColor::GetColor("#000099");
   Capch2__10->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   Capch2__10->SetMarkerColor(ci);
   Capch2__10->SetMarkerStyle(21);
   Capch2__10->SetMarkerSize(1.4);
   Capch2__10->GetXaxis()->SetLabelFont(42);
   Capch2__10->GetXaxis()->SetLabelSize(0.035);
   Capch2__10->GetXaxis()->SetTitleSize(0.035);
   Capch2__10->GetXaxis()->SetTitleFont(42);
   Capch2__10->GetYaxis()->SetLabelFont(42);
   Capch2__10->GetYaxis()->SetLabelSize(0.035);
   Capch2__10->GetYaxis()->SetTitleSize(0.035);
   Capch2__10->GetYaxis()->SetTitleFont(42);
   Capch2__10->GetZaxis()->SetLabelFont(42);
   Capch2__10->GetZaxis()->SetLabelSize(0.035);
   Capch2__10->GetZaxis()->SetTitleSize(0.035);
   Capch2__10->GetZaxis()->SetTitleFont(42);
   Capch2__10->Draw("same");
   
   TH2F *Capch3__11 = new TH2F("Capch3__11","1000*tree_Cap_time_3:tree_Energy",250,0,250,1200,0,800);
   Capch3__11->SetBinContent(52113,1);
   Capch3__11->SetBinContent(59119,1);
   Capch3__11->SetBinContent(78473,1);
   Capch3__11->SetBinContent(112443,1);
   Capch3__11->SetBinContent(280245,1);
   Capch3__11->SetEntries(5);
   Capch3__11->SetStats(0);

   ci = TColor::GetColor("#000099");
   Capch3__11->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   Capch3__11->SetMarkerColor(ci);
   Capch3__11->SetMarkerStyle(34);
   Capch3__11->SetMarkerSize(1.4);
   Capch3__11->GetXaxis()->SetLabelFont(42);
   Capch3__11->GetXaxis()->SetLabelSize(0.035);
   Capch3__11->GetXaxis()->SetTitleSize(0.035);
   Capch3__11->GetXaxis()->SetTitleFont(42);
   Capch3__11->GetYaxis()->SetLabelFont(42);
   Capch3__11->GetYaxis()->SetLabelSize(0.035);
   Capch3__11->GetYaxis()->SetTitleSize(0.035);
   Capch3__11->GetYaxis()->SetTitleFont(42);
   Capch3__11->GetZaxis()->SetLabelFont(42);
   Capch3__11->GetZaxis()->SetLabelSize(0.035);
   Capch3__11->GetZaxis()->SetTitleSize(0.035);
   Capch3__11->GetZaxis()->SetTitleFont(42);
   Capch3__11->Draw("same");
   
   TH2F *Capch4__12 = new TH2F("Capch4__12","1000*tree_Cap_time_4:tree_Energy",250,0,250,600,0,400);
   Capch4__12->SetBinContent(30643,1);
   Capch4__12->SetBinContent(36741,1);
   Capch4__12->SetBinContent(43193,1);
   Capch4__12->SetBinContent(50703,1);
   Capch4__12->SetBinContent(86961,1);
   Capch4__12->SetEntries(5);
   Capch4__12->SetStats(0);

   ci = TColor::GetColor("#000099");
   Capch4__12->SetLineColor(ci);

   ci = TColor::GetColor("#009900");
   Capch4__12->SetMarkerColor(ci);
   Capch4__12->SetMarkerStyle(22);
   Capch4__12->SetMarkerSize(1.4);
   Capch4__12->GetXaxis()->SetLabelFont(42);
   Capch4__12->GetXaxis()->SetLabelSize(0.035);
   Capch4__12->GetXaxis()->SetTitleSize(0.035);
   Capch4__12->GetXaxis()->SetTitleFont(42);
   Capch4__12->GetYaxis()->SetLabelFont(42);
   Capch4__12->GetYaxis()->SetLabelSize(0.035);
   Capch4__12->GetYaxis()->SetTitleSize(0.035);
   Capch4__12->GetYaxis()->SetTitleFont(42);
   Capch4__12->GetZaxis()->SetLabelFont(42);
   Capch4__12->GetZaxis()->SetLabelSize(0.035);
   Capch4__12->GetZaxis()->SetTitleSize(0.035);
   Capch4__12->GetZaxis()->SetTitleFont(42);
   Capch4__12->Draw("same");
   
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
