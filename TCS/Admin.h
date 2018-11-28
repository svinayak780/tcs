#pragma once
#include "Student_Add.h"
#include "Manage_Staff.h"
#include "Manage_Result.h"
namespace TCS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Admin
	/// </summary>
	public ref class Admin : public System::Windows::Forms::Form
	{
	public:
		Admin(void)
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
		~Admin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Button^  adm_std;
	private: System::Windows::Forms::Button^  adm_res;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  adm_stf;
	protected:




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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->adm_std = (gcnew System::Windows::Forms::Button());
			this->adm_res = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->adm_stf = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(394, 26);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcome to Admin Portal";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Click += gcnew System::EventHandler(this, &Admin::label1_Click);
			// 
			// adm_std
			// 
			this->adm_std->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->adm_std->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->adm_std->FlatAppearance->BorderSize = 0;
			this->adm_std->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->adm_std->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->adm_std->ForeColor = System::Drawing::Color::White;
			this->adm_std->Location = System::Drawing::Point(0, 110);
			this->adm_std->Name = L"adm_std";
			this->adm_std->Size = System::Drawing::Size(426, 42);
			this->adm_std->TabIndex = 2;
			this->adm_std->Text = L"MANAGE STUDENTS";
			this->adm_std->UseVisualStyleBackColor = false;
			this->adm_std->Click += gcnew System::EventHandler(this, &Admin::adm_std_Click);
			// 
			// adm_res
			// 
			this->adm_res->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->adm_res->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->adm_res->FlatAppearance->BorderSize = 0;
			this->adm_res->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->adm_res->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->adm_res->ForeColor = System::Drawing::Color::White;
			this->adm_res->Location = System::Drawing::Point(0, 68);
			this->adm_res->Name = L"adm_res";
			this->adm_res->Size = System::Drawing::Size(426, 42);
			this->adm_res->TabIndex = 3;
			this->adm_res->Text = L"MANAGE RESULTS";
			this->adm_res->UseVisualStyleBackColor = false;
			this->adm_res->Click += gcnew System::EventHandler(this, &Admin::adm_res_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(178)), static_cast<System::Int32>(static_cast<System::Byte>(8)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(-1, -1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(427, 33);
			this->panel1->TabIndex = 4;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(393, 1);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(30, 29);
			this->button3->TabIndex = 2;
			this->button3->Text = L"X";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Admin::button3_Click);
			// 
			// adm_stf
			// 
			this->adm_stf->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->adm_stf->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->adm_stf->FlatAppearance->BorderSize = 0;
			this->adm_stf->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->adm_stf->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->adm_stf->ForeColor = System::Drawing::Color::White;
			this->adm_stf->Location = System::Drawing::Point(0, 28);
			this->adm_stf->Name = L"adm_stf";
			this->adm_stf->Size = System::Drawing::Size(426, 40);
			this->adm_stf->TabIndex = 5;
			this->adm_stf->Text = L"MANAGE STAFF";
			this->adm_stf->UseVisualStyleBackColor = false;
			this->adm_stf->Click += gcnew System::EventHandler(this, &Admin::adm_stf_Click_1);
			// 
			// Admin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->ClientSize = System::Drawing::Size(426, 152);
			this->Controls->Add(this->adm_stf);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->adm_res);
			this->Controls->Add(this->adm_std);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Admin";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Admin";
			this->Load += gcnew System::EventHandler(this, &Admin::Admin_Load);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Admin_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void adm_std_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		TCS::Student_Add studentaddform;
		studentaddform.ShowDialog();
		this->Show();
	}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void adm_stf_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	TCS::Manage_Staff managestaffform;
	managestaffform.ShowDialog();
	this->Show();
}
private: System::Void adm_res_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	TCS::Manage_Result manageresultform;
	manageresultform.ShowDialog();
	this->Show();
}
private: System::Void adm_stf_Click_1(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	TCS::Manage_Staff staffform;
	staffform.ShowDialog();
	this->Show();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
};
}
