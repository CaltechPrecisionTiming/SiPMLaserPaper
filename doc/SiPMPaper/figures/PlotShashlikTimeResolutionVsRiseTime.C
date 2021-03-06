void PlotShashlikTimeResolutionVsRiseTime()
{

 TFile *_file0 = TFile::Open("SiPMdata.root");


 TCanvas *c1 = new TCanvas("c1","c1", 800, 600);
  gStyle->SetOptStat(0);


  //we will scale the risetime by a factor of 0.8 because Mohammed computed
  // rise time from 0 to 100% of the amplitude, while we conventionally use 
  // 10-90% of the amplitude
  int n1 =data->Draw("tree_DSB1_ch1_rise*0.8:1000*tree_DSB1_time_1","");
 TGraph *DSB1ch1 = new TGraph(n1,data->GetV1(),data->GetV2());
 DSB1ch1->SetMarkerColor(kBlack);
DSB1ch1->SetMarkerStyle(8);
DSB1ch1->SetMarkerSize(1.2);

 
  int n2 =data->Draw("tree_DSB1_ch2_rise*0.8:1000*tree_DSB1_time_2","");
 TGraph *DSB1ch2 = new TGraph(n2,data->GetV1(),data->GetV2());
DSB1ch2->SetMarkerColor(kRed);
DSB1ch2->SetMarkerStyle(8);
DSB1ch2->SetMarkerSize(1.2);


  int n3 =data->Draw("tree_DSB1_ch3_rise*0.8:1000*tree_DSB1_time_3","");
 TGraph *DSB1ch3 = new TGraph(n3,data->GetV1(),data->GetV2());
DSB1ch3->SetMarkerColor(kGreen+2);
DSB1ch3->SetMarkerStyle(8);
DSB1ch3->SetMarkerSize(1.2);
 
  int n4 =data->Draw("tree_DSB1_ch4_rise*0.8:1000*tree_DSB1_time_4","");
 TGraph *DSB1ch4 = new TGraph(n4,data->GetV1(),data->GetV2());
DSB1ch4->SetMarkerColor(kBlue);
DSB1ch4->SetMarkerStyle(8);
DSB1ch4->SetMarkerSize(1.2);
 


  int n5 =data->Draw("tree_Cap_ch1_rise*0.8:1000*tree_Cap_time_1","");
 TGraph *Capch1 = new TGraph(n5,data->GetV1(),data->GetV2()); 
Capch1->SetMarkerColor(kBlack);
Capch1->SetMarkerStyle(34);
Capch1->SetMarkerSize(1.0);



  int n6 =data->Draw("tree_Cap_ch2_rise*0.8:1000*tree_Cap_time_2","");
 TGraph *Capch2 = new TGraph(n6,data->GetV1(),data->GetV2()); 
Capch2->SetMarkerColor(kRed);
Capch2->SetMarkerStyle(34);
Capch2->SetMarkerSize(1.0);


 

  int n7 =data->Draw("tree_Cap_ch3_rise*0.8:1000*tree_Cap_time_3","");
 TGraph *Capch3 = new TGraph(n7,data->GetV1(),data->GetV2()); 
Capch3->SetMarkerColor(kGreen+2);
Capch3->SetMarkerStyle(34);
Capch3->SetMarkerSize(1.0);

 

  int n8 =data->Draw("tree_Cap_ch4_rise*0.8:1000*tree_Cap_time_4","");
 TGraph *Capch4 = new TGraph(n8,data->GetV1(),data->GetV2()); 
Capch4->SetMarkerColor(kBlue);
Capch4->SetMarkerStyle(34);
Capch4->SetMarkerSize(1.0);


// /*  int n9 =data->Draw("1000*tree_Laser_ch1_amp:tree_Laser_ch1_rise","");
//  TGraph *Laserch1 = new TGraph(n9,data->GetV1(),data->GetV2());
// Laserch1->SetMarkerColor(kMagenta);
// Laserch1->SetMarkerStyle(29);
// Laserch1->SetMarkerSize(1.3);




//   int n10 =data->Draw("1000*tree_Laser_ch4_amp:tree_Laser_ch4_rise","");
//  TGraph *Laserch4 = new TGraph(n10,data->GetV1(),data->GetV2());
// Laserch4->SetMarkerColor(kCyan+2);
// Laserch4->SetMarkerStyle(29);
// Laserch4->SetMarkerSize(1.3);

// */

 



  TMultiGraph *multi = new TMultiGraph();
  multi->Add(DSB1ch2);
    multi->Add(DSB1ch1);
    multi->Add(DSB1ch3);
    multi->Add(DSB1ch4);
    multi->Add(Capch1);
    multi->Add(Capch2);
    multi->Add(Capch3);
    multi->Add(Capch4);
    //  multi->Add(Laserch1);
    // multi->Add(Laserch4);
    multi->Draw("ap");

    multi->SetMaximum(700);
    multi->SetMinimum(0);
    multi->GetXaxis()->SetLimits(0,8);
    multi->GetXaxis()->SetLabelSize(0.04);
    multi->GetXaxis()->SetTitleSize(0.05);
    multi->GetXaxis()->SetTitleOffset(0.05);
    multi->GetYaxis()->SetLabelSize(0.04);
    multi->GetYaxis()->SetTitleSize(0.05);
    
    multi->GetXaxis()->SetTitle("Rise Time [ns]");
    multi->GetYaxis()->SetTitle("#sigma t [ps]");
    multi->GetXaxis()->SetTitleOffset(0.9);
    multi->GetYaxis()->SetTitleOffset(0.9);

   leg = new TLegend(0.13,0.55,0.4,0.88);
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);

   //leg->AddEntry(Laserch1,"Laser Ch1","p");
   //leg->AddEntry(Laserch4,"Laser Ch4","p");
   leg->AddEntry(DSB1ch1,"SiPM 3x3 mm^{2}, 15 #mu m pitch, DSB fiber","p");
   leg->AddEntry(DSB1ch2,"SiPM 3x3 mm^{2}, 25 #mu m pitch, DSB fiber","p");
   leg->AddEntry(DSB1ch3,"SiPM 1x1 mm^{2}, 10 #mu m pitch, DSB fiber","p");
   leg->AddEntry(DSB1ch4,"SiPM 1x1 mm^{2}  15 #mu m pitch, DSB fiber","p");
   leg->AddEntry(Capch1,"SiPM 3x3 mm^{2}, 15 #mu m pitch, Quartz Capillary","p");
   leg->AddEntry(Capch2,"SiPM 3x3 mm^{2}, 25 #mu m pitch, Quartz Capillary","p");
   leg->AddEntry(Capch3,"SiPM 1x1 mm^{2}, 10 #mu m pitch, Quartz Capillary","p");
   leg->AddEntry(Capch4,"SiPM 1x1 mm^{2}  15 #mu m pitch, Quartz Capillary","p");
   leg->Draw();
   c1->Update();
   c1->SaveAs("ShashlikTimeResolutionVsRiseTime.pdf");
   c1->SaveAs("ShashlikTimeResolutionVsRiseTime.C");
 TFile *_file0 = TFile::Open("SiPMdata.root");


 TCanvas *c1 = new TCanvas("c1","c1", 800, 600);
  gStyle->SetOptStat(0);


  //we will scale the risetime by a factor of 0.8 because Mohammed computed
  // rise time from 0 to 100% of the amplitude, while we conventionally use 
  // 10-90% of the amplitude
  int n1 =data->Draw("tree_DSB1_ch1_rise*0.8:1000*tree_DSB1_time_1","");
 TGraph *DSB1ch1 = new TGraph(n1,data->GetV1(),data->GetV2());
 DSB1ch1->SetMarkerColor(kBlack);
