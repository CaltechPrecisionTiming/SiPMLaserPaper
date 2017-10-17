#define treeSiPMData_cxx
#include "treeSiPMData.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include "TMultiGraph.h"
#include "TGraphErrors.h"
#include <TLegend.h>
#include "TLatex.h"


void treeSiPMData::Loop()
{
//   In a ROOT session, you can do:
//      Root > .L treeSiPMData.C
//      Root > treeSiPMData t
//      Root > t.GetEntry(12); // Fill t data members with entry number 12
//      Root > t.Show();       // Show values of entry 12
//      Root > t.Show(16);     // Read and show values of entry 16
//      Root > t.Loop();       // Loop on all entries
//

//     This is the loop skeleton where:
//    jentry is the global entry number in the chain
//    ientry is the entry number in the current Tree
//  Note that the argument to GetEntry must be:
//    jentry for TChain::GetEntry
//    ientry for TTree::GetEntry and TBranch::GetEntry
//
//       To read only selected branches, Insert statements like:
// METHOD1:
//    fChain->SetBranchStatus("*",0);  // disable all branches
//    fChain->SetBranchStatus("branchname",1);  // activate branchname
// METHOD2: replace line
//    fChain->GetEntry(jentry);       //read all branches
//by  b_branchname->GetEntry(ientry); //read only this branch
   if (fChain == 0) return;


const Int_t size=4;



Double_t   DSB1_time_1[size];
Double_t   DSB1_time_2[size];
Double_t   DSB1_time_3[size];
Double_t   DSB1_time_4[size];
Double_t   DSB1_time_1_2_3_4[size];

Double_t   DSB1_time_1_err[size];
Double_t   DSB1_time_2_err[size];
Double_t   DSB1_time_3_err[size];
Double_t   DSB1_time_4_err[size];
Double_t   DSB1_time_1_2_3_4_err[size];




Double_t   Cap_time_1[size];
Double_t   Cap_time_2[size];
Double_t   Cap_time_3[size];
Double_t   Cap_time_4[size];
Double_t   Cap_time_1_2_3_4[size];

Double_t   Cap_time_1_err[size];
Double_t   Cap_time_2_err[size];
Double_t   Cap_time_3_err[size];
Double_t   Cap_time_4_err[size];
Double_t   Cap_time_1_2_3_4_err[size];



Double_t   Energy[size];


 Double_t Zero[size];
   for(int i=0;i<size;i++)
     Zero[i]=0;

   

   Long64_t nentries = fChain->GetEntriesFast();

   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;

      if(jentry>0){//tp avoid reporting of 20GeV results in the plot
      DSB1_time_1[jentry-1]=1000*tree_DSB1_time_1;
      DSB1_time_2[jentry-1]=1000*tree_DSB1_time_2;
      DSB1_time_3[jentry-1]=1000*tree_DSB1_time_3;
      DSB1_time_4[jentry-1]=1000*tree_DSB1_time_4;
      DSB1_time_1_2_3_4[jentry-1]=1000*tree_DSB1_time_1_2_3_4;

      DSB1_time_1_err[jentry-1]=1000*tree_DSB1_time_1_err;
      DSB1_time_2_err[jentry-1]=1000*tree_DSB1_time_2_err;
      DSB1_time_3_err[jentry-1]=1000*tree_DSB1_time_3_err;
      DSB1_time_4_err[jentry-1]=1000*tree_DSB1_time_4_err;
      DSB1_time_1_2_3_4_err[jentry-1]=1000*tree_DSB1_time_1_2_3_4_err;

      Cap_time_1[jentry-1]=1000*tree_Cap_time_1;
      Cap_time_2[jentry-1]=1000*tree_Cap_time_2;
      Cap_time_3[jentry-1]=1000*tree_Cap_time_3;
      Cap_time_4[jentry-1]=1000*tree_Cap_time_4;
      Cap_time_1_2_3_4[jentry-1]=1000*tree_Cap_time_1_2_3_4;

      Cap_time_1_err[jentry-1]=1000*tree_Cap_time_1_err;
      Cap_time_2_err[jentry-1]=1000*tree_Cap_time_2_err;
      Cap_time_3_err[jentry-1]=1000*tree_Cap_time_3_err;
      Cap_time_4_err[jentry-1]=1000*tree_Cap_time_4_err;
      Cap_time_1_2_3_4_err[jentry-1]=1000*tree_Cap_time_1_2_3_4_err;

      Energy[jentry-1]=tree_Energy;
      }
   }








   
 //*****************************
 //DSB Fiber Plot
 //*****************************

 TMultiGraph *multi1 = new TMultiGraph("multi1","");


 TGraph *DSB1ch1 = new TGraphErrors( size, Energy, DSB1_time_1, Zero ,DSB1_time_1_err  );
 TGraph *DSB1ch2 = new TGraphErrors( size, Energy, DSB1_time_2, Zero ,DSB1_time_2_err  );
 TGraph *DSB1ch3 = new TGraphErrors( size, Energy, DSB1_time_3, Zero ,DSB1_time_3_err  );
 TGraph *DSB1ch4 = new TGraphErrors( size, Energy, DSB1_time_4, Zero ,DSB1_time_4_err  );






 TCanvas *c1 = new TCanvas("c1","c1", 800,600);
 c1->SetBottomMargin(0.12);
 c1->SetLeftMargin(0.12);


 DSB1ch1->SetMarkerSize(1.4);
 DSB1ch2->SetMarkerSize(1.4);
 DSB1ch3->SetMarkerSize(1.4);
 DSB1ch4->SetMarkerSize(1.4);
 DSB1ch1->SetMarkerStyle(20);
 DSB1ch2->SetMarkerStyle(21);
 DSB1ch3->SetMarkerStyle(34);
 DSB1ch4->SetMarkerStyle(22);
 DSB1ch1->SetMarkerColor(kBlack);
 DSB1ch1->SetLineColor(kBlack);
 DSB1ch1->SetLineWidth(2);
 DSB1ch2->SetMarkerColor(kBlue);
 DSB1ch2->SetLineColor(kBlue);
 DSB1ch2->SetLineWidth(2);
 DSB1ch3->SetMarkerColor(kRed);
 DSB1ch3->SetLineColor(kRed);
 DSB1ch3->SetLineWidth(2);
 DSB1ch4->SetMarkerColor(kGreen+2);
 DSB1ch4->SetLineColor(kGreen+2);
 DSB1ch4->SetLineWidth(2);



   multi1->Add( DSB1ch1 );
   multi1->Add( DSB1ch2 );
   multi1->Add( DSB1ch3 );
   multi1->Add( DSB1ch4 );



   multi1->Draw("AP");
   multi1->GetYaxis()->SetRangeUser(0,200);
   multi1->GetXaxis()->SetLimits(0,250);

 multi1->SetTitle("");
 multi1->GetXaxis()->SetTitle("Energy [GeV]");
 multi1->GetYaxis()->SetTitle("#sigma t [ps]");


 multi1->GetXaxis()->SetTitleSize(0.05);
 multi1->GetXaxis()->SetLabelSize(0.05);
 multi1->GetXaxis()->SetTitleOffset(1.1);
 multi1->GetYaxis()->SetTitleSize(0.05);
 multi1->GetYaxis()->SetLabelSize(0.05);
 multi1->GetYaxis()->SetTitleOffset(1.2);
 multi1->GetYaxis()->SetLabelOffset(0.01);





 
 TLegend *leg = new TLegend(0.40,0.65,0.88,0.88);
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
 //Capillaries Fiber Plot
 //*****************************

 TMultiGraph *multi2 = new TMultiGraph("multi2","");


 TGraph *Capch1 = new TGraphErrors( size, Energy, Cap_time_1, Zero ,Cap_time_1_err  );
 TGraph *Capch2 = new TGraphErrors( size, Energy, Cap_time_2, Zero ,Cap_time_2_err  );
 TGraph *Capch3 = new TGraphErrors( size, Energy, Cap_time_3, Zero ,Cap_time_3_err  );
 TGraph *Capch4 = new TGraphErrors( size, Energy, Cap_time_4, Zero ,Cap_time_4_err  );


