void Amplitude_NotClipped()
{
//=========Macro generated from canvas: c1/c1
//=========  (Thu Mar 22 13:55:02 2018) by ROOT version6.08/05
   TCanvas *c1 = new TCanvas("c1", "c1",12,51,700,500);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->Range(-0.0625,-60.9,0.5625,548.1);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *h1__1 = new TH1F("h1__1","amp[4] {amp[0] > 0.1 && amp[0] < 0.2 && amp[4] > 0.01 && risetime[4] > 6 && risetime[4] < 20 && amp[4] > 0.05}",30,0,0.5);
   h1__1->SetBinContent(4,22);
   h1__1->SetBinContent(5,44);
   h1__1->SetBinContent(6,188);
   h1__1->SetBinContent(7,464);
   h1__1->SetBinContent(8,447);
   h1__1->SetBinContent(9,285);
   h1__1->SetBinContent(10,175);
   h1__1->SetBinContent(11,104);
   h1__1->SetBinContent(12,107);
   h1__1->SetBinContent(13,63);
   h1__1->SetBinContent(14,58);
   h1__1->SetBinContent(15,46);
   h1__1->SetBinContent(16,31);
   h1__1->SetBinContent(17,24);
   h1__1->SetBinContent(18,28);
   h1__1->SetBinContent(19,18);
   h1__1->SetBinContent(20,20);
   h1__1->SetBinContent(21,10);
   h1__1->SetBinContent(22,8);
   h1__1->SetBinContent(23,3);
   h1__1->SetBinContent(24,6);
   h1__1->SetBinContent(25,3);
   h1__1->SetBinContent(26,3);
   h1__1->SetBinContent(27,5);
   h1__1->SetBinContent(28,3);
   h1__1->SetBinContent(29,2);
   h1__1->SetBinContent(30,3);
   h1__1->SetBinContent(31,11);
   h1__1->SetEntries(2181);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h1__1->SetLineColor(ci);
   h1__1->SetLineWidth(2);
   h1__1->GetXaxis()->SetTitle("Amplitude [V]");
   h1__1->GetXaxis()->SetLabelFont(42);
   h1__1->GetXaxis()->SetLabelSize(0.035);
   h1__1->GetXaxis()->SetTitleSize(0.035);
   h1__1->GetXaxis()->SetTitleFont(42);
   h1__1->GetYaxis()->SetTitle("Number of Events");
   h1__1->GetYaxis()->SetLabelFont(42);
   h1__1->GetYaxis()->SetLabelSize(0.035);
   h1__1->GetYaxis()->SetTitleSize(0.035);
   h1__1->GetYaxis()->SetTitleFont(42);
   h1__1->GetZaxis()->SetLabelFont(42);
   h1__1->GetZaxis()->SetLabelSize(0.035);
   h1__1->GetZaxis()->SetTitleSize(0.035);
   h1__1->GetZaxis()->SetTitleFont(42);
   h1__1->Draw("");
   TLatex *   tex = new TLatex(0.1586676,505.7013,"No High-Pass Filter");
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
