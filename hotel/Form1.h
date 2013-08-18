#pragma once
#include "adminPanel.h"
#include "forget_it.h"
#include "superPanel.h"


namespace hotel {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  username;
	private: System::Windows::Forms::TextBox^  password;
	private: System::Windows::Forms::Label^  username_l;
	private: System::Windows::Forms::Label^  password_l;
	private: System::Windows::Forms::Button^  login;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  forgotPwd;


	protected: 





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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->username = (gcnew System::Windows::Forms::TextBox());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->username_l = (gcnew System::Windows::Forms::Label());
			this->password_l = (gcnew System::Windows::Forms::Label());
			this->login = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->forgotPwd = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// username
			// 
			this->username->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->username->Location = System::Drawing::Point(187, 116);
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(127, 20);
			this->username->TabIndex = 0;
			this->username->TextChanged += gcnew System::EventHandler(this, &Form1::username_TextChanged);
			// 
			// password
			// 
			this->password->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->password->Location = System::Drawing::Point(187, 164);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(127, 20);
			this->password->TabIndex = 1;
			this->password->UseSystemPasswordChar = true;
			// 
			// username_l
			// 
			this->username_l->AutoSize = true;
			this->username_l->BackColor = System::Drawing::Color::Transparent;
			this->username_l->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->username_l->Location = System::Drawing::Point(100, 120);
			this->username_l->Name = L"username_l";
			this->username_l->Size = System::Drawing::Size(71, 16);
			this->username_l->TabIndex = 2;
			this->username_l->Text = L"Username";
			// 
			// password_l
			// 
			this->password_l->AutoSize = true;
			this->password_l->BackColor = System::Drawing::Color::Transparent;
			this->password_l->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->password_l->Location = System::Drawing::Point(100, 168);
			this->password_l->Name = L"password_l";
			this->password_l->Size = System::Drawing::Size(68, 16);
			this->password_l->TabIndex = 3;
			this->password_l->Text = L"Password";
			// 
			// login
			// 
			this->login->Location = System::Drawing::Point(209, 215);
			this->login->Name = L"login";
			this->login->Size = System::Drawing::Size(75, 23);
			this->login->TabIndex = 4;
			this->login->Text = L"LOGIN";
			this->login->UseVisualStyleBackColor = true;
			this->login->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(137, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(147, 18);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Admin Login Panel";
			// 
			// forgotPwd
			// 
			this->forgotPwd->Location = System::Drawing::Point(187, 368);
			this->forgotPwd->Name = L"forgotPwd";
			this->forgotPwd->Size = System::Drawing::Size(108, 26);
			this->forgotPwd->TabIndex = 6;
			this->forgotPwd->Text = L"Forgot Password";
			this->forgotPwd->UseVisualStyleBackColor = true;
			this->forgotPwd->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(819, 613);
			this->Controls->Add(this->forgotPwd);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->login);
			this->Controls->Add(this->password_l);
			this->Controls->Add(this->username_l);
			this->Controls->Add(this->password);
			this->Controls->Add(this->username);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Admin Log In";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 //Connect to database and verfy
		
		if(username->Text=="" || password->Text==""){
			MessageBox::Show("Username and password should have atleast one character!");
			return;
		}
		String^ user=username->Text;
		String^ s = L"datasource=localhost;port=3306;username=root;password=hotel";
		MySqlConnection^ con=gcnew MySqlConnection(s);
		MySqlCommand^ cmd=gcnew MySqlCommand("select * from hotel.users where username='"+this->username->Text+"' and password='"+this->password->Text+"';",con);
		MySqlDataReader^ read;
		String^ level;
		String^ name;
		String^ status;
		String^ userid;
		try{
			con->Open();
			read=cmd->ExecuteReader();
			int count=0;
			while(read->Read()){
				count++;
				level=read["level"]->ToString();
				name=read["name"]->ToString();
				status=read["status"]->ToString();
				userid=read["idusers"]->ToString();
			}
			if(count==1 && status=="1"){
				username->Text="";
				password->Text="";
				if(level=="1"){
				adminPanel^ ap = gcnew adminPanel(userid);
				this->Hide();
				ap->ShowDialog();
				}
				else if(level=="0"){
					superPanel^ sp = gcnew superPanel(userid);
					this->Hide();
					sp->ShowDialog();
				}
				this->Show();

			}
			else{

				if(status=="0"){
					MessageBox::Show("Account currently de-activated. Contact Super User.");
					return;
				}
				MessageBox::Show("Invalid Username or Password. Try again.");
				username->Text="";
				password->Text="";
			}
		}catch(Exception^ e){
		
			MessageBox::Show(e->Message);		
		}
			 }
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 String^ user=username->Text;
			 if(user==""){
				 MessageBox::Show("Enter your username first to change the password!");
				 return;
			 }
			 String^ s = L"datasource=localhost;port=3306;username=root;password=hotel";
			 MySqlConnection^ con=gcnew MySqlConnection(s);
			 MySqlCommand^ cmd=gcnew MySqlCommand("select * from hotel.users where username='"+user+"' ;",con);
			 MySqlDataReader^ read;
			 int count=0;
			 try{
				 con->Open();
				 read=cmd->ExecuteReader();
				 while(read->Read()){
					 count++;
				 }
				 if(count==0){
					 MessageBox::Show("The username doesnt exist!");
					 return;
				 }

			 }catch(Exception^ e){
				 MessageBox::Show(e->Message);
			 }
			 forget_it^ cp = gcnew forget_it(user);
			 cp->Show();
		 }

private: System::Void username_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};

}

