void Risetime_NotClipped()
{
//=========Macro generated from canvas: c1/c1
//=========  (Thu Mar 22 13:57:56 2018) by ROOT version6.08/05
   TCanvas *c1 = new TCanvas("c1", "c1",12,51,700,500);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->Range(-2.5,-78.88126,22.5,709.9313);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *h__2 = new TH1F("h__2","risetime[4] {amp[0] > 0.1 && amp[0] < 0.2 && amp[4] > 0.01 && risetime[4] > 6}",20,0,20);
   h__2->SetBinContent(7,4);
   h__2->SetBinContent(8,21);
   h__2->SetBinContent(9,169);
   h__2->SetBinContent(10,496);
   h__2->SetBinContent(11,601);
   h__2->SetBinContent(12,469);
   h__2->SetBinContent(13,271);
   h__2->SetBinContent(14,134);
   h__2->SetBinContent(15,58);
   h__2->SetBinContent(16,25);
   h__2->SetBinContent(17,17);
   h__2->SetBinContent(18,9);
   h__2->SetBinContent(19,4);
   h__2->SetBinContent(20,5);
   h__2->SetBinContent(21,47);
   h__2->SetEntries(2330);
   h__2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h__2->SetLineColor(ci);
   h__2->SetLineWidth(2);
   h__2->GetXaxis()->SetTitle("Rise time [ns]");
   h__2->GetXaxis()->SetLabelFont(42);
   h__2->GetXaxis()->SetLabelSize(0.035);
   h__2->GetXaxis()->SetTitleSize(0.035);
   h__2->GetXaxis()->SetTitleFont(42);
   h__2->GetYaxis()->SetTitle("Number of Events");
   h__2->GetYaxis()->SetLabelFont(42);
   h__2->GetYaxis()->SetLabelSize(0.035);
   h__2->GetYaxis()->SetTitleSize(0.035);
   h__2->GetYaxis()->SetTitleFont(42);
   h__2->GetZaxis()->SetLabelFont(42);
   h__2->GetZaxis()->SetLabelSize(0.035);
   h__2->GetZaxis()->SetTitleSize(0.035);
   h__2->GetZaxis()->SetTitleFont(42);
   h__2->Draw("");
   TLatex *   tex = new TLatex(6.167622,653.3498,"No High-Pass Filter");
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