DSB1ch1->SetMarkerStyle(8);
DSB1ch1->SetMarkerSize(1.2);

 
  int n2 =data->Draw("tree_DSB1_ch2_rise*0.8:1000*tree_DSB1_time_2","");
 TGraph *DSB1ch2 = new TGraph(n2,data->GetV1(),data->GetV2());
DSB1ch2->SetMarkerColor(kRed);
DSB1ch2->SetMarkerStyle(8);
DSB1ch2->SetMarkerSize(1.2);


  int n3 =data->Draw("tree_DSB1_ch3_rise*0.8:1000*tree_DSB1_time_3","");
 TGraph *DSB1ch3 = new TGraph(n3,data->GetV1(),data->GetV2());
DSB1ch3->SetMarkerColor(kGreen+2);
DSB1ch3->SetMarkerStyle(8);
DSB1ch3->SetMarkerSize(1.2);
 
  int n4 =data->Draw("tree_DSB1_ch4_rise*0.8:1000*tree_DSB1_time_4","");
 TGraph *DSB1ch4 = new TGraph(n4,data->GetV1(),data->GetV2());
DSB1ch4->SetMarkerColor(kBlue);
DSB1ch4->SetMarkerStyle(8);
DSB1ch4->SetMarkerSize(1.2);
 


  int n5 =data->Draw("tree_Cap_ch1_rise*0.8:1000*tree_Cap_time_1","");
 TGraph *Capch1 = new TGraph(n5,data->GetV1(),data->GetV2()); 
