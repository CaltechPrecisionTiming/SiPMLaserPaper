#include <TH1.h>
//#include <TLine.h>


void Graph(){


   const Int_t size = 10;

   double NumPhotons[size];
   double Risetime[size];
   double Risetime_Err[size];
   Double_t Zero[size];
   for(int i=0;i<size;i++)
     Zero[i]=0;

   

NumPhotons[0]=20000; 
NumPhotons[1]=50000; 
NumPhotons[2]=100000; 
NumPhotons[3]=150000; 
NumPhotons[4]=200000; 
NumPhotons[5]=300000; 
NumPhotons[6]=400000; 
NumPhotons[7]=500000; 
NumPhotons[8]=700000; 
NumPhotons[9]=1000000; 




   TFile f20("Data_and_Macro/Risetime_stat_Deadtime_Included_20k.root","read");
   TH1F *h1;
  c1 = (TCanvas*)f20.Get("canv11");
  h1 = (TH1F*)c1->GetPrimitive("h_SiPM_Output_Pulse_stat");
  h1->Fit("gaus","","");
  Risetime[0]=h1->GetFunction("gaus")->GetParameter(1);
  Risetime_Err[0]=h1->GetFunction("gaus")->GetParameter(2);
  f20.Close();
  h1->Reset();
  delete c1;

   TFile f50("Data_and_Macro/Risetime_stat_Deadtime_Included_50k.root","read");
   TH1F *h1;
  c1 = (TCanvas*)f50.Get("canv11");
  h1 = (TH1F*)c1->GetPrimitive("h_SiPM_Output_Pulse_stat");
  h1->Fit("gaus","","");
  Risetime[1]=h1->GetFunction("gaus")->GetParameter(1);
  Risetime_Err[1]=h1->GetFunction("gaus")->GetParameter(2);
  f50.Close();
  h1->Reset();
  delete c1;

   TFile f100("Data_and_Macro/Risetime_stat_Deadtime_Included_100k.root","read");
   TH1F *h1;
  c1 = (TCanvas*)f100.Get("canv11");
  h1 = (TH1F*)c1->GetPrimitive("h_SiPM_Output_Pulse_stat");
  h1->Fit("gaus","","");
  Risetime[2]=h1->GetFunction("gaus")->GetParameter(1);
  Risetime_Err[2]=h1->GetFunction("gaus")->GetParameter(2);
  f100.Close();
  h1->Reset();
  delete c1;

   TFile f150("Data_and_Macro/Risetime_stat_Deadtime_Included_150k.root","read");
   TH1F *h1;
  c1 = (TCanvas*)f150.Get("canv11");
  h1 = (TH1F*)c1->GetPrimitive("h_SiPM_Output_Pulse_stat");
  h1->Fit("gaus","","");
  Risetime[3]=h1->GetFunction("gaus")->GetParameter(1);
  Risetime_Err[3]=h1->GetFunction("gaus")->GetParameter(2);
  f150.Close();
  h1->Reset();
  delete c1;

   TFile f200("Data_and_Macro/Risetime_stat_Deadtime_Included_200k.root","read");
   TH1F *h1;
  c1 = (TCanvas*)f200.Get("canv11");
  h1 = (TH1F*)c1->GetPrimitive("h_SiPM_Output_Pulse_stat");
  h1->Fit("gaus","","");
  Risetime[4]=h1->GetFunction("gaus")->GetParameter(1);
  Risetime_Err[4]=h1->GetFunction("gaus")->GetParameter(2);
  f200.Close();
  h1->Reset();
  delete c1;

   TFile f300("Data_and_Macro/Risetime_stat_Deadtime_Included_300k.root","read");
   TH1F *h1;
  c1 = (TCanvas*)f300.Get("canv11");
  h1 = (TH1F*)c1->GetPrimitive("h_SiPM_Output_Pulse_stat");
  h1->Fit("gaus","","");
  Risetime[5]=h1->GetFunction("gaus")->GetParameter(1);
  Risetime_Err[5]=h1->GetFunction("gaus")->GetParameter(2);
  f300.Close();
  h1->Reset();
  delete c1;

   TFile f400("Data_and_Macro/Risetime_stat_Deadtime_Included_400k.root","read");
   TH1F *h1;
  c1 = (TCanvas*)f400.Get("canv11");
  h1 = (TH1F*)c1->GetPrimitive("h_SiPM_Output_Pulse_stat");
  h1->Fit("gaus","","");
  Risetime[6]=h1->GetFunction("gaus")->GetParameter(1);
  Risetime_Err[6]=h1->GetFunction("gaus")->GetParameter(2);
  f400.Close();
  h1->Reset();
  delete c1;

   TFile f500("Data_and_Macro/Risetime_stat_Deadtime_Included_500k.root","read");
   TH1F *h1;
  c1 = (TCanvas*)f500.Get("canv11");
  h1 = (TH1F*)c1->GetPrimitive("h_SiPM_Output_Pulse_stat");
  h1->Fit("gaus","","");
  Risetime[7]=h1->GetFunction("gaus")->GetParameter(1);
  Risetime_Err[7]=h1->GetFunction("gaus")->GetParameter(2);
  f500.Close();
  h1->Reset();
  delete c1;

   TFile f700("Data_and_Macro/Risetime_stat_Deadtime_Included_700k.root","read");
   TH1F *h1;
  c1 = (TCanvas*)f700.Get("canv11");
  h1 = (TH1F*)c1->GetPrimitive("h_SiPM_Output_Pulse_stat");
  h1->Fit("gaus","","");
  Risetime[8]=h1->GetFunction("gaus")->GetParameter(1);
  Risetime_Err[8]=h1->GetFunction("gaus")->GetParameter(2);
  f700.Close();
  h1->Reset();
  delete c1;

   TFile f1000("Data_and_Macro/Risetime_stat_Deadtime_Included_1000k.root","read");
   TH1F *h1;
  c1 = (TCanvas*)f1000.Get("canv11");
  h1 = (TH1F*)c1->GetPrimitive("h_SiPM_Output_Pulse_stat");
  h1->Fit("gaus","","");
  Risetime[9]=h1->GetFunction("gaus")->GetParameter(1);
  Risetime_Err[9]=h1->GetFunction("gaus")->GetParameter(2);
  f1000.Close();
  h1->Reset();
  delete c1;




   TGraph *gt2 = new TGraphErrors( size, NumPhotons, Risetime, Zero ,Risetime_Err  );

   gt2->SetTitle("");
   gt2->GetXaxis()->SetTitle("Number of Incident Photons");
   gt2->GetYaxis()->SetTitle("Rise Time [ns]");
   gt2->SetMarkerStyle(8);
   gt2->SetMarkerSize(1.2);
   gt2->SetDrawOption("AP");
   gt2->SetLineColor(kBlack);
   gt2->SetMarkerColor(kBlack);   
   gt2->SetLineWidth(2);
   gt2->SetFillStyle(0);
   gt2->SetMinimum(0);
   gt2->SetMaximum(4.5);


 

 
   
   TCanvas *c3 = new TCanvas("c3","c3",800, 800);
   c3->SetLeftMargin(0.15);
   c3->SetBottomMargin(0.12);
   gt2->Draw("AP");
   gt2->GetXaxis()->SetTitleSize(0.05);
   gt2->GetYaxis()->SetTitleSize(0.05);
   gt2->GetXaxis()->SetLabelSize(0.04);
   gt2->GetYaxis()->SetLabelSize(0.04);
   gt2->GetYaxis()->SetTitleOffset(1.35);
   gt2->GetYaxis()->SetLabelOffset(0.02);

   TLatex *tex2 = new TLatex(0.35, 0.93,"Simulation");
   tex2->SetNDC();
   tex2->SetTextSize(0.05);
   tex2->Draw(); 

   TLatex *tex3 = new TLatex(0.35, 0.80,"We simulate scintillation light");
   tex3->SetNDC();
   tex3->SetTextSize(0.03);
   tex3->Draw(); 
   TLatex *tex4 = new TLatex(0.35, 0.75,"pulses with 3 ns risetime impinging");
   tex4->SetNDC();
   tex4->SetTextSize(0.03);
   tex4->Draw(); 
   TLatex *tex5 = new TLatex(0.35, 0.70,"on a 1x1 mm^{2} SiPM with 10 micron");
   tex5->SetNDC();
   tex5->SetTextSize(0.03);
   tex5->Draw(); 
   TLatex *tex6 = new TLatex(0.35, 0.65,"pixels and 5 ns deadtime for each pixel");
   tex6->SetNDC();
   tex6->SetTextSize(0.03);
   tex6->Draw(); 

   c3->Print("RisetimeSimulation.pdf");


}
