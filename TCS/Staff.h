#pragma once
#include "Student_Add.h"
#include "Manage_Result.h"

namespace TCS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Staff
	/// </summary>
	public ref class Staff : public System::Windows::Forms::Form
	{
	public:
		Staff(void)
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
		~Staff()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  stf_res;

	private: System::Windows::Forms::Button^  stf_std;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  button3;



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
			this->stf_res = (gcnew System::Windows::Forms::Button());
			this->stf_std = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 2);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(319, 31);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Welcome to Staff Portal";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Click += gcnew System::EventHandler(this, &Staff::label1_Click);
			// 
			// stf_res
			// 
			this->stf_res->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->stf_res->FlatAppearance->BorderSize = 0;
			this->stf_res->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->stf_res->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stf_res->ForeColor = System::Drawing::Color::White;
			this->stf_res->Location = System::Drawing::Point(0, 33);
			this->stf_res->Name = L"stf_res";
			this->stf_res->Size = System::Drawing::Size(357, 41);
			this->stf_res->TabIndex = 5;
			this->stf_res->Text = L"MANAGE RESULTS";
			this->stf_res->UseVisualStyleBackColor = true;
			this->stf_res->Click += gcnew System::EventHandler(this, &Staff::stf_res_Click);
			// 
			// stf_std
			// 
			this->stf_std->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->stf_std->FlatAppearance->BorderSize = 0;
			this->stf_std->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->stf_std->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stf_std->ForeColor = System::Drawing::Color::White;
			this->stf_std->Location = System::Drawing::Point(0, 74);
			this->stf_std->Name = L"stf_std";
			this->stf_std->Size = System::Drawing::Size(357, 41);
			this->stf_std->TabIndex = 4;
			this->stf_std->Text = L"MANAGE STUDENTS";
			this->stf_std->UseVisualStyleBackColor = true;
			this->stf_std->Click += gcnew System::EventHandler(this, &Staff::stf_std_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(178)), static_cast<System::Int32>(static_cast<System::Byte>(8)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(357, 33);
			this->panel1->TabIndex = 6;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(322, 0);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(30, 33);
			this->button3->TabIndex = 7;
			this->button3->Text = L"X";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Staff::button3_Click);
			// 
			// Staff
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->ClientSize = System::Drawing::Size(357, 115);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->stf_res);
			this->Controls->Add(this->stf_std);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Staff";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Staff";
			this->Load += gcnew System::EventHandler(this, &Staff::Staff_Load);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Staff_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void stf_std_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		TCS::Student_Add studentaddform;
		studentaddform.ShowDialog();
		this->Show();
	}
	private: System::Void stf_res_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		TCS::Manage_Result manageresultform;
		manageresultform.ShowDialog();
		this->Show();
	}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
};
}