Capch1->SetMarkerColor(kBlack);
Capch1->SetMarkerStyle(34);
Capch1->SetMarkerSize(1.2);



  int n6 =data->Draw("tree_Cap_ch2_rise*0.8:1000*tree_Cap_time_2","");
 TGraph *Capch2 = new TGraph(n6,data->GetV1(),data->GetV2()); 
Capch2->SetMarkerColor(kRed);
Capch2->SetMarkerStyle(34);
Capch2->SetMarkerSize(1.2);


 

  int n7 =data->Draw("tree_Cap_ch3_rise*0.8:1000*tree_Cap_time_3","");
 TGraph *Capch3 = new TGraph(n7,data->GetV1(),data->GetV2()); 
Capch3->SetMarkerColor(kGreen+2);
Capch3->SetMarkerStyle(34);
Capch3->SetMarkerSize(1.2);

 

  int n8 =data->Draw("tree_Cap_ch4_rise*0.8:1000*tree_Cap_time_4","");
 TGraph *Capch4 = new TGraph(n8,data->GetV1(),data->GetV2()); 
Capch4->SetMarkerColor(kBlue);
Capch4->SetMarkerStyle(34);
Capch4->SetMarkerSize(1.2);


// /*  int n9 =data->Draw("1000*tree_Laser_ch1_amp:tree_Laser_ch1_rise","");
//  TGraph *Laserch1 = new TGraph(n9,data->GetV1(),data->GetV2());
// Laserch1->SetMarkerColor(kMagenta);
// Laserch1->SetMarkerStyle(29);
// Laserch1->SetMarkerSize(1.3);




//   int n10 =data->Draw("1000*tree_Laser_ch4_amp:tree_Laser_ch4_rise","");
//  TGraph *Laserch4 = new TGraph(n10,data->GetV1(),data->GetV2());
// Laserch4->SetMarkerColor(kCyan+2);
// Laserch4->SetMarkerStyle(29);
// Laserch4->SetMarkerSize(1.3);

// */

 



  TMultiGraph *multi = new TMultiGraph();
  multi->Add(DSB1ch2);
     multi->Add(DSB1ch1);
    multi->Add(DSB1ch3);
    multi->Add(DSB1ch4);
     multi->Add(Capch1);
    multi->Add(Capch2);
    multi->Add(Capch3);
    multi->Add(Capch4);
    //  multi->Add(Laserch1);
    // multi->Add(Laserch4);
    multi->Draw("ap");

    // multi->SetMaximum(1700);
    multi->SetMaximum(700);
    multi->SetMinimum(0);
    multi->GetXaxis()->SetLimits(0,8);
    multi->GetXaxis()->SetLabelSize(0.04);
    multi->GetXaxis()->SetTitleSize(0.05);
    multi->GetXaxis()->SetTitleOffset(0.05);
    multi->GetYaxis()->SetLabelSize(0.04);
    multi->GetYaxis()->SetTitleSize(0.05);
    
    multi->GetXaxis()->SetTitle("Rise Time [ns]");
    multi->GetYaxis()->SetTitle("#sigma t [ps]");
    multi->GetXaxis()->SetTitleOffset(0.9);
    multi->GetYaxis()->SetTitleOffset(0.9);

   leg = new TLegend(0.13,0.55,0.4,0.88);
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);

   //leg->AddEntry(Laserch1,"Laser Ch1","p");
   //leg->AddEntry(Laserch4,"Laser Ch4","p");
   leg->AddEntry(DSB1ch1,"SiPM 3x3 mm^{2}, 15 #mu m pitch, DSB fiber","p");
   leg->AddEntry(DSB1ch2,"SiPM 3x3 mm^{2}, 25 #mu m pitch, DSB fiber","p");
   leg->AddEntry(DSB1ch3,"SiPM 1x1 mm^{2}, 10 #mu m pitch, DSB fiber","p");
   leg->AddEntry(DSB1ch4,"SiPM 1x1 mm^{2}  15 #mu m pitch, DSB fiber","p");
   leg->AddEntry(Capch1,"SiPM 3x3 mm^{2}, 15 #mu m pitch, Quartz Capillary","p");
   leg->AddEntry(Capch2,"SiPM 3x3 mm^{2}, 25 #mu m pitch, Quartz Capillary","p");
   leg->AddEntry(Capch3,"SiPM 1x1 mm^{2}, 10 #mu m pitch, Quartz Capillary","p");
   leg->AddEntry(Capch4,"SiPM 1x1 mm^{2}  15 #mu m pitch, Quartz Capillary","p");
   leg->Draw();
   c1->Update();
   c1->SaveAs("ShashlikTimeResolutionVsRiseTime.pdf");
   c1->SaveAs("ShashlikTimeResolutionVsRiseTime.C");
}
