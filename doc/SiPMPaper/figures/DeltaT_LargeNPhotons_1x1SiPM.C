{
//=========Macro generated from canvas: c1/c1
//=========  (Thu Aug  3 03:58:16 2017) by ROOT version5.34/36
   TCanvas *c1 = new TCanvas("c1", "c1",171,250,700,529);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->Range(-1.32625,-287.5688,-1.16375,2588.119);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *htemp__1__2 = new TH1F("htemp__1__2","t1gausroot-t2gausroot",100,-1.31,-1.18);
   htemp__1__2->SetBinContent(8,1);
   htemp__1__2->SetBinContent(9,1);
   htemp__1__2->SetBinContent(10,1);
   htemp__1__2->SetBinContent(11,2);
   htemp__1__2->SetBinContent(12,3);
   htemp__1__2->SetBinContent(13,4);
   htemp__1__2->SetBinContent(14,3);
   htemp__1__2->SetBinContent(15,7);
   htemp__1__2->SetBinContent(16,11);
   htemp__1__2->SetBinContent(17,11);
   htemp__1__2->SetBinContent(18,15);
   htemp__1__2->SetBinContent(19,27);
   htemp__1__2->SetBinContent(20,35);
   htemp__1__2->SetBinContent(21,59);
   htemp__1__2->SetBinContent(22,81);
   htemp__1__2->SetBinContent(23,93);
   htemp__1__2->SetBinContent(24,124);
   htemp__1__2->SetBinContent(25,131);
   htemp__1__2->SetBinContent(26,186);
   htemp__1__2->SetBinContent(27,285);
   htemp__1__2->SetBinContent(28,336);
   htemp__1__2->SetBinContent(29,392);
   htemp__1__2->SetBinContent(30,526);
   htemp__1__2->SetBinContent(31,615);
   htemp__1__2->SetBinContent(32,682);
   htemp__1__2->SetBinContent(33,867);
   htemp__1__2->SetBinContent(34,1008);
   htemp__1__2->SetBinContent(35,1118);
   htemp__1__2->SetBinContent(36,1322);
   htemp__1__2->SetBinContent(37,1430);
   htemp__1__2->SetBinContent(38,1641);
   htemp__1__2->SetBinContent(39,1712);
   htemp__1__2->SetBinContent(40,1941);
   htemp__1__2->SetBinContent(41,1998);
   htemp__1__2->SetBinContent(42,2089);
   htemp__1__2->SetBinContent(43,2096);
   htemp__1__2->SetBinContent(44,2191);
   htemp__1__2->SetBinContent(45,2130);
   htemp__1__2->SetBinContent(46,2168);
   htemp__1__2->SetBinContent(47,2036);
   htemp__1__2->SetBinContent(48,2006);
   htemp__1__2->SetBinContent(49,1984);
   htemp__1__2->SetBinContent(50,1866);
   htemp__1__2->SetBinContent(51,1828);
   htemp__1__2->SetBinContent(52,1578);
   htemp__1__2->SetBinContent(53,1466);
   htemp__1__2->SetBinContent(54,1342);
   htemp__1__2->SetBinContent(55,1213);
   htemp__1__2->SetBinContent(56,1035);
   htemp__1__2->SetBinContent(57,938);
   htemp__1__2->SetBinContent(58,832);
   htemp__1__2->SetBinContent(59,769);
   htemp__1__2->SetBinContent(60,603);
   htemp__1__2->SetBinContent(61,537);
   htemp__1__2->SetBinContent(62,474);
   htemp__1__2->SetBinContent(63,403);
   htemp__1__2->SetBinContent(64,337);
   htemp__1__2->SetBinContent(65,302);
   htemp__1__2->SetBinContent(66,218);
   htemp__1__2->SetBinContent(67,200);
   htemp__1__2->SetBinContent(68,161);
   htemp__1__2->SetBinContent(69,136);
   htemp__1__2->SetBinContent(70,90);
   htemp__1__2->SetBinContent(71,72);
   htemp__1__2->SetBinContent(72,54);
   htemp__1__2->SetBinContent(73,42);
   htemp__1__2->SetBinContent(74,28);
   htemp__1__2->SetBinContent(75,21);
   htemp__1__2->SetBinContent(76,27);
   htemp__1__2->SetBinContent(77,14);
   htemp__1__2->SetBinContent(78,15);
   htemp__1__2->SetBinContent(79,9);
   htemp__1__2->SetBinContent(80,7);
   htemp__1__2->SetBinContent(81,3);
   htemp__1__2->SetBinContent(82,1);
   htemp__1__2->SetBinContent(83,3);
   htemp__1__2->SetBinContent(85,5);
   htemp__1__2->SetBinContent(87,2);
   htemp__1__2->SetBinContent(92,1);
   htemp__1__2->SetEntries(50000);
   htemp__1__2->SetDirectory(0);
   htemp__1__2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   htemp__1__2->SetLineColor(ci);
   htemp__1__2->SetLineWidth(2);
   htemp__1__2->GetXaxis()->SetTitle("#Delta t [ns]");
   htemp__1__2->GetXaxis()->SetRange(1,100);
   htemp__1__2->GetXaxis()->SetLabelFont(42);
   htemp__1__2->GetXaxis()->SetTitleSize(0.05);
   htemp__1__2->GetXaxis()->SetTitleOffset(0.9);
   htemp__1__2->GetXaxis()->SetTitleFont(42);
   htemp__1__2->GetYaxis()->SetTitle("Number of Events");
   htemp__1__2->GetYaxis()->SetLabelFont(42);
   htemp__1__2->GetYaxis()->SetTitleSize(0.05);
   htemp__1__2->GetYaxis()->SetTitleFont(42);
   htemp__1__2->GetZaxis()->SetLabelFont(42);
   htemp__1__2->GetZaxis()->SetLabelSize(0.035);
   htemp__1__2->GetZaxis()->SetTitleSize(0.035);
   htemp__1__2->GetZaxis()->SetTitleFont(42);
   htemp__1__2->Draw("");
   TLatex *   tex = new TLatex(-1.22819,1896.5,"#sigma_{eff} = 12 ps");
   tex->SetLineWidth(2);
   tex->Draw();
   tex = new TLatex(-1.26549,2401.62,"1x1 mm^{2} SiPM");
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
   c1->ToggleToolBar();
   c1->SaveAs("DeltaT_LargeNPhotons_1x1SiPM.pdf");
}
