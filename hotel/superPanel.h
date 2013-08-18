#pragma once
#include "h_guest.h"
#include "addRec.h"
#include "roombook.h"
#include "editRoom.h"
#include "checkOutForm.h"
#include "userClass.h"

namespace hotel {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for superPanel
	/// </summary>
	public ref class superPanel : public System::Windows::Forms::Form
	{
	private: String^ iduser;
	public:
		superPanel(String^ userid)
		{
			InitializeComponent();
			//
			iduser=userid;
			//loggedInId=iduser;
			showList();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~superPanel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  addRec_button;
	protected: 

	private: System::Windows::Forms::Button^  delRec;
	private: System::Windows::Forms::Button^  bookRoom;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ListView^  recInfo;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	private: System::Windows::Forms::ColumnHeader^  columnHeader5;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  controlBox;
	private: System::Windows::Forms::Button^  actRec;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  editUserClass;




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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(superPanel::typeid));
			this->addRec_button = (gcnew System::Windows::Forms::Button());
			this->delRec = (gcnew System::Windows::Forms::Button());
			this->bookRoom = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->recInfo = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->controlBox = (gcnew System::Windows::Forms::GroupBox());
			this->editUserClass = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->actRec = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->controlBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// addRec_button
			// 
			this->addRec_button->Location = System::Drawing::Point(22, 26);
			this->addRec_button->Name = L"addRec_button";
			this->addRec_button->Size = System::Drawing::Size(96, 49);
			this->addRec_button->TabIndex = 0;
			this->addRec_button->Text = L"Add Receptionists";
			this->addRec_button->UseVisualStyleBackColor = true;
			this->addRec_button->Click += gcnew System::EventHandler(this, &superPanel::addRec_button_Click);
			// 
			// delRec
			// 
			this->delRec->Location = System::Drawing::Point(140, 26);
			this->delRec->Name = L"delRec";
			this->delRec->Size = System::Drawing::Size(91, 49);
			this->delRec->TabIndex = 1;
			this->delRec->Text = L"Deactivate Receptionist";
			this->delRec->UseVisualStyleBackColor = true;
			this->delRec->Click += gcnew System::EventHandler(this, &superPanel::delRec_Click);
			// 
			// bookRoom
			// 
			this->bookRoom->Location = System::Drawing::Point(264, 26);
			this->bookRoom->Name = L"bookRoom";
			this->bookRoom->Size = System::Drawing::Size(87, 49);
			this->bookRoom->TabIndex = 2;
			this->bookRoom->Text = L"Book Rooms";
			this->bookRoom->UseVisualStyleBackColor = true;
			this->bookRoom->Click += gcnew System::EventHandler(this, &superPanel::bookRoom_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(387, 26);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(86, 49);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Check Out";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &superPanel::button1_Click);
			// 
			// recInfo
			// 
			this->recInfo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->recInfo->BackgroundImageTiled = true;
			this->recInfo->CheckBoxes = true;
			this->recInfo->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {this->columnHeader1, this->columnHeader2, 
				this->columnHeader3, this->columnHeader4, this->columnHeader5});
			this->recInfo->FullRowSelect = true;
			this->recInfo->GridLines = true;
			this->recInfo->Location = System::Drawing::Point(117, 223);
			this->recInfo->Name = L"recInfo";
			this->recInfo->Size = System::Drawing::Size(602, 238);
			this->recInfo->TabIndex = 4;
			this->recInfo->UseCompatibleStateImageBehavior = false;
			this->recInfo->View = System::Windows::Forms::View::Details;
			this->recInfo->SelectedIndexChanged += gcnew System::EventHandler(this, &superPanel::recInfo_SelectedIndexChanged);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Id";
			this->columnHeader1->Width = 66;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Username";
			this->columnHeader2->Width = 145;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Name";
			this->columnHeader3->Width = 108;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Level";
			this->columnHeader4->Width = 133;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Status";
			this->columnHeader5->Width = 149;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(328, 167);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 25);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Admins";
			// 
			// controlBox
			// 
			this->controlBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->controlBox->Controls->Add(this->editUserClass);
			this->controlBox->Controls->Add(this->button3);
			this->controlBox->Controls->Add(this->actRec);
			this->controlBox->Controls->Add(this->addRec_button);
			this->controlBox->Controls->Add(this->delRec);
			this->controlBox->Controls->Add(this->bookRoom);
			this->controlBox->Controls->Add(this->button1);
			this->controlBox->Location = System::Drawing::Point(12, 34);
			this->controlBox->Name = L"controlBox";
			this->controlBox->Size = System::Drawing::Size(789, 98);
			this->controlBox->TabIndex = 6;
			this->controlBox->TabStop = false;
			this->controlBox->Text = L"Controls";
			// 
			// editUserClass
			// 
			this->editUserClass->Location = System::Drawing::Point(699, 26);
			this->editUserClass->Name = L"editUserClass";
			this->editUserClass->Size = System::Drawing::Size(75, 49);
			this->editUserClass->TabIndex = 6;
			this->editUserClass->Text = L"Edit User Class";
			this->editUserClass->UseVisualStyleBackColor = true;
			this->editUserClass->Click += gcnew System::EventHandler(this, &superPanel::editUserClass_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(604, 26);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(80, 49);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Edit Rooms";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &superPanel::button3_Click);
			// 
			// actRec
			// 
			this->actRec->Location = System::Drawing::Point(496, 26);
			this->actRec->Name = L"actRec";
			this->actRec->Size = System::Drawing::Size(91, 49);
			this->actRec->TabIndex = 4;
			this->actRec->Text = L"Activate Receptionist";
			this->actRec->UseVisualStyleBackColor = true;
			this->actRec->Click += gcnew System::EventHandler(this, &superPanel::actRec_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(102, 529);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(107, 37);
			this->button2->TabIndex = 7;
			this->button2->Text = L"LOGOUT";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &superPanel::button2_Click);
			// 
			// superPanel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(813, 603);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->controlBox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->recInfo);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"superPanel";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Admin Panel";
			this->Load += gcnew System::EventHandler(this, &superPanel::superPanel_Load);
			this->controlBox->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				checkOutForm^ cf=gcnew checkOutForm();
				cf->ShowDialog();


			 }
private: System::Void superPanel_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void addRec_button_Click(System::Object^  sender, System::EventArgs^  e) {
			 addRec^ ar=gcnew addRec(recInfo);
			 ar->ShowDialog();

		 }
private: System::Void delRec_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 ListView::CheckedListViewItemCollection^ myInd = recInfo->CheckedItems;
			 System::Collections::IEnumerator^ myEnum = myInd->GetEnumerator();
			 String^ idusers;
			 String^ level;
			 String^ state;
			 String^ name;
			 String^ h = L"datasource=localhost;port=3306;username=root;password=hotel";
			 int count=0;
			 MySqlConnection^ con1=gcnew MySqlConnection(h);
			 while (myEnum->MoveNext())
			 {
				 count++;
				 ListViewItem^ item = safe_cast<ListViewItem^>(myEnum->Current);
				 idusers=item->Text;
				 level=item->SubItems[3]->Text;
				 state=item->SubItems[4]->Text;
				 name=item->SubItems[2]->Text;
				 if(level=="Super User"){
					 MessageBox::Show("The selected user is a super user. You do not have the permissions to delete him.");
				 }
				 else{
					 if(state=="Deactivated"){
						 MessageBox::Show("The user "+name+" is already deactivated");
					 }
						 else{
						 MySqlCommand^ cmd1=gcnew MySqlCommand("update hotel.users set status='0' where idusers='"+idusers+"';",con1);
						 try{
							 con1->Open();
							 cmd1->ExecuteReader();
							 con1->Close();
						 }catch(Exception^ e){
							 MessageBox::Show(e->Message);
						}
					 }
				 }

			 }	
			 if(count==0){
				 MessageBox::Show("No admins selected!");
				 return;
			 }
			 showList();
		 }
