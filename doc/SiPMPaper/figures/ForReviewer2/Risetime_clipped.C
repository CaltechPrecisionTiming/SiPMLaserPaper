void Risetime_clipped()
{
//=========Macro generated from canvas: c1/c1
//=========  (Thu Mar 22 14:28:12 2018) by ROOT version6.08/05
   TCanvas *c1 = new TCanvas("c1", "c1",12,51,700,500);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->Range(-1.25,-89.11876,11.25,802.0688);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *h3__2 = new TH1F("h3__2","risetime[5] {amp[0] > 0.1 && amp[0] < 0.2 && amp[5] > 0.01 }",30,0,10);
   h3__2->SetBinContent(0,34);
   h3__2->SetBinContent(1,3);
   h3__2->SetBinContent(2,2);
   h3__2->SetBinContent(3,1);
   h3__2->SetBinContent(4,15);
   h3__2->SetBinContent(5,246);
   h3__2->SetBinContent(6,679);
   h3__2->SetBinContent(7,661);
   h3__2->SetBinContent(8,476);
   h3__2->SetBinContent(9,341);
   h3__2->SetBinContent(10,208);
   h3__2->SetBinContent(11,200);
   h3__2->SetBinContent(12,138);
   h3__2->SetBinContent(13,100);
   h3__2->SetBinContent(14,100);
   h3__2->SetBinContent(15,88);
   h3__2->SetBinContent(16,72);
   h3__2->SetBinContent(17,70);
   h3__2->SetBinContent(18,48);
   h3__2->SetBinContent(19,44);
   h3__2->SetBinContent(20,43);
   h3__2->SetBinContent(21,31);
   h3__2->SetBinContent(22,26);
   h3__2->SetBinContent(23,30);
   h3__2->SetBinContent(24,24);
   h3__2->SetBinContent(25,25);
   h3__2->SetBinContent(26,23);
   h3__2->SetBinContent(27,27);
   h3__2->SetBinContent(28,23);
   h3__2->SetBinContent(29,20);
   h3__2->SetBinContent(30,13);
   h3__2->SetBinContent(31,388);
   h3__2->SetEntries(4199);
   h3__2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h3__2->SetLineColor(ci);
   h3__2->SetLineWidth(2);
   h3__2->GetXaxis()->SetTitle("Rise time [ns]");
   h3__2->GetXaxis()->SetLabelFont(42);
   h3__2->GetXaxis()->SetLabelSize(0.035);
   h3__2->GetXaxis()->SetTitleSize(0.035);
   h3__2->GetXaxis()->SetTitleFont(42);
   h3__2->GetYaxis()->SetTitle("Number of Events");
   h3__2->GetYaxis()->SetLabelFont(42);
   h3__2->GetYaxis()->SetLabelSize(0.035);
   h3__2->GetYaxis()->SetTitleSize(0.035);
   h3__2->GetYaxis()->SetTitleOffset(1.2);
   h3__2->GetYaxis()->SetTitleFont(42);
   h3__2->GetZaxis()->SetLabelFont(42);
   h3__2->GetZaxis()->SetLabelSize(0.035);
   h3__2->GetZaxis()->SetTitleSize(0.035);
   h3__2->GetZaxis()->SetTitleFont(42);
   h3__2->Draw("");
   TLatex *   tex = new TLatex(0.02143266,1299.951,"With High-Pass Filter");
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(3.012178,745.6645,"With High-Pass Filter");
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
