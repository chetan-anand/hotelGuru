#pragma once
#include "changePassword.h"
#include "roombook.h"
#include "checkOutForm.h"
namespace hotel {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for adminPanel
	/// </summary>
	public ref class adminPanel : public System::Windows::Forms::Form
	{
	public:
		adminPanel(String^ loggedIn)
		{

			InitializeComponent();

			//
			loggedInUser=loggedIn;
			label2->Text=loggedInUser;
			//
		}



	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~adminPanel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private:
		String^ loggedInUser;
	private: System::Windows::Forms::Button^  changePwd;
	private: System::Windows::Forms::Button^  logout;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(adminPanel::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->changePwd = (gcnew System::Windows::Forms::Button());
			this->logout = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(203, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Curently logged in user :";
			this->label1->Click += gcnew System::EventHandler(this, &adminPanel::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(221, 13);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 16);
			this->label2->TabIndex = 1;
			this->label2->Click += gcnew System::EventHandler(this, &adminPanel::label2_Click);
			// 
			// changePwd
			// 
			this->changePwd->Location = System::Drawing::Point(107, 353);
			this->changePwd->Name = L"changePwd";
			this->changePwd->Size = System::Drawing::Size(136, 23);
			this->changePwd->TabIndex = 2;
			this->changePwd->Text = L"Change Password";
			this->changePwd->UseVisualStyleBackColor = true;
			this->changePwd->Visible = false;
			this->changePwd->Click += gcnew System::EventHandler(this, &adminPanel::changePwd_Click);
			// 
			// logout
			// 
			this->logout->Location = System::Drawing::Point(413, 13);
			this->logout->Name = L"logout";
			this->logout->Size = System::Drawing::Size(75, 23);
			this->logout->TabIndex = 3;
			this->logout->Text = L"Logout";
			this->logout->UseVisualStyleBackColor = true;
			this->logout->Click += gcnew System::EventHandler(this, &adminPanel::logout_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(33, 78);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(108, 46);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Book Rooms";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &adminPanel::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(33, 157);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 43);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Check-Out";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &adminPanel::button2_Click);
			// 
			// adminPanel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(513, 388);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->logout);
			this->Controls->Add(this->changePwd);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"adminPanel";
			this->Text = L"Admin Panel";
			this->Load += gcnew System::EventHandler(this, &adminPanel::adminPanel_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void adminPanel_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void changePwd_Click(System::Object^  sender, System::EventArgs^  e) {
				 changePassword^ cp = gcnew changePassword(loggedInUser);
				 cp->Show();
			 }
private: System::Void logout_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 roombook^ rb=gcnew roombook(loggedInUser);
			 rb->ShowDialog();
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 checkOutForm^ cf=gcnew checkOutForm();
			 cf->ShowDialog();
		 }
};
}
