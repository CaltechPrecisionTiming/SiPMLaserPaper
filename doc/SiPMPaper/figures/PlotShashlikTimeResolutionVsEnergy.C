void PlotSiPMTresEnergy()
{

gStyle->SetOptStat(0);


TFile *_file0 = TFile::Open("SiPMdata.root");



 data->Draw("1000*tree_DSB1_time_1:tree_Energy>>DSB1ch1(250,0,250,600,0,400)","");
//  TF1 *f00 = new TF1("f00","[2]/(x**0.5)+[1]/x+[0]");
// DSB1ch1->Fit(f00,"","",15,270.0);
// DSB1ch1->GetFunction("f00")->SetLineColor(kBlack); 
DSB1ch1->SetMarkerColor(kBlack);
DSB1ch1->SetMarkerStyle(8);
DSB1ch1->SetMarkerSize(1); 


 data->Draw("1000*tree_Cap_time_1:tree_Energy>>Capch1(250,0,250,600,0,400)","");
// TF1 *f0 = new TF1("f0","[2]/(x**0.5)+[1]/x+[0]");
// Capch1->Fit(f0,"","",15,270.0);
// Capch1->GetFunction("f0")->SetLineColor(kBlack); 
Capch1->SetMarkerColor(kBlack);
Capch1->SetMarkerStyle(21);
Capch1->SetMarkerSize(0.8);

 data->Draw("1000*tree_DSB1_time_2:tree_Energy>>DSB1ch2(250,0,250,600,0,400)","");
// /*TF1 *f1 = new TF1("f1","[2]/(x**0.5)+[1]/x+[0]");
// DSB1ch2->Fit(f1,"","",15,270);
// DSB1ch2->GetFunction("f1")->SetLineColor(kRed);*/
DSB1ch2->SetMarkerColor(kRed);
DSB1ch2->SetMarkerStyle(8);
DSB1ch2->SetMarkerSize(1);


data->Draw("1000*tree_Cap_time_2:tree_Energy>>Capch2(250,0,250,600,0,400)","");
// /*TF1 *f2 = new TF1("f2","[2]/(x**0.5)+[1]/x+[0]");
// Capch2->Fit(f2,"","",15,270); 
// Capch2->GetFunction("f2")->SetLineColor(kRed);*/
Capch2->SetMarkerColor(kRed);
Capch2->SetMarkerStyle(21);
Capch2->SetMarkerSize(0.8);









 data->Draw("1000*tree_DSB1_time_3:tree_Energy>>DSB1ch3(250,0,250,1200,0,800)","");
// /*TF1 *f3 = new TF1("f3","[2]/(x**0.5)+[1]/x+[0]");
// DSB1ch3->Fit(f3,"","",15,270);
// DSB1ch3->GetFunction("f3")->SetLineColor(kGreen);*/
DSB1ch3->SetMarkerColor(kGreen);
DSB1ch3->SetMarkerStyle(8);
DSB1ch3->SetMarkerSize(1);


 data->Draw("1000*tree_Cap_time_3:tree_Energy>>Capch3(250,0,250,1200,0,800)","");
// /*TF1 *f4 = new TF1("f4","[2]/(x**0.5)+[1]/x+[0]");
// Capch3->Fit(f4,"","",15,270); 
// Capch3->GetFunction("f4")->SetLineColor(kGreen);*/
Capch3->SetMarkerColor(kGreen);
Capch3->SetMarkerStyle(21);
Capch3->SetMarkerSize(0.8);






 data->Draw("1000*tree_DSB1_time_4:tree_Energy>>DSB1ch4(250,0,250,600,0,400)","");
// /*TF1 *f5 = new TF1("f5","[2]/(x**0.5)+[1]/x+[0]");
// DSB1ch4->Fit(f5,"","",15,270); 
// DSB1ch4->GetFunction("f5")->SetLineColor(kBlue);*/
DSB1ch4->SetMarkerColor(kBlue);
DSB1ch4->SetMarkerStyle(8);
DSB1ch4->SetMarkerSize(1);





 data->Draw("1000*tree_Cap_time_4:tree_Energy>>Capch4(250,0,250,600,0,400)","");
// /*TF1 *f6 = new TF1("f6","[2]/(x**0.5)+[1]/x+[0]");
// Capch4->Fit(f6,"","",15,270);  
// Capch4->GetFunction("f6")->SetLineColor(kBlue);*/
Capch4->SetMarkerColor(kBlue);
 Capch4->SetMarkerStyle(21);
Capch4->SetMarkerSize(0.8);





data->Draw("1000*tree_Y11_time_1:tree_Energy>>Y11ch1(250,0,250,600,0,400)","");
// /*TF1 *f7 = new TF1("f7","[2]/(x**0.5)+[1]/x+[0]");
// Y11ch1->Fit(f7,"","",15,270);
// Y11ch1->GetFunction("f7")->SetLineColor(kBlack);
// Y11ch1->GetFunction("f7")->SetLineStyle(2);*/
 Y11ch1->SetMarkerColor(kBlack);
Y11ch1->SetMarkerStyle(26);
Y11ch1->SetMarkerSize(1.2);






data->Draw("1000*tree_Y11_time_2:tree_Energy>>Y11ch2(250,0,250,600,0,400)","");
// /*TF1 *f8 = new TF1("f8","[2]/(x**0.5)+[1]/x+[0]");
// Y11ch2->Fit(f8,"","",15,270);
// Y11ch2->GetFunction("f8")->SetLineColor(kRed);
// Y11ch2->GetFunction("f8")->SetLineStyle(2);*/
Y11ch2->SetMarkerColor(kRed);
Y11ch2->SetMarkerStyle(26);
Y11ch2->SetMarkerSize(1.2);








data->Draw("1000*tree_Y11_time_3:tree_Energy>>Y11ch3(250,0,250,600,0,400)","");
// /*TF1 *f9 = new TF1("f9","[2]/(x**0.5)+[1]/x+[0]");
// Y11ch3->Fit(f9,"","",15,270);
// Y11ch3->GetFunction("f9")->SetLineColor(kGreen);
// Y11ch3->GetFunction("f9")->SetLineStyle(2);*/
Y11ch3->SetMarkerColor(kGreen);
Y11ch3->SetMarkerStyle(26);
Y11ch3->SetMarkerSize(1.2);








data->Draw("1000*tree_Y11_time_4:tree_Energy>>Y11ch4(250,0,250,600,0,400)","");
// /*TF1 *f10 = new TF1("f10","[2]/(x**0.5)+[1]/x+[0]");
// Y11ch4->Fit(f10,"","",15,270);
// Y11ch4->GetFunction("f10")->SetLineColor(kBlue);
// Y11ch4->GetFunction("f10")->SetLineStyle(2);*/
Y11ch4->SetMarkerColor(kBlue);
Y11ch4->SetMarkerStyle(26);
Y11ch4->SetMarkerSize(1.2);






 

 DSB1ch1->SetTitle("");
 DSB1ch1->GetXaxis()->SetTitle("Energy [GeV]");
 DSB1ch1->GetYaxis()->SetTitle("#sigma t [ps]");
 //DSB1ch1->GetXaxis()->SetLimits(0,400);
 //DSB1ch1->GetYaxis()->SetLimits(0,800);


 //*****************************
 //DSB Fiber Plot
 //*****************************

 TCanvas *c1 = new TCanvas("c1","c1", 800,600);
 c1->SetBottomMargin(0.12);
 c1->SetLeftMargin(0.12);

 DSB1ch1->GetXaxis()->SetTitleSize(0.05);
 DSB1ch1->GetXaxis()->SetLabelSize(0.05);
 DSB1ch1->GetXaxis()->SetTitleOffset(1.1);
 DSB1ch1->GetYaxis()->SetTitleSize(0.05);
 DSB1ch1->GetYaxis()->SetLabelSize(0.05);
 DSB1ch1->GetYaxis()->SetTitleOffset(1.2);
 DSB1ch1->GetYaxis()->SetLabelOffset(0.01);

 DSB1ch1->SetMarkerSize(1.4);
 DSB1ch2->SetMarkerSize(1.4);
 DSB1ch3->SetMarkerSize(1.4);
 DSB1ch4->SetMarkerSize(1.4);
 DSB1ch1->SetMarkerStyle(20);
 DSB1ch2->SetMarkerStyle(21);
 DSB1ch3->SetMarkerStyle(34);
 DSB1ch4->SetMarkerStyle(22);
 DSB1ch1->SetMarkerColor(kBlack);
 DSB1ch2->SetMarkerColor(kBlue);
 DSB1ch3->SetMarkerColor(kRed);
 DSB1ch4->SetMarkerColor(kGreen+2);

 DSB1ch1->GetYaxis()->SetRangeUser(0,400);
 DSB1ch1->Draw();
 DSB1ch2->Draw("same");
 DSB1ch3->Draw("same");
 DSB1ch4->Draw("same");


 leg = new TLegend(0.40,0.65,0.88,0.88);
 leg->SetTextSize(0.035);
 leg->SetLineColor(kBlack);
 leg->AddEntry(DSB1ch1,"SiPM 3x3 mm^{2}, 15 #mu m pitch","p");
 leg->AddEntry(DSB1ch2,"SiPM 3x3 mm^{2}, 25 #mu m pitch","p");
 leg->AddEntry(DSB1ch3,"SiPM 1x1 mm^{2}, 10 #mu m pitch","p");
 leg->AddEntry(DSB1ch4,"SiPM 1x1 mm^{2}  15 #mu m pitch","p");
 leg->Draw();

 TLatex *   tex = new TLatex(0.32, 0.93,"DSB-doped WLS fiber");
 tex->SetNDC();
 tex->SetTextSize(0.05);
 tex->Draw(); 

 c1->SaveAs("ShashlikTimeResolutionVsEnergy_DSB.pdf");
 c1->SaveAs("ShashlikTimeResolutionVsEnergy_DSB.C");

 

 //*****************************
 //Capillaries Plot
 //*****************************
 TCanvas *c2 = new TCanvas("c2","c2", 800,600);
 c2->SetBottomMargin(0.12);
 c2->SetLeftMargin(0.12);

 Capch1->GetXaxis()->SetTitleSize(0.05);
 Capch1->GetXaxis()->SetLabelSize(0.05);
 Capch1->GetXaxis()->SetTitleOffset(1.1);
 Capch1->GetYaxis()->SetTitleSize(0.05);
 Capch1->GetYaxis()->SetLabelSize(0.05);
 Capch1->GetYaxis()->SetTitleOffset(1.2);
 Capch1->GetYaxis()->SetLabelOffset(0.01);

 Capch1->SetMarkerSize(1.4);
 Capch2->SetMarkerSize(1.4);
 Capch3->SetMarkerSize(1.4);
 Capch4->SetMarkerSize(1.4);
 Capch1->SetMarkerStyle(20);
 Capch2->SetMarkerStyle(21);
 Capch3->SetMarkerStyle(34);
 Capch4->SetMarkerStyle(22);
 Capch1->SetMarkerColor(kBlack);
 Capch2->SetMarkerColor(kBlue);
 Capch3->SetMarkerColor(kRed);
 Capch4->SetMarkerColor(kGreen+2);

 Capch1->SetTitle("");
 Capch1->GetXaxis()->SetTitle("Energy [GeV]");
 Capch1->GetYaxis()->SetTitle("#sigma t [ps]");
 Capch1->GetYaxis()->SetRangeUser(0,400);
 Capch1->Draw();
 Capch2->Draw("same");  
 Capch3->Draw("same");  
 Capch4->Draw("same");
   
 leg = new TLegend(0.40,0.65,0.88,0.88);
 leg->SetTextSize(0.035);
 leg->SetLineColor(kBlack);
 leg->AddEntry(Capch1,"SiPM 3x3 mm^{2}, 15 #mu m pitch","p");
 leg->AddEntry(Capch2,"SiPM 3x3 mm^{2}, 25 #mu m pitch","p");
 leg->AddEntry(Capch3,"SiPM 1x1 mm^{2}, 10 #mu m pitch","p");
 leg->AddEntry(Capch4,"SiPM 1x1 mm^{2}  15 #mu m pitch","p");
 leg->Draw();

  
 TLatex *tex2 = new TLatex(0.35, 0.93,"Quartz Capillaries");
 tex2->SetNDC();
 tex2->SetTextSize(0.05);
 tex2->Draw(); 

 c2->SaveAs("ShashlikTimeResolutionVsEnergy_Capillaries.pdf");
 c2->SaveAs("ShashlikTimeResolutionVsEnergy_Capillaries.C");

 
}
