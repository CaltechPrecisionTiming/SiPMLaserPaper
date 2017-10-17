//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Tue Sep 26 14:32:59 2017 by ROOT version 5.34/32
// from TTree data/data
// found on file: SiPMdata.root
//////////////////////////////////////////////////////////

#ifndef treeSiPMData_h
#define treeSiPMData_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

// Fixed size dimensions of array or collections stored in the TTree if any.

class treeSiPMData {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   Float_t         tree_DSB1_time_tail_1;
   Float_t         tree_DSB1_time_tail_2;
   Float_t         tree_DSB1_time_tail_3;
   Float_t         tree_DSB1_time_tail_4;
   Float_t         tree_Y11_time_tail_1;
   Float_t         tree_Y11_time_tail_2;
   Float_t         tree_Y11_time_tail_3;
   Float_t         tree_Y11_time_tail_4;
   Float_t         tree_Cap_time_tail_1;
   Float_t         tree_Cap_time_tail_2;
   Float_t         tree_Cap_time_tail_3;
   Float_t         tree_Cap_time_tail_4;
   Float_t         tree_DSB1_ch1_amp;
   Float_t         tree_DSB1_ch1_rise;
   Float_t         tree_DSB1_ch2_amp;
   Float_t         tree_DSB1_ch2_rise;
   Float_t         tree_DSB1_ch3_amp;
   Float_t         tree_DSB1_ch3_rise;
   Float_t         tree_DSB1_ch4_amp;
   Float_t         tree_DSB1_ch4_rise;
   Float_t         tree_Y11_ch1_amp;
   Float_t         tree_Y11_ch1_rise;
   Float_t         tree_Y11_ch2_amp;
   Float_t         tree_Y11_ch2_rise;
   Float_t         tree_Y11_ch3_amp;
   Float_t         tree_Y11_ch3_rise;
   Float_t         tree_Y11_ch4_amp;
   Float_t         tree_Y11_ch4_rise;
   Float_t         tree_Cap_ch1_amp;
   Float_t         tree_Cap_ch1_rise;
   Float_t         tree_Cap_ch2_amp;
   Float_t         tree_Cap_ch2_rise;
   Float_t         tree_Cap_ch3_amp;
   Float_t         tree_Cap_ch3_rise;
   Float_t         tree_Cap_ch4_amp;
   Float_t         tree_Cap_ch4_rise;
   Float_t         tree_Laser_ch1_amp;
   Float_t         tree_Laser_ch1_rise;
   Float_t         tree_Laser_ch4_amp;
   Float_t         tree_Laser_ch4_rise;
   Float_t         tree_DSB1_time_1;
   Float_t         tree_DSB1_time_2;
   Float_t         tree_DSB1_time_3;
   Float_t         tree_DSB1_time_4;
   Float_t         tree_DSB1_time_1_2;
   Float_t         tree_DSB1_time_1_3;
   Float_t         tree_DSB1_time_1_4;
   Float_t         tree_DSB1_time_2_3;
   Float_t         tree_DSB1_time_2_4;
   Float_t         tree_DSB1_time_3_4;
   Float_t         tree_DSB1_time_1_2_3;
   Float_t         tree_DSB1_time_1_2_4;
   Float_t         tree_DSB1_time_1_3_4;
   Float_t         tree_DSB1_time_2_3_4;
   Float_t         tree_DSB1_time_1_2_3_4;
   Float_t         tree_Y11_time_1;
   Float_t         tree_Y11_time_2;
   Float_t         tree_Y11_time_3;
   Float_t         tree_Y11_time_4;
   Float_t         tree_Y11_time_1_2;
   Float_t         tree_Y11_time_1_3;
   Float_t         tree_Y11_time_1_4;
   Float_t         tree_Y11_time_2_3;
   Float_t         tree_Y11_time_2_4;
   Float_t         tree_Y11_time_3_4;
   Float_t         tree_Y11_time_1_2_3;
   Float_t         tree_Y11_time_1_2_4;
   Float_t         tree_Y11_time_1_3_4;
   Float_t         tree_Y11_time_2_3_4;
   Float_t         tree_Y11_time_1_2_3_4;
   Float_t         tree_Cap_time_1;
   Float_t         tree_Cap_time_2;
   Float_t         tree_Cap_time_3;
   Float_t         tree_Cap_time_4;
   Float_t         tree_Cap_time_1_2;
   Float_t         tree_Cap_time_1_3;
   Float_t         tree_Cap_time_1_4;
   Float_t         tree_Cap_time_2_3;
   Float_t         tree_Cap_time_2_4;
   Float_t         tree_Cap_time_3_4;
   Float_t         tree_Cap_time_1_2_3;
   Float_t         tree_Cap_time_1_2_4;
   Float_t         tree_Cap_time_1_3_4;
   Float_t         tree_Cap_time_2_3_4;
   Float_t         tree_Cap_time_1_2_3_4;
   Float_t         tree_Laser_time;
   Int_t           tree_Energy;
   Float_t         tree_DSB1_time_1_err;
   Float_t         tree_DSB1_time_2_err;
   Float_t         tree_DSB1_time_3_err;
   Float_t         tree_DSB1_time_4_err;
   Float_t         tree_Cap_time_1_err;
   Float_t         tree_Cap_time_2_err;
   Float_t         tree_Cap_time_3_err;
   Float_t         tree_Cap_time_4_err;
   Float_t         tree_DSB1_time_1_2_3_4_err;
   Float_t         tree_Cap_time_1_2_3_4_err;

