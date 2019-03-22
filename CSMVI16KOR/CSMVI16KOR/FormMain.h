
#pragma once
#include "FormMain.h"
#include <string>
#include <msclr\marshal_cppstd.h>
#include "TrainFolder.h"

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
	private: System::Windows::Forms::TextBox^  baby_n;
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
	private: System::Windows::Forms::TextBox^  blackbery_e;
	private: System::Windows::Forms::TextBox^  diet_s;
	private: System::Windows::Forms::TextBox^  diet_e;
	private: System::Windows::Forms::TextBox^  duck_s;
	private: System::Windows::Forms::TextBox^  duck_e;
	private: System::Windows::Forms::TextBox^  dragon_s;
	private: System::Windows::Forms::TextBox^  dragon_e;
	private: System::Windows::Forms::TextBox^  android_s;
	private: System::Windows::Forms::TextBox^  android_e;



































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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
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
			this->baby_n = (gcnew System::Windows::Forms::TextBox());
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
			this->blackbery_e = (gcnew System::Windows::Forms::TextBox());
			this->diet_s = (gcnew System::Windows::Forms::TextBox());
			this->diet_e = (gcnew System::Windows::Forms::TextBox());
			this->duck_s = (gcnew System::Windows::Forms::TextBox());
			this->duck_e = (gcnew System::Windows::Forms::TextBox());
			this->dragon_s = (gcnew System::Windows::Forms::TextBox());
			this->dragon_e = (gcnew System::Windows::Forms::TextBox());
			this->android_s = (gcnew System::Windows::Forms::TextBox());
			this->android_e = (gcnew System::Windows::Forms::TextBox());
			this->btn_temp = (gcnew System::Windows::Forms::Button());
			this->btn_run = (gcnew System::Windows::Forms::Button());
			this->txt_tmp = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btn_trn_folder = (gcnew System::Windows::Forms::Button());
			this->txt_trainFldr = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->TrainDlg = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(12, 33);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(793, 472);
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
			this->tabPage1->Size = System::Drawing::Size(785, 446);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Training";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btn_label);
			this->groupBox1->Controls->Add(this->tableLayoutPanel1);
			this->groupBox1->Location = System::Drawing::Point(9, 148);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(759, 292);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Labels";
			// 
			// btn_label
			// 
			this->btn_label->Location = System::Drawing::Point(337, 258);
			this->btn_label->Name = L"btn_label";
			this->btn_label->Size = System::Drawing::Size(75, 23);
			this->btn_label->TabIndex = 1;
			this->btn_label->Text = L"Label";
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
			this->tableLayoutPanel1->Controls->Add(this->baby_n, 2, 1);
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
			this->tableLayoutPanel1->Controls->Add(this->blackbery_e, 5, 3);
			this->tableLayoutPanel1->Controls->Add(this->diet_s, 4, 4);
			this->tableLayoutPanel1->Controls->Add(this->diet_e, 5, 4);
			this->tableLayoutPanel1->Controls->Add(this->duck_s, 4, 5);
			this->tableLayoutPanel1->Controls->Add(this->duck_e, 5, 5);
			this->tableLayoutPanel1->Controls->Add(this->dragon_s, 4, 6);
			this->tableLayoutPanel1->Controls->Add(this->dragon_e, 5, 6);
			this->tableLayoutPanel1->Controls->Add(this->android_s, 4, 7);
			this->tableLayoutPanel1->Controls->Add(this->android_e, 5, 7);
			this->tableLayoutPanel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tableLayoutPanel1->Location = System::Drawing::Point(6, 19);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 8;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(718, 232);
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
			this->label9->Location = System::Drawing::Point(3, 29);
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
			this->label10->Location = System::Drawing::Point(3, 58);
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
			this->label11->Location = System::Drawing::Point(3, 87);
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
			this->label12->Location = System::Drawing::Point(3, 116);
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
			this->label13->Location = System::Drawing::Point(3, 145);
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
			this->label14->Location = System::Drawing::Point(3, 174);
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
			this->label15->Location = System::Drawing::Point(3, 203);
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
			this->label16->Location = System::Drawing::Point(360, 29);
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
			this->label17->Location = System::Drawing::Point(360, 58);
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
			this->label18->Location = System::Drawing::Point(360, 87);
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
			this->label19->Location = System::Drawing::Point(360, 116);
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
			this->label20->Location = System::Drawing::Point(360, 145);
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
			this->label21->Location = System::Drawing::Point(360, 174);
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
			this->label22->Location = System::Drawing::Point(360, 203);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(50, 13);
			this->label22->TabIndex = 19;
			this->label22->Text = L"Android";
			// 
			// baby_s
			// 
			this->baby_s->Location = System::Drawing::Point(122, 32);
			this->baby_s->Name = L"baby_s";
			this->baby_s->Size = System::Drawing::Size(100, 20);
			this->baby_s->TabIndex = 20;
			this->baby_s->UseSystemPasswordChar = true;
			// 
			// baby_n
			// 
			this->baby_n->Location = System::Drawing::Point(241, 32);
			this->baby_n->Name = L"baby_n";
			this->baby_n->Size = System::Drawing::Size(100, 20);
			this->baby_n->TabIndex = 21;
			// 
			// dog_s
			// 
			this->dog_s->Location = System::Drawing::Point(122, 61);
			this->dog_s->Name = L"dog_s";
			this->dog_s->Size = System::Drawing::Size(100, 20);
			this->dog_s->TabIndex = 22;
			// 
			// dog_e
			// 
			this->dog_e->Location = System::Drawing::Point(241, 61);
			this->dog_e->Name = L"dog_e";
			this->dog_e->Size = System::Drawing::Size(100, 20);
			this->dog_e->TabIndex = 23;
			// 
			// dino_s
			// 
			this->dino_s->Location = System::Drawing::Point(122, 90);
			this->dino_s->Name = L"dino_s";
			this->dino_s->Size = System::Drawing::Size(100, 20);
			this->dino_s->TabIndex = 24;
			// 
			// dino_e
			// 
			this->dino_e->Location = System::Drawing::Point(241, 90);
			this->dino_e->Name = L"dino_e";
			this->dino_e->Size = System::Drawing::Size(100, 20);
			this->dino_e->TabIndex = 25;
			// 
			// coffee_s
			// 
			this->coffee_s->Location = System::Drawing::Point(122, 119);
			this->coffee_s->Name = L"coffee_s";
			this->coffee_s->Size = System::Drawing::Size(100, 20);
			this->coffee_s->TabIndex = 26;
			// 
			// coffee_e
			// 
			this->coffee_e->Location = System::Drawing::Point(241, 119);
			this->coffee_e->Name = L"coffee_e";
			this->coffee_e->Size = System::Drawing::Size(100, 20);
			this->coffee_e->TabIndex = 27;
			// 
			// mug_s
			// 
			this->mug_s->Location = System::Drawing::Point(122, 148);
			this->mug_s->Name = L"mug_s";
			this->mug_s->Size = System::Drawing::Size(100, 20);
			this->mug_s->TabIndex = 28;
			// 
			// mug_e
			// 
			this->mug_e->Location = System::Drawing::Point(241, 148);
			this->mug_e->Name = L"mug_e";
			this->mug_e->Size = System::Drawing::Size(100, 20);
			this->mug_e->TabIndex = 29;
			// 
			// car_s
			// 
			this->car_s->Location = System::Drawing::Point(122, 177);
			this->car_s->Name = L"car_s";
			this->car_s->Size = System::Drawing::Size(100, 20);
			this->car_s->TabIndex = 30;
			// 
			// car_e
			// 
			this->car_e->Location = System::Drawing::Point(241, 177);
			this->car_e->Name = L"car_e";
			this->car_e->Size = System::Drawing::Size(100, 20);
			this->car_e->TabIndex = 31;
			// 
			// cam_s
			// 
			this->cam_s->Location = System::Drawing::Point(122, 206);
			this->cam_s->Name = L"cam_s";
			this->cam_s->Size = System::Drawing::Size(100, 20);
			this->cam_s->TabIndex = 32;
			// 
			// cam_e
			// 
			this->cam_e->Location = System::Drawing::Point(241, 206);
			this->cam_e->Name = L"cam_e";
			this->cam_e->Size = System::Drawing::Size(100, 20);
			this->cam_e->TabIndex = 33;
			// 
			// key_s
			// 
			this->key_s->Location = System::Drawing::Point(479, 32);
			this->key_s->Name = L"key_s";
			this->key_s->Size = System::Drawing::Size(100, 20);
			this->key_s->TabIndex = 34;
			// 
			// key_e
			// 
			this->key_e->Location = System::Drawing::Point(598, 32);
			this->key_e->Name = L"key_e";
			this->key_e->Size = System::Drawing::Size(100, 20);
			this->key_e->TabIndex = 35;
			// 
			// koala_s
			// 
			this->koala_s->Location = System::Drawing::Point(479, 61);
			this->koala_s->Name = L"koala_s";
			this->koala_s->Size = System::Drawing::Size(100, 20);
			this->koala_s->TabIndex = 36;
			// 
			// koala_e
			// 
			this->koala_e->Location = System::Drawing::Point(598, 61);
			this->koala_e->Name = L"koala_e";
			this->koala_e->Size = System::Drawing::Size(100, 20);
			this->koala_e->TabIndex = 37;
			// 
			// blackberry_s
			// 
			this->blackberry_s->Location = System::Drawing::Point(479, 90);
			this->blackberry_s->Name = L"blackberry_s";
			this->blackberry_s->Size = System::Drawing::Size(100, 20);
			this->blackberry_s->TabIndex = 38;
			// 
			// blackbery_e
			// 
			this->blackbery_e->Location = System::Drawing::Point(598, 90);
			this->blackbery_e->Name = L"blackbery_e";
			this->blackbery_e->Size = System::Drawing::Size(100, 20);
			this->blackbery_e->TabIndex = 39;
			// 
			// diet_s
			// 
			this->diet_s->Location = System::Drawing::Point(479, 119);
			this->diet_s->Name = L"diet_s";
			this->diet_s->Size = System::Drawing::Size(100, 20);
			this->diet_s->TabIndex = 40;
			// 
			// diet_e
			// 
			this->diet_e->Location = System::Drawing::Point(598, 119);
			this->diet_e->Name = L"diet_e";
			this->diet_e->Size = System::Drawing::Size(100, 20);
			this->diet_e->TabIndex = 41;
			// 
			// duck_s
			// 
			this->duck_s->Location = System::Drawing::Point(479, 148);
			this->duck_s->Name = L"duck_s";
			this->duck_s->Size = System::Drawing::Size(100, 20);
			this->duck_s->TabIndex = 42;
			// 
			// duck_e
			// 
			this->duck_e->Location = System::Drawing::Point(598, 148);
			this->duck_e->Name = L"duck_e";
			this->duck_e->Size = System::Drawing::Size(100, 20);
			this->duck_e->TabIndex = 43;
			// 
			// dragon_s
			// 
			this->dragon_s->Location = System::Drawing::Point(479, 177);
			this->dragon_s->Name = L"dragon_s";
			this->dragon_s->Size = System::Drawing::Size(100, 20);
			this->dragon_s->TabIndex = 44;
			// 
			// dragon_e
			// 
			this->dragon_e->Location = System::Drawing::Point(598, 177);
			this->dragon_e->Name = L"dragon_e";
			this->dragon_e->Size = System::Drawing::Size(100, 20);
			this->dragon_e->TabIndex = 45;
			// 
			// android_s
			// 
			this->android_s->Location = System::Drawing::Point(479, 206);
			this->android_s->Name = L"android_s";
			this->android_s->Size = System::Drawing::Size(100, 20);
			this->android_s->TabIndex = 46;
			// 
			// android_e
			// 
			this->android_e->Location = System::Drawing::Point(598, 206);
			this->android_e->Name = L"android_e";
			this->android_e->Size = System::Drawing::Size(100, 20);
			this->android_e->TabIndex = 47;
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
			this->btn_run->Text = L"Run";
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
			this->label2->Size = System::Drawing::Size(79, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Temp Directory";
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
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(785, 446);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Testing";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// FormMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(871, 607);
			this->Controls->Add(this->tabControl1);
			this->Name = L"FormMain";
			this->Text = L"FormMain";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
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
}


private: System::Void btn_label_Click(System::Object^  sender, System::EventArgs^  e) {
	//Now label all of the images
	//Pass to a function that accepts label name, temp directory, start and end frame.
}
};
}
