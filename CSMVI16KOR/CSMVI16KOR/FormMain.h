
#pragma once

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
			this->btn_trn_folder = (gcnew System::Windows::Forms::Button());
			this->txt_trainFldr = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->TrainDlg = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(34, 64);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(901, 506);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->btn_trn_folder);
			this->tabPage1->Controls->Add(this->txt_trainFldr);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(893, 480);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Training";
			this->tabPage1->UseVisualStyleBackColor = true;
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
			// TrainImageWindow
			
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(893, 480);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Testing";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// FormMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(977, 629);
			this->Controls->Add(this->tabControl1);
			this->Name = L"FormMain";
			this->Text = L"FormMain";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btn_trn_folder_Click(System::Object^  sender, System::EventArgs^  e) {
		TrainDlg->ShowDialog();
		txt_trainFldr->Text = TrainDlg->SelectedPath;
		
	}
};
}