   // List of branches
   TBranch        *b_tree_DSB1_time_tail_1;   //!
   TBranch        *b_tree_DSB1_time_tail_2;   //!
   TBranch        *b_tree_DSB1_time_tail_3;   //!
   TBranch        *b_tree_DSB1_time_tail_4;   //!
   TBranch        *b_tree_Y11_time_tail_1;   //!
   TBranch        *b_tree_Y11_time_tail_2;   //!
   TBranch        *b_tree_Y11_time_tail_3;   //!
   TBranch        *b_tree_Y11_time_tail_4;   //!
   TBranch        *b_tree_Cap_time_tail_1;   //!
   TBranch        *b_tree_Cap_time_tail_2;   //!
   TBranch        *b_tree_Cap_time_tail_3;   //!
   TBranch        *b_tree_Cap_time_tail_4;   //!
   TBranch        *b_tree_DSB1_ch1_amp;   //!
   TBranch        *b_tree_DSB1_ch1_rise;   //!
   TBranch        *b_tree_DSB1_ch2_amp;   //!
   TBranch        *b_tree_DSB1_ch2_rise;   //!
   TBranch        *b_tree_DSB1_ch3_amp;   //!
   TBranch        *b_tree_DSB1_ch3_rise;   //!
   TBranch        *b_tree_DSB1_ch4_amp;   //!
   TBranch        *b_tree_DSB1_ch4_rise;   //!
   TBranch        *b_tree_Y11_ch1_amp;   //!
   TBranch        *b_tree_Y11_ch1_rise;   //!
   TBranch        *b_tree_Y11_ch2_amp;   //!
   TBranch        *b_tree_Y11_ch2_rise;   //!
   TBranch        *b_tree_Y11_ch3_amp;   //!
   TBranch        *b_tree_Y11_ch3_rise;   //!
   TBranch        *b_tree_Y11_ch4_amp;   //!
   TBranch        *b_tree_Y11_ch4_rise;   //!
   TBranch        *b_tree_Cap_ch1_amp;   //!
   TBranch        *b_tree_Cap_ch1_rise;   //!
   TBranch        *b_tree_Cap_ch2_amp;   //!
   TBranch        *b_tree_Cap_ch2_rise;   //!
   TBranch        *b_tree_Cap_ch3_amp;   //!
   TBranch        *b_tree_Cap_ch3_rise;   //!
   TBranch        *b_tree_Cap_ch4_amp;   //!
   TBranch        *b_tree_Cap_ch4_rise;   //!
   TBranch        *b_tree_Laser_ch1_amp;   //!
   TBranch        *b_tree_Laser_ch1_rise;   //!
   TBranch        *b_tree_Laser_ch4_amp;   //!
   TBranch        *b_tree_Laser_ch4_rise;   //!
   TBranch        *b_tree_DSB1_time_1;   //!
   TBranch        *b_tree_DSB1_time_2;   //!
   TBranch        *b_tree_DSB1_time_3;   //!
   TBranch        *b_tree_DSB1_time_4;   //!
   TBranch        *b_tree_DSB1_time_1_2;   //!
   TBranch        *b_tree_DSB1_time_1_3;   //!
   TBranch        *b_tree_DSB1_time_1_4;   //!
   TBranch        *b_tree_DSB1_time_2_3;   //!
   TBranch        *b_tree_DSB1_time_2_4;   //!
   TBranch        *b_tree_DSB1_time_3_4;   //!
   TBranch        *b_tree_DSB1_time_1_2_3;   //!
   TBranch        *b_tree_DSB1_time_1_2_4;   //!
   TBranch        *b_tree_DSB1_time_1_3_4;   //!
   TBranch        *b_tree_DSB1_time_2_3_4;   //!
   TBranch        *b_tree_DSB1_time_1_2_3_4;   //!
   TBranch        *b_tree_Y11_time_1;   //!
   TBranch        *b_tree_Y11_time_2;   //!
   TBranch        *b_tree_Y11_time_3;   //!
   TBranch        *b_tree_Y11_time_4;   //!
   TBranch        *b_tree_Y11_time_1_2;   //!
   TBranch        *b_tree_Y11_time_1_3;   //!
   TBranch        *b_tree_Y11_time_1_4;   //!
   TBranch        *b_tree_Y11_time_2_3;   //!
   TBranch        *b_tree_Y11_time_2_4;   //!
   TBranch        *b_tree_Y11_time_3_4;   //!
   TBranch        *b_tree_Y11_time_1_2_3;   //!
   TBranch        *b_tree_Y11_time_1_2_4;   //!
   TBranch        *b_tree_Y11_time_1_3_4;   //!
   TBranch        *b_tree_Y11_time_2_3_4;   //!
   TBranch        *b_tree_Y11_time_1_2_3_4;   //!
   TBranch        *b_tree_Cap_time_1;   //!
   TBranch        *b_tree_Cap_time_2;   //!
   TBranch        *b_tree_Cap_time_3;   //!
   TBranch        *b_tree_Cap_time_4;   //!
   TBranch        *b_tree_Cap_time_1_2;   //!
   TBranch        *b_tree_Cap_time_1_3;   //!
   TBranch        *b_tree_Cap_time_1_4;   //!
   TBranch        *b_tree_Cap_time_2_3;   //!
   TBranch        *b_tree_Cap_time_2_4;   //!
   TBranch        *b_tree_Cap_time_3_4;   //!
   TBranch        *b_tree_Cap_time_1_2_3;   //!
   TBranch        *b_tree_Cap_time_1_2_4;   //!
   TBranch        *b_tree_Cap_time_1_3_4;   //!
   TBranch        *b_tree_Cap_time_2_3_4;   //!
   TBranch        *b_tree_Cap_time_1_2_3_4;   //!
   TBranch        *b_tree_Laser_time;   //!
   TBranch        *b_tree_Energy;   //!
   TBranch        *b_tree_DSB1_time_1_err;   //!
   TBranch        *b_tree_DSB1_time_2_err;   //!
   TBranch        *b_tree_DSB1_time_3_err;   //!
   TBranch        *b_tree_DSB1_time_4_err;   //!
   TBranch        *b_tree_Cap_time_1_err;   //!
   TBranch        *b_tree_Cap_time_2_err;   //!
   TBranch        *b_tree_Cap_time_3_err;   //!
   TBranch        *b_tree_Cap_time_4_err;   //!
   TBranch        *b_tree_DSB1_time_1_2_3_4_err;   //!
   TBranch        *b_tree_Cap_time_1_2_3_4_err;   //!

