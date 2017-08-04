void PlotSiPMTres()
{

gStyle->SetOptStat(0);


TFile *_file0 = TFile::Open("SiPMdata.root");



 data->Draw("1000*tree_DSB1_time_1:tree_DSB1_ch1_amp>>ch1(1800,0,400,600,0,400)","");//DSB+CAP
 data->Draw("1000*tree_DSB1_time_1:tree_DSB1_ch1_amp>>DSB1ch1(1800,0,400,600,0,400)","");
 data->Draw("1000*tree_Cap_time_1:tree_Cap_ch1_amp>>Capch1(1800,0,400,600,0,400)","");
 ch1->Add(Capch1);
TF1 *f1 = new TF1("f1","[2]/(x**0.5)+[1]/x+[0]");
ch1->Fit(f1,"","",10,40.0);
ch1->GetFunction("f1")->SetLineColor(kBlack);

DSB1ch1->SetMarkerColor(kBlack);
DSB1ch1->SetMarkerStyle(8);
DSB1ch1->SetMarkerSize(1); 
 DSB1ch1->GetXaxis()->SetTitleSize(0.05);
 DSB1ch1->GetXaxis()->SetLabelSize(0.04);
 DSB1ch1->GetXaxis()->SetTitleOffset(0.9);
 DSB1ch1->GetYaxis()->SetTitleSize(0.05);
 DSB1ch1->GetYaxis()->SetLabelSize(0.04);
 DSB1ch1->GetYaxis()->SetTitleOffset(0.9);



Capch1->SetMarkerColor(kBlack);
Capch1->SetMarkerStyle(34);
Capch1->SetMarkerSize(1.2);




 data->Draw("1000*tree_DSB1_time_2:tree_DSB1_ch2_amp>>ch2(1800,0,400,600,0,400)","");//DSB+CAP
 data->Draw("1000*tree_DSB1_time_2:tree_DSB1_ch2_amp>>DSB1ch2(1800,0,400,600,0,400)","");
 data->Draw("1000*tree_Cap_time_2:tree_Cap_ch2_amp>>Capch2(1800,0,400,600,0,400)","");
 ch2->Add(Capch2);
TF1 *f2 = new TF1("f2","[2]/(x**0.5)+[1]/x+[0]");
ch2->Fit(f2,"","",20,400);
ch2->GetFunction("f2")->SetLineColor(kRed);

DSB1ch2->SetMarkerColor(kRed);
DSB1ch2->SetMarkerStyle(8);
DSB1ch2->SetMarkerSize(1);

Capch2->SetMarkerColor(kRed);
Capch2->SetMarkerStyle(34);
Capch2->SetMarkerSize(1.2);




 data->Draw("1000*tree_DSB1_time_3:tree_DSB1_ch3_amp>>ch3(1800,0,400,1200,0,800)","");//DSB+CAP
 data->Draw("1000*tree_DSB1_time_3:tree_DSB1_ch3_amp>>DSB1ch3(1800,0,400,1200,0,800)","");
 data->Draw("1000*tree_Cap_time_3:tree_Cap_ch3_amp>>Capch3(1800,0,400,1200,0,800)","");
 ch3->Add(Capch3);
TF1 *f3 = new TF1("f3","[2]/(x**0.5)+[1]/x+[0]");
ch3->Fit(f3,"","",10,100);
ch3->GetFunction("f3")->SetLineColor(kGreen);

DSB1ch3->SetMarkerColor(kGreen);
DSB1ch3->SetMarkerStyle(8);
DSB1ch3->SetMarkerSize(1);
 
Capch3->SetMarkerColor(kGreen);
Capch3->SetMarkerStyle(34);
Capch3->SetMarkerSize(1.2);



 data->Draw("1000*tree_DSB1_time_4:tree_DSB1_ch4_amp>>ch4(1800,0,400,600,0,400)","");//DSB+CAP
 data->Draw("1000*tree_DSB1_time_4:tree_DSB1_ch4_amp>>DSB1ch4(1800,0,400,600,0,400)","");
 data->Draw("1000*tree_Cap_time_4:tree_Cap_ch4_amp>>Capch4(1800,0,400,600,0,400)","");
 ch4->Add(Capch4);
TF1 *f4 = new TF1("f4","[2]/(x**0.5)+[1]/x+[0]");
ch4->Fit(f4,"","",25,300);
ch4->GetFunction("f4")->SetLineColor(kBlue);

DSB1ch4->SetMarkerColor(kBlue);
DSB1ch4->SetMarkerStyle(8);
DSB1ch4->SetMarkerSize(1);
 
Capch4->SetMarkerColor(kBlue);
Capch4->SetMarkerStyle(34);
Capch4->SetMarkerSize(1.2);




 data->Draw("1000*tree_Laser_time:1000*tree_Laser_ch1_amp>>Laserch1(1800,0,400,600,0,400)","");
TF1 *f5 = new TF1("f5","[2]/(x**0.5)+[1]/x+[0]");
Laserch1->Fit(f5,"","",5,60);
Laserch1->GetFunction("f5")->SetLineColor(kMagenta);

Laserch1->SetMarkerColor(kMagenta);
Laserch1->SetMarkerStyle(29);
Laserch1->SetMarkerSize(1.3);


data->Draw("1000*tree_Laser_time:1000*tree_Laser_ch4_amp>>Laserch4(1800,0,400,600,0,400)","");
TF1 *f6 = new TF1("f6","[2]/(x**0.5)+[1]/x+[0]");
Laserch4->Fit(f6,"","",20,255);
Laserch4->GetFunction("f6")->SetLineColor(kCyan+2);

Laserch4->SetMarkerColor(kCyan+2);
Laserch4->SetMarkerStyle(29);
Laserch4->SetMarkerSize(1.3);


data->Draw("1000*tree_Y11_time_1:tree_Y11_ch1_amp>>Y11ch1(1800,0,400,600,0,400)","");
TF1 *f7 = new TF1("f7","[2]/(x**0.5)+[1]/x+[0]");
Y11ch1->Fit(f7,"","",15,40);
Y11ch1->GetFunction("f7")->SetLineColor(kBlack);
Y11ch1->GetFunction("f7")->SetLineStyle(2);
Y11ch1->SetMarkerStyle(26);
Y11ch1->SetMarkerSize(1.2);






data->Draw("1000*tree_Y11_time_2:tree_Y11_ch2_amp>>Y11ch2(2250,0,500,600,0,400)","");
TF1 *f8 = new TF1("f8","[2]/(x**0.5)+[1]/x+[0]");
Y11ch2->Fit(f8,"","",150,520);
Y11ch2->GetFunction("f8")->SetLineColor(kRed);
Y11ch2->GetFunction("f8")->SetLineStyle(2);
Y11ch2->SetMarkerColor(kRed);
Y11ch2->SetMarkerStyle(26);
Y11ch2->SetMarkerSize(1.2);








data->Draw("1000*tree_Y11_time_3:tree_Y11_ch3_amp>>Y11ch3(1800,0,400,600,0,400)","");
TF1 *f9 = new TF1("f9","[2]/(x**0.5)+[1]/x+[0]");
Y11ch3->Fit(f9,"","",15,85);
Y11ch3->GetFunction("f9")->SetLineColor(kGreen);
Y11ch3->GetFunction("f9")->SetLineStyle(2);
Y11ch3->SetMarkerColor(kGreen);
Y11ch3->SetMarkerStyle(26);
Y11ch3->SetMarkerSize(1.2);








data->Draw("1000*tree_Y11_time_4:tree_Y11_ch4_amp>>Y11ch4(1800,0,400,600,0,400)","");
TF1 *f10 = new TF1("f10","[2]/(x**0.5)+[1]/x+[0]");
Y11ch4->Fit(f10,"","",50,260);
Y11ch4->GetFunction("f10")->SetLineColor(kBlue);
Y11ch4->GetFunction("f10")->SetLineStyle(2);
Y11ch4->SetMarkerColor(kBlue);
Y11ch4->SetMarkerStyle(26);
Y11ch4->SetMarkerSize(1.2);






 

 
ch1->SetMarkerColor(kBlack);
ch2->SetMarkerColor(kRed);
ch3->SetMarkerColor(kGreen);
ch4->SetMarkerColor(kBlue);
 



 DSB1ch1->SetTitle("");
 DSB1ch1->GetXaxis()->SetTitle("Amplitude [mV]");
 DSB1ch1->GetYaxis()->SetTitle("#sigma t [ps]");
 //DSB1ch1->GetXaxis()->SetLimits(0,400);
 //DSB1ch1->GetYaxis()->SetLimits(0,800);


   TCanvas *c1 = new TCanvas("c1","c1"); 
 DSB1ch1->Draw();
 Capch1->Draw("same");
 ch1->Draw("same");
  f1->Draw("same");
  
 DSB1ch2->Draw("same");
 Capch2->Draw("same");
 ch2->Draw("same");
  f2->Draw("same");
  
 DSB1ch3->Draw("same");
 Capch3->Draw("same");
 ch3->Draw("same");
  f3->Draw("same");
  
 DSB1ch4->Draw("same");
 Capch4->Draw("same");
 ch4->Draw("same");
  f4->Draw("same");

  //  Laserch1->Draw("same");
  //Laserch4->Draw("same");


  
leg = new TLegend(0.4,0.45,0.83,0.85);
leg->SetLineColor(kWhite);
 leg->SetTextSize(0.04);
//leg->AddEntry(Laserch1,"Laser Ch1","p");
//leg->AddEntry(Laserch4,"Laser Ch4","p"); 
leg->AddEntry(DSB1ch1,"ch1, SiPM L1(15 mu), DSB","p");
leg->AddEntry(DSB1ch2,"ch2, SiPM L2(25 mu), DSB","p");
leg->AddEntry(DSB1ch3,"ch3, SiPM S2(10 mu), DSB","p");
leg->AddEntry(DSB1ch4,"ch4, SiPM S1(15 mu), DSB","p");
leg->AddEntry(Capch1,"ch1, SiPM L1(15 mu), CAP","p");
leg->AddEntry(Capch2,"ch2, SiPM L2(25 mu), CAP","p");
leg->AddEntry(Capch3,"ch3, SiPM S2(10 mu), CAP","p");
leg->AddEntry(Capch4,"ch4, SiPM S1(15 mu), CAP","p");

  



  
leg->Draw();
        c1->Update();
   c1->SaveAs("ShashlikTimeResolution.pdf");
   c1->SaveAs("ShashlikTimeResolution.C");


// leg->AddEntry(Y11ch1,"ch1, SiPM L1(15 mu), Y11","p");   
// leg->AddEntry(Y11ch2,"ch2, SiPM L2(25 mu), Y11","p");   
// leg->AddEntry(Y11ch3,"ch3, SiPM S2(10 mu),Y11","p");   
// leg->AddEntry(Y11ch4,"ch4, SiPM S1(15 mu),Y11","p");   



 

//   Y11ch1->Draw("same"); 
//   Y11ch2->Draw("same"); 
//   Y11ch3->Draw("same"); 
//   Y11ch4->Draw("same");
//   c1->SaveAs("SiPMTres(+Y11).pdf");
 
}
