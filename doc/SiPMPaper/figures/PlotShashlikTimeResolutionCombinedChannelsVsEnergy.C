void PlotSiPMTresEnergyCombined()
{

gStyle->SetOptStat(0);


TFile *_file0 = TFile::Open("SiPMdata.root");



 data->Draw("1000*tree_DSB1_time_1_2_3_4:tree_Energy>>DSB1(250,0,250,600,0,200)","");
//  /*TF1 *f00 = new TF1("f00","[2]/(x**0.5)+[1]/x+[0]");
// DSB1ch1->Fit(f00,"","",15,270.0);
// DSB1ch1->GetFunction("f00")->SetLineColor(kBlack); */

 data->Draw("1000*tree_Cap_time_1_2_3_4:tree_Energy>>Cap(250,0,250,600,0,200)","");
// /*TF1 *f0 = new TF1("f0","[2]/(x**0.5)+[1]/x+[0]");
// Capch1->Fit(f0,"","",15,270.0);
// Capch1->GetFunction("f0")->SetLineColor(kBlack); */




 DSB1->SetTitle("");
 DSB1->GetXaxis()->SetTitle("Energy [GeV]");
 DSB1->GetYaxis()->SetTitle("#sigma t [ps]");
 DSB1->GetYaxis()->SetRangeUser(0,150);

 DSB1->GetXaxis()->SetTitleSize(0.05);
 DSB1->GetXaxis()->SetLabelSize(0.05);
 DSB1->GetXaxis()->SetTitleOffset(1.1);
 DSB1->GetYaxis()->SetTitleSize(0.05);
 DSB1->GetYaxis()->SetLabelSize(0.05);
 DSB1->GetYaxis()->SetTitleOffset(1.2);
 DSB1->GetYaxis()->SetLabelOffset(0.01);

 DSB1->SetMarkerSize(1.4);
 Cap->SetMarkerSize(1.8);
 DSB1->SetMarkerStyle(20);
 Cap->SetMarkerStyle(34);
 DSB1->SetMarkerColor(kBlack);
 Cap->SetMarkerColor(kBlue);

 DSB1->SetTitle("");
 DSB1->GetXaxis()->SetTitle("Energy [GeV]");
 DSB1->GetYaxis()->SetTitle("#sigma t [ps]");
 DSB1->GetYaxis()->SetRangeUser(0,400);





 TCanvas *c1 = new TCanvas("c1","c1", 800, 600); 

 c1->SetBottomMargin(0.12);
 c1->SetLeftMargin(0.12);
 DSB1->Draw();
 Cap->Draw("same");
  
  
 leg = new TLegend(0.25,0.70,0.87,0.85);
 leg->SetTextSize(0.05);
 leg->SetLineColor(kBlack);
 leg->AddEntry(DSB1,"Combined DSB Fibers","p");
 leg->AddEntry(Cap,"Combined Quartz Capillaries","p");
 leg->Draw();
 

 c1->SaveAs("ShashlikTimeResolutionCombinedChannelVsEnergy.pdf");
 c1->SaveAs("ShashlikTimeResolutionCombinedChannelVsEnergy.C");
 
}