   treeSiPMData(TTree *tree=0);
   virtual ~treeSiPMData();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef treeSiPMData_cxx
treeSiPMData::treeSiPMData(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("SiPMdata.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("SiPMdata.root");
      }
      f->GetObject("data",tree);

   }
   Init(tree);
}

treeSiPMData::~treeSiPMData()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t treeSiPMData::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t treeSiPMData::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void treeSiPMData::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("tree_DSB1_time_tail_1", &tree_DSB1_time_tail_1, &b_tree_DSB1_time_tail_1);
   fChain->SetBranchAddress("tree_DSB1_time_tail_2", &tree_DSB1_time_tail_2, &b_tree_DSB1_time_tail_2);
   fChain->SetBranchAddress("tree_DSB1_time_tail_3", &tree_DSB1_time_tail_3, &b_tree_DSB1_time_tail_3);
   fChain->SetBranchAddress("tree_DSB1_time_tail_4", &tree_DSB1_time_tail_4, &b_tree_DSB1_time_tail_4);
   fChain->SetBranchAddress("tree_Y11_time_tail_1", &tree_Y11_time_tail_1, &b_tree_Y11_time_tail_1);
   fChain->SetBranchAddress("tree_Y11_time_tail_2", &tree_Y11_time_tail_2, &b_tree_Y11_time_tail_2);
   fChain->SetBranchAddress("tree_Y11_time_tail_3", &tree_Y11_time_tail_3, &b_tree_Y11_time_tail_3);
   fChain->SetBranchAddress("tree_Y11_time_tail_4", &tree_Y11_time_tail_4, &b_tree_Y11_time_tail_4);
   fChain->SetBranchAddress("tree_Cap_time_tail_1", &tree_Cap_time_tail_1, &b_tree_Cap_time_tail_1);
   fChain->SetBranchAddress("tree_Cap_time_tail_2", &tree_Cap_time_tail_2, &b_tree_Cap_time_tail_2);
   fChain->SetBranchAddress("tree_Cap_time_tail_3", &tree_Cap_time_tail_3, &b_tree_Cap_time_tail_3);
   fChain->SetBranchAddress("tree_Cap_time_tail_4", &tree_Cap_time_tail_4, &b_tree_Cap_time_tail_4);
   fChain->SetBranchAddress("tree_DSB1_ch1_amp", &tree_DSB1_ch1_amp, &b_tree_DSB1_ch1_amp);
   fChain->SetBranchAddress("tree_DSB1_ch1_rise", &tree_DSB1_ch1_rise, &b_tree_DSB1_ch1_rise);
   fChain->SetBranchAddress("tree_DSB1_ch2_amp", &tree_DSB1_ch2_amp, &b_tree_DSB1_ch2_amp);
   fChain->SetBranchAddress("tree_DSB1_ch2_rise", &tree_DSB1_ch2_rise, &b_tree_DSB1_ch2_rise);
   fChain->SetBranchAddress("tree_DSB1_ch3_amp", &tree_DSB1_ch3_amp, &b_tree_DSB1_ch3_amp);
   fChain->SetBranchAddress("tree_DSB1_ch3_rise", &tree_DSB1_ch3_rise, &b_tree_DSB1_ch3_rise);
   fChain->SetBranchAddress("tree_DSB1_ch4_amp", &tree_DSB1_ch4_amp, &b_tree_DSB1_ch4_amp);
   fChain->SetBranchAddress("tree_DSB1_ch4_rise", &tree_DSB1_ch4_rise, &b_tree_DSB1_ch4_rise);
   fChain->SetBranchAddress("tree_Y11_ch1_amp", &tree_Y11_ch1_amp, &b_tree_Y11_ch1_amp);
   fChain->SetBranchAddress("tree_Y11_ch1_rise", &tree_Y11_ch1_rise, &b_tree_Y11_ch1_rise);
   fChain->SetBranchAddress("tree_Y11_ch2_amp", &tree_Y11_ch2_amp, &b_tree_Y11_ch2_amp);
   fChain->SetBranchAddress("tree_Y11_ch2_rise", &tree_Y11_ch2_rise, &b_tree_Y11_ch2_rise);
   fChain->SetBranchAddress("tree_Y11_ch3_amp", &tree_Y11_ch3_amp, &b_tree_Y11_ch3_amp);
   fChain->SetBranchAddress("tree_Y11_ch3_rise", &tree_Y11_ch3_rise, &b_tree_Y11_ch3_rise);
   fChain->SetBranchAddress("tree_Y11_ch4_amp", &tree_Y11_ch4_amp, &b_tree_Y11_ch4_amp);
   fChain->SetBranchAddress("tree_Y11_ch4_rise", &tree_Y11_ch4_rise, &b_tree_Y11_ch4_rise);
   fChain->SetBranchAddress("tree_Cap_ch1_amp", &tree_Cap_ch1_amp, &b_tree_Cap_ch1_amp);
   fChain->SetBranchAddress("tree_Cap_ch1_rise", &tree_Cap_ch1_rise, &b_tree_Cap_ch1_rise);
   fChain->SetBranchAddress("tree_Cap_ch2_amp", &tree_Cap_ch2_amp, &b_tree_Cap_ch2_amp);
   fChain->SetBranchAddress("tree_Cap_ch2_rise", &tree_Cap_ch2_rise, &b_tree_Cap_ch2_rise);
   fChain->SetBranchAddress("tree_Cap_ch3_amp", &tree_Cap_ch3_amp, &b_tree_Cap_ch3_amp);
   fChain->SetBranchAddress("tree_Cap_ch3_rise", &tree_Cap_ch3_rise, &b_tree_Cap_ch3_rise);
   fChain->SetBranchAddress("tree_Cap_ch4_amp", &tree_Cap_ch4_amp, &b_tree_Cap_ch4_amp);
   fChain->SetBranchAddress("tree_Cap_ch4_rise", &tree_Cap_ch4_rise, &b_tree_Cap_ch4_rise);
   fChain->SetBranchAddress("tree_Laser_ch1_amp", &tree_Laser_ch1_amp, &b_tree_Laser_ch1_amp);
   fChain->SetBranchAddress("tree_Laser_ch1_rise", &tree_Laser_ch1_rise, &b_tree_Laser_ch1_rise);
   fChain->SetBranchAddress("tree_Laser_ch4_amp", &tree_Laser_ch4_amp, &b_tree_Laser_ch4_amp);
   fChain->SetBranchAddress("tree_Laser_ch4_rise", &tree_Laser_ch4_rise, &b_tree_Laser_ch4_rise);
   fChain->SetBranchAddress("tree_DSB1_time_1", &tree_DSB1_time_1, &b_tree_DSB1_time_1);
   fChain->SetBranchAddress("tree_DSB1_time_2", &tree_DSB1_time_2, &b_tree_DSB1_time_2);
   fChain->SetBranchAddress("tree_DSB1_time_3", &tree_DSB1_time_3, &b_tree_DSB1_time_3);
   fChain->SetBranchAddress("tree_DSB1_time_4", &tree_DSB1_time_4, &b_tree_DSB1_time_4);
   fChain->SetBranchAddress("tree_DSB1_time_1_2", &tree_DSB1_time_1_2, &b_tree_DSB1_time_1_2);
   fChain->SetBranchAddress("tree_DSB1_time_1_3", &tree_DSB1_time_1_3, &b_tree_DSB1_time_1_3);
   fChain->SetBranchAddress("tree_DSB1_time_1_4", &tree_DSB1_time_1_4, &b_tree_DSB1_time_1_4);
   fChain->SetBranchAddress("tree_DSB1_time_2_3", &tree_DSB1_time_2_3, &b_tree_DSB1_time_2_3);
   fChain->SetBranchAddress("tree_DSB1_time_2_4", &tree_DSB1_time_2_4, &b_tree_DSB1_time_2_4);
   fChain->SetBranchAddress("tree_DSB1_time_3_4", &tree_DSB1_time_3_4, &b_tree_DSB1_time_3_4);
   fChain->SetBranchAddress("tree_DSB1_time_1_2_3", &tree_DSB1_time_1_2_3, &b_tree_DSB1_time_1_2_3);
   fChain->SetBranchAddress("tree_DSB1_time_1_2_4", &tree_DSB1_time_1_2_4, &b_tree_DSB1_time_1_2_4);
   fChain->SetBranchAddress("tree_DSB1_time_1_3_4", &tree_DSB1_time_1_3_4, &b_tree_DSB1_time_1_3_4);
   fChain->SetBranchAddress("tree_DSB1_time_2_3_4", &tree_DSB1_time_2_3_4, &b_tree_DSB1_time_2_3_4);
   fChain->SetBranchAddress("tree_DSB1_time_1_2_3_4", &tree_DSB1_time_1_2_3_4, &b_tree_DSB1_time_1_2_3_4);
   fChain->SetBranchAddress("tree_Y11_time_1", &tree_Y11_time_1, &b_tree_Y11_time_1);
   fChain->SetBranchAddress("tree_Y11_time_2", &tree_Y11_time_2, &b_tree_Y11_time_2);
   fChain->SetBranchAddress("tree_Y11_time_3", &tree_Y11_time_3, &b_tree_Y11_time_3);
   fChain->SetBranchAddress("tree_Y11_time_4", &tree_Y11_time_4, &b_tree_Y11_time_4);
   fChain->SetBranchAddress("tree_Y11_time_1_2", &tree_Y11_time_1_2, &b_tree_Y11_time_1_2);
   fChain->SetBranchAddress("tree_Y11_time_1_3", &tree_Y11_time_1_3, &b_tree_Y11_time_1_3);
   fChain->SetBranchAddress("tree_Y11_time_1_4", &tree_Y11_time_1_4, &b_tree_Y11_time_1_4);
   fChain->SetBranchAddress("tree_Y11_time_2_3", &tree_Y11_time_2_3, &b_tree_Y11_time_2_3);
   fChain->SetBranchAddress("tree_Y11_time_2_4", &tree_Y11_time_2_4, &b_tree_Y11_time_2_4);
   fChain->SetBranchAddress("tree_Y11_time_3_4", &tree_Y11_time_3_4, &b_tree_Y11_time_3_4);
   fChain->SetBranchAddress("tree_Y11_time_1_2_3", &tree_Y11_time_1_2_3, &b_tree_Y11_time_1_2_3);
   fChain->SetBranchAddress("tree_Y11_time_1_2_4", &tree_Y11_time_1_2_4, &b_tree_Y11_time_1_2_4);
   fChain->SetBranchAddress("tree_Y11_time_1_3_4", &tree_Y11_time_1_3_4, &b_tree_Y11_time_1_3_4);
   fChain->SetBranchAddress("tree_Y11_time_2_3_4", &tree_Y11_time_2_3_4, &b_tree_Y11_time_2_3_4);
   fChain->SetBranchAddress("tree_Y11_time_1_2_3_4", &tree_Y11_time_1_2_3_4, &b_tree_Y11_time_1_2_3_4);
   fChain->SetBranchAddress("tree_Cap_time_1", &tree_Cap_time_1, &b_tree_Cap_time_1);
   fChain->SetBranchAddress("tree_Cap_time_2", &tree_Cap_time_2, &b_tree_Cap_time_2);
   fChain->SetBranchAddress("tree_Cap_time_3", &tree_Cap_time_3, &b_tree_Cap_time_3);
   fChain->SetBranchAddress("tree_Cap_time_4", &tree_Cap_time_4, &b_tree_Cap_time_4);
   fChain->SetBranchAddress("tree_Cap_time_1_2", &tree_Cap_time_1_2, &b_tree_Cap_time_1_2);
   fChain->SetBranchAddress("tree_Cap_time_1_3", &tree_Cap_time_1_3, &b_tree_Cap_time_1_3);
   fChain->SetBranchAddress("tree_Cap_time_1_4", &tree_Cap_time_1_4, &b_tree_Cap_time_1_4);
   fChain->SetBranchAddress("tree_Cap_time_2_3", &tree_Cap_time_2_3, &b_tree_Cap_time_2_3);
   fChain->SetBranchAddress("tree_Cap_time_2_4", &tree_Cap_time_2_4, &b_tree_Cap_time_2_4);
   fChain->SetBranchAddress("tree_Cap_time_3_4", &tree_Cap_time_3_4, &b_tree_Cap_time_3_4);
   fChain->SetBranchAddress("tree_Cap_time_1_2_3", &tree_Cap_time_1_2_3, &b_tree_Cap_time_1_2_3);
   fChain->SetBranchAddress("tree_Cap_time_1_2_4", &tree_Cap_time_1_2_4, &b_tree_Cap_time_1_2_4);
   fChain->SetBranchAddress("tree_Cap_time_1_3_4", &tree_Cap_time_1_3_4, &b_tree_Cap_time_1_3_4);
   fChain->SetBranchAddress("tree_Cap_time_2_3_4", &tree_Cap_time_2_3_4, &b_tree_Cap_time_2_3_4);
   fChain->SetBranchAddress("tree_Cap_time_1_2_3_4", &tree_Cap_time_1_2_3_4, &b_tree_Cap_time_1_2_3_4);
   fChain->SetBranchAddress("tree_Laser_time", &tree_Laser_time, &b_tree_Laser_time);
   fChain->SetBranchAddress("tree_Energy", &tree_Energy, &b_tree_Energy);
   fChain->SetBranchAddress("tree_DSB1_time_1_err", &tree_DSB1_time_1_err, &b_tree_DSB1_time_1_err);
   fChain->SetBranchAddress("tree_DSB1_time_2_err", &tree_DSB1_time_2_err, &b_tree_DSB1_time_2_err);
   fChain->SetBranchAddress("tree_DSB1_time_3_err", &tree_DSB1_time_3_err, &b_tree_DSB1_time_3_err);
   fChain->SetBranchAddress("tree_DSB1_time_4_err", &tree_DSB1_time_4_err, &b_tree_DSB1_time_4_err);
   fChain->SetBranchAddress("tree_Cap_time_1_err", &tree_Cap_time_1_err, &b_tree_Cap_time_1_err);
   fChain->SetBranchAddress("tree_Cap_time_2_err", &tree_Cap_time_2_err, &b_tree_Cap_time_2_err);
   fChain->SetBranchAddress("tree_Cap_time_3_err", &tree_Cap_time_3_err, &b_tree_Cap_time_3_err);
   fChain->SetBranchAddress("tree_Cap_time_4_err", &tree_Cap_time_4_err, &b_tree_Cap_time_4_err);
   fChain->SetBranchAddress("tree_DSB1_time_1_2_3_4_err", &tree_DSB1_time_1_2_3_4_err, &b_tree_DSB1_time_1_2_3_4_err);
   fChain->SetBranchAddress("tree_Cap_time_1_2_3_4_err", &tree_Cap_time_1_2_3_4_err, &b_tree_Cap_time_1_2_3_4_err);
   Notify();
}

Bool_t treeSiPMData::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void treeSiPMData::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t treeSiPMData::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef treeSiPMData_cxx
