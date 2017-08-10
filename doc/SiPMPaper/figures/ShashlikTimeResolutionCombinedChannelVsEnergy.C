void ShashlikTimeResolutionCombinedChannelVsEnergy()
{
//=========Macro generated from canvas: c1/c1
//=========  (Fri Aug 11 00:48:12 2017) by ROOT version6.08/05
   TCanvas *c1 = new TCanvas("c1", "c1",519,95,800,600);
   gStyle->SetOptStat(0);
   c1->Range(-38.46154,-30.82051,282.0513,226.0171);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetLeftMargin(0.12);
   c1->SetBottomMargin(0.12);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH2F *DSB1__1 = new TH2F("DSB1__1","",250,0,250,600,0,200);
   DSB1__1->SetBinContent(32205,1);
   DSB1__1->SetBinContent(37195,1);
   DSB1__1->SetBinContent(40421,1);
   DSB1__1->SetBinContent(58263,1);
   DSB1__1->SetBinContent(84441,1);
   DSB1__1->SetEntries(5);
   DSB1__1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   DSB1__1->SetLineColor(ci);
   DSB1__1->SetMarkerStyle(20);
   DSB1__1->SetMarkerSize(1.4);
   DSB1__1->GetXaxis()->SetTitle("Energy [GeV]");
   DSB1__1->GetXaxis()->SetLabelFont(42);
   DSB1__1->GetXaxis()->SetLabelSize(0.05);
   DSB1__1->GetXaxis()->SetTitleSize(0.05);
   DSB1__1->GetXaxis()->SetTitleOffset(1.1);
   DSB1__1->GetXaxis()->SetTitleFont(42);
   DSB1__1->GetYaxis()->SetTitle("#sigma t [ps]");
   DSB1__1->GetYaxis()->SetRange(1,601);
   DSB1__1->GetYaxis()->SetLabelFont(42);
   DSB1__1->GetYaxis()->SetLabelOffset(0.01);
   DSB1__1->GetYaxis()->SetLabelSize(0.05);
   DSB1__1->GetYaxis()->SetTitleSize(0.05);
   DSB1__1->GetYaxis()->SetTitleOffset(1.2);
   DSB1__1->GetYaxis()->SetTitleFont(42);
   DSB1__1->GetZaxis()->SetLabelFont(42);
   DSB1__1->GetZaxis()->SetLabelSize(0.035);
   DSB1__1->GetZaxis()->SetTitleSize(0.035);
   DSB1__1->GetZaxis()->SetTitleFont(42);
   DSB1__1->Draw("");
   
   TH2F *Cap__2 = new TH2F("Cap__2","1000*tree_Cap_time_1_2_3_4:tree_Energy",250,0,250,600,0,200);
   Cap__2->SetBinContent(55591,1);
   Cap__2->SetBinContent(55641,1);
   Cap__2->SetBinContent(65621,1);
   Cap__2->SetBinContent(96819,1);
   Cap__2->SetBinContent(151473,1);
   Cap__2->SetEntries(5);
   Cap__2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Cap__2->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   Cap__2->SetMarkerColor(ci);
   Cap__2->SetMarkerStyle(34);
   Cap__2->SetMarkerSize(1.8);
   Cap__2->GetXaxis()->SetLabelFont(42);
   Cap__2->GetXaxis()->SetLabelSize(0.035);
   Cap__2->GetXaxis()->SetTitleSize(0.035);
   Cap__2->GetXaxis()->SetTitleFont(42);
   Cap__2->GetYaxis()->SetLabelFont(42);
   Cap__2->GetYaxis()->SetLabelSize(0.035);
   Cap__2->GetYaxis()->SetTitleSize(0.035);
   Cap__2->GetYaxis()->SetTitleFont(42);
   Cap__2->GetZaxis()->SetLabelFont(42);
   Cap__2->GetZaxis()->SetLabelSize(0.035);
   Cap__2->GetZaxis()->SetTitleSize(0.035);
   Cap__2->GetZaxis()->SetTitleFont(42);
   Cap__2->Draw("same");
   
   TLegend *leg = new TLegend(0.25,0.7,0.87,0.85,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("DSB1","Combined DSB Fibers","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Cap","Combined Quartz Capillaries","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(34);
   entry->SetMarkerSize(1.8);
   entry->SetTextFont(42);
   leg->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
