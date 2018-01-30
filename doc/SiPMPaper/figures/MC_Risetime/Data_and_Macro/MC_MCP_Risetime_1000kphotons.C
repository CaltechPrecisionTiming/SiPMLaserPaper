{
 	gROOT->SetBatch();
  gRandom->SetSeed(0);
  int NumPhotons=1000000; //Number of Photons
  int NumPixel=10000;//Number of Pixels which will be hit randomly 
	 int DeadTime=5*5;//5ns, which becomes 25 in units of bins
        TRandom3 rnd;
      rnd.SetSeed(0);
      double r=0;//temporary variable

   TH1F *h_MC= new TH1F("h_MC","Toy MC from MCP average pulse",1024,0,1024);//random pulse shape deriven from MCP shape

   TH2F *hist = new TH2F ("hist", "", NumPixel, 0, NumPixel, 1024, 0, 1024);//Pixels vs time (2D)
   TH2F *histV2 = new TH2F ("histV2", "", NumPixel, 0, NumPixel, 1024, 0, 1024);//Pixels vs time, dead time included (2D)

   TH1F *SiPM_Output_Pulse= new TH1F("SiPM_Output_Pulse","The MC pulse, dead time included",1024,0,1024);//Final SiPM 1D pulse(deadtime included)



   
   TH1F *h_MC_stat= new TH1F("h_MC_stat","",100,0,10);//hist of rise times by running the macro many(kk=100) times in a loop.(deadtime NOT included) 
   TH1F *h_SiPM_Output_Pulse_stat= new TH1F("h_SiPM_Output_Pulse_stat","",100,0,10);//hist of rise times by running the macro many(kk=100) times in a loop.(deadtime included) 

   


   
   
  //---------------getting average pulse from MCP 32 GeV and fill h_avg histogram with it------------- 
   TFile f4("sum32MCP.root","read");
   TH1F *h_avg;
  c1 = (TCanvas*)f4.Get("canv111");
  h_avg = (TH1F*)c1->GetPrimitive("sum");

  for(int i=1;i<75;i++)
    h_avg->SetBinContent(i,0);
  
  for(int i=820;i<1024;i++)
       h_avg->SetBinContent(i+1,exp(7.01884e-01-5.07216e-03*i));
h_avg->Scale(1.0/h_avg->Integral());
  //------------------------------------------------------------------------------------------------


 Float_t TenPercent_h_MC=0;
 Float_t SixtyPercent_h_MC=0;
Float_t TenPercent_SiPM_Output_Pulse=0;
 Float_t SixtyPercent_SiPM_Output_Pulse=0;


 for (int kk=0;kk<100;kk++)
   {
cout<<"kk="<<kk<<endl;


   TenPercent_h_MC=0;
SixtyPercent_h_MC=0;
  TenPercent_SiPM_Output_Pulse=0;
 SixtyPercent_SiPM_Output_Pulse=0;


 hist->Reset();
 histV2->Reset();
 h_MC->Reset();
 SiPM_Output_Pulse->Reset();




 for(int i=0;i<NumPhotons;i++)
   { r=h_avg->GetRandom();
     h_MC->Fill (r);}




  
 cout<<"integral="<<h_MC->Integral()<<endl;


   
 //2D view
 for (int i=0;i<1024;i++)
   for(int j=0; j<h_MC->GetBinContent(i+1); j++)
     hist->Fill (rnd.Uniform (NumPixel),i);

 cout<<"hist_integral="<<hist->Integral()<<endl;





//2D view, dead time included
   for(int j=0; j<NumPixel; j++)
for (int i=0;i<1024;i++)
  if(hist->GetBinContent(j+1,i+1)>0)
    {     histV2->SetBinContent(j+1,i+1,1);
      i=i+DeadTime;//HERE WE INCLUDE DEADTIME
    }
   


 cout<<"histV2_integral="<<histV2->Integral()<<endl;


 //output pulse
for (int i=0;i<1024;i++)
     for(int j=0; j<NumPixel; j++)       
       SiPM_Output_Pulse->Fill(i,histV2->GetBinContent(j+1,i+1));




//bin for 10% of the amplitude after rise time 
for(int i=90; i<=300;i++)
{
  if(  (SiPM_Output_Pulse->GetBinContent(i))>0.1*(  SiPM_Output_Pulse->GetMaximum()  )  )
{ TenPercent_SiPM_Output_Pulse=i-1;
break;}
}

//bin for 60% of the amplitude after rise time 
for(int i=90; i<=300;i++)
{
  if(  (SiPM_Output_Pulse->GetBinContent(i))>0.6*(  SiPM_Output_Pulse->GetMaximum()  )  )
{ SixtyPercent_SiPM_Output_Pulse=i-1;
break;}
}

SiPM_Output_Pulse->Fit("pol1","Q","",TenPercent_SiPM_Output_Pulse,SixtyPercent_SiPM_Output_Pulse);





 

//bin for 10% of the amplitude after rise time 
for(int i=90; i<=300;i++)
{
  if(  (h_MC->GetBinContent(i))>0.1*(  h_MC->GetMaximum()  )  )
{ TenPercent_h_MC=i-1;
break;}
}

//bin for 60% of the amplitude after rise time 
for(int i=90; i<=300;i++)
{
  if(  (h_MC->GetBinContent(i))>0.6*(  h_MC->GetMaximum()  )  )
{ SixtyPercent_h_MC=i-1;
break;}
}

h_MC->Fit("pol1","Q","",TenPercent_h_MC,SixtyPercent_h_MC);

 



 h_MC_stat->Fill(0.2*h_MC->GetMaximum()/h_MC->GetFunction("pol1")->GetParameter(1));

 h_SiPM_Output_Pulse_stat->Fill(0.2*SiPM_Output_Pulse->GetMaximum()/SiPM_Output_Pulse->GetFunction("pol1")->GetParameter(1));


   }




 //TCanvas *canv10 =new TCanvas("canv10","canv10",600,400);
 //h_MC_stat->Draw();
 //canv10->Print("h_MC_stat.root");//Risetime statistics (deadtime NOT included)

 TCanvas *canv11 =new TCanvas("canv11","canv11",600,400);
 h_SiPM_Output_Pulse_stat->Draw();
 canv11->Print("Risetime_stat_Deadtime_Included_1000k.root");//Risetime statistics (deadtime included)










   
}
