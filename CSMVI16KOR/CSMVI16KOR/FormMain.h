
#pragma once
#include "FormMain.h"
#include <string>
#include <msclr\marshal_cppstd.h>
#include "TrainFolder.h"
#include "LabelFolder.h"
#include "Unlabelled.h"
#include "TrainGMM.h"
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
private: System::Windows::Forms::TabPage^  tabPage5;
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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
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
			this->btn_temp = (gcnew System::Windows::Forms::Button());
			this->btn_run = (gcnew System::Windows::Forms::Button());
			this->txt_tmp = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btn_trn_folder = (gcnew System::Windows::Forms::Button());
			this->txt_trainFldr = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btn_class = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->txt_CT = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->btn_IS = (gcnew System::Windows::Forms::Button());
			this->txt_ResP = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->txt_Threshold = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->btn_Image_Select = (gcnew System::Windows::Forms::Button());
			this->txt_Test_Image = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->btn_ClassTestFolder = (gcnew System::Windows::Forms::Button());
			this->txt_ClassTrain = (gcnew System::Windows::Forms::TextBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->btn_ClassTest = (gcnew System::Windows::Forms::Button());
			this->tabControl3 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->txt_ImageResults = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->btn_Analyze = (gcnew System::Windows::Forms::Button());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->btn_SVMTest = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->txt_test = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->btn_trn = (gcnew System::Windows::Forms::Button());
			this->txt_trn = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->TrainDlg = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->tabPage6->SuspendLayout();
			this->tabControl3->SuspendLayout();
			this->tabPage7->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->tabPage4->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(12, 33);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(793, 595);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Controls->Add(this->btn_temp);
			this->tabPage1->Controls->Add(this->btn_run);
			this->tabPage1->Controls->Add(this->txt_tmp);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->btn_trn_folder);
			this->tabPage1->Controls->Add(this->txt_trainFldr);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(785, 569);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Frame Splitting";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->txt_EndFrame);
			this->groupBox1->Controls->Add(this->label23);
			this->groupBox1->Controls->Add(this->btn_label);
			this->groupBox1->Controls->Add(this->tableLayoutPanel1);
			this->groupBox1->Location = System::Drawing::Point(9, 126);
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
			// btn_temp
			// 
			this->btn_temp->Location = System::Drawing::Point(668, 57);
			this->btn_temp->Name = L"btn_temp";
			this->btn_temp->Size = System::Drawing::Size(75, 23);
			this->btn_temp->TabIndex = 6;
			this->btn_temp->Text = L"Browse";
			this->btn_temp->UseVisualStyleBackColor = true;
			this->btn_temp->Click += gcnew System::EventHandler(this, &FormMain::btn_temp_Click);
			// 
			// btn_run
			// 
			this->btn_run->Location = System::Drawing::Point(346, 97);
			this->btn_run->Name = L"btn_run";
			this->btn_run->Size = System::Drawing::Size(75, 23);
			this->btn_run->TabIndex = 5;
			this->btn_run->Text = L"Split Frames";
			this->btn_run->UseVisualStyleBackColor = true;
			this->btn_run->Click += gcnew System::EventHandler(this, &FormMain::btn_run_Click);
			// 
			// txt_tmp
			// 
			this->txt_tmp->Location = System::Drawing::Point(94, 57);
			this->txt_tmp->Name = L"txt_tmp";
			this->txt_tmp->Size = System::Drawing::Size(559, 20);
			this->txt_tmp->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Train Directory";
			// 
			// btn_trn_folder
			// 
			this->btn_trn_folder->Location = System::Drawing::Point(668, 18);
			this->btn_trn_folder->Name = L"btn_trn_folder";
			this->btn_trn_folder->Size = System::Drawing::Size(75, 23);
			this->btn_trn_folder->TabIndex = 2;
			this->btn_trn_folder->Text = L"Browse";
			this->btn_trn_folder->UseVisualStyleBackColor = true;
			this->btn_trn_folder->Click += gcnew System::EventHandler(this, &FormMain::btn_trn_folder_Click);
			// 
			// txt_trainFldr
			// 
			this->txt_trainFldr->Location = System::Drawing::Point(94, 20);
			this->txt_trainFldr->Name = L"txt_trainFldr";
			this->txt_trainFldr->Size = System::Drawing::Size(559, 20);
			this->txt_trainFldr->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(21, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(67, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Training Set:";
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->button1);
			this->tabPage5->Controls->Add(this->btn_class);
			this->tabPage5->Controls->Add(this->groupBox2);
			this->tabPage5->Controls->Add(this->btn_Image_Select);
			this->tabPage5->Controls->Add(this->txt_Test_Image);
			this->tabPage5->Controls->Add(this->label27);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Size = System::Drawing::Size(785, 569);
			this->tabPage5->TabIndex = 2;
			this->tabPage5->Text = L"Image Settings";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(298, 223);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(104, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Save Settings";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FormMain::button1_Click_2);
			// 
			// btn_class
			// 
			this->btn_class->Location = System::Drawing::Point(288, 373);
			this->btn_class->Name = L"btn_class";
			this->btn_class->Size = System::Drawing::Size(137, 23);
			this->btn_class->TabIndex = 1;
			this->btn_class->Text = L"Create Classifications";
			this->btn_class->UseVisualStyleBackColor = true;
			this->btn_class->Click += gcnew System::EventHandler(this, &FormMain::btn_class_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->txt_CT);
			this->groupBox2->Controls->Add(this->label30);
			this->groupBox2->Controls->Add(this->btn_IS);
			this->groupBox2->Controls->Add(this->txt_ResP);
			this->groupBox2->Controls->Add(this->label29);
			this->groupBox2->Controls->Add(this->txt_Threshold);
			this->groupBox2->Controls->Add(this->label28);
			this->groupBox2->Location = System::Drawing::Point(87, 74);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(547, 123);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Image Settings";
			// 
			// txt_CT
			// 
			this->txt_CT->Location = System::Drawing::Point(110, 81);
			this->txt_CT->Name = L"txt_CT";
			this->txt_CT->Size = System::Drawing::Size(100, 20);
			this->txt_CT->TabIndex = 6;
			this->txt_CT->Text = L"0";
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
			this->btn_IS->Location = System::Drawing::Point(240, 79);
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
			this->txt_ResP->Text = L"100";
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
			this->txt_Threshold->Location = System::Drawing::Point(77, 28);
			this->txt_Threshold->Name = L"txt_Threshold";
			this->txt_Threshold->Size = System::Drawing::Size(100, 20);
			this->txt_Threshold->TabIndex = 1;
			this->txt_Threshold->Text = L"1";
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
			// btn_Image_Select
			// 
			this->btn_Image_Select->Location = System::Drawing::Point(652, 22);
			this->btn_Image_Select->Name = L"btn_Image_Select";
			this->btn_Image_Select->Size = System::Drawing::Size(75, 23);
			this->btn_Image_Select->TabIndex = 2;
			this->btn_Image_Select->Text = L"Select Image";
			this->btn_Image_Select->UseVisualStyleBackColor = true;
			this->btn_Image_Select->Click += gcnew System::EventHandler(this, &FormMain::btn_Image_Select_Click);
			// 
			// txt_Test_Image
			// 
			this->txt_Test_Image->Location = System::Drawing::Point(87, 22);
			this->txt_Test_Image->Name = L"txt_Test_Image";
			this->txt_Test_Image->Size = System::Drawing::Size(547, 20);
			this->txt_Test_Image->TabIndex = 1;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(20, 22);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(60, 13);
			this->label27->TabIndex = 0;
			this->label27->Text = L"Test Image";
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
			this->tabPage6->Text = L"Test Classification";
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
			this->tabControl3->Location = System::Drawing::Point(29, 63);
			this->tabControl3->Name = L"tabControl3";
			this->tabControl3->SelectedIndex = 0;
			this->tabControl3->Size = System::Drawing::Size(718, 441);
			this->tabControl3->TabIndex = 0;
			// 
			// tabPage7
			// 
			this->tabPage7->Controls->Add(this->txt_ImageResults);
			this->tabPage7->Location = System::Drawing::Point(4, 22);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Padding = System::Windows::Forms::Padding(3);
			this->tabPage7->Size = System::Drawing::Size(710, 415);
			this->tabPage7->TabIndex = 0;
			this->tabPage7->Text = L"Images";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// txt_ImageResults
			// 
			this->txt_ImageResults->Location = System::Drawing::Point(7, 20);
			this->txt_ImageResults->Name = L"txt_ImageResults";
			this->txt_ImageResults->Size = System::Drawing::Size(697, 368);
			this->txt_ImageResults->TabIndex = 0;
			this->txt_ImageResults->Text = L"";
			// 
			// tabPage8
			// 
			this->tabPage8->Location = System::Drawing::Point(4, 22);
			this->tabPage8->Name = L"tabPage8";
			this->tabPage8->Padding = System::Windows::Forms::Padding(3);
			this->tabPage8->Size = System::Drawing::Size(710, 415);
			this->tabPage8->TabIndex = 1;
			this->tabPage8->Text = L"Depth";
			this->tabPage8->UseVisualStyleBackColor = true;
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
			this->tabControl2->Controls->Add(this->tabPage3);
			this->tabControl2->Controls->Add(this->tabPage4);
			this->tabControl2->Location = System::Drawing::Point(18, 107);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(761, 443);
			this->tabControl2->TabIndex = 15;
			// 
			// tabPage3
			// 
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
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			this->chart1->Location = System::Drawing::Point(6, 6);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(716, 329);
			this->chart1->TabIndex = 10;
			this->chart1->Text = L"Classification";
			// 
			// btn_Analyze
			// 
			this->btn_Analyze->Location = System::Drawing::Point(312, 341);
			this->btn_Analyze->Name = L"btn_Analyze";
			this->btn_Analyze->Size = System::Drawing::Size(75, 23);
			this->btn_Analyze->TabIndex = 11;
			this->btn_Analyze->Text = L"Analyze";
			this->btn_Analyze->UseVisualStyleBackColor = true;
			this->btn_Analyze->Click += gcnew System::EventHandler(this, &FormMain::button1_Click);
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->btn_SVMTest);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(753, 417);
			this->tabPage4->TabIndex = 1;
			this->tabPage4->Text = L"RGB GMM";
			this->tabPage4->UseVisualStyleBackColor = true;
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
			// FormMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(871, 640);
			this->Controls->Add(this->tabControl1);
			this->Name = L"FormMain";
			this->Text = L"FormMain";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->tabPage6->ResumeLayout(false);
			this->tabPage6->PerformLayout();
			this->tabControl3->ResumeLayout(false);
			this->tabPage7->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabControl2->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btn_trn_folder_Click(System::Object^  sender, System::EventArgs^  e) {
		TrainDlg->SelectedPath = "";
		TrainDlg->ShowDialog();
		txt_trainFldr->Text = TrainDlg->SelectedPath;	
	}
private: System::Void btn_run_Click(System::Object^  sender, System::EventArgs^  e) {
	msclr::interop::marshal_context context;
	std::string tf = context.marshal_as<std::string>(txt_trainFldr->Text);
	std::string ft = context.marshal_as<std::string>(txt_tmp->Text);
	TrainFolder::TrainFolder(tf,ft);
}
private: System::Void btn_temp_Click(System::Object^  sender, System::EventArgs^  e) {
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
	TrainSVM::TrainSVM(im);
	TrainSVM::TrainSVM(dp);

	//Means
	//Android
	TrainGMM::TrainGMM(im + "/Android", "Android");
	TrainGMM::TrainGMM(dp + "/Android", "Android");
	//Baby
	TrainGMM::TrainGMM(im + "/Baby", "Baby");
	TrainGMM::TrainGMM(dp + "/Baby", "Baby");

	//Blackberry
	TrainGMM::TrainGMM(im + "/Blackberry", "Blackberry");
	TrainGMM::TrainGMM(dp + "/Blackberry", "Blackberry");

	//Camera
	TrainGMM::TrainGMM(im + "/Camera", "Camera");
	TrainGMM::TrainGMM(dp + "/Camera", "Camera");

	//Car
	TrainGMM::TrainGMM(im + "/Car", "Car");
	TrainGMM::TrainGMM(dp + "/Car", "Car");

	//Coffee Tin
	TrainGMM::TrainGMM(im + "/Coffee Tin", "Coffee Tin");
	TrainGMM::TrainGMM(dp + "/Coffee Tin", "Coffee Tin");

	//Diet Coke
	TrainGMM::TrainGMM(im + "/Diet Coke", "CDiet Coke");
	TrainGMM::TrainGMM(dp + "/Diet Coke", "Diet Coke");

	//Dinosaur
	TrainGMM::TrainGMM(im + "/Dinosaur", "Dinosaur");
	TrainGMM::TrainGMM(dp + "/Dinosaur", "Dinosaur");

	//Dog
	TrainGMM::TrainGMM(im + "/Dog", "Dog");
	TrainGMM::TrainGMM(dp + "/Dog", "Dog");

	//Dragon
	TrainGMM::TrainGMM(im + "/Dragon", "Dragon");
	TrainGMM::TrainGMM(dp + "/Dragon", "Dragon");

	//Duck
	TrainGMM::TrainGMM(im + "/Duck", "Duck");
	TrainGMM::TrainGMM(dp + "/Duck", "Duck");

	//Keyboard
	TrainGMM::TrainGMM(im + "/Keyboard", "Keyboard");
	TrainGMM::TrainGMM(dp + "/Keyboard", "Keyboard");

	//Koala
	TrainGMM::TrainGMM(im + "/Koala", "Koala");
	TrainGMM::TrainGMM(dp + "/Koala", "Koala");

	//Mug
	TrainGMM::TrainGMM(im + "/Mug", "Mug");
	TrainGMM::TrainGMM(dp + "/Mug", "Mug");

	//Unlabelled
	TrainGMM::TrainGMM(im + "/Nothing", "Nothing");
	TrainGMM::TrainGMM(dp + "/Nothing", "Nothing");

	
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
	TestFolder::TestFolder(tf, ft);	
}
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	msclr::interop::marshal_context context;
	std::string tf = context.marshal_as<std::string>(txt_test->Text);
	std::string ft = context.marshal_as<std::string>(txt_trn->Text);
	SVMTest:SVMTest(ft, tf);
}
private: System::Void btn_Image_Select_Click(System::Object^  sender, System::EventArgs^  e) {
	openFileDialog1->ShowDialog();
	txt_Test_Image->Text = openFileDialog1->FileName;
	msclr::interop::marshal_context context;
	std::string ti = context.marshal_as<std::string>(txt_Test_Image->Text);
	cv::namedWindow("Image", cv::WindowFlags::WINDOW_AUTOSIZE | cv::WindowFlags::WINDOW_GUI_EXPANDED);
	cv::Mat img = imread(ti, cv::IMREAD_GRAYSCALE);
	cv::imshow("Image", img);
	int CT = std::stof(context.marshal_as<std::string>(txt_CT->Text));
	Canny C;
	C.CannyImage(img, CT);
}
private: System::Void btn_IS_Click(System::Object^  sender, System::EventArgs^  e) {
	msclr::interop::marshal_context context;
	std::string ti = context.marshal_as<std::string>(txt_Test_Image->Text);
	cv::namedWindow("ImageP", cv::WindowFlags::WINDOW_AUTOSIZE | cv::WindowFlags::WINDOW_GUI_EXPANDED);
	cv::Mat img = imread(ti, cv::IMREAD_GRAYSCALE);
	//Apply Threshold
	//Convert to float
	
	float Thresh = std::stof(context.marshal_as<std::string>(txt_Threshold->Text));
	
	img = img * Thresh;

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

	cv::imshow("ImageP", dst);

}
private: System::Void btn_SH_Click(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void button1_Click_2(System::Object^  sender, System::EventArgs^  e) {
	msclr::interop::marshal_context context;
	std::string path = context.marshal_as<std::string>(txt_tmp->Text);
	float Thresh = std::stof(context.marshal_as<std::string>(txt_Threshold->Text));
	double S = std::stod(context.marshal_as<std::string>(txt_ResP->Text));
	int CT = std::stof(context.marshal_as<std::string>(txt_CT->Text));
	cv::FileStorage fs1(path + "/images/ImageProc.dat", cv::FileStorage::WRITE);
	fs1 << "brightness" << Thresh;
	fs1 << "resolution" << S;
	fs1 << "canny" << CT;
	fs1.release();

	cv::FileStorage fs2(path + "/depth/ImageProc.dat", cv::FileStorage::WRITE);
	fs2 << "brightness" << Thresh;
	fs2 << "resolution" << S;
	fs2 << "canny" << CT;
	fs2.release();
}
private: System::Void btn_ClassTestFolder_Click(System::Object^  sender, System::EventArgs^  e) {
	TrainDlg->SelectedPath = "";
	TrainDlg->ShowDialog();
	txt_ClassTrain->Text = TrainDlg->SelectedPath;
}
private: System::Void btn_ClassTest_Click(System::Object^  sender, System::EventArgs^  e) {

}
};
}