TCanvas *c2 = new TCanvas("c2","c2", 800,600);
 c2->SetBottomMargin(0.12);
 c2->SetLeftMargin(0.12);


 Capch1->SetMarkerSize(1.4);
 Capch2->SetMarkerSize(1.4);
 Capch3->SetMarkerSize(1.4);
 Capch4->SetMarkerSize(1.4);
 Capch1->SetMarkerStyle(20);
 Capch2->SetMarkerStyle(21);
 Capch3->SetMarkerStyle(34);
 Capch4->SetMarkerStyle(22);
 Capch1->SetMarkerColor(kBlack);
 Capch1->SetLineColor(kBlack);
 Capch1->SetLineWidth(2);
 Capch2->SetMarkerColor(kBlue);
 Capch2->SetLineColor(kBlue);
 Capch2->SetLineWidth(2);
 Capch3->SetMarkerColor(kRed);
 Capch3->SetLineColor(kRed);
 Capch3->SetLineWidth(2);
 Capch4->SetMarkerColor(kGreen+2);
 Capch4->SetLineColor(kGreen+2);
 Capch4->SetLineWidth(2);

 multi2->Add( Capch1 );
 multi2->Add( Capch2 );
 multi2->Add( Capch3 );
 multi2->Add( Capch4 );
 
 

 multi2->Draw("AP");
 multi2->GetYaxis()->SetRangeUser(0,400);
 multi2->GetXaxis()->SetLimits(0,250);
 
 multi2->GetXaxis()->SetTitleSize(0.05);
 multi2->GetXaxis()->SetLabelSize(0.05);
 multi2->GetXaxis()->SetTitleOffset(1.1);
 multi2->GetYaxis()->SetTitleSize(0.05);
 multi2->GetYaxis()->SetLabelSize(0.05);
 multi2->GetYaxis()->SetTitleOffset(1.2);
 multi2->GetYaxis()->SetLabelOffset(0.01);


      
 multi2->SetTitle("");
 multi2->GetXaxis()->SetTitle("Energy [GeV]");
 multi2->GetYaxis()->SetTitle("#sigma t [ps]");




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
