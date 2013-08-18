#pragma once

namespace hotel {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for addRec
	/// </summary>
	
	public ref class addRec : public System::Windows::Forms::Form
	{
	public:
		addRec(System::Windows::Forms::ListView^ lv)
		{
			InitializeComponent();
			//
			listv=lv;
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~addRec()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  recInfo;
	private: System::Windows::Forms::TextBox^  addRec_password;

	private: System::Windows::Forms::TextBox^  addRec_username;

	private: System::Windows::Forms::TextBox^  addRec_name;
	private: System::Windows::Forms::Label^  addRec_passwordl;

	private: System::Windows::Forms::Label^  addRec_usernamel;

	private: System::Windows::Forms::Label^  addRec_namel;
	private: System::Windows::Forms::Button^  addRec_add;
	private: System::Windows::Forms::ComboBox^  addRec_level;
	private: System::Windows::Forms::Label^  addRec_levell;
			 System::Windows::Forms::ListView^ listv;
	private: System::Windows::Forms::TextBox^  secAnsText;

	private: System::Windows::Forms::TextBox^  secQuestion;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;










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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(addRec::typeid));
			this->recInfo = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->secAnsText = (gcnew System::Windows::Forms::TextBox());
			this->secQuestion = (gcnew System::Windows::Forms::TextBox());
			this->addRec_levell = (gcnew System::Windows::Forms::Label());
			this->addRec_level = (gcnew System::Windows::Forms::ComboBox());
			this->addRec_add = (gcnew System::Windows::Forms::Button());
			this->addRec_passwordl = (gcnew System::Windows::Forms::Label());
			this->addRec_usernamel = (gcnew System::Windows::Forms::Label());
			this->addRec_namel = (gcnew System::Windows::Forms::Label());
			this->addRec_password = (gcnew System::Windows::Forms::TextBox());
			this->addRec_username = (gcnew System::Windows::Forms::TextBox());
			this->addRec_name = (gcnew System::Windows::Forms::TextBox());
			this->recInfo->SuspendLayout();
			this->SuspendLayout();
			// 
			// recInfo
			// 
			this->recInfo->BackColor = System::Drawing::Color::Transparent;
			this->recInfo->Controls->Add(this->label2);
			this->recInfo->Controls->Add(this->label1);
			this->recInfo->Controls->Add(this->secAnsText);
			this->recInfo->Controls->Add(this->secQuestion);
			this->recInfo->Controls->Add(this->addRec_levell);
			this->recInfo->Controls->Add(this->addRec_level);
			this->recInfo->Controls->Add(this->addRec_add);
			this->recInfo->Controls->Add(this->addRec_passwordl);
			this->recInfo->Controls->Add(this->addRec_usernamel);
			this->recInfo->Controls->Add(this->addRec_namel);
			this->recInfo->Controls->Add(this->addRec_password);
			this->recInfo->Controls->Add(this->addRec_username);
			this->recInfo->Controls->Add(this->addRec_name);
			this->recInfo->Location = System::Drawing::Point(57, 43);
			this->recInfo->Name = L"recInfo";
			this->recInfo->Size = System::Drawing::Size(331, 286);
			this->recInfo->TabIndex = 0;
			this->recInfo->TabStop = false;
			this->recInfo->Text = L"Receptionist Info";
			this->recInfo->Enter += gcnew System::EventHandler(this, &addRec::recInfo_Enter);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(17, 192);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(42, 13);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Answer";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(17, 165);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(90, 13);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Security Question";
			// 
			// secAnsText
			// 
			this->secAnsText->Location = System::Drawing::Point(113, 192);
			this->secAnsText->Name = L"secAnsText";
			this->secAnsText->Size = System::Drawing::Size(100, 20);
			this->secAnsText->TabIndex = 10;
			// 
			// secQuestion
			// 
			this->secQuestion->Location = System::Drawing::Point(113, 165);
			this->secQuestion->Name = L"secQuestion";
			this->secQuestion->Size = System::Drawing::Size(199, 20);
			this->secQuestion->TabIndex = 9;
			this->secQuestion->Text = L"What is your favourite color\?";
			// 
			// addRec_levell
			// 
			this->addRec_levell->AutoSize = true;
			this->addRec_levell->Location = System::Drawing::Point(17, 137);
			this->addRec_levell->Name = L"addRec_levell";
			this->addRec_levell->Size = System::Drawing::Size(31, 13);
			this->addRec_levell->TabIndex = 8;
			this->addRec_levell->Text = L"Type";
			// 
			// addRec_level
			// 
			this->addRec_level->FormattingEnabled = true;
			this->addRec_level->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Receptionist", L"Super User"});
			this->addRec_level->Location = System::Drawing::Point(113, 137);
			this->addRec_level->Name = L"addRec_level";
			this->addRec_level->Size = System::Drawing::Size(100, 21);
			this->addRec_level->TabIndex = 7;
			// 
			// addRec_add
			// 
			this->addRec_add->Location = System::Drawing::Point(113, 229);
			this->addRec_add->Name = L"addRec_add";
			this->addRec_add->Size = System::Drawing::Size(75, 23);
			this->addRec_add->TabIndex = 6;
			this->addRec_add->Text = L"Add";
			this->addRec_add->UseVisualStyleBackColor = true;
			this->addRec_add->Click += gcnew System::EventHandler(this, &addRec::addRec_add_Click);
			// 
			// addRec_passwordl
			// 
			this->addRec_passwordl->AutoSize = true;
			this->addRec_passwordl->Location = System::Drawing::Point(17, 110);
			this->addRec_passwordl->Name = L"addRec_passwordl";
			this->addRec_passwordl->Size = System::Drawing::Size(53, 13);
			this->addRec_passwordl->TabIndex = 5;
			this->addRec_passwordl->Text = L"Password";
			// 
			// addRec_usernamel
			// 
			this->addRec_usernamel->AutoSize = true;
			this->addRec_usernamel->Location = System::Drawing::Point(17, 84);
			this->addRec_usernamel->Name = L"addRec_usernamel";
			this->addRec_usernamel->Size = System::Drawing::Size(55, 13);
			this->addRec_usernamel->TabIndex = 4;
			this->addRec_usernamel->Text = L"Username";
			// 
			// addRec_namel
			// 
			this->addRec_namel->AutoSize = true;
			this->addRec_namel->Location = System::Drawing::Point(17, 58);
			this->addRec_namel->Name = L"addRec_namel";
			this->addRec_namel->Size = System::Drawing::Size(35, 13);
			this->addRec_namel->TabIndex = 3;
			this->addRec_namel->Text = L"Name";
			// 
			// addRec_password
			// 
			this->addRec_password->Location = System::Drawing::Point(113, 110);
			this->addRec_password->Name = L"addRec_password";
			this->addRec_password->Size = System::Drawing::Size(100, 20);
			this->addRec_password->TabIndex = 2;
			this->addRec_password->UseSystemPasswordChar = true;
			// 
			// addRec_username
			// 
			this->addRec_username->Location = System::Drawing::Point(113, 84);
			this->addRec_username->Name = L"addRec_username";
			this->addRec_username->Size = System::Drawing::Size(100, 20);
			this->addRec_username->TabIndex = 1;
			// 
			// addRec_name
			// 
			this->addRec_name->Location = System::Drawing::Point(113, 58);
			this->addRec_name->Name = L"addRec_name";
			this->addRec_name->Size = System::Drawing::Size(100, 20);
			this->addRec_name->TabIndex = 0;
			// 
			// addRec
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(442, 365);
			this->Controls->Add(this->recInfo);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"addRec";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Add an admin";
			this->recInfo->ResumeLayout(false);
			this->recInfo->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void recInfo_Enter(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void addRec_add_Click(System::Object^  sender, System::EventArgs^  e) {

			 String^ name=addRec_name->Text;
			 String^ username=addRec_username->Text;
			 String^ password=addRec_password->Text;
			 String^ question=secQuestion->Text;
			 String^ ans=secAnsText->Text;
			 String^ level="1";
			 String^ state="1";

			 if(addRec_level->SelectedIndex==0){
				 level="1";
			 }
			 else if(addRec_level->SelectedIndex == 1){
				 level="0";
			 }

			 if(name != "" && username != "" && password != "" && question!="" && ans!=""){
				 String^ s = L"datasource=localhost;port=3306;username=root;password=hotel";
				 MySqlConnection^ con=gcnew MySqlConnection(s);
				 MySqlCommand^ cmd1=gcnew MySqlCommand("select * from hotel.users where username='"+username+"';",con);
				 MySqlCommand^ cmd2=gcnew MySqlCommand("insert into hotel.users (name,username,password,level,status,secquestion,answer) values('"+name+"','"+username+"','"+password+"','"+level+"','"+state+"','"+question+"','"+ans+"') ;",con);
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
					 showList();
					 con->Close();
					 this->Close();


				 }catch(Exception^ e){
					 MessageBox::Show(e->Message);
				 }
			 }
			 else{
				 MessageBox::Show("Please fill all the details.");
			 }

		 }

private: System::Void showList(){
			 String^ name_rec;
			 String^ username_rec;
			 String^ id_rec;
			 String^ status_rec;
			 String^ level_rec;

			 //Displaying current receptionists
			 listv->Items->Clear();
			 String^ s = L"datasource=localhost;port=3306;username=root;password=hotel";
			 MySqlConnection^ con=gcnew MySqlConnection(s);
			 MySqlCommand^ cmd=gcnew MySqlCommand("select * from hotel.users where 1",con);
			 MySqlDataReader^ read;
			 int count=0;
			 try{
				 con->Open();
				 read=cmd->ExecuteReader();
				 while (read->Read())
				 {
					 count++;
					 name_rec=read["name"]->ToString();
					 username_rec=read["username"]->ToString();
					 id_rec=read["idusers"]->ToString();
					 if(read["status"]->ToString()=="1"){
						 status_rec="Active";
					 }
					 else{
						 status_rec="Deactivated";
					 }
					 if(read["level"]->ToString()=="1"){
						 level_rec="Receptionist";
					 }
					 else{
						 level_rec="Super User";
					 }
					 ListViewItem^ item = gcnew ListViewItem(id_rec,count-1);
					 item->SubItems->Add(username_rec);
					 item->SubItems->Add(name_rec);
					 item->SubItems->Add(level_rec);
					 item->SubItems->Add(status_rec);
					 array<ListViewItem^>^temp = {item};
					 listv->Items->AddRange(temp);
				 }

			 }catch(Exception^ e){
				 MessageBox::Show(e->Message);
				 //
			 }
			 con->Close();
		 }
		 
};
}
