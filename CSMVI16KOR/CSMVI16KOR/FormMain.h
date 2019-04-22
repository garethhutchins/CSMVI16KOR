
#pragma once
//FormMain.h
#include "FormMain.h"
#include <string>
#include <msclr\marshal_cppstd.h>
#include "TrainFolder.h"
#include "LabelFolder.h"
#include "Unlabelled.h"
#include "TrainEDist.h"
#include <iostream>
#include <fstream>
#include "TestFolder.h"
#include "TrainSVM.h"
#include "SVMTest.h"
#include "TrainSVM.h"
#include "freenect-playback-wrapper.h"
#include <Unknwn.h>    
#include <windows.h>
#include <objidl.h>
#include <shellapi.h>
#include <cstdint>
#include <sstream>
#include <dirent.h>
#include "Canny.h"
#include "ClassTest.h"

namespace CSMVI16KOR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormMain
	/// </summary>
	public ref class FormMain : public System::Windows::Forms::Form
	{
	public:
		FormMain(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	
		

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::Button^  btn_trn_folder;
	private: System::Windows::Forms::TextBox^  txt_trainFldr;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::FolderBrowserDialog^  TrainDlg;
	private: System::Windows::Forms::Button^  btn_run;
	private: System::Windows::Forms::TextBox^  txt_tmp;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  btn_temp;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  btn_label;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::TextBox^  baby_s;
	private: System::Windows::Forms::TextBox^  baby_e;

	private: System::Windows::Forms::TextBox^  dog_s;
	private: System::Windows::Forms::TextBox^  dog_e;
	private: System::Windows::Forms::TextBox^  dino_s;
	private: System::Windows::Forms::TextBox^  dino_e;
	private: System::Windows::Forms::TextBox^  coffee_s;
	private: System::Windows::Forms::TextBox^  coffee_e;
	private: System::Windows::Forms::TextBox^  mug_s;
	private: System::Windows::Forms::TextBox^  mug_e;
	private: System::Windows::Forms::TextBox^  car_s;
	private: System::Windows::Forms::TextBox^  car_e;
	private: System::Windows::Forms::TextBox^  cam_s;
	private: System::Windows::Forms::TextBox^  cam_e;
	private: System::Windows::Forms::TextBox^  key_s;
	private: System::Windows::Forms::TextBox^  key_e;
	private: System::Windows::Forms::TextBox^  koala_s;
	private: System::Windows::Forms::TextBox^  koala_e;
	private: System::Windows::Forms::TextBox^  blackberry_s;
	private: System::Windows::Forms::TextBox^  blackberry_e;

	private: System::Windows::Forms::TextBox^  diet_s;
	private: System::Windows::Forms::TextBox^  diet_e;
	private: System::Windows::Forms::TextBox^  duck_s;
	private: System::Windows::Forms::TextBox^  duck_e;
	private: System::Windows::Forms::TextBox^  dragon_s;
	private: System::Windows::Forms::TextBox^  dragon_e;
	private: System::Windows::Forms::TextBox^  android_s;
	private: System::Windows::Forms::TextBox^  android_e;
	private: System::Windows::Forms::TextBox^  txt_EndFrame;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Button^  btn_class;
	private: System::Windows::Forms::Button^  btn_trn;
	private: System::Windows::Forms::TextBox^  txt_trn;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  txt_test;

	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Button^  btn_Analyze;

	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
private: System::Windows::Forms::TabControl^  tabControl2;
private: System::Windows::Forms::TabPage^  tabPage3;
private: System::Windows::Forms::TabPage^  tabPage4;
private: System::Windows::Forms::Button^  btn_SVMTest;
private: System::Windows::Forms::Label^  label26;
private: System::Windows::Forms::TextBox^  nothing_s;
private: System::Windows::Forms::TextBox^  nothing_e;

private: System::Windows::Forms::Button^  btn_Image_Select;
private: System::Windows::Forms::TextBox^  txt_Test_Image;
private: System::Windows::Forms::Label^  label27;
private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;









private: System::Windows::Forms::GroupBox^  groupBox2;
private: System::Windows::Forms::Button^  btn_IS;
private: System::Windows::Forms::TextBox^  txt_ResP;
private: System::Windows::Forms::Label^  label29;
private: System::Windows::Forms::TextBox^  txt_Threshold;
private: System::Windows::Forms::Label^  label28;
private: System::Windows::Forms::TextBox^  txt_CT;

private: System::Windows::Forms::Label^  label30;
private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::TabPage^  tabPage6;
private: System::Windows::Forms::Button^  btn_ClassTestFolder;
private: System::Windows::Forms::TextBox^  txt_ClassTrain;
private: System::Windows::Forms::Label^  label31;
private: System::Windows::Forms::Button^  btn_ClassTest;
private: System::Windows::Forms::TabControl^  tabControl3;
private: System::Windows::Forms::TabPage^  tabPage7;
private: System::Windows::Forms::RichTextBox^  txt_ImageResults;
private: System::Windows::Forms::TabPage^  tabPage8;
private: System::Windows::Forms::TextBox^  txt_yh;
private: System::Windows::Forms::Label^  label35;
private: System::Windows::Forms::TextBox^  txt_ys;
private: System::Windows::Forms::Label^  label34;
private: System::Windows::Forms::TextBox^  txt_xw;
private: System::Windows::Forms::Label^  label33;
private: System::Windows::Forms::TextBox^  txt_xs;
private: System::Windows::Forms::Label^  label32;
private: System::Windows::Forms::Label^  lbl_SVM_IP;
private: System::Windows::Forms::Label^  lbl_SVM_DP;
private: System::Windows::Forms::Label^  label37;
private: System::Windows::Forms::Label^  label36;
private: System::Windows::Forms::TabControl^  tabControl4;
private: System::Windows::Forms::TabPage^  tabPage9;
private: System::Windows::Forms::TabPage^  tabPage10;
private: System::Windows::Forms::Label^  lbl_DE;
private: System::Windows::Forms::TabPage^  tabPage5;
private: System::Windows::Forms::Label^  lbl_IE;

private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart2;
private: System::Windows::Forms::Button^  button3;
private: System::Windows::Forms::Label^  label38;
private: System::Windows::Forms::Label^  lbl_Status;
private: System::Windows::Forms::TabPage^  tabPage11;
private: System::Windows::Forms::TabPage^  tabPage12;
private: System::Windows::Forms::TabPage^  tabPage13;
private: System::Windows::Forms::TabPage^  tabPage14;
private: System::Windows::Forms::TabPage^  tabPage15;
private: System::Windows::Forms::TabPage^  tabPage16;
private: System::Windows::Forms::TabPage^  tabPage17;
private: System::Windows::Forms::TabPage^  tabPage18;
private: System::Windows::Forms::TabPage^  tabPage19;
private: System::Windows::Forms::TabPage^  tabPage20;
private: System::Windows::Forms::TabPage^  tabPage21;
private: System::Windows::Forms::TabPage^  tabPage22;
private: System::Windows::Forms::TabPage^  tabPage23;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart3;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart4;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart5;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart6;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart7;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart8;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart9;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart10;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart11;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart12;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart13;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart14;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart15;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart16;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart17;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^  series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^  series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea5 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^  series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea6 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^  series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea7 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^  series7 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea8 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^  series8 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea9 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^  series9 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea10 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^  series10 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea11 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^  series11 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea12 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^  series12 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea13 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^  series13 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea14 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^  series14 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea15 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^  series15 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea16 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^  series16 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea17 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^  series17 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl4 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage9 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->txt_EndFrame = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->btn_label = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->baby_s = (gcnew System::Windows::Forms::TextBox());
			this->baby_e = (gcnew System::Windows::Forms::TextBox());
			this->dog_s = (gcnew System::Windows::Forms::TextBox());
			this->dog_e = (gcnew System::Windows::Forms::TextBox());
			this->dino_s = (gcnew System::Windows::Forms::TextBox());
			this->dino_e = (gcnew System::Windows::Forms::TextBox());
			this->coffee_s = (gcnew System::Windows::Forms::TextBox());
			this->coffee_e = (gcnew System::Windows::Forms::TextBox());
			this->mug_s = (gcnew System::Windows::Forms::TextBox());
			this->mug_e = (gcnew System::Windows::Forms::TextBox());
			this->car_s = (gcnew System::Windows::Forms::TextBox());
			this->car_e = (gcnew System::Windows::Forms::TextBox());
			this->cam_s = (gcnew System::Windows::Forms::TextBox());
			this->cam_e = (gcnew System::Windows::Forms::TextBox());
			this->key_s = (gcnew System::Windows::Forms::TextBox());
			this->key_e = (gcnew System::Windows::Forms::TextBox());
			this->koala_s = (gcnew System::Windows::Forms::TextBox());
			this->koala_e = (gcnew System::Windows::Forms::TextBox());
			this->blackberry_s = (gcnew System::Windows::Forms::TextBox());
			this->blackberry_e = (gcnew System::Windows::Forms::TextBox());
			this->diet_s = (gcnew System::Windows::Forms::TextBox());
			this->diet_e = (gcnew System::Windows::Forms::TextBox());
			this->duck_s = (gcnew System::Windows::Forms::TextBox());
			this->duck_e = (gcnew System::Windows::Forms::TextBox());
			this->dragon_s = (gcnew System::Windows::Forms::TextBox());
			this->dragon_e = (gcnew System::Windows::Forms::TextBox());
			this->android_s = (gcnew System::Windows::Forms::TextBox());
			this->android_e = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->nothing_s = (gcnew System::Windows::Forms::TextBox());
			this->nothing_e = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btn_temp = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_run = (gcnew System::Windows::Forms::Button());
			this->txt_trainFldr = (gcnew System::Windows::Forms::TextBox());
			this->txt_tmp = (gcnew System::Windows::Forms::TextBox());
			this->btn_trn_folder = (gcnew System::Windows::Forms::Button());
			this->tabPage10 = (gcnew System::Windows::Forms::TabPage());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->txt_yh = (gcnew System::Windows::Forms::TextBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->txt_ys = (gcnew System::Windows::Forms::TextBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->txt_xw = (gcnew System::Windows::Forms::TextBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->txt_xs = (gcnew System::Windows::Forms::TextBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->txt_CT = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->btn_IS = (gcnew System::Windows::Forms::Button());
			this->txt_ResP = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->txt_Threshold = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->txt_Test_Image = (gcnew System::Windows::Forms::TextBox());
			this->btn_Image_Select = (gcnew System::Windows::Forms::Button());
			this->btn_class = (gcnew System::Windows::Forms::Button());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->btn_ClassTestFolder = (gcnew System::Windows::Forms::Button());
			this->txt_ClassTrain = (gcnew System::Windows::Forms::TextBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->btn_ClassTest = (gcnew System::Windows::Forms::Button());
			this->tabControl3 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->txt_ImageResults = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->chart4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage11 = (gcnew System::Windows::Forms::TabPage());
			this->chart5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage12 = (gcnew System::Windows::Forms::TabPage());
			this->chart6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage13 = (gcnew System::Windows::Forms::TabPage());
			this->chart7 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage14 = (gcnew System::Windows::Forms::TabPage());
			this->chart8 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage15 = (gcnew System::Windows::Forms::TabPage());
			this->chart9 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage16 = (gcnew System::Windows::Forms::TabPage());
			this->chart10 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage17 = (gcnew System::Windows::Forms::TabPage());
			this->chart11 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage18 = (gcnew System::Windows::Forms::TabPage());
			this->chart12 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage19 = (gcnew System::Windows::Forms::TabPage());
			this->chart13 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage20 = (gcnew System::Windows::Forms::TabPage());
			this->chart14 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage21 = (gcnew System::Windows::Forms::TabPage());
			this->chart15 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage22 = (gcnew System::Windows::Forms::TabPage());
			this->chart16 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage23 = (gcnew System::Windows::Forms::TabPage());
			this->chart17 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->lbl_SVM_IP = (gcnew System::Windows::Forms::Label());
			this->lbl_SVM_DP = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->btn_SVMTest = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->lbl_DE = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->btn_Analyze = (gcnew System::Windows::Forms::Button());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->lbl_IE = (gcnew System::Windows::Forms::Label());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->txt_test = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->btn_trn = (gcnew System::Windows::Forms::Button());
			this->txt_trn = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->TrainDlg = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->lbl_Status = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabControl4->SuspendLayout();
			this->tabPage9->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->tabPage10->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->tabPage6->SuspendLayout();
			this->tabControl3->SuspendLayout();
			this->tabPage7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
			this->tabPage8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart4))->BeginInit();
			this->tabPage11->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart5))->BeginInit();
			this->tabPage12->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart6))->BeginInit();
			this->tabPage13->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart7))->BeginInit();
			this->tabPage14->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart8))->BeginInit();
			this->tabPage15->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart9))->BeginInit();
			this->tabPage16->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart10))->BeginInit();
			this->tabPage17->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart11))->BeginInit();
			this->tabPage18->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart12))->BeginInit();
			this->tabPage19->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart13))->BeginInit();
			this->tabPage20->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart14))->BeginInit();
			this->tabPage21->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart15))->BeginInit();
			this->tabPage22->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart16))->BeginInit();
			this->tabPage23->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart17))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->tabPage5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(793, 595);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->tabControl4);
			this->tabPage1->Controls->Add(this->btn_class);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(785, 569);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Classification Settings";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabControl4
			// 
			this->tabControl4->Controls->Add(this->tabPage9);
			this->tabControl4->Controls->Add(this->tabPage10);
			this->tabControl4->Location = System::Drawing::Point(6, 6);
			this->tabControl4->Name = L"tabControl4";
			this->tabControl4->SelectedIndex = 0;
			this->tabControl4->Size = System::Drawing::Size(773, 475);
			this->tabControl4->TabIndex = 1;
			// 
			// tabPage9
			// 
			this->tabPage9->Controls->Add(this->groupBox1);
			this->tabPage9->Controls->Add(this->label2);
			this->tabPage9->Controls->Add(this->btn_temp);
			this->tabPage9->Controls->Add(this->label1);
			this->tabPage9->Controls->Add(this->btn_run);
			this->tabPage9->Controls->Add(this->txt_trainFldr);
			this->tabPage9->Controls->Add(this->txt_tmp);
			this->tabPage9->Controls->Add(this->btn_trn_folder);
			this->tabPage9->Location = System::Drawing::Point(4, 22);
			this->tabPage9->Name = L"tabPage9";
			this->tabPage9->Padding = System::Windows::Forms::Padding(3);
			this->tabPage9->Size = System::Drawing::Size(765, 449);
			this->tabPage9->TabIndex = 0;
			this->tabPage9->Text = L"Frame Splitting";
			this->tabPage9->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->txt_EndFrame);
			this->groupBox1->Controls->Add(this->label23);
			this->groupBox1->Controls->Add(this->btn_label);
			this->groupBox1->Controls->Add(this->tableLayoutPanel1);
			this->groupBox1->Location = System::Drawing::Point(24, 117);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(759, 314);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Labels";
			// 
			// txt_EndFrame
			// 
			this->txt_EndFrame->Location = System::Drawing::Point(415, 272);
			this->txt_EndFrame->Name = L"txt_EndFrame";
			this->txt_EndFrame->Size = System::Drawing::Size(100, 20);
			this->txt_EndFrame->TabIndex = 3;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(338, 275);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(71, 13);
			this->label23->TabIndex = 2;
			this->label23->Text = L"End Frame:";
			// 
			// btn_label
			// 
			this->btn_label->Location = System::Drawing::Point(85, 272);
			this->btn_label->Name = L"btn_label";
			this->btn_label->Size = System::Drawing::Size(101, 23);
			this->btn_label->TabIndex = 1;
			this->btn_label->Text = L"Label Frames";
			this->btn_label->UseVisualStyleBackColor = true;
			this->btn_label->Click += gcnew System::EventHandler(this, &FormMain::btn_label_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 6;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->tableLayoutPanel1->Controls->Add(this->label3, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->label4, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->label5, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->label6, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->label7, 4, 0);
			this->tableLayoutPanel1->Controls->Add(this->label8, 5, 0);
			this->tableLayoutPanel1->Controls->Add(this->label9, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->label10, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->label11, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->label12, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->label13, 0, 5);
			this->tableLayoutPanel1->Controls->Add(this->label14, 0, 6);
			this->tableLayoutPanel1->Controls->Add(this->label15, 0, 7);
			this->tableLayoutPanel1->Controls->Add(this->label16, 3, 1);
			this->tableLayoutPanel1->Controls->Add(this->label17, 3, 2);
			this->tableLayoutPanel1->Controls->Add(this->label18, 3, 3);
			this->tableLayoutPanel1->Controls->Add(this->label19, 3, 4);
			this->tableLayoutPanel1->Controls->Add(this->label20, 3, 5);
			this->tableLayoutPanel1->Controls->Add(this->label21, 3, 6);
			this->tableLayoutPanel1->Controls->Add(this->label22, 3, 7);
			this->tableLayoutPanel1->Controls->Add(this->baby_s, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->baby_e, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->dog_s, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->dog_e, 2, 2);
			this->tableLayoutPanel1->Controls->Add(this->dino_s, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->dino_e, 2, 3);
			this->tableLayoutPanel1->Controls->Add(this->coffee_s, 1, 4);
			this->tableLayoutPanel1->Controls->Add(this->coffee_e, 2, 4);
			this->tableLayoutPanel1->Controls->Add(this->mug_s, 1, 5);
			this->tableLayoutPanel1->Controls->Add(this->mug_e, 2, 5);
			this->tableLayoutPanel1->Controls->Add(this->car_s, 1, 6);
			this->tableLayoutPanel1->Controls->Add(this->car_e, 2, 6);
			this->tableLayoutPanel1->Controls->Add(this->cam_s, 1, 7);
			this->tableLayoutPanel1->Controls->Add(this->cam_e, 2, 7);
			this->tableLayoutPanel1->Controls->Add(this->key_s, 4, 1);
			this->tableLayoutPanel1->Controls->Add(this->key_e, 5, 1);
			this->tableLayoutPanel1->Controls->Add(this->koala_s, 4, 2);
			this->tableLayoutPanel1->Controls->Add(this->koala_e, 5, 2);
			this->tableLayoutPanel1->Controls->Add(this->blackberry_s, 4, 3);
			this->tableLayoutPanel1->Controls->Add(this->blackberry_e, 5, 3);
			this->tableLayoutPanel1->Controls->Add(this->diet_s, 4, 4);
			this->tableLayoutPanel1->Controls->Add(this->diet_e, 5, 4);
			this->tableLayoutPanel1->Controls->Add(this->duck_s, 4, 5);
			this->tableLayoutPanel1->Controls->Add(this->duck_e, 5, 5);
			this->tableLayoutPanel1->Controls->Add(this->dragon_s, 4, 6);
			this->tableLayoutPanel1->Controls->Add(this->dragon_e, 5, 6);
			this->tableLayoutPanel1->Controls->Add(this->android_s, 4, 7);
			this->tableLayoutPanel1->Controls->Add(this->android_e, 5, 7);
			this->tableLayoutPanel1->Controls->Add(this->label26, 3, 8);
			this->tableLayoutPanel1->Controls->Add(this->nothing_s, 4, 8);
			this->tableLayoutPanel1->Controls->Add(this->nothing_e, 5, 8);
			this->tableLayoutPanel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tableLayoutPanel1->Location = System::Drawing::Point(6, 13);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 9;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(718, 249);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(3, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(38, 13);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Label";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(122, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(72, 13);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Start Frame";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(241, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(67, 13);
			this->label5->TabIndex = 2;
			this->label5->Text = L"End Frame";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(360, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(38, 13);
			this->label6->TabIndex = 3;
			this->label6->Text = L"Label";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(479, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(72, 13);
			this->label7->TabIndex = 4;
			this->label7->Text = L"Start Frame";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(598, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(67, 13);
			this->label8->TabIndex = 5;
			this->label8->Text = L"End Frame";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(3, 28);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(35, 13);
			this->label9->TabIndex = 6;
			this->label9->Text = L"Baby";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(3, 56);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(30, 13);
			this->label10->TabIndex = 7;
			this->label10->Text = L"Dog";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(3, 84);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(57, 13);
			this->label11->TabIndex = 8;
			this->label11->Text = L"Dinosaur";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(3, 112);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(66, 13);
			this->label12->TabIndex = 9;
			this->label12->Text = L"Coffee Tin";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(3, 140);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(31, 13);
			this->label13->TabIndex = 10;
			this->label13->Text = L"Mug";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(3, 168);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(26, 13);
			this->label14->TabIndex = 11;
			this->label14->Text = L"Car";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(3, 196);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(49, 13);
			this->label15->TabIndex = 12;
			this->label15->Text = L"Camera";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(360, 28);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(60, 13);
			this->label16->TabIndex = 13;
			this->label16->Text = L"Keyboard";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(360, 56);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(39, 13);
			this->label17->TabIndex = 14;
			this->label17->Text = L"Koala";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(360, 84);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(67, 13);
			this->label18->TabIndex = 15;
			this->label18->Text = L"Blackberry";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(360, 112);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(100, 13);
			this->label19->TabIndex = 16;
			this->label19->Text = L"Diet Coke Bottle";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(360, 140);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(37, 13);
			this->label20->TabIndex = 17;
			this->label20->Text = L"Duck";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(360, 168);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(48, 13);
			this->label21->TabIndex = 18;
			this->label21->Text = L"Dragon";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(360, 196);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(50, 13);
			this->label22->TabIndex = 19;
			this->label22->Text = L"Android";
			// 
			// baby_s
			// 
			this->baby_s->Location = System::Drawing::Point(122, 31);
			this->baby_s->Name = L"baby_s";
			this->baby_s->Size = System::Drawing::Size(100, 20);
			this->baby_s->TabIndex = 20;
			// 
			// baby_e
			// 
			this->baby_e->Location = System::Drawing::Point(241, 31);
			this->baby_e->Name = L"baby_e";
			this->baby_e->Size = System::Drawing::Size(100, 20);
			this->baby_e->TabIndex = 21;
			// 
			// dog_s
			// 
			this->dog_s->Location = System::Drawing::Point(122, 59);
			this->dog_s->Name = L"dog_s";
			this->dog_s->Size = System::Drawing::Size(100, 20);
			this->dog_s->TabIndex = 22;
			// 
			// dog_e
			// 
			this->dog_e->Location = System::Drawing::Point(241, 59);
			this->dog_e->Name = L"dog_e";
			this->dog_e->Size = System::Drawing::Size(100, 20);
			this->dog_e->TabIndex = 23;
			// 
			// dino_s
			// 
			this->dino_s->Location = System::Drawing::Point(122, 87);
			this->dino_s->Name = L"dino_s";
			this->dino_s->Size = System::Drawing::Size(100, 20);
			this->dino_s->TabIndex = 24;
			// 
			// dino_e
			// 
			this->dino_e->Location = System::Drawing::Point(241, 87);
			this->dino_e->Name = L"dino_e";
			this->dino_e->Size = System::Drawing::Size(100, 20);
			this->dino_e->TabIndex = 25;
			// 
			// coffee_s
			// 
			this->coffee_s->Location = System::Drawing::Point(122, 115);
			this->coffee_s->Name = L"coffee_s";
			this->coffee_s->Size = System::Drawing::Size(100, 20);
			this->coffee_s->TabIndex = 26;
			// 
			// coffee_e
			// 
			this->coffee_e->Location = System::Drawing::Point(241, 115);
			this->coffee_e->Name = L"coffee_e";
			this->coffee_e->Size = System::Drawing::Size(100, 20);
			this->coffee_e->TabIndex = 27;
			// 
			// mug_s
			// 
			this->mug_s->Location = System::Drawing::Point(122, 143);
			this->mug_s->Name = L"mug_s";
			this->mug_s->Size = System::Drawing::Size(100, 20);
			this->mug_s->TabIndex = 28;
			// 
			// mug_e
			// 
			this->mug_e->Location = System::Drawing::Point(241, 143);
			this->mug_e->Name = L"mug_e";
			this->mug_e->Size = System::Drawing::Size(100, 20);
			this->mug_e->TabIndex = 29;
			// 
			// car_s
			// 
			this->car_s->Location = System::Drawing::Point(122, 171);
			this->car_s->Name = L"car_s";
			this->car_s->Size = System::Drawing::Size(100, 20);
			this->car_s->TabIndex = 30;
			// 
			// car_e
			// 
			this->car_e->Location = System::Drawing::Point(241, 171);
			this->car_e->Name = L"car_e";
			this->car_e->Size = System::Drawing::Size(100, 20);
			this->car_e->TabIndex = 31;
			// 
			// cam_s
			// 
			this->cam_s->Location = System::Drawing::Point(122, 199);
			this->cam_s->Name = L"cam_s";
			this->cam_s->Size = System::Drawing::Size(100, 20);
			this->cam_s->TabIndex = 32;
			// 
			// cam_e
			// 
			this->cam_e->Location = System::Drawing::Point(241, 199);
			this->cam_e->Name = L"cam_e";
			this->cam_e->Size = System::Drawing::Size(100, 20);
			this->cam_e->TabIndex = 33;
			// 
			// key_s
			// 
			this->key_s->Location = System::Drawing::Point(479, 31);
			this->key_s->Name = L"key_s";
			this->key_s->Size = System::Drawing::Size(100, 20);
			this->key_s->TabIndex = 34;
			// 
			// key_e
			// 
			this->key_e->Location = System::Drawing::Point(598, 31);
			this->key_e->Name = L"key_e";
			this->key_e->Size = System::Drawing::Size(100, 20);
			this->key_e->TabIndex = 35;
			// 
			// koala_s
			// 
			this->koala_s->Location = System::Drawing::Point(479, 59);
			this->koala_s->Name = L"koala_s";
			this->koala_s->Size = System::Drawing::Size(100, 20);
			this->koala_s->TabIndex = 36;
			// 
			// koala_e
			// 
			this->koala_e->Location = System::Drawing::Point(598, 59);
			this->koala_e->Name = L"koala_e";
			this->koala_e->Size = System::Drawing::Size(100, 20);
			this->koala_e->TabIndex = 37;
			// 
			// blackberry_s
			// 
			this->blackberry_s->Location = System::Drawing::Point(479, 87);
			this->blackberry_s->Name = L"blackberry_s";
			this->blackberry_s->Size = System::Drawing::Size(100, 20);
			this->blackberry_s->TabIndex = 38;
			// 
			// blackberry_e
			// 
			this->blackberry_e->Location = System::Drawing::Point(598, 87);
			this->blackberry_e->Name = L"blackberry_e";
			this->blackberry_e->Size = System::Drawing::Size(100, 20);
			this->blackberry_e->TabIndex = 39;
			// 
			// diet_s
			// 
			this->diet_s->Location = System::Drawing::Point(479, 115);
			this->diet_s->Name = L"diet_s";
			this->diet_s->Size = System::Drawing::Size(100, 20);
			this->diet_s->TabIndex = 40;
			// 
			// diet_e
			// 
			this->diet_e->Location = System::Drawing::Point(598, 115);
			this->diet_e->Name = L"diet_e";
			this->diet_e->Size = System::Drawing::Size(100, 20);
			this->diet_e->TabIndex = 41;
			// 
			// duck_s
			// 
			this->duck_s->Location = System::Drawing::Point(479, 143);
			this->duck_s->Name = L"duck_s";
			this->duck_s->Size = System::Drawing::Size(100, 20);
			this->duck_s->TabIndex = 42;
			// 
			// duck_e
			// 
			this->duck_e->Location = System::Drawing::Point(598, 143);
			this->duck_e->Name = L"duck_e";
			this->duck_e->Size = System::Drawing::Size(100, 20);
			this->duck_e->TabIndex = 43;
			// 
			// dragon_s
			// 
			this->dragon_s->Location = System::Drawing::Point(479, 171);
			this->dragon_s->Name = L"dragon_s";
			this->dragon_s->Size = System::Drawing::Size(100, 20);
			this->dragon_s->TabIndex = 44;
			// 
			// dragon_e
			// 
			this->dragon_e->Location = System::Drawing::Point(598, 171);
			this->dragon_e->Name = L"dragon_e";
			this->dragon_e->Size = System::Drawing::Size(100, 20);
			this->dragon_e->TabIndex = 45;
			// 
			// android_s
			// 
			this->android_s->Location = System::Drawing::Point(479, 199);
			this->android_s->Name = L"android_s";
			this->android_s->Size = System::Drawing::Size(100, 20);
			this->android_s->TabIndex = 46;
			// 
			// android_e
			// 
			this->android_e->Location = System::Drawing::Point(598, 199);
			this->android_e->Name = L"android_e";
			this->android_e->Size = System::Drawing::Size(100, 20);
			this->android_e->TabIndex = 47;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(360, 224);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(51, 13);
			this->label26->TabIndex = 48;
			this->label26->Text = L"Nothing";
			// 
			// nothing_s
			// 
			this->nothing_s->Location = System::Drawing::Point(479, 227);
			this->nothing_s->Name = L"nothing_s";
			this->nothing_s->Size = System::Drawing::Size(100, 20);
			this->nothing_s->TabIndex = 49;
			// 
			// nothing_e
			// 
			this->nothing_e->Location = System::Drawing::Point(598, 227);
			this->nothing_e->Name = L"nothing_e";
			this->nothing_e->Size = System::Drawing::Size(100, 20);
			this->nothing_e->TabIndex = 50;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Train Directory";
			// 
			// btn_temp
			// 
			this->btn_temp->Location = System::Drawing::Point(668, 48);
			this->btn_temp->Name = L"btn_temp";
			this->btn_temp->Size = System::Drawing::Size(75, 23);
			this->btn_temp->TabIndex = 6;
			this->btn_temp->Text = L"Browse";
			this->btn_temp->UseVisualStyleBackColor = true;
			this->btn_temp->Click += gcnew System::EventHandler(this, &FormMain::btn_temp_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(21, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(67, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Training Set:";
			// 
			// btn_run
			// 
			this->btn_run->Location = System::Drawing::Point(346, 88);
			this->btn_run->Name = L"btn_run";
			this->btn_run->Size = System::Drawing::Size(75, 23);
			this->btn_run->TabIndex = 5;
			this->btn_run->Text = L"Split Frames";
			this->btn_run->UseVisualStyleBackColor = true;
			this->btn_run->Click += gcnew System::EventHandler(this, &FormMain::btn_run_Click);
			// 
			// txt_trainFldr
			// 
			this->txt_trainFldr->Location = System::Drawing::Point(94, 11);
			this->txt_trainFldr->Name = L"txt_trainFldr";
			this->txt_trainFldr->Size = System::Drawing::Size(559, 20);
			this->txt_trainFldr->TabIndex = 1;
			// 
			// txt_tmp
			// 
			this->txt_tmp->Location = System::Drawing::Point(94, 48);
			this->txt_tmp->Name = L"txt_tmp";
			this->txt_tmp->Size = System::Drawing::Size(559, 20);
			this->txt_tmp->TabIndex = 4;
			// 
			// btn_trn_folder
			// 
			this->btn_trn_folder->Location = System::Drawing::Point(668, 9);
			this->btn_trn_folder->Name = L"btn_trn_folder";
			this->btn_trn_folder->Size = System::Drawing::Size(75, 23);
			this->btn_trn_folder->TabIndex = 2;
			this->btn_trn_folder->Text = L"Browse";
			this->btn_trn_folder->UseVisualStyleBackColor = true;
			this->btn_trn_folder->Click += gcnew System::EventHandler(this, &FormMain::btn_trn_folder_Click);
			// 
			// tabPage10
			// 
			this->tabPage10->Controls->Add(this->button1);
			this->tabPage10->Controls->Add(this->groupBox2);
			this->tabPage10->Controls->Add(this->label27);
			this->tabPage10->Controls->Add(this->txt_Test_Image);
			this->tabPage10->Controls->Add(this->btn_Image_Select);
			this->tabPage10->Location = System::Drawing::Point(4, 22);
			this->tabPage10->Name = L"tabPage10";
			this->tabPage10->Padding = System::Windows::Forms::Padding(3);
			this->tabPage10->Size = System::Drawing::Size(765, 449);
			this->tabPage10->TabIndex = 1;
			this->tabPage10->Text = L"Image Settings";
			this->tabPage10->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(290, 375);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(104, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Save Settings";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FormMain::button1_Click_2);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->txt_yh);
			this->groupBox2->Controls->Add(this->label35);
			this->groupBox2->Controls->Add(this->txt_ys);
			this->groupBox2->Controls->Add(this->label34);
			this->groupBox2->Controls->Add(this->txt_xw);
			this->groupBox2->Controls->Add(this->label33);
			this->groupBox2->Controls->Add(this->txt_xs);
			this->groupBox2->Controls->Add(this->label32);
			this->groupBox2->Controls->Add(this->txt_CT);
			this->groupBox2->Controls->Add(this->label30);
			this->groupBox2->Controls->Add(this->btn_IS);
			this->groupBox2->Controls->Add(this->txt_ResP);
			this->groupBox2->Controls->Add(this->label29);
			this->groupBox2->Controls->Add(this->txt_Threshold);
			this->groupBox2->Controls->Add(this->label28);
			this->groupBox2->Location = System::Drawing::Point(79, 59);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(547, 298);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Image Settings";
			// 
			// txt_yh
			// 
			this->txt_yh->Location = System::Drawing::Point(326, 183);
			this->txt_yh->Name = L"txt_yh";
			this->txt_yh->Size = System::Drawing::Size(100, 20);
			this->txt_yh->TabIndex = 14;
			this->txt_yh->Text = L"80";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(256, 190);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(48, 13);
			this->label35->TabIndex = 13;
			this->label35->Text = L"Y Height";
			// 
			// txt_ys
			// 
			this->txt_ys->Location = System::Drawing::Point(326, 141);
			this->txt_ys->Name = L"txt_ys";
			this->txt_ys->Size = System::Drawing::Size(100, 20);
			this->txt_ys->TabIndex = 12;
			this->txt_ys->Text = L"20";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(256, 144);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(39, 13);
			this->label34->TabIndex = 11;
			this->label34->Text = L"Y Start";
			// 
			// txt_xw
			// 
			this->txt_xw->Location = System::Drawing::Point(110, 183);
			this->txt_xw->Name = L"txt_xw";
			this->txt_xw->Size = System::Drawing::Size(100, 20);
			this->txt_xw->TabIndex = 10;
			this->txt_xw->Text = L"100";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(20, 190);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(45, 13);
			this->label33->TabIndex = 9;
			this->label33->Text = L"X Width";
			// 
			// txt_xs
			// 
			this->txt_xs->Location = System::Drawing::Point(110, 138);
			this->txt_xs->Name = L"txt_xs";
			this->txt_xs->Size = System::Drawing::Size(100, 20);
			this->txt_xs->TabIndex = 8;
			this->txt_xs->Text = L"60";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(20, 138);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(39, 13);
			this->label32->TabIndex = 7;
			this->label32->Text = L"X Start";
			// 
			// txt_CT
			// 
			this->txt_CT->Location = System::Drawing::Point(110, 81);
			this->txt_CT->Name = L"txt_CT";
			this->txt_CT->Size = System::Drawing::Size(100, 20);
			this->txt_CT->TabIndex = 6;
			this->txt_CT->Text = L"80";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(17, 83);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(87, 13);
			this->label30->TabIndex = 5;
			this->label30->Text = L"Canny Threshold";
			// 
			// btn_IS
			// 
			this->btn_IS->Location = System::Drawing::Point(240, 248);
			this->btn_IS->Name = L"btn_IS";
			this->btn_IS->Size = System::Drawing::Size(75, 23);
			this->btn_IS->TabIndex = 4;
			this->btn_IS->Text = L"Show Image";
			this->btn_IS->UseVisualStyleBackColor = true;
			this->btn_IS->Click += gcnew System::EventHandler(this, &FormMain::btn_IS_Click);
			// 
			// txt_ResP
			// 
			this->txt_ResP->Location = System::Drawing::Point(326, 24);
			this->txt_ResP->Name = L"txt_ResP";
			this->txt_ResP->Size = System::Drawing::Size(100, 20);
			this->txt_ResP->TabIndex = 3;
			this->txt_ResP->Text = L"25";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(237, 31);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(68, 13);
			this->label29->TabIndex = 2;
			this->label29->Text = L"Resolution %";
			// 
			// txt_Threshold
			// 
			this->txt_Threshold->Location = System::Drawing::Point(110, 28);
			this->txt_Threshold->Name = L"txt_Threshold";
			this->txt_Threshold->Size = System::Drawing::Size(100, 20);
			this->txt_Threshold->TabIndex = 1;
			this->txt_Threshold->Text = L"1.5";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(17, 31);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(56, 13);
			this->label28->TabIndex = 0;
			this->label28->Text = L"Brightness";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(12, 7);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(60, 13);
			this->label27->TabIndex = 0;
			this->label27->Text = L"Test Image";
			// 
			// txt_Test_Image
			// 
			this->txt_Test_Image->Location = System::Drawing::Point(79, 7);
			this->txt_Test_Image->Name = L"txt_Test_Image";
			this->txt_Test_Image->Size = System::Drawing::Size(547, 20);
			this->txt_Test_Image->TabIndex = 1;
			// 
			// btn_Image_Select
			// 
			this->btn_Image_Select->Location = System::Drawing::Point(644, 7);
			this->btn_Image_Select->Name = L"btn_Image_Select";
			this->btn_Image_Select->Size = System::Drawing::Size(75, 23);
			this->btn_Image_Select->TabIndex = 2;
			this->btn_Image_Select->Text = L"Select Image";
			this->btn_Image_Select->UseVisualStyleBackColor = true;
			this->btn_Image_Select->Click += gcnew System::EventHandler(this, &FormMain::btn_Image_Select_Click);
			// 
			// btn_class
			// 
			this->btn_class->Location = System::Drawing::Point(294, 499);
			this->btn_class->Name = L"btn_class";
			this->btn_class->Size = System::Drawing::Size(137, 23);
			this->btn_class->TabIndex = 1;
			this->btn_class->Text = L"Create Classifications";
			this->btn_class->UseVisualStyleBackColor = true;
			this->btn_class->Click += gcnew System::EventHandler(this, &FormMain::btn_class_Click);
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->btn_ClassTestFolder);
			this->tabPage6->Controls->Add(this->txt_ClassTrain);
			this->tabPage6->Controls->Add(this->label31);
			this->tabPage6->Controls->Add(this->btn_ClassTest);
			this->tabPage6->Controls->Add(this->tabControl3);
			this->tabPage6->Location = System::Drawing::Point(4, 22);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Size = System::Drawing::Size(785, 569);
			this->tabPage6->TabIndex = 3;
			this->tabPage6->Text = L"SVM Confusion";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// btn_ClassTestFolder
			// 
			this->btn_ClassTestFolder->Location = System::Drawing::Point(692, 17);
			this->btn_ClassTestFolder->Name = L"btn_ClassTestFolder";
			this->btn_ClassTestFolder->Size = System::Drawing::Size(75, 23);
			this->btn_ClassTestFolder->TabIndex = 4;
			this->btn_ClassTestFolder->Text = L"Browse";
			this->btn_ClassTestFolder->UseVisualStyleBackColor = true;
			this->btn_ClassTestFolder->Click += gcnew System::EventHandler(this, &FormMain::btn_ClassTestFolder_Click);
			// 
			// txt_ClassTrain
			// 
			this->txt_ClassTrain->Location = System::Drawing::Point(113, 21);
			this->txt_ClassTrain->Name = L"txt_ClassTrain";
			this->txt_ClassTrain->Size = System::Drawing::Size(560, 20);
			this->txt_ClassTrain->TabIndex = 3;
			this->txt_ClassTrain->TextChanged += gcnew System::EventHandler(this, &FormMain::txt_ClassTrain_TextChanged);
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(29, 21);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(77, 13);
			this->label31->TabIndex = 2;
			this->label31->Text = L"Training Folder";
			// 
			// btn_ClassTest
			// 
			this->btn_ClassTest->Location = System::Drawing::Point(363, 519);
			this->btn_ClassTest->Name = L"btn_ClassTest";
			this->btn_ClassTest->Size = System::Drawing::Size(75, 23);
			this->btn_ClassTest->TabIndex = 1;
			this->btn_ClassTest->Text = L"Test";
			this->btn_ClassTest->UseVisualStyleBackColor = true;
			this->btn_ClassTest->Click += gcnew System::EventHandler(this, &FormMain::btn_ClassTest_Click);
			// 
			// tabControl3
			// 
			this->tabControl3->Controls->Add(this->tabPage7);
			this->tabControl3->Controls->Add(this->tabPage8);
			this->tabControl3->Controls->Add(this->tabPage11);
			this->tabControl3->Controls->Add(this->tabPage12);
			this->tabControl3->Controls->Add(this->tabPage13);
			this->tabControl3->Controls->Add(this->tabPage14);
			this->tabControl3->Controls->Add(this->tabPage15);
			this->tabControl3->Controls->Add(this->tabPage16);
			this->tabControl3->Controls->Add(this->tabPage17);
			this->tabControl3->Controls->Add(this->tabPage18);
			this->tabControl3->Controls->Add(this->tabPage19);
			this->tabControl3->Controls->Add(this->tabPage20);
			this->tabControl3->Controls->Add(this->tabPage21);
			this->tabControl3->Controls->Add(this->tabPage22);
			this->tabControl3->Controls->Add(this->tabPage23);
			this->tabControl3->Location = System::Drawing::Point(11, 63);
			this->tabControl3->Name = L"tabControl3";
			this->tabControl3->SelectedIndex = 0;
			this->tabControl3->Size = System::Drawing::Size(771, 441);
			this->tabControl3->TabIndex = 0;
			// 
			// tabPage7
			// 
			this->tabPage7->Controls->Add(this->chart3);
			this->tabPage7->Controls->Add(this->txt_ImageResults);
			this->tabPage7->Location = System::Drawing::Point(4, 22);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Padding = System::Windows::Forms::Padding(3);
			this->tabPage7->Size = System::Drawing::Size(763, 415);
			this->tabPage7->TabIndex = 0;
			this->tabPage7->Text = L"Android";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// chart3
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart3->ChartAreas->Add(chartArea1);
			this->chart3->Location = System::Drawing::Point(17, 35);
			this->chart3->Name = L"chart3";
			series1->ChartArea = L"ChartArea1";
			series1->Name = L"Depth";
			this->chart3->Series->Add(series1);
			this->chart3->Size = System::Drawing::Size(735, 342);
			this->chart3->TabIndex = 11;
			this->chart3->Text = L"Classification";
			// 
			// txt_ImageResults
			// 
			this->txt_ImageResults->Location = System::Drawing::Point(7, 20);
			this->txt_ImageResults->Name = L"txt_ImageResults";
			this->txt_ImageResults->Size = System::Drawing::Size(750, 368);
			this->txt_ImageResults->TabIndex = 0;
			this->txt_ImageResults->Text = L"";
			// 
			// tabPage8
			// 
			this->tabPage8->Controls->Add(this->chart4);
			this->tabPage8->Location = System::Drawing::Point(4, 22);
			this->tabPage8->Name = L"tabPage8";
			this->tabPage8->Padding = System::Windows::Forms::Padding(3);
			this->tabPage8->Size = System::Drawing::Size(763, 415);
			this->tabPage8->TabIndex = 1;
			this->tabPage8->Text = L"Baby";
			this->tabPage8->UseVisualStyleBackColor = true;
			// 
			// chart4
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart4->ChartAreas->Add(chartArea2);
			this->chart4->Location = System::Drawing::Point(14, 36);
			this->chart4->Name = L"chart4";
			series2->ChartArea = L"ChartArea1";
			series2->Name = L"Depth";
			this->chart4->Series->Add(series2);
			this->chart4->Size = System::Drawing::Size(735, 342);
			this->chart4->TabIndex = 12;
			this->chart4->Text = L"Classification";
			// 
			// tabPage11
			// 
			this->tabPage11->Controls->Add(this->chart5);
			this->tabPage11->Location = System::Drawing::Point(4, 22);
			this->tabPage11->Name = L"tabPage11";
			this->tabPage11->Size = System::Drawing::Size(763, 415);
			this->tabPage11->TabIndex = 2;
			this->tabPage11->Text = L"Blackberry";
			this->tabPage11->UseVisualStyleBackColor = true;
			// 
			// chart5
			// 
			chartArea3->Name = L"ChartArea1";
			this->chart5->ChartAreas->Add(chartArea3);
			this->chart5->Location = System::Drawing::Point(14, 36);
			this->chart5->Name = L"chart5";
			series3->ChartArea = L"ChartArea1";
			series3->Name = L"Depth";
			this->chart5->Series->Add(series3);
			this->chart5->Size = System::Drawing::Size(735, 342);
			this->chart5->TabIndex = 12;
			this->chart5->Text = L"Classification";
			// 
			// tabPage12
			// 
			this->tabPage12->Controls->Add(this->chart6);
			this->tabPage12->Location = System::Drawing::Point(4, 22);
			this->tabPage12->Name = L"tabPage12";
			this->tabPage12->Size = System::Drawing::Size(763, 415);
			this->tabPage12->TabIndex = 3;
			this->tabPage12->Text = L"Camera";
			this->tabPage12->UseVisualStyleBackColor = true;
			// 
			// chart6
			// 
			chartArea4->Name = L"ChartArea1";
			this->chart6->ChartAreas->Add(chartArea4);
			this->chart6->Location = System::Drawing::Point(14, 36);
			this->chart6->Name = L"chart6";
			series4->ChartArea = L"ChartArea1";
			series4->Name = L"Depth";
			this->chart6->Series->Add(series4);
			this->chart6->Size = System::Drawing::Size(735, 342);
			this->chart6->TabIndex = 12;
			this->chart6->Text = L"Classification";
			// 
			// tabPage13
			// 
			this->tabPage13->Controls->Add(this->chart7);
			this->tabPage13->Location = System::Drawing::Point(4, 22);
			this->tabPage13->Name = L"tabPage13";
			this->tabPage13->Size = System::Drawing::Size(763, 415);
			this->tabPage13->TabIndex = 4;
			this->tabPage13->Text = L"Car";
			this->tabPage13->UseVisualStyleBackColor = true;
			// 
			// chart7
			// 
			chartArea5->Name = L"ChartArea1";
			this->chart7->ChartAreas->Add(chartArea5);
			this->chart7->Location = System::Drawing::Point(14, 36);
			this->chart7->Name = L"chart7";
			series5->ChartArea = L"ChartArea1";
			series5->Name = L"Depth";
			this->chart7->Series->Add(series5);
			this->chart7->Size = System::Drawing::Size(735, 342);
			this->chart7->TabIndex = 12;
			this->chart7->Text = L"Classification";
			// 
			// tabPage14
			// 
			this->tabPage14->Controls->Add(this->chart8);
			this->tabPage14->Location = System::Drawing::Point(4, 22);
			this->tabPage14->Name = L"tabPage14";
			this->tabPage14->Size = System::Drawing::Size(763, 415);
			this->tabPage14->TabIndex = 5;
			this->tabPage14->Text = L"Coffee Tin";
			this->tabPage14->UseVisualStyleBackColor = true;
			// 
			// chart8
			// 
			chartArea6->Name = L"ChartArea1";
			this->chart8->ChartAreas->Add(chartArea6);
			this->chart8->Location = System::Drawing::Point(14, 36);
			this->chart8->Name = L"chart8";
			series6->ChartArea = L"ChartArea1";
			series6->Name = L"Depth";
			this->chart8->Series->Add(series6);
			this->chart8->Size = System::Drawing::Size(735, 342);
			this->chart8->TabIndex = 12;
			this->chart8->Text = L"Classification";
			// 
			// tabPage15
			// 
			this->tabPage15->Controls->Add(this->chart9);
			this->tabPage15->Location = System::Drawing::Point(4, 22);
			this->tabPage15->Name = L"tabPage15";
			this->tabPage15->Size = System::Drawing::Size(763, 415);
			this->tabPage15->TabIndex = 6;
			this->tabPage15->Text = L"Diet Coke";
			this->tabPage15->UseVisualStyleBackColor = true;
			// 
			// chart9
			// 
			chartArea7->Name = L"ChartArea1";
			this->chart9->ChartAreas->Add(chartArea7);
			this->chart9->Location = System::Drawing::Point(14, 36);
			this->chart9->Name = L"chart9";
			series7->ChartArea = L"ChartArea1";
			series7->Name = L"Depth";
			this->chart9->Series->Add(series7);
			this->chart9->Size = System::Drawing::Size(735, 342);
			this->chart9->TabIndex = 12;
			this->chart9->Text = L"Classification";
			// 
			// tabPage16
			// 
			this->tabPage16->Controls->Add(this->chart10);
			this->tabPage16->Location = System::Drawing::Point(4, 22);
			this->tabPage16->Name = L"tabPage16";
			this->tabPage16->Size = System::Drawing::Size(763, 415);
			this->tabPage16->TabIndex = 7;
			this->tabPage16->Text = L"Dinosaur";
			this->tabPage16->UseVisualStyleBackColor = true;
			// 
			// chart10
			// 
			chartArea8->Name = L"ChartArea1";
			this->chart10->ChartAreas->Add(chartArea8);
			this->chart10->Location = System::Drawing::Point(14, 36);
			this->chart10->Name = L"chart10";
			series8->ChartArea = L"ChartArea1";
			series8->Name = L"Depth";
			this->chart10->Series->Add(series8);
			this->chart10->Size = System::Drawing::Size(735, 342);
			this->chart10->TabIndex = 12;
			this->chart10->Text = L"Classification";
			// 
			// tabPage17
			// 
			this->tabPage17->Controls->Add(this->chart11);
			this->tabPage17->Location = System::Drawing::Point(4, 22);
			this->tabPage17->Name = L"tabPage17";
			this->tabPage17->Size = System::Drawing::Size(763, 415);
			this->tabPage17->TabIndex = 8;
			this->tabPage17->Text = L"Dog";
			this->tabPage17->UseVisualStyleBackColor = true;
			// 
			// chart11
			// 
			chartArea9->Name = L"ChartArea1";
			this->chart11->ChartAreas->Add(chartArea9);
			this->chart11->Location = System::Drawing::Point(14, 36);
			this->chart11->Name = L"chart11";
			series9->ChartArea = L"ChartArea1";
			series9->Name = L"Depth";
			this->chart11->Series->Add(series9);
			this->chart11->Size = System::Drawing::Size(735, 342);
			this->chart11->TabIndex = 12;
			this->chart11->Text = L"Classification";
			// 
			// tabPage18
			// 
			this->tabPage18->Controls->Add(this->chart12);
			this->tabPage18->Location = System::Drawing::Point(4, 22);
			this->tabPage18->Name = L"tabPage18";
			this->tabPage18->Size = System::Drawing::Size(763, 415);
			this->tabPage18->TabIndex = 9;
			this->tabPage18->Text = L"Dragon";
			this->tabPage18->UseVisualStyleBackColor = true;
			// 
			// chart12
			// 
			chartArea10->Name = L"ChartArea1";
			this->chart12->ChartAreas->Add(chartArea10);
			this->chart12->Location = System::Drawing::Point(14, 36);
			this->chart12->Name = L"chart12";
			series10->ChartArea = L"ChartArea1";
			series10->Name = L"Depth";
			this->chart12->Series->Add(series10);
			this->chart12->Size = System::Drawing::Size(735, 342);
			this->chart12->TabIndex = 12;
			this->chart12->Text = L"Classification";
			// 
			// tabPage19
			// 
			this->tabPage19->Controls->Add(this->chart13);
			this->tabPage19->Location = System::Drawing::Point(4, 22);
			this->tabPage19->Name = L"tabPage19";
			this->tabPage19->Size = System::Drawing::Size(763, 415);
			this->tabPage19->TabIndex = 10;
			this->tabPage19->Text = L"Duck";
			this->tabPage19->UseVisualStyleBackColor = true;
			// 
			// chart13
			// 
			chartArea11->Name = L"ChartArea1";
			this->chart13->ChartAreas->Add(chartArea11);
			this->chart13->Location = System::Drawing::Point(14, 36);
			this->chart13->Name = L"chart13";
			series11->ChartArea = L"ChartArea1";
			series11->Name = L"Depth";
			this->chart13->Series->Add(series11);
			this->chart13->Size = System::Drawing::Size(735, 342);
			this->chart13->TabIndex = 12;
			this->chart13->Text = L"Classification";
			// 
			// tabPage20
			// 
			this->tabPage20->Controls->Add(this->chart14);
			this->tabPage20->Location = System::Drawing::Point(4, 22);
			this->tabPage20->Name = L"tabPage20";
			this->tabPage20->Size = System::Drawing::Size(763, 415);
			this->tabPage20->TabIndex = 11;
			this->tabPage20->Text = L"Keyboard";
			this->tabPage20->UseVisualStyleBackColor = true;
			// 
			// chart14
			// 
			chartArea12->Name = L"ChartArea1";
			this->chart14->ChartAreas->Add(chartArea12);
			this->chart14->Location = System::Drawing::Point(14, 36);
			this->chart14->Name = L"chart14";
			series12->ChartArea = L"ChartArea1";
			series12->Name = L"Depth";
			this->chart14->Series->Add(series12);
			this->chart14->Size = System::Drawing::Size(735, 342);
			this->chart14->TabIndex = 12;
			this->chart14->Text = L"Classification";
			// 
			// tabPage21
			// 
			this->tabPage21->Controls->Add(this->chart15);
			this->tabPage21->Location = System::Drawing::Point(4, 22);
			this->tabPage21->Name = L"tabPage21";
			this->tabPage21->Size = System::Drawing::Size(763, 415);
			this->tabPage21->TabIndex = 12;
			this->tabPage21->Text = L"Koala";
			this->tabPage21->UseVisualStyleBackColor = true;
			// 
			// chart15
			// 
			chartArea13->Name = L"ChartArea1";
			this->chart15->ChartAreas->Add(chartArea13);
			this->chart15->Location = System::Drawing::Point(14, 36);
			this->chart15->Name = L"chart15";
			series13->ChartArea = L"ChartArea1";
			series13->Name = L"Depth";
			this->chart15->Series->Add(series13);
			this->chart15->Size = System::Drawing::Size(735, 342);
			this->chart15->TabIndex = 12;
			this->chart15->Text = L"Classification";
			// 
			// tabPage22
			// 
			this->tabPage22->Controls->Add(this->chart16);
			this->tabPage22->Location = System::Drawing::Point(4, 22);
			this->tabPage22->Name = L"tabPage22";
			this->tabPage22->Size = System::Drawing::Size(763, 415);
			this->tabPage22->TabIndex = 13;
			this->tabPage22->Text = L"Mug";
			this->tabPage22->UseVisualStyleBackColor = true;
			// 
			// chart16
			// 
			chartArea14->Name = L"ChartArea1";
			this->chart16->ChartAreas->Add(chartArea14);
			this->chart16->Location = System::Drawing::Point(14, 36);
			this->chart16->Name = L"chart16";
			series14->ChartArea = L"ChartArea1";
			series14->Name = L"Depth";
			this->chart16->Series->Add(series14);
			this->chart16->Size = System::Drawing::Size(735, 342);
			this->chart16->TabIndex = 12;
			this->chart16->Text = L"Classification";
			// 
			// tabPage23
			// 
			this->tabPage23->Controls->Add(this->chart17);
			this->tabPage23->Location = System::Drawing::Point(4, 22);
			this->tabPage23->Name = L"tabPage23";
			this->tabPage23->Size = System::Drawing::Size(763, 415);
			this->tabPage23->TabIndex = 14;
			this->tabPage23->Text = L"Nothing";
			this->tabPage23->UseVisualStyleBackColor = true;
			// 
			// chart17
			// 
			chartArea15->Name = L"ChartArea1";
			this->chart17->ChartAreas->Add(chartArea15);
			this->chart17->Location = System::Drawing::Point(14, 36);
			this->chart17->Name = L"chart17";
			series15->ChartArea = L"ChartArea1";
			series15->Name = L"Depth";
			this->chart17->Series->Add(series15);
			this->chart17->Size = System::Drawing::Size(735, 342);
			this->chart17->TabIndex = 12;
			this->chart17->Text = L"Classification";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->tabControl2);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->txt_test);
			this->tabPage2->Controls->Add(this->label25);
			this->tabPage2->Controls->Add(this->btn_trn);
			this->tabPage2->Controls->Add(this->txt_trn);
			this->tabPage2->Controls->Add(this->label24);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(785, 569);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Run Predictions";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage4);
			this->tabControl2->Controls->Add(this->tabPage3);
			this->tabControl2->Controls->Add(this->tabPage5);
			this->tabControl2->Location = System::Drawing::Point(9, 98);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(761, 443);
			this->tabControl2->TabIndex = 15;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->lbl_SVM_IP);
			this->tabPage4->Controls->Add(this->lbl_SVM_DP);
			this->tabPage4->Controls->Add(this->label37);
			this->tabPage4->Controls->Add(this->label36);
			this->tabPage4->Controls->Add(this->btn_SVMTest);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(753, 417);
			this->tabPage4->TabIndex = 1;
			this->tabPage4->Text = L"SVM";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// lbl_SVM_IP
			// 
			this->lbl_SVM_IP->AutoSize = true;
			this->lbl_SVM_IP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_SVM_IP->ForeColor = System::Drawing::SystemColors::Highlight;
			this->lbl_SVM_IP->Location = System::Drawing::Point(512, 141);
			this->lbl_SVM_IP->Name = L"lbl_SVM_IP";
			this->lbl_SVM_IP->Size = System::Drawing::Size(122, 33);
			this->lbl_SVM_IP->TabIndex = 4;
			this->lbl_SVM_IP->Text = L"Nothing";
			// 
			// lbl_SVM_DP
			// 
			this->lbl_SVM_DP->AutoSize = true;
			this->lbl_SVM_DP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_SVM_DP->ForeColor = System::Drawing::SystemColors::Highlight;
			this->lbl_SVM_DP->Location = System::Drawing::Point(68, 141);
			this->lbl_SVM_DP->Name = L"lbl_SVM_DP";
			this->lbl_SVM_DP->Size = System::Drawing::Size(122, 33);
			this->lbl_SVM_DP->TabIndex = 3;
			this->lbl_SVM_DP->Text = L"Nothing";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->Location = System::Drawing::Point(497, 34);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(188, 25);
			this->label37->TabIndex = 2;
			this->label37->Text = L"Image Prediction";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->Location = System::Drawing::Point(63, 34);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(187, 25);
			this->label36->TabIndex = 1;
			this->label36->Text = L"Depth Predcition";
			// 
			// btn_SVMTest
			// 
			this->btn_SVMTest->Location = System::Drawing::Point(302, 388);
			this->btn_SVMTest->Name = L"btn_SVMTest";
			this->btn_SVMTest->Size = System::Drawing::Size(75, 23);
			this->btn_SVMTest->TabIndex = 0;
			this->btn_SVMTest->Text = L"SVM Test";
			this->btn_SVMTest->UseVisualStyleBackColor = true;
			this->btn_SVMTest->Click += gcnew System::EventHandler(this, &FormMain::button1_Click_1);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->lbl_DE);
			this->tabPage3->Controls->Add(this->chart1);
			this->tabPage3->Controls->Add(this->btn_Analyze);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(753, 417);
			this->tabPage3->TabIndex = 0;
			this->tabPage3->Text = L"Depth E Distance";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// lbl_DE
			// 
			this->lbl_DE->AutoSize = true;
			this->lbl_DE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_DE->ForeColor = System::Drawing::SystemColors::Highlight;
			this->lbl_DE->Location = System::Drawing::Point(286, 329);
			this->lbl_DE->Name = L"lbl_DE";
			this->lbl_DE->Size = System::Drawing::Size(122, 33);
			this->lbl_DE->TabIndex = 12;
			this->lbl_DE->Text = L"Nothing";
			// 
			// chart1
			// 
			chartArea16->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea16);
			this->chart1->Location = System::Drawing::Point(6, 6);
			this->chart1->Name = L"chart1";
			series16->ChartArea = L"ChartArea1";
			series16->Name = L"Depth";
			this->chart1->Series->Add(series16);
			this->chart1->Size = System::Drawing::Size(716, 329);
			this->chart1->TabIndex = 10;
			this->chart1->Text = L"Classification";
			// 
			// btn_Analyze
			// 
			this->btn_Analyze->Location = System::Drawing::Point(312, 388);
			this->btn_Analyze->Name = L"btn_Analyze";
			this->btn_Analyze->Size = System::Drawing::Size(75, 23);
			this->btn_Analyze->TabIndex = 11;
			this->btn_Analyze->Text = L"Analyze";
			this->btn_Analyze->UseVisualStyleBackColor = true;
			this->btn_Analyze->Click += gcnew System::EventHandler(this, &FormMain::button1_Click);
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->lbl_IE);
			this->tabPage5->Controls->Add(this->chart2);
			this->tabPage5->Controls->Add(this->button3);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Size = System::Drawing::Size(753, 417);
			this->tabPage5->TabIndex = 2;
			this->tabPage5->Text = L"Image E Distance";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// lbl_IE
			// 
			this->lbl_IE->AutoSize = true;
			this->lbl_IE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_IE->ForeColor = System::Drawing::SystemColors::Highlight;
			this->lbl_IE->Location = System::Drawing::Point(298, 329);
			this->lbl_IE->Name = L"lbl_IE";
			this->lbl_IE->Size = System::Drawing::Size(122, 33);
			this->lbl_IE->TabIndex = 15;
			this->lbl_IE->Text = L"Nothing";
			// 
			// chart2
			// 
			chartArea17->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea17);
			this->chart2->Location = System::Drawing::Point(18, 6);
			this->chart2->Name = L"chart2";
			series17->ChartArea = L"ChartArea1";
			series17->Name = L"Depth";
			this->chart2->Series->Add(series17);
			this->chart2->Size = System::Drawing::Size(716, 329);
			this->chart2->TabIndex = 13;
			this->chart2->Text = L"Classification";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(324, 388);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 14;
			this->button3->Text = L"Analyze";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &FormMain::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(680, 50);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Browse";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &FormMain::button2_Click);
			// 
			// txt_test
			// 
			this->txt_test->Location = System::Drawing::Point(106, 50);
			this->txt_test->Name = L"txt_test";
			this->txt_test->Size = System::Drawing::Size(559, 20);
			this->txt_test->TabIndex = 13;
			this->txt_test->TextChanged += gcnew System::EventHandler(this, &FormMain::textBox1_TextChanged);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(6, 53);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(79, 13);
			this->label25->TabIndex = 12;
			this->label25->Text = L"Testing Images";
			// 
			// btn_trn
			// 
			this->btn_trn->Location = System::Drawing::Point(680, 16);
			this->btn_trn->Name = L"btn_trn";
			this->btn_trn->Size = System::Drawing::Size(75, 23);
			this->btn_trn->TabIndex = 9;
			this->btn_trn->Text = L"Browse";
			this->btn_trn->UseVisualStyleBackColor = true;
			this->btn_trn->Click += gcnew System::EventHandler(this, &FormMain::btn_trn_Click);
			// 
			// txt_trn
			// 
			this->txt_trn->Location = System::Drawing::Point(106, 16);
			this->txt_trn->Name = L"txt_trn";
			this->txt_trn->Size = System::Drawing::Size(559, 20);
			this->txt_trn->TabIndex = 8;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(6, 19);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(90, 13);
			this->label24->TabIndex = 7;
			this->label24->Text = L"Training Directory";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->Location = System::Drawing::Point(91, 626);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(124, 37);
			this->label38->TabIndex = 1;
			this->label38->Text = L"Status:";
			// 
			// lbl_Status
			// 
			this->lbl_Status->AutoSize = true;
			this->lbl_Status->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Status->ForeColor = System::Drawing::SystemColors::Highlight;
			this->lbl_Status->Location = System::Drawing::Point(255, 626);
			this->lbl_Status->Name = L"lbl_Status";
			this->lbl_Status->Size = System::Drawing::Size(71, 37);
			this->lbl_Status->TabIndex = 2;
			this->lbl_Status->Text = L"Idle";
			// 
			// FormMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(832, 697);
			this->Controls->Add(this->lbl_Status);
			this->Controls->Add(this->label38);
			this->Controls->Add(this->tabControl1);
			this->Name = L"FormMain";
			this->Text = L"FormMain";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabControl4->ResumeLayout(false);
			this->tabPage9->ResumeLayout(false);
			this->tabPage9->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->tabPage10->ResumeLayout(false);
			this->tabPage10->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->tabPage6->ResumeLayout(false);
			this->tabPage6->PerformLayout();
			this->tabControl3->ResumeLayout(false);
			this->tabPage7->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			this->tabPage8->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart4))->EndInit();
			this->tabPage11->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart5))->EndInit();
			this->tabPage12->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart6))->EndInit();
			this->tabPage13->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart7))->EndInit();
			this->tabPage14->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart8))->EndInit();
			this->tabPage15->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart9))->EndInit();
			this->tabPage16->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart10))->EndInit();
			this->tabPage17->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart11))->EndInit();
			this->tabPage18->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart12))->EndInit();
			this->tabPage19->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart13))->EndInit();
			this->tabPage20->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart14))->EndInit();
			this->tabPage21->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart15))->EndInit();
			this->tabPage22->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart16))->EndInit();
			this->tabPage23->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart17))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabControl2->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//FormMain Code
	private: System::Void btn_trn_folder_Click(System::Object^  sender, System::EventArgs^  e) {
		//Browse for the training folder
		TrainDlg->SelectedPath = "";
		TrainDlg->ShowDialog();
		txt_trainFldr->Text = TrainDlg->SelectedPath;	
	}
