#pragma once
#include "mylib.h"

namespace CLRuzd2Framework {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;
	using namespace System::Collections::Generic;

	/*
	[System::Runtime::InteropServices::DllImport("StudentasDll.dll", CallingConvention = CallingConvention.Cdecl)]
	extern double GalutinisApskaiciavimas(const int* pazymiai, int pazymiaiLength, int EgzPazymys);
	*/

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{

	public:
		array<int>^ NamuDarbuPazymiai;
		MyForm(void)
		{
			

			InitializeComponent();
			studentai = gcnew System::Collections::Generic::List<Studentas^>();


			VidBtn->Checked = true;
			CopyAllBtn->Enabled = false;
			CopyBtn->Enabled = false;
			PridetiStudenta("Darius", "Klaunas", "5, 9, 8, 7", "6");
			PridetiStudenta("Jonas", "Joniukas", "5, 8, 7, 4", "4");
			PridetiStudenta("Petras", "Karalauskas", "10, 10, 8, 8", "10");
			PridetiStudenta("Defaultas", "Nullis", "2, 3, 4, 1", "2");

			if (studentai->Count > -1) {
				CopyAllBtn->Enabled = true;
				CopyBtn->Enabled = true;
			}


			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ vardastxt;
	private: System::Windows::Forms::TextBox^ namudarbaitxt;

	private: System::Windows::Forms::TextBox^ egztxt;
	private: System::Windows::Forms::ListBox^ StudentasListBox;


	private: System::Windows::Forms::Button^ StudentasAdd;
	private: System::Windows::Forms::TextBox^ pavardetxt;

	protected:

	protected:

	protected:



	private:
		System::Collections::Generic::List<Studentas^>^ studentai;
		String^ storedFileContents;
	private: System::Windows::Forms::TextBox^ FileList;
	private: System::Windows::Forms::Button^ CopyBtn;
	private: System::Windows::Forms::Button^ CopyAllBtn;
	private: System::Windows::Forms::Button^ SaveFileBtn;
	private: System::Windows::Forms::Button^ ReadFileBtn;

	private: System::Windows::Forms::Button^ RemoveBtn;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::RadioButton^ VidBtn;
	private: System::Windows::Forms::RadioButton^ MedBtn;
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::ToolStripDropDownButton^ toolStripDropDownButton1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ readToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton1;






		   /// <summary>
		/// Required designer variable.
		/// </summary>
		   System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Required method for Designer support - do not modify
		   /// the contents of this method with the code editor.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			   this->vardastxt = (gcnew System::Windows::Forms::TextBox());
			   this->namudarbaitxt = (gcnew System::Windows::Forms::TextBox());
			   this->egztxt = (gcnew System::Windows::Forms::TextBox());
			   this->StudentasListBox = (gcnew System::Windows::Forms::ListBox());
			   this->StudentasAdd = (gcnew System::Windows::Forms::Button());
			   this->pavardetxt = (gcnew System::Windows::Forms::TextBox());
			   this->FileList = (gcnew System::Windows::Forms::TextBox());
			   this->CopyBtn = (gcnew System::Windows::Forms::Button());
			   this->CopyAllBtn = (gcnew System::Windows::Forms::Button());
			   this->SaveFileBtn = (gcnew System::Windows::Forms::Button());
			   this->ReadFileBtn = (gcnew System::Windows::Forms::Button());
			   this->RemoveBtn = (gcnew System::Windows::Forms::Button());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->VidBtn = (gcnew System::Windows::Forms::RadioButton());
			   this->MedBtn = (gcnew System::Windows::Forms::RadioButton());
			   this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			   this->toolStripDropDownButton1 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			   this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->readToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			   this->toolStrip1->SuspendLayout();
			   this->SuspendLayout();
			   // 
			   // vardastxt
			   // 
			   this->vardastxt->Location = System::Drawing::Point(31, 46);
			   this->vardastxt->Name = L"vardastxt";
			   this->vardastxt->Size = System::Drawing::Size(132, 20);
			   this->vardastxt->TabIndex = 0;
			   // 
			   // namudarbaitxt
			   // 
			   this->namudarbaitxt->Location = System::Drawing::Point(296, 46);
			   this->namudarbaitxt->Name = L"namudarbaitxt";
			   this->namudarbaitxt->Size = System::Drawing::Size(80, 20);
			   this->namudarbaitxt->TabIndex = 1;
			   // 
			   // egztxt
			   // 
			   this->egztxt->Location = System::Drawing::Point(382, 46);
			   this->egztxt->Name = L"egztxt";
			   this->egztxt->Size = System::Drawing::Size(32, 20);
			   this->egztxt->TabIndex = 2;
			   // 
			   // StudentasListBox
			   // 
			   this->StudentasListBox->FormattingEnabled = true;
			   this->StudentasListBox->Location = System::Drawing::Point(31, 101);
			   this->StudentasListBox->Name = L"StudentasListBox";
			   this->StudentasListBox->Size = System::Drawing::Size(383, 173);
			   this->StudentasListBox->TabIndex = 3;
			   // 
			   // StudentasAdd
			   // 
			   this->StudentasAdd->Location = System::Drawing::Point(31, 72);
			   this->StudentasAdd->Name = L"StudentasAdd";
			   this->StudentasAdd->Size = System::Drawing::Size(105, 23);
			   this->StudentasAdd->TabIndex = 4;
			   this->StudentasAdd->Text = L"Add";
			   this->StudentasAdd->UseVisualStyleBackColor = true;
			   this->StudentasAdd->Click += gcnew System::EventHandler(this, &MyForm::StudentasAdd_Click);
			   // 
			   // pavardetxt
			   // 
			   this->pavardetxt->Location = System::Drawing::Point(169, 46);
			   this->pavardetxt->Name = L"pavardetxt";
			   this->pavardetxt->Size = System::Drawing::Size(121, 20);
			   this->pavardetxt->TabIndex = 5;
			   // 
			   // FileList
			   // 
			   this->FileList->Location = System::Drawing::Point(31, 309);
			   this->FileList->Multiline = true;
			   this->FileList->Name = L"FileList";
			   this->FileList->Size = System::Drawing::Size(383, 219);
			   this->FileList->TabIndex = 6;
			   // 
			   // CopyBtn
			   // 
			   this->CopyBtn->Location = System::Drawing::Point(97, 280);
			   this->CopyBtn->Name = L"CopyBtn";
			   this->CopyBtn->Size = System::Drawing::Size(105, 23);
			   this->CopyBtn->TabIndex = 7;
			   this->CopyBtn->Text = L"Copy";
			   this->CopyBtn->UseVisualStyleBackColor = true;
			   this->CopyBtn->Click += gcnew System::EventHandler(this, &MyForm::CopyBtn_Click);
			   // 
			   // CopyAllBtn
			   // 
			   this->CopyAllBtn->Location = System::Drawing::Point(235, 280);
			   this->CopyAllBtn->Name = L"CopyAllBtn";
			   this->CopyAllBtn->Size = System::Drawing::Size(103, 23);
			   this->CopyAllBtn->TabIndex = 8;
			   this->CopyAllBtn->Text = L"Copy All";
			   this->CopyAllBtn->UseVisualStyleBackColor = true;
			   this->CopyAllBtn->Click += gcnew System::EventHandler(this, &MyForm::CopyAllBtn_Click);
			   // 
			   // SaveFileBtn
			   // 
			   this->SaveFileBtn->Location = System::Drawing::Point(97, 534);
			   this->SaveFileBtn->Name = L"SaveFileBtn";
			   this->SaveFileBtn->Size = System::Drawing::Size(105, 23);
			   this->SaveFileBtn->TabIndex = 9;
			   this->SaveFileBtn->Text = L"Save to file";
			   this->SaveFileBtn->UseVisualStyleBackColor = true;
			   this->SaveFileBtn->Click += gcnew System::EventHandler(this, &MyForm::SaveFileBtn_Click);
			   // 
			   // ReadFileBtn
			   // 
			   this->ReadFileBtn->Location = System::Drawing::Point(233, 534);
			   this->ReadFileBtn->Name = L"ReadFileBtn";
			   this->ReadFileBtn->Size = System::Drawing::Size(105, 23);
			   this->ReadFileBtn->TabIndex = 10;
			   this->ReadFileBtn->Text = L"Read from file";
			   this->ReadFileBtn->UseVisualStyleBackColor = true;
			   this->ReadFileBtn->Click += gcnew System::EventHandler(this, &MyForm::ReadFileBtn_Click);
			   // 
			   // RemoveBtn
			   // 
			   this->RemoveBtn->Location = System::Drawing::Point(142, 72);
			   this->RemoveBtn->Name = L"RemoveBtn";
			   this->RemoveBtn->Size = System::Drawing::Size(105, 23);
			   this->RemoveBtn->TabIndex = 12;
			   this->RemoveBtn->Text = L"Remove";
			   this->RemoveBtn->UseVisualStyleBackColor = true;
			   this->RemoveBtn->Click += gcnew System::EventHandler(this, &MyForm::RemoveBtn_Click);
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Location = System::Drawing::Point(28, 30);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(40, 13);
			   this->label1->TabIndex = 13;
			   this->label1->Text = L"Vardas";
			   this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Location = System::Drawing::Point(166, 30);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(47, 13);
			   this->label2->TabIndex = 14;
			   this->label2->Text = L"Pavarde";
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Location = System::Drawing::Point(293, 30);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(38, 13);
			   this->label3->TabIndex = 15;
			   this->label3->Text = L"ND (4)";
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->Location = System::Drawing::Point(379, 30);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(25, 13);
			   this->label4->TabIndex = 16;
			   this->label4->Text = L"Egz";
			   // 
			   // VidBtn
			   // 
			   this->VidBtn->AutoSize = true;
			   this->VidBtn->Location = System::Drawing::Point(261, 75);
			   this->VidBtn->Name = L"VidBtn";
			   this->VidBtn->Size = System::Drawing::Size(62, 17);
			   this->VidBtn->TabIndex = 17;
			   this->VidBtn->TabStop = true;
			   this->VidBtn->Text = L"Vidurkis";
			   this->VidBtn->UseVisualStyleBackColor = true;
			   this->VidBtn->CheckedChanged += gcnew System::EventHandler(this, &MyForm::VidBtn_CheckedChanged);
			   // 
			   // MedBtn
			   // 
			   this->MedBtn->AutoSize = true;
			   this->MedBtn->Location = System::Drawing::Point(329, 75);
			   this->MedBtn->Name = L"MedBtn";
			   this->MedBtn->Size = System::Drawing::Size(66, 17);
			   this->MedBtn->TabIndex = 18;
			   this->MedBtn->TabStop = true;
			   this->MedBtn->Text = L"Mediana";
			   this->MedBtn->UseVisualStyleBackColor = true;
			   // 
			   // toolStrip1
			   // 
			   this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				   this->toolStripDropDownButton1,
					   this->toolStripButton1
			   });
			   this->toolStrip1->Location = System::Drawing::Point(0, 0);
			   this->toolStrip1->Name = L"toolStrip1";
			   this->toolStrip1->Size = System::Drawing::Size(446, 25);
			   this->toolStrip1->TabIndex = 19;
			   this->toolStrip1->Text = L"toolStrip1";
			   // 
			   // toolStripDropDownButton1
			   // 
			   this->toolStripDropDownButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			   this->toolStripDropDownButton1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				   this->fileToolStripMenuItem,
					   this->readToolStripMenuItem, this->exitToolStripMenuItem
			   });
			   this->toolStripDropDownButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripDropDownButton1.Image")));
			   this->toolStripDropDownButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			   this->toolStripDropDownButton1->Name = L"toolStripDropDownButton1";
			   this->toolStripDropDownButton1->Size = System::Drawing::Size(38, 22);
			   this->toolStripDropDownButton1->Text = L"File";
			   this->toolStripDropDownButton1->Click += gcnew System::EventHandler(this, &MyForm::toolStripDropDownButton1_Click);
			   // 
			   // fileToolStripMenuItem
			   // 
			   this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			   this->fileToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			   this->fileToolStripMenuItem->Text = L"Save";
			   this->fileToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::fileToolStripMenuItem_Click);
			   // 
			   // readToolStripMenuItem
			   // 
			   this->readToolStripMenuItem->Name = L"readToolStripMenuItem";
			   this->readToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			   this->readToolStripMenuItem->Text = L"Read";
			   this->readToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::readToolStripMenuItem_Click);
			   // 
			   // exitToolStripMenuItem
			   // 
			   this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			   this->exitToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			   this->exitToolStripMenuItem->Text = L"Exit";
			   this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			   // 
			   // toolStripButton1
			   // 
			   this->toolStripButton1->AutoSize = false;
			   this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			   this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			   this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			   this->toolStripButton1->Name = L"toolStripButton1";
			   this->toolStripButton1->Size = System::Drawing::Size(40, 22);
			   this->toolStripButton1->Text = L"Info";
			   this->toolStripButton1->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton1_Click);
			   // 
			   // MyForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(446, 587);
			   this->Controls->Add(this->toolStrip1);
			   this->Controls->Add(this->MedBtn);
			   this->Controls->Add(this->VidBtn);
			   this->Controls->Add(this->label4);
			   this->Controls->Add(this->label3);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->label1);
			   this->Controls->Add(this->RemoveBtn);
			   this->Controls->Add(this->ReadFileBtn);
			   this->Controls->Add(this->SaveFileBtn);
			   this->Controls->Add(this->CopyAllBtn);
			   this->Controls->Add(this->CopyBtn);
			   this->Controls->Add(this->FileList);
			   this->Controls->Add(this->pavardetxt);
			   this->Controls->Add(this->StudentasAdd);
			   this->Controls->Add(this->StudentasListBox);
			   this->Controls->Add(this->egztxt);
			   this->Controls->Add(this->namudarbaitxt);
			   this->Controls->Add(this->vardastxt);
			   this->Name = L"MyForm";
			   this->Text = L"Student List";
			   this->toolStrip1->ResumeLayout(false);
			   this->toolStrip1->PerformLayout();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
		   //========================================================================================
		   //========================================================================================

		   double GalutinisApskaiciavimas(array<int>^ NamuDarbai, int EgzPazymys, bool isVid)
		   {
			   double galutinis = 0.0;

			   if (isVid)
			   {
				   double vid = 0.0;

				   for (int i = 0; i < NamuDarbai->Length; i++)
				   {
					   vid += NamuDarbai[i];
				   }
				   vid /= NamuDarbai->Length;
				   galutinis = 0.4 * vid + 0.6 * EgzPazymys;
			   }
			   else
			   {
				   array<int>^ sortedNamuDarbai = gcnew array<int>(NamuDarbai->Length);
				   Array::Copy(NamuDarbai, sortedNamuDarbai, NamuDarbai->Length);
				   Array::Sort(sortedNamuDarbai);

				   double mediana = 0.0;

				   if (sortedNamuDarbai->Length % 2 == 0)
				   {
					   int middle1 = sortedNamuDarbai->Length / 2 - 1;
					   int middle2 = sortedNamuDarbai->Length / 2;
					   mediana = (sortedNamuDarbai[middle1] + sortedNamuDarbai[middle2]) / 2.0;
				   }
				   else
				   {
					   int middle = sortedNamuDarbai->Length / 2;
					   mediana = sortedNamuDarbai[middle];
				   }

				   galutinis = 0.4 * mediana + 0.6 * EgzPazymys;
			   }

			   return galutinis;
		   }

		   //========================================================================================

		   void UpdateStudentas()
		   {
			   StudentasListBox->Items->Clear();

			   for each (Studentas ^ studentas in studentai)
			   {
				   double galutinis = 0.0;

				   array<int>^ NamuDarbai = studentas->GetNamuDarbai();
				   int EgzPazymys = studentas->GetEgz();

				   if (VidBtn->Checked)
				   {
					   galutinis = GalutinisApskaiciavimas(NamuDarbai, EgzPazymys, true);
				   }
				   else if (MedBtn->Checked)
				   {
					   galutinis = GalutinisApskaiciavimas(NamuDarbai, EgzPazymys, false);
				   }

				   String^ StudentasText = String::Format("{0,-15} {1,-15} {2,-3} {3,-3} {4,-3} {5,-3} {6,-3} Galutinis: {7,4:F5}",
					   studentas->Vardas, studentas->Pavarde, studentas->NamuDarbai[0], studentas->NamuDarbai[1],
					   studentas->NamuDarbai[2], studentas->NamuDarbai[3], EgzPazymys, galutinis);

				   StudentasListBox->Items->Add(StudentasText);
			   }
		   }

		   //========================================================================================

		   void PridetiStudenta(String^ vardas, String^ pavarde, String^ namudarbai, String^ egz)
		   {
			   array<String^>^ NamuDarbuarr = namudarbai->Split(',');

			   if (NamuDarbuarr->Length < 4) {
				   MessageBox::Show("Iveskite 4 namu darbus");
				   return;
			   }

			   array<int>^ NamuDarbuPazymiai = gcnew array<int>(NamuDarbuarr->Length);

			   for (int i = 0; i < NamuDarbuarr->Length; i++) {
				   NamuDarbuPazymiai[i] = Convert::ToInt32(NamuDarbuarr[i]->Trim());
			   }

			   int EgzPazymys = Convert::ToInt32(egz->Trim());

			   double galutinis = GalutinisApskaiciavimas(NamuDarbuPazymiai, EgzPazymys, VidBtn->Checked);

			   String^ StudentasText = String::Format("{0,-15} {1,-15} {2,-3} {3,-3} {4,-3} {5,-3} {6,-3} Galutinis: {7,4:F5}",
				   vardas, pavarde, NamuDarbuPazymiai[0], NamuDarbuPazymiai[1], NamuDarbuPazymiai[2], NamuDarbuPazymiai[3], EgzPazymys, galutinis);

			   StudentasListBox->Items->Add(StudentasText);

			   Studentas^ NaujasStudentas = gcnew Studentas(vardas, pavarde, NamuDarbuPazymiai, EgzPazymys);
			   studentai->Add(NaujasStudentas);
		   }
		   //========================================================================================

		   void SaveFile() {
			   SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
			   saveFileDialog1->Filter = "Text Files|*.txt";
			   saveFileDialog1->Title = "Save TXT";

			   if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				   String^ filePath = saveFileDialog1->FileName;

				   try {
					   System::IO::File::WriteAllText(filePath, FileList->Text);
				   }
				   catch (Exception^ ex) {
					   MessageBox::Show("Failas nerastas!" + ex->Message);
				   }
			   }
		   }
		   void ReadFile() {
			   OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();
			   openFileDialog1->Filter = "Text Files|*.txt";
			   openFileDialog1->Title = "Read TXT";

			   if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				   String^ filePath = openFileDialog1->FileName;

				   try {
					   String^ fileContents = System::IO::File::ReadAllText(filePath);

					   array<String^>^ lines = fileContents->Split(Environment::NewLine->ToCharArray(), StringSplitOptions::RemoveEmptyEntries);
					   for each (String ^ line in lines) {
						   FileList->Text += line + Environment::NewLine;
					   }
				   }
				   catch (Exception^ ex) {
					   MessageBox::Show("Failas nerastas!" + ex->Message);
				   }
			   }
		   }

	private: System::Void StudentasAdd_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ vardas = vardastxt->Text;
		String^ pavarde = pavardetxt->Text;
		String^ namudarbai = namudarbaitxt->Text;
		String^ egz = egztxt->Text;
		try
		{
			array<String^>^ NamuDarbuarr = namudarbai->Split(',');
			if (String::IsNullOrEmpty(vardas) || String::IsNullOrEmpty(pavarde)) {
				MessageBox::Show("Iveskite Varda arba Pavarde");
				return;
			}
			if (NamuDarbuarr->Length < 4){
				MessageBox::Show("Iveskite 4 namu darbus");
				return;
			}

			array<int>^ NamuDarbuPazymiai = gcnew array<int>(NamuDarbuarr->Length);

			for (int i = 0; i < NamuDarbuarr->Length; i++)
			{
				NamuDarbuPazymiai[i] = Convert::ToInt32(NamuDarbuarr[i]->Trim());
			}

			int EgzPazymys = Convert::ToInt32(egz->Trim());

			double galutinis = GalutinisApskaiciavimas(NamuDarbuPazymiai, EgzPazymys, VidBtn->Checked);

			String^ StudentasText = String::Format("{0,-15} {1,-15} {2,-3} {3,-3} {4,-3} {5,-3} {6,-3} Galutinis: {7,4:F5}",
				vardas, pavarde, NamuDarbuPazymiai[0], NamuDarbuPazymiai[1], NamuDarbuPazymiai[2], NamuDarbuPazymiai[3], EgzPazymys, galutinis);

			StudentasListBox->Items->Add(StudentasText);
			Studentas^ NaujasStudentas = gcnew Studentas(vardas, pavarde, NamuDarbuPazymiai, EgzPazymys);
			studentai->Add(NaujasStudentas);

			vardastxt->Clear();
			pavardetxt->Clear();
			namudarbaitxt->Clear();
			egztxt->Clear();
		}
		catch (FormatException^ ex)
		{
			MessageBox::Show("Atskirkite namu darbu pazymius kableliais");
		}
	}
	//========================================================================================
	private: System::Void CopyBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		int SelectedStudentas = StudentasListBox->SelectedIndex;

		if (SelectedStudentas <= -1) {
			MessageBox::Show("Pasirinkite studenta");
			return;
		}
		String^ SelectedStudentasList = dynamic_cast<String^>(StudentasListBox->Items[SelectedStudentas]);

		FileList->Text += SelectedStudentasList + Environment::NewLine;
	}
	//========================================================================================
	private: System::Void CopyAllBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 0; i < StudentasListBox->Items->Count; i++) {
			String^ CopyStudentoData = dynamic_cast<String^>(StudentasListBox->Items[i]);
			FileList->Text += StudentasListBox->Items[i] + Environment::NewLine;
		}

	}
	//========================================================================================
	private: System::Void SaveFileBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		SaveFile();
	}
	//========================================================================================
	private: System::Void ReadFileBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		ReadFile();
	}
	//========================================================================================



	