private: System::Void recInfo_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			

		 }

private: System::Void showList(){

			 String^ name_rec;
			 String^ username_rec;
			 String^ id_rec;
			 String^ status_rec;
			 String^ level_rec;

			 //Displaying current receptionists
			 this->recInfo->Items->Clear();
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
					 recInfo->Items->AddRange(temp);
				 }

			 }catch(Exception^ e){
				 MessageBox::Show(e->Message);
				 //
			 }
			 con->Close();
		 }
private: System::Void actRec_Click(System::Object^  sender, System::EventArgs^  e) {
			 ListView::CheckedListViewItemCollection^ myInd = recInfo->CheckedItems;
			 System::Collections::IEnumerator^ myEnum = myInd->GetEnumerator();
			 String^ h = L"datasource=localhost;port=3306;username=root;password=hotel";
			 MySqlConnection^ con1=gcnew MySqlConnection(h);
			 String^ idusers;
			 String^ query;
			 String^ level;
			 String^ state;
			 String^ name;
			 int count=0;
			 while (myEnum->MoveNext())
			 {
				 count++;
				 ListViewItem^ item = safe_cast<ListViewItem^>(myEnum->Current);
				 idusers=item->Text;
				 level=item->SubItems[3]->Text;
				 state=item->SubItems[4]->Text;
				 name=item->SubItems[2]->Text;
				 if(level=="Super User"){
					 MessageBox::Show("The user "+name+" is a super user. You do not have the necessary permissions to edit his/her status");
				 }
				 else{
					 if(state=="Active"){
						MessageBox::Show("The user "+name+" is already active");
					 }
					 else{
						 query="update hotel.users set status='1' where idusers='"+idusers+"';";
						 MySqlCommand^ cmd1=gcnew MySqlCommand(query,con1);
						 try{
							 con1->Open();
							 cmd1->ExecuteReader();
							 con1->Close();
						 }catch(Exception^ e){
							 MessageBox::Show(e->Message);
						}
					}
				 }
				if(count==0){
					MessageBox::Show("No admins selected!");
				}
			 showList();
			 
		 }
		 }
private: System::Void bookRoom_Click(System::Object^  sender, System::EventArgs^  e) {

			 roombook^ arr =gcnew roombook(iduser);
			 arr->ShowDialog();
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			editRoom^ er=gcnew editRoom();
			er->ShowDialog();
		 }
private: System::Void editUserClass_Click(System::Object^  sender, System::EventArgs^  e) {
			 userClass^ uc=gcnew userClass();
			 uc->ShowDialog();
		 }
};
}
