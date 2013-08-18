#pragma once
#include "changePassword.h"
namespace hotel {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;


	/// <summary>
	/// Summary for forget_it
	/// </summary>
	public ref class forget_it : public System::Windows::Forms::Form
	{
	private: String^ ans;
	public:
	/*	forget_it(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
*/
		forget_it(String^ user)
		{
			InitializeComponent();
			//
			username=user;
			String^ s = L"datasource=localhost;port=3306;username=root;password=hotel";
				 MySqlConnection^ con=gcnew MySqlConnection(s);
				 MySqlCommand^ cmd=gcnew MySqlCommand("select * from hotel.users where username='"+username+"' ;",con);
				 MySqlDataReader^ read;

				 String^ secquestion;
				 String^ status;
				 try{
					 con->Open();
					 read=cmd->ExecuteReader();
					 int count=0;
					 while(read->Read()){
						 count++;
						 secquestion=read["secquestion"]->ToString();
						 status=read["status"]->ToString();
						 ans=read["answer"]->ToString();
					 }
					 if(count==1 && status=="1"){
						 secq->Text=secquestion;
					 }
				 }catch(Exception^ e){MessageBox::Show(e->Message);}
			//
		}
		
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~forget_it()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  secq;


	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  securePass;
	private: String^ username;
	private: System::Windows::Forms::Button^  nextForm;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(forget_it::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->secq = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->securePass = (gcnew System::Windows::Forms::TextBox());
			this->nextForm = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Teal;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(188, 26);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Security Question : ";
			this->label1->Click += gcnew System::EventHandler(this, &forget_it::label1_Click);
			// 
			// secq
			// 
			this->secq->Location = System::Drawing::Point(16, 72);
			this->secq->Name = L"secq";
			this->secq->ReadOnly = true;
			this->secq->Size = System::Drawing::Size(317, 20);
			this->secq->TabIndex = 1;
			this->secq->TextChanged += gcnew System::EventHandler(this, &forget_it::secureQuestion_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Teal;
			this->label2->Location = System::Drawing::Point(279, 229);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(137, 26);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Security Key :";
			// 
			// securePass
			// 
			this->securePass->Location = System::Drawing::Point(435, 234);
			this->securePass->Name = L"securePass";
			this->securePass->Size = System::Drawing::Size(100, 20);
			this->securePass->TabIndex = 3;
			// 
			// nextForm
			// 
			this->nextForm->Location = System::Drawing::Point(435, 281);
			this->nextForm->Name = L"nextForm";
			this->nextForm->Size = System::Drawing::Size(75, 23);
			this->nextForm->TabIndex = 4;
			this->nextForm->Text = L"Next";
			this->nextForm->UseVisualStyleBackColor = true;
			this->nextForm->Click += gcnew System::EventHandler(this, &forget_it::nextForm_Click);
			// 
			// forget_it
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(626, 467);
			this->Controls->Add(this->nextForm);
			this->Controls->Add(this->securePass);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->secq);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"forget_it";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"forget_it";
			this->Load += gcnew System::EventHandler(this, &forget_it::forget_it_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void secureQuestion_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 
			 }
private: System::Void forget_it_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void nextForm_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(securePass->Text==ans){
				 changePassword^ cp=gcnew changePassword(username);
				 cp->ShowDialog();
			 }
			 else{
				 MessageBox::Show("The answers do not match!");
			 }

		 }
};
}
