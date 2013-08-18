#pragma once
#include "importTables.h"
#include <iostream>
#using<system.dll>
namespace hotel {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace System;
	using namespace System::IO;

	/// <summary>
	/// Summary for InstallForm
	/// </summary>
	public ref class InstallForm : public System::Windows::Forms::Form
	{
	public:
		InstallForm(void)
		{
			InitializeComponent();
			//
			String^ h = L"datasource=localhost;port=3306;username=root;password=hotel";
			String^ query="CREATE SCHEMA `hotel` ;";
			MySqlConnection^ con=gcnew MySqlConnection(h);
			MySqlCommand^ cmd=gcnew MySqlCommand(query,con);
			try{
			con->Open();
			cmd->ExecuteReader();
			con->Close();
			}catch(Exception^ e){
				con->Close();
			}
			query="CREATE  TABLE `hotel`.`users` (`idusers` INT NOT NULL AUTO_INCREMENT ,`username` VARCHAR(45) NOT NULL ,`password` VARCHAR(45) NOT NULL ,`name` VARCHAR(45) NOT NULL ,`level` INT NULL ,`status` INT NULL ,`secquestion` VARCHAR(100) NULL ,`answer` VARCHAR(45) NULL ,PRIMARY KEY (`idusers`) ,UNIQUE INDEX `idusers_UNIQUE` (`idusers` ASC) );";
			cmd=gcnew MySqlCommand(query,con);
			try{
				con->Open();
				cmd->ExecuteReader();
				con->Close();
			}catch(Exception^ e){
				con->Close();
			}
			query="INSERT INTO `hotel`.`users` (`username`, `password`, `name`, `level`, `status`, `secquestion`, `answer`) VALUES ('root', 'root', 'root', '0', '1', 'Who am I?', 'root');";
			cmd=gcnew MySqlCommand(query,con);
			try{
				con->Open();
				cmd->ExecuteReader();
				con->Close();
			}catch(Exception^ e){
				con->Close();
			}
			query="CREATE  TABLE `hotel`.`guests` (`idguests` INT NOT NULL AUTO_INCREMENT ,`name` VARCHAR(100) NULL DEFAULT NULL ,`contact` VARCHAR(20) NULL DEFAULT NULL ,`idproof` VARCHAR(45) NULL DEFAULT NULL ,`company` VARCHAR(45) NULL DEFAULT NULL ,`city` VARCHAR(50) NULL DEFAULT NULL ,`email` VARCHAR(45) NULL DEFAULT NULL ,`address` VARCHAR(100) NULL DEFAULT NULL ,`class` INT NULL DEFAULT NULL ,`amountpaid` INT NULL DEFAULT 0 ,PRIMARY KEY (`idguests`) ,UNIQUE INDEX `idguests_UNIQUE` (`idguests` ASC) );";
			cmd=gcnew MySqlCommand(query,con);
			try{
				con->Open();
				cmd->ExecuteReader();
				con->Close();
			}catch(Exception^ e){
				con->Close();
			}
			query="CREATE  TABLE `hotel`.`rooms` (`idrooms` INT NOT NULL AUTO_INCREMENT ,`roomno` VARCHAR(45) NOT NULL ,`class` VARCHAR(45) NOT NULL ,`status` VARCHAR(45) NOT NULL ,`datein` VARCHAR(45) NULL DEFAULT NULL ,`dateout` VARCHAR(45) NULL DEFAULT NULL ,`guestid` VARCHAR(45) NULL DEFAULT NULL ,PRIMARY KEY (`idrooms`) ,UNIQUE INDEX `idrooms_UNIQUE` (`idrooms` ASC) );";
			cmd=gcnew MySqlCommand(query,con);
			try{
				con->Open();
				cmd->ExecuteReader();
				con->Close();
			}catch(Exception^ e){
				con->Close();
			}
			query="CREATE  TABLE `hotel`.`discount` (`id` INT NOT NULL AUTO_INCREMENT ,`class` INT NOT NULL ,`classamount` INT NOT NULL ,`discount` INT NOT NULL ,PRIMARY KEY (`id`) );";
			cmd=gcnew MySqlCommand(query,con);
			try{
				con->Open();
				cmd->ExecuteReader();
				con->Close();
			}catch(Exception^ e){
				con->Close();
			}
			query="CREATE  TABLE `hotel`.`classinfo` (`idclassinfo` INT NOT NULL AUTO_INCREMENT ,`type` INT NOT NULL ,`cost` INT NOT NULL ,`description` VARCHAR(100) NOT NULL ,PRIMARY KEY (`idclassinfo`) ,UNIQUE INDEX `idclassinfo_UNIQUE` (`idclassinfo` ASC) );";
			cmd=gcnew MySqlCommand(query,con);
			try{
				con->Open();
				cmd->ExecuteReader();
				con->Close();
			}catch(Exception^ e){
				con->Close();
			}
			query="CREATE  TABLE `hotel`.`transactionlog` (`transactionid` INT NOT NULL ,`date_booked` VARCHAR(45) NOT NULL ,`time` VARCHAR(45) NULL DEFAULT NULL ,`roomid` VARCHAR(45) NOT NULL ,`guestid` VARCHAR(45) NOT NULL ,`date_out` VARCHAR(45) NOT NULL ,`totalpaidbyguest` VARCHAR(45) NOT NULL ,`employeeid` VARCHAR(45) NULL DEFAULT NULL ,PRIMARY KEY (`transactionid`) );";
			cmd=gcnew MySqlCommand(query,con);
			try{
				con->Open();
				cmd->ExecuteReader();
				con->Close();
			}catch(Exception^ e){
				con->Close();
			}
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~InstallForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 

	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::GroupBox^  superUserInit;
	private: System::Windows::Forms::TextBox^  passwordText;

	private: System::Windows::Forms::TextBox^  usernameText;
	private: System::Windows::Forms::TextBox^  nameText;



	private: System::Windows::Forms::TextBox^  secQuesText;
	private: System::Windows::Forms::TextBox^  answerText;



	private: System::Windows::Forms::Button^  signUpButton;
private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::Label^  label6;





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
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->superUserInit = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->signUpButton = (gcnew System::Windows::Forms::Button());
			this->answerText = (gcnew System::Windows::Forms::TextBox());
			this->secQuesText = (gcnew System::Windows::Forms::TextBox());
			this->passwordText = (gcnew System::Windows::Forms::TextBox());
			this->usernameText = (gcnew System::Windows::Forms::TextBox());
			this->nameText = (gcnew System::Windows::Forms::TextBox());
			this->superUserInit->SuspendLayout();
			this->SuspendLayout();
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &InstallForm::openFileDialog1_FileOk);
			// 
			// superUserInit
			// 
			this->superUserInit->Controls->Add(this->label6);
			this->superUserInit->Controls->Add(this->label5);
			this->superUserInit->Controls->Add(this->label4);
			this->superUserInit->Controls->Add(this->label3);
			this->superUserInit->Controls->Add(this->label2);
			this->superUserInit->Controls->Add(this->label1);
			this->superUserInit->Controls->Add(this->signUpButton);
			this->superUserInit->Controls->Add(this->answerText);
			this->superUserInit->Controls->Add(this->secQuesText);
			this->superUserInit->Controls->Add(this->passwordText);
			this->superUserInit->Controls->Add(this->usernameText);
			this->superUserInit->Controls->Add(this->nameText);
			this->superUserInit->Location = System::Drawing::Point(107, 23);
			this->superUserInit->Name = L"superUserInit";
			this->superUserInit->Size = System::Drawing::Size(308, 284);
			this->superUserInit->TabIndex = 2;
			this->superUserInit->TabStop = false;
			this->superUserInit->Text = L"Super User ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(27, 26);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(146, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Please fill the following details";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(27, 168);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(42, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Answer";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(27, 141);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(90, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Security Question";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(27, 115);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Password";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(27, 88);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Username";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(27, 62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Name";
			// 
			// signUpButton
			// 
			this->signUpButton->Location = System::Drawing::Point(116, 217);
			this->signUpButton->Name = L"signUpButton";
			this->signUpButton->Size = System::Drawing::Size(75, 23);
			this->signUpButton->TabIndex = 5;
			this->signUpButton->Text = L"Sign Up";
			this->signUpButton->UseVisualStyleBackColor = true;
			this->signUpButton->Click += gcnew System::EventHandler(this, &InstallForm::signUpButton_Click);
			// 
			// answerText
			// 
			this->answerText->Location = System::Drawing::Point(116, 168);
			this->answerText->Name = L"answerText";
			this->answerText->Size = System::Drawing::Size(100, 20);
			this->answerText->TabIndex = 4;
			// 
			// secQuesText
			// 
			this->secQuesText->Location = System::Drawing::Point(116, 141);
			this->secQuesText->Name = L"secQuesText";
			this->secQuesText->Size = System::Drawing::Size(172, 20);
			this->secQuesText->TabIndex = 3;
			this->secQuesText->Text = L"What is your favourite color\?";
			// 
			// passwordText
			// 
			this->passwordText->Location = System::Drawing::Point(116, 115);
			this->passwordText->Name = L"passwordText";
			this->passwordText->Size = System::Drawing::Size(100, 20);
			this->passwordText->TabIndex = 2;
			this->passwordText->UseSystemPasswordChar = true;
			// 
			// usernameText
			// 
			this->usernameText->Location = System::Drawing::Point(116, 88);
			this->usernameText->Name = L"usernameText";
			this->usernameText->Size = System::Drawing::Size(100, 20);
			this->usernameText->TabIndex = 1;
			// 
			// nameText
			// 
			this->nameText->Location = System::Drawing::Point(116, 62);
			this->nameText->Name = L"nameText";
			this->nameText->Size = System::Drawing::Size(100, 20);
			this->nameText->TabIndex = 0;
			// 
			// InstallForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(532, 424);
			this->Controls->Add(this->superUserInit);
			this->Name = L"InstallForm";
			this->Text = L"Install Form";
			this->superUserInit->ResumeLayout(false);
			this->superUserInit->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void openFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {

			 }
private: System::Void signUpButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ name=nameText->Text;
			 String^ username=usernameText->Text;
			 String^ password=passwordText->Text;
			 String^ sq=secQuesText->Text;
			 String^ ans=answerText->Text;
			 String^ status="1";
			 String^ level="0";

			 if(name=="" || username=="" || password=="" || sq=="" || ans==""){
				 MessageBox::Show("Please fill all the fields");
				 return;
			 }

			 String^ s = L"datasource=localhost;port=3306;username=root;password=hotel";
			 MySqlConnection^ con=gcnew MySqlConnection(s);
			 MySqlCommand^ cmd1=gcnew MySqlCommand("select * from hotel.users where username='"+username+"';",con);
			 MySqlCommand^ cmd2=gcnew MySqlCommand("insert into hotel.users (name,username,password,level,status,secquestion,answer) values('"+name+"','"+username+"','"+password+"','"+level+"','"+status+"','"+sq+"','"+ans+"') ;",con);
			 MySqlDataReader^ read;
			 int count=0;

			 try{
				 con->Open();
				 read=cmd1->ExecuteReader();
				 while (read->Read())
				 {
					 count++;
					 if(count>0){
						 MessageBox::Show("Admin already exists!");
						 return;
					 }

				 }
				 con->Close();
				 con->Open();
				 cmd2->ExecuteReader();
				 MessageBox::Show("Admin added");
				 con->Close();
				 MessageBox::Show("The super user "+name+" is created.The software is exiting now.");
				 this->Close();

			 }catch(Exception^ e){
				 MessageBox::Show(e->Message);
			 }

		 }
};
}