private: System::Void btn_run_Click(System::Object^  sender, System::EventArgs^  e) {
	//Run the Distance Training
	msclr::interop::marshal_context context;
	std::string tf = context.marshal_as<std::string>(txt_trainFldr->Text);
	std::string ft = context.marshal_as<std::string>(txt_tmp->Text);
	TrainFolder::TrainFolder(tf,ft);
}
private: System::Void btn_temp_Click(System::Object^  sender, System::EventArgs^  e) {
	//Select the temp train folder and return the select dir
	TrainDlg->SelectedPath = "";
	TrainDlg->ShowDialog();
	txt_tmp->Text = TrainDlg->SelectedPath;
	txt_trn->Text = TrainDlg->SelectedPath;
}


private: System::Void btn_label_Click(System::Object^  sender, System::EventArgs^  e) {
	//Now label all of the images
	//Pass to a function that accepts label name, temp directory, start and end frame
	//Set the Label Folder
	msclr::interop::marshal_context context;
	std::string tDir = context.marshal_as<std::string>(txt_tmp->Text);
	//Set the Directories
	std::string im = tDir + "/images";
	std::string dp = tDir + "/depth";
	
	//Baby
	int bs = std::stoi(context.marshal_as<std::string>(baby_s->Text));
	int be = std::stoi(context.marshal_as<std::string>(baby_e->Text));
	LabelFolder::LabelFolder(im, "Baby", bs, be);
	LabelFolder::LabelFolder(dp, "Baby", bs, be);

	//Dog
	int ds = std::stoi(context.marshal_as<std::string>(dog_s->Text));
	int de = std::stoi(context.marshal_as<std::string>(dog_e->Text));
	LabelFolder::LabelFolder(im, "Dog", ds, de);
	LabelFolder::LabelFolder(dp, "Dog", ds, de);

	//Dinosaur
	int dinos = std::stoi(context.marshal_as<std::string>(dino_s->Text));
	int dinoe = std::stoi(context.marshal_as<std::string>(dino_e->Text));
	LabelFolder::LabelFolder(im, "Dinosaur", dinos, dinoe);
	LabelFolder::LabelFolder(dp, "Dinosaur", dinos, dinoe);

	//CoffeeTin
	int coffees = std::stoi(context.marshal_as<std::string>(coffee_s->Text));
	int coffeee = std::stoi(context.marshal_as<std::string>(coffee_e->Text));
	LabelFolder::LabelFolder(im, "Coffee Tin", coffees, coffeee);
	LabelFolder::LabelFolder(dp, "Coffee Tin", coffees, coffeee);

	//Mug
	int ms = std::stoi(context.marshal_as<std::string>(mug_s->Text));
	int me = std::stoi(context.marshal_as<std::string>(mug_e->Text));
	LabelFolder::LabelFolder(im, "Mug", ms, me);
	LabelFolder::LabelFolder(dp, "Mug", ms, me);

	//Car
	int cs = std::stoi(context.marshal_as<std::string>(car_s->Text));
	int ce = std::stoi(context.marshal_as<std::string>(car_e->Text));
	LabelFolder::LabelFolder(im, "Car", cs, ce);
	LabelFolder::LabelFolder(dp, "Car", cs, ce);

	//Camera
	int cams = std::stoi(context.marshal_as<std::string>(cam_s->Text));
	int came = std::stoi(context.marshal_as<std::string>(cam_e->Text));
	LabelFolder::LabelFolder(im, "Camera", cams, came);
	LabelFolder::LabelFolder(dp, "Camera", cams, came);

	//Keyboard
	int ks = std::stoi(context.marshal_as<std::string>(key_s->Text));
	int ke = std::stoi(context.marshal_as<std::string>(key_e->Text));
	LabelFolder::LabelFolder(im, "Keyboard", ks, ke);
	LabelFolder::LabelFolder(dp, "Keyboard", ks, ke);

	//Koala
	int kos = std::stoi(context.marshal_as<std::string>(koala_s->Text));
	int koe = std::stoi(context.marshal_as<std::string>(koala_e->Text));
	LabelFolder::LabelFolder(im, "Koala", kos, koe);
	LabelFolder::LabelFolder(dp, "Koala", kos, koe);

	//Blackberry
	int blackberrys = std::stoi(context.marshal_as<std::string>(blackberry_s->Text));
	int blackberrye = std::stoi(context.marshal_as<std::string>(blackberry_e->Text));
	LabelFolder::LabelFolder(im, "Blackberry", blackberrys, blackberrye);
	LabelFolder::LabelFolder(dp, "Blackberry", blackberrys, blackberrye);

	//Diet Coke
	int dcs = std::stoi(context.marshal_as<std::string>(diet_s->Text));
	int dce = std::stoi(context.marshal_as<std::string>(diet_e->Text));
	LabelFolder::LabelFolder(im, "Diet Coke", dcs, dce);
	LabelFolder::LabelFolder(dp, "Diet Coke", dcs, dce);

	//Duck
	int ducks = std::stoi(context.marshal_as<std::string>(duck_s->Text));
	int ducke = std::stoi(context.marshal_as<std::string>(duck_e->Text));
	LabelFolder::LabelFolder(im, "Duck", ducks, ducke);
	LabelFolder::LabelFolder(dp, "Duck", ducks, ducke);

	//Dragon
	int dragons = std::stoi(context.marshal_as<std::string>(dragon_s->Text));
	int dragone = std::stoi(context.marshal_as<std::string>(dragon_e->Text));
	LabelFolder::LabelFolder(im, "Dragon", dragons, dragone);
	LabelFolder::LabelFolder(dp, "Dragon", dragons, dragone);

	//Android
	int androids = std::stoi(context.marshal_as<std::string>(android_s->Text));
	int androide = std::stoi(context.marshal_as<std::string>(android_e->Text));
	LabelFolder::LabelFolder(im, "Android", androids, androide);
	LabelFolder::LabelFolder(dp, "Android", androids, androide);

	//Nothing
	int nothings = std::stoi(context.marshal_as<std::string>(nothing_s->Text));
	int nothinge = std::stoi(context.marshal_as<std::string>(nothing_e->Text));
	LabelFolder::LabelFolder(im, "Nothing", nothings, nothinge);
	LabelFolder::LabelFolder(dp, "Nothing", nothings, nothinge);

	//Now move everything that isn't labelled to an unlabelled directory
	int eFrame = std::stoi(context.marshal_as<std::string>(txt_EndFrame->Text));
	Unlabelled::Unlabelled(im,eFrame);
	Unlabelled::Unlabelled(dp,eFrame);
}
private: System::Void btn_class_Click(System::Object^  sender, System::EventArgs^  e) {
	//Set the Directories
	msclr::interop::marshal_context context;
	std::string tDir = context.marshal_as<std::string>(txt_tmp->Text);
	//Set the Directories
	std::string im = tDir + "/images";
	std::string dp = tDir + "/depth";

	//Train the SVM
	TrainSVM::TrainSVM(im, lbl_Status,"images");
	
	TrainSVM::TrainSVM(dp, lbl_Status,"depth");

	//Means
	//Android
	lbl_Status->Text = "Calculating Android EDistance";
	lbl_Status->Refresh();
	TrainEDist::TrainEDist(im + "/Android", "Android", tDir + "/images", "images");
	TrainEDist::TrainEDist(dp + "/Android", "Android", tDir + "/depth", "depth");
	//Baby
	lbl_Status->Text = "Calculating Baby EDistance";
	lbl_Status->Refresh();
	TrainEDist::TrainEDist(im + "/Baby", "Baby", tDir + "/images", "images");
	TrainEDist::TrainEDist(dp + "/Baby", "Baby", tDir + "/depth", "depth");

	//Blackberry
	lbl_Status->Text = "Calculating Blackberry EDistance";
	lbl_Status->Refresh();
	TrainEDist::TrainEDist(im + "/Blackberry", "Blackberry", tDir + "/images", "images");
	TrainEDist::TrainEDist(dp + "/Blackberry", "Blackberry", tDir + "/depth", "depth");

	//Camera
	lbl_Status->Text = "Calculating Camera EDistance";
	lbl_Status->Refresh();
	TrainEDist::TrainEDist(im + "/Camera", "Camera", tDir + "/images", "images");
	TrainEDist::TrainEDist(dp + "/Camera", "Camera", tDir + "/depth", "depth");

	//Car
	lbl_Status->Text = "Calculating Car EDistance";
	lbl_Status->Refresh();
	TrainEDist::TrainEDist(im + "/Car", "Car", tDir + "/images", "images");
	TrainEDist::TrainEDist(dp + "/Car", "Car", tDir + "/depth", "depth");

	//Coffee Tin
	lbl_Status->Text = "Calculating Coffee Tin EDistance";
	lbl_Status->Refresh();
	TrainEDist::TrainEDist(im + "/Coffee Tin", "Coffee Tin", tDir + "/images", "images");
	TrainEDist::TrainEDist(dp + "/Coffee Tin", "Coffee Tin", tDir + "/depth", "depth");

	//Diet Coke
	lbl_Status->Text = "Calculating Diet Coke EDistance";
	lbl_Status->Refresh();
	TrainEDist::TrainEDist(im + "/Diet Coke", "Diet Coke", tDir + "/images", "images");
	TrainEDist::TrainEDist(dp + "/Diet Coke", "Diet Coke", tDir + "/depth", "depth");

	//Dinosaur
	lbl_Status->Text = "Calculating Dinosaur EDistance";
	lbl_Status->Refresh();
	TrainEDist::TrainEDist(im + "/Dinosaur", "Dinosaur", tDir + "/images", "images");
	TrainEDist::TrainEDist(dp + "/Dinosaur", "Dinosaur", tDir + "/depth", "depth");

	//Dog
	lbl_Status->Text = "Calculating Dog EDistance";
	lbl_Status->Refresh();
	TrainEDist::TrainEDist(im + "/Dog", "Dog", tDir + "/images", "images");
	TrainEDist::TrainEDist(dp + "/Dog", "Dog", tDir + "/depth", "depth");

	//Dragon
	lbl_Status->Text = "Calculating Dragon EDistance";
	lbl_Status->Refresh();
	TrainEDist::TrainEDist(im + "/Dragon", "Dragon", tDir + "/images", "images");
	TrainEDist::TrainEDist(dp + "/Dragon", "Dragon", tDir + "/depth", "depth");

	//Duck
	lbl_Status->Text = "Calculating Duck EDistance";
	lbl_Status->Refresh();
	TrainEDist::TrainEDist(im + "/Duck", "Duck", tDir + "/images", "images");
	TrainEDist::TrainEDist(dp + "/Duck", "Duck", tDir + "/depth", "depth");

	//Keyboard
	lbl_Status->Text = "Calculating Keyboard EDistance";
	lbl_Status->Refresh();
	TrainEDist::TrainEDist(im + "/Keyboard", "Keyboard", tDir + "/images", "images");
	TrainEDist::TrainEDist(dp + "/Keyboard", "Keyboard", tDir + "/depth", "depth");

	//Koala
	lbl_Status->Text = "Calculating Koala EDistance";
	lbl_Status->Refresh();
	TrainEDist::TrainEDist(im + "/Koala", "Koala", tDir + "/images", "images");
	TrainEDist::TrainEDist(dp + "/Koala", "Koala", tDir + "/depth", "depth");

	//Mug
	lbl_Status->Text = "Calculating Mug EDistance";
	lbl_Status->Refresh();
	TrainEDist::TrainEDist(im + "/Mug", "Mug", tDir + "/images", "images");
	TrainEDist::TrainEDist(dp + "/Mug", "Mug", tDir + "/depth", "depth");

	//Nothing
	lbl_Status->Text = "Calculating Nothing EDistance";
	lbl_Status->Refresh();
	TrainEDist::TrainEDist(im + "/Nothing", "Nothing", tDir + "/images", "images");
	TrainEDist::TrainEDist(dp + "/Nothing", "Nothing", tDir + "/depth", "depth");

	lbl_Status->Text = "Idle";
	lbl_Status->Refresh();
}
private: System::Void btn_trn_Click(System::Object^  sender, System::EventArgs^  e) {
	TrainDlg->SelectedPath = "";
	TrainDlg->ShowDialog();
	txt_trn->Text = TrainDlg->SelectedPath;
}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	TrainDlg->SelectedPath = "";
	TrainDlg->ShowDialog();
	txt_test->Text = TrainDlg->SelectedPath;
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	//Now Analyze the Testing Images
	msclr::interop::marshal_context context;
	std::string tf = context.marshal_as<std::string>(txt_test->Text);
	std::string ft = context.marshal_as<std::string>(txt_trn->Text);
	ft = ft + "/depth";
	//Load all of the Training for Depth
	chart1->ChartAreas[0]->AxisX->Interval = 1;
	lbl_Status->Text = "Alayzing Images";
	lbl_Status->Refresh();
	TestFolder::TestFolder(tf, ft,"depth",chart1, lbl_DE);	
	lbl_Status->Text = "Idle";
	lbl_Status->Refresh();
}
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	//Tes the SVM Classificatin
	msclr::interop::marshal_context context;
	std::string tf = context.marshal_as<std::string>(txt_test->Text);
	std::string ft = context.marshal_as<std::string>(txt_trn->Text);
	SVMTest:SVMTest(ft, tf,lbl_SVM_DP, lbl_SVM_IP, lbl_Status);
	lbl_Status->Text = "Idle";
	lbl_Status->Refresh();
}
private: System::Void btn_Image_Select_Click(System::Object^  sender, System::EventArgs^  e) {
	//Select Image for Image Processing
	openFileDialog1->ShowDialog();
	txt_Test_Image->Text = openFileDialog1->FileName;
	msclr::interop::marshal_context context;
	std::string ti = context.marshal_as<std::string>(txt_Test_Image->Text);
	//Show the image fram
	cv::namedWindow("Image", cv::WindowFlags::WINDOW_AUTOSIZE | cv::WindowFlags::WINDOW_GUI_EXPANDED);
	cv::Mat img = imread(ti, cv::IMREAD_GRAYSCALE);
	cv::imshow("Image", img);
	int CT = std::stof(context.marshal_as<std::string>(txt_CT->Text));
	//Show the result of the Canny Edge detection
	Canny C;
	C.CannyImage(img, CT);
}
private: System::Void btn_IS_Click(System::Object^  sender, System::EventArgs^  e) {
	msclr::interop::marshal_context context;
	std::string ti = context.marshal_as<std::string>(txt_Test_Image->Text);
	String^ D = txt_Test_Image->Text;

	cv::namedWindow("ImageP", cv::WindowFlags::WINDOW_AUTOSIZE | cv::WindowFlags::WINDOW_GUI_EXPANDED);
	cv::Mat img = imread(ti, cv::IMREAD_GRAYSCALE);
	//Apply Threshold
	//Convert to float
	
	float Thresh = std::stof(context.marshal_as<std::string>(txt_Threshold->Text));
	//Aply the Thresholding
	img = img * Thresh;

	//Crop
	int x1, x2, y1, y2;
	x1 = std::stoi(context.marshal_as<std::string>(txt_xs->Text));
	x2 = std::stoi(context.marshal_as<std::string>(txt_xw->Text));
	y1 = std::stoi(context.marshal_as<std::string>(txt_ys->Text));
	y2 = std::stoi(context.marshal_as<std::string>(txt_yh->Text));
	
	
	//Change Resolution
	double S = std::stod(context.marshal_as<std::string>(txt_ResP->Text));
	S = S / 100;
	cv::resize(img, img, cv::Size(), S, S, cv::INTER_LINEAR);

	
	int CT = std::stof(context.marshal_as<std::string>(txt_CT->Text));

	cv::Mat src, src_gray;
	cv:: Mat dst, detected_edges;

	int edgeThresh = 1;
	int lowThreshold = CT;
	int const max_lowThreshold = 100;
	int ratio = 3;
	int kernel_size = 3;
	char* window_name = "Edge Map";
	src = img;

	cv::blur(src, detected_edges, cv::Size(3, 3));

	/// Canny detector
	cv::Canny(detected_edges, detected_edges, lowThreshold, lowThreshold*ratio, kernel_size);

	/// Using Canny's output as a mask, we display our result
	dst = cv::Scalar::all(0);

	src.copyTo(dst, detected_edges);
	cv::Mat ROI(dst, cv::Rect(x1, y1, x2, y2));
	dst = ROI;

	cv::imshow("ImageP", dst);
	// No depth calibrationcv::imshow("ImageP", dpth);

}
private: System::Void btn_SH_Click(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void button1_Click_2(System::Object^  sender, System::EventArgs^  e) {
	//Save the image processing settings to the training folder
	msclr::interop::marshal_context context;
	std::string path = context.marshal_as<std::string>(txt_tmp->Text);
	float Thresh = std::stof(context.marshal_as<std::string>(txt_Threshold->Text));
	double S = std::stod(context.marshal_as<std::string>(txt_ResP->Text));
	int CT = std::stof(context.marshal_as<std::string>(txt_CT->Text));

	int x1, x2, y1, y2;
	x1 = std::stoi(context.marshal_as<std::string>(txt_xs->Text));
	x2 = std::stoi(context.marshal_as<std::string>(txt_xw->Text));
	y1 = std::stoi(context.marshal_as<std::string>(txt_ys->Text));
	y2 = std::stoi(context.marshal_as<std::string>(txt_yh->Text));

	cv::FileStorage fs1(path + "/images/ImageProc.dat", cv::FileStorage::WRITE);
	fs1 << "brightness" << Thresh;
	fs1 << "resolution" << S;
	fs1 << "canny" << CT;
	fs1 << "x1" << x1;
	fs1 << "x2" << x2;
	fs1 << "y1" << y1;
	fs1 << "y2" << y2;
	fs1.release();

	cv::FileStorage fs2(path + "/depth/ImageProc.dat", cv::FileStorage::WRITE);
	fs2 << "brightness" << Thresh;
	fs2 << "resolution" << S;
	fs2 << "canny" << CT;
	fs2 << "x1" << x1;
	fs2 << "x2" << x2;
	fs2 << "y1" << y1;
	fs2 << "y2" << y2;
	fs2.release();
}
private: System::Void btn_ClassTestFolder_Click(System::Object^  sender, System::EventArgs^  e) {
	TrainDlg->SelectedPath = "";
	TrainDlg->ShowDialog();
	txt_ClassTrain->Text = TrainDlg->SelectedPath;
}
private: System::Void btn_ClassTest_Click(System::Object^  sender, System::EventArgs^  e) {
	//Peform the CVM confusion 
	msclr::interop::marshal_context context;
	std::string path = context.marshal_as<std::string>(txt_ClassTrain->Text);
	//Now run the classification Confusion on the split images

	lbl_Status->Text = "Testing Android";
	//Update the statud label
	lbl_Status->Refresh();
	//Show all labels on the chart
	chart3->ChartAreas[0]->AxisX->Interval = 1;
	ClassTest::ClassTest(path, "Android", chart3);
	lbl_Status->Text = "Testing Baby";
	lbl_Status->Refresh();
	chart4->ChartAreas[0]->AxisX->Interval = 1;
	ClassTest::ClassTest(path, "Baby", chart4);
	lbl_Status->Text = "Testing Blackberry";
	lbl_Status->Refresh();
	chart5->ChartAreas[0]->AxisX->Interval = 1;
	ClassTest::ClassTest(path, "Blackberry",chart5);
	lbl_Status->Text = "Testing Camera";
	lbl_Status->Refresh();
	chart6->ChartAreas[0]->AxisX->Interval = 1;
	ClassTest::ClassTest(path, "Camera",chart6);
	lbl_Status->Text = "Testing Car";
	lbl_Status->Refresh();
	chart7->ChartAreas[0]->AxisX->Interval = 1;
	ClassTest::ClassTest(path, "Car",chart7);
	lbl_Status->Text = "Testing Coffee Tin";
	lbl_Status->Refresh();
	chart8->ChartAreas[0]->AxisX->Interval = 1;
	ClassTest::ClassTest(path, "Coffee Tin", chart8);
	lbl_Status->Text = "Testing Diet Coke";
	lbl_Status->Refresh();
	chart9->ChartAreas[0]->AxisX->Interval = 1;
	ClassTest::ClassTest(path, "Diet Coke", chart9);
	lbl_Status->Text = "Testing Dinosaur";
	lbl_Status->Refresh();
	chart10->ChartAreas[0]->AxisX->Interval = 1;
	ClassTest::ClassTest(path, "Dinosaur", chart10);
	lbl_Status->Text = "Testing Dog";
	lbl_Status->Refresh();
	chart11->ChartAreas[0]->AxisX->Interval = 1;
	ClassTest::ClassTest(path, "Dog", chart11);
	lbl_Status->Text = "Testing Dragon";
	lbl_Status->Refresh();
	chart12->ChartAreas[0]->AxisX->Interval = 1;
	ClassTest::ClassTest(path, "Dragon", chart12);
	lbl_Status->Text = "Testing Duck";
	lbl_Status->Refresh();
	chart13->ChartAreas[0]->AxisX->Interval = 1;
	ClassTest::ClassTest(path, "Duck", chart13);
	lbl_Status->Text = "Testing Keyboard";
	lbl_Status->Refresh();
	chart14->ChartAreas[0]->AxisX->Interval = 1;
	ClassTest::ClassTest(path, "Keyboard", chart14);
	lbl_Status->Text = "Testing Koala";
	lbl_Status->Refresh();
	chart15->ChartAreas[0]->AxisX->Interval = 1;
	ClassTest::ClassTest(path, "Koala", chart15);
	lbl_Status->Text = "Testing Mug";
	lbl_Status->Refresh();
	chart16->ChartAreas[0]->AxisX->Interval = 1;
	ClassTest::ClassTest(path, "Mug", chart16);
	lbl_Status->Text = "Testing Nothing";
	lbl_Status->Refresh();
	chart17->ChartAreas[0]->AxisX->Interval = 1;
	ClassTest::ClassTest(path, "Nothing", chart17);
	lbl_Status->Text = "Idle";
	lbl_Status->Refresh();
}
private: System::Void txt_ClassTrain_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	//Now Analyze the Testing Images
	msclr::interop::marshal_context context;
	std::string tf = context.marshal_as<std::string>(txt_test->Text);
	std::string ft = context.marshal_as<std::string>(txt_trn->Text);
	ft = ft + "/images";
	chart2->ChartAreas[0]->AxisX->Interval = 1;
	//Load all of the Training for Depth
	lbl_Status->Text = "Alayzing Images";
	lbl_Status->Refresh();
	TestFolder::TestFolder(tf, ft, "images", chart2, lbl_IE);
	lbl_Status->Text = "Idle";
	lbl_Status->Refresh();
}
};
}
