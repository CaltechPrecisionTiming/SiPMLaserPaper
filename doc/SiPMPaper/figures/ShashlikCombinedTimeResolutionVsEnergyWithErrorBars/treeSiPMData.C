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


Double_t   DSB1_time_1_2_3_4[size];
Double_t   DSB1_time_1_2_3_4_err[size];
Double_t   Cap_time_1_2_3_4[size];
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



      if(jentry>0){//to avoid reporting of 20GeV results in the plot
      DSB1_time_1_2_3_4[jentry-1]=1000*tree_DSB1_time_1_2_3_4;
      DSB1_time_1_2_3_4_err[jentry-1]=1000*tree_DSB1_time_1_2_3_4_err;
      Cap_time_1_2_3_4[jentry-1]=1000*tree_Cap_time_1_2_3_4;
      Cap_time_1_2_3_4_err[jentry-1]=1000*tree_Cap_time_1_2_3_4_err;

      Energy[jentry-1]=tree_Energy;
      }

   }





 TMultiGraph *multi1 = new TMultiGraph("multi1","");


 TGraph *DSB1 = new TGraphErrors( size, Energy, DSB1_time_1_2_3_4, Zero ,DSB1_time_1_2_3_4_err  );
 TGraph *Cap = new TGraphErrors( size, Energy, Cap_time_1_2_3_4, Zero ,Cap_time_1_2_3_4_err  );


 DSB1->SetMarkerSize(1.4);
 Cap->SetMarkerSize(1.8);
 DSB1->SetMarkerStyle(20);
 Cap->SetMarkerStyle(34);
 DSB1->SetMarkerColor(kBlack);
 Cap->SetMarkerColor(kBlue);
 DSB1->SetLineColor(kBlack);
 Cap->SetLineColor(kBlue);

 DSB1->SetLineWidth(2);
 Cap->SetLineWidth(2);

 TCanvas *c1 = new TCanvas("c1","c1", 800, 600); 

 c1->SetBottomMargin(0.12);
 c1->SetLeftMargin(0.12);

 multi1->Add(DSB1);
 multi1->Add(Cap);


 
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



 
TLegend *leg = new TLegend(0.25,0.70,0.87,0.85);
 leg->SetTextSize(0.05);
 leg->SetLineColor(kBlack);
 leg->AddEntry(DSB1,"Combined DSB Fibers","p");
 leg->AddEntry(Cap,"Combined Quartz Capillaries","p");
 leg->Draw();
 

 c1->SaveAs("ShashlikTimeResolutionCombinedChannelVsEnergy.pdf");
 c1->SaveAs("ShashlikTimeResolutionCombinedChannelVsEnergy.C");
 
   
}