private: System::Void TransferBtn_Click_1(System::Object^ sender, System::EventArgs^ e) {
	/*
	String^ TextFileItems = FileList->Text;

	if (!String::IsNullOrEmpty(TextFileItems)) {
		array<String^>^ linijos = TextFileItems->Split();

		for each (String ^ linija in linijos) {
			StudentasListBox->Items->Add(linija);
		}
	}
	else {
		MessageBox::Show("Nera ka perkelti");
	}
	*/
}

//========================================================================================
private: System::Void RemoveBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	int selectedIndex = StudentasListBox->SelectedIndex;

	if (selectedIndex >= 0) {
		studentai->RemoveAt(StudentasListBox->SelectedIndex);
		StudentasListBox->Items->RemoveAt(selectedIndex);
	}
	else {
		MessageBox::Show("Nepasirinkote studenta");
	}
	if (StudentasListBox->Items->Count >= -1) {
		CopyAllBtn->Enabled = true;
		CopyBtn->Enabled = true;
	}
}

private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}

	   
//========================================================================================
private: System::Void VidBtn_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	UpdateStudentas();

}
private: System::Void toolStripDropDownButton1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
private: System::Void fileToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	SaveFile();
}
private: System::Void readToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ReadFile();
}
private: System::Void toolStripButton1_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Systeminio programavimo 2 užd." + Environment::NewLine + "Kurejas: Nedas Kazakevicius ", "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
};
}
