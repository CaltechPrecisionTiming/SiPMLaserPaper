void Amplitude_clipped()
{
//=========Macro generated from canvas: c1/c1
//=========  (Thu Mar 22 14:25:07 2018) by ROOT version6.08/05
   TCanvas *c1 = new TCanvas("c1", "c1",12,51,700,500);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->Range(-0.009166668,-158.1563,0.0825,1423.406);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *h2__1 = new TH1F("h2__1","amp[5] {amp[0] > 0.1 && amp[0] < 0.2 && amp[5] > 0.01 }",30,0,0.1);
   h2__1->SetBinContent(4,287);
   h2__1->SetBinContent(5,1205);
   h2__1->SetBinContent(6,1112);
   h2__1->SetBinContent(7,608);
   h2__1->SetBinContent(8,310);
   h2__1->SetBinContent(9,166);
   h2__1->SetBinContent(10,155);
   h2__1->SetBinContent(11,101);
   h2__1->SetBinContent(12,64);
   h2__1->SetBinContent(13,48);
   h2__1->SetBinContent(14,30);
   h2__1->SetBinContent(15,11);
   h2__1->SetBinContent(16,12);
   h2__1->SetBinContent(17,14);
   h2__1->SetBinContent(18,12);
   h2__1->SetBinContent(19,7);
   h2__1->SetBinContent(20,7);
   h2__1->SetBinContent(21,7);
   h2__1->SetBinContent(22,1);
   h2__1->SetBinContent(23,7);
   h2__1->SetBinContent(24,2);
   h2__1->SetBinContent(25,2);
   h2__1->SetBinContent(26,3);
   h2__1->SetBinContent(27,1);
   h2__1->SetBinContent(28,1);
   h2__1->SetBinContent(30,1);
   h2__1->SetBinContent(31,25);
   h2__1->SetEntries(4199);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h2__1->SetLineColor(ci);
   h2__1->SetLineWidth(2);
   h2__1->GetXaxis()->SetTitle("Amplitude [V]");
   h2__1->GetXaxis()->SetRange(1,22);
   h2__1->GetXaxis()->SetLabelFont(42);
   h2__1->GetXaxis()->SetLabelSize(0.035);
   h2__1->GetXaxis()->SetTitleSize(0.035);
   h2__1->GetXaxis()->SetTitleFont(42);
   h2__1->GetYaxis()->SetTitle("Number of Events");
   h2__1->GetYaxis()->SetLabelFont(42);
   h2__1->GetYaxis()->SetLabelSize(0.035);
   h2__1->GetYaxis()->SetTitleSize(0.035);
   h2__1->GetYaxis()->SetTitleOffset(1.2);
   h2__1->GetYaxis()->SetTitleFont(42);
   h2__1->GetZaxis()->SetLabelFont(42);
   h2__1->GetZaxis()->SetLabelSize(0.035);
   h2__1->GetZaxis()->SetTitleSize(0.035);
   h2__1->GetZaxis()->SetTitleFont(42);
   h2__1->Draw("");
   TLatex *   tex = new TLatex(0.2,0.05,"With High-Pass Filter");
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.02143266,1299.951,"With High-Pass Filter");
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
