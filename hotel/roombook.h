#pragma once
#include "h_guest.h"

namespace hotel {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	/// <summary>
	/// Summary for roombook
	/// </summary>
	public ref class roombook : public System::Windows::Forms::Form
	{
	private: String^ EmpId;
	public:
		roombook(String^ empid)
		{
			InitializeComponent();
			//
			EmpId=empid;
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~roombook()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 




	private: System::Windows::Forms::ComboBox^  comboBoxclass;

	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  bookRooms;

	private: System::Windows::Forms::Button^  addToList;
	private: System::Windows::Forms::ListView^  availRooms;
	private: System::Windows::Forms::ListView^  bookedRooms;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	private: System::Windows::Forms::ColumnHeader^  columnHeader5;
	private: System::Windows::Forms::Button^  deleteToList;
	private: System::Windows::Forms::TextBox^  daysbox;
	private: System::Windows::Forms::Label^  label3;






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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(roombook::typeid));
			this->comboBoxclass = (gcnew System::Windows::Forms::ComboBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->daysbox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->bookRooms = (gcnew System::Windows::Forms::Button());
			this->addToList = (gcnew System::Windows::Forms::Button());
			this->availRooms = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->bookedRooms = (gcnew System::Windows::Forms::ListView());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->deleteToList = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// comboBoxclass
			// 
			this->comboBoxclass->FormattingEnabled = true;
			this->comboBoxclass->Items->AddRange(gcnew cli::array< System::Object^  >(5) {L"Class 1", L"Class 2", L"Class 3", L"Class 4", 
				L"Class 5"});
			this->comboBoxclass->Location = System::Drawing::Point(21, 28);
			this->comboBoxclass->Name = L"comboBoxclass";
			this->comboBoxclass->Size = System::Drawing::Size(132, 21);
			this->comboBoxclass->TabIndex = 5;
			this->comboBoxclass->Text = L"Select room class";
			this->comboBoxclass->SelectedIndexChanged += gcnew System::EventHandler(this, &roombook::comboBoxclass_SelectedIndexChanged);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(195, 28);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(181, 20);
			this->dateTimePicker1->TabIndex = 7;
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->CustomFormat = L"";
			this->dateTimePicker2->Location = System::Drawing::Point(409, 29);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(183, 20);
			this->dateTimePicker2->TabIndex = 8;
			this->dateTimePicker2->ValueChanged += gcnew System::EventHandler(this, &roombook::dateTimePicker2_ValueChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(192, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 16);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Date in";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(420, 10);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 16);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Date out";
			this->label2->Click += gcnew System::EventHandler(this, &roombook::label2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->daysbox);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->dateTimePicker2);
			this->groupBox1->Controls->Add(this->dateTimePicker1);
			this->groupBox1->Controls->Add(this->comboBoxclass);
			this->groupBox1->Location = System::Drawing::Point(13, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(649, 115);
			this->groupBox1->TabIndex = 11;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Select Room";
			// 
			// daysbox
			// 
			this->daysbox->Location = System::Drawing::Point(99, 70);
			this->daysbox->Name = L"daysbox";
			this->daysbox->Size = System::Drawing::Size(54, 20);
			this->daysbox->TabIndex = 12;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(18, 74);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 16);
			this->label3->TabIndex = 11;
			this->label3->Text = L"No of Days *";
			// 
			// bookRooms
			// 
			this->bookRooms->Location = System::Drawing::Point(469, 471);
			this->bookRooms->Name = L"bookRooms";
			this->bookRooms->Size = System::Drawing::Size(75, 39);
			this->bookRooms->TabIndex = 12;
			this->bookRooms->Text = L"Next";
			this->bookRooms->UseVisualStyleBackColor = true;
			this->bookRooms->Click += gcnew System::EventHandler(this, &roombook::bookRooms_Click);
			// 
			// addToList
			// 
			this->addToList->Location = System::Drawing::Point(256, 471);
			this->addToList->Name = L"addToList";
			this->addToList->Size = System::Drawing::Size(75, 39);
			this->addToList->TabIndex = 11;
			this->addToList->Text = L"Add Room";
			this->addToList->UseVisualStyleBackColor = true;
			this->addToList->Click += gcnew System::EventHandler(this, &roombook::addToList_Click);
			// 
			// availRooms
			// 
			this->availRooms->CheckBoxes = true;
			this->availRooms->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) {this->columnHeader1, this->columnHeader2});
			this->availRooms->FullRowSelect = true;
			this->availRooms->GridLines = true;
			this->availRooms->Location = System::Drawing::Point(13, 220);
			this->availRooms->Name = L"availRooms";
			this->availRooms->Size = System::Drawing::Size(318, 231);
			this->availRooms->TabIndex = 12;
			this->availRooms->UseCompatibleStateImageBehavior = false;
			this->availRooms->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Room Id";
			this->columnHeader1->Width = 152;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Room No";
			this->columnHeader2->Width = 158;
			// 
			// bookedRooms
			// 
			this->bookedRooms->CheckBoxes = true;
			this->bookedRooms->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {this->columnHeader3, 
				this->columnHeader4, this->columnHeader5});
			this->bookedRooms->FullRowSelect = true;
			this->bookedRooms->GridLines = true;
			this->bookedRooms->Location = System::Drawing::Point(349, 220);
			this->bookedRooms->Name = L"bookedRooms";
			this->bookedRooms->Size = System::Drawing::Size(313, 231);
			this->bookedRooms->TabIndex = 13;
			this->bookedRooms->UseCompatibleStateImageBehavior = false;
			this->bookedRooms->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Room ID";
			this->columnHeader3->Width = 113;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Room No";
			this->columnHeader4->Width = 92;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Class";
			this->columnHeader5->Width = 107;
			// 
			// deleteToList
			// 
			this->deleteToList->Location = System::Drawing::Point(349, 471);
			this->deleteToList->Name = L"deleteToList";
			this->deleteToList->Size = System::Drawing::Size(77, 39);
			this->deleteToList->TabIndex = 14;
			this->deleteToList->Text = L"Delete Room";
			this->deleteToList->UseVisualStyleBackColor = true;
			this->deleteToList->Click += gcnew System::EventHandler(this, &roombook::deleteToList_Click);
			// 
			// roombook
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(679, 637);
			this->Controls->Add(this->bookRooms);
			this->Controls->Add(this->deleteToList);
			this->Controls->Add(this->bookedRooms);
			this->Controls->Add(this->addToList);
			this->Controls->Add(this->availRooms);
			this->Controls->Add(this->groupBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"roombook";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Room Bookings";
			this->Load += gcnew System::EventHandler(this, &roombook::roombook_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void roombook_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		//	 ShellExecute(NULL, "open", "C:\\Program Files\\Adobe\\Acrobat 5.0\\Help\\ENU\\DocBox.pdf", NULL, NULL, SW_SHOW);
		 }
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void comboBoxclass_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 String^ selInd;
			 String^ query;
			 String^ roomId;
			 String^ roomNo;
			 if(comboBoxclass->SelectedIndex==0){
				 selInd="1";
			 }
			 else if(comboBoxclass->SelectedIndex==1){
				 selInd="2";
			 }
			 else if(comboBoxclass->SelectedIndex==2){
				 selInd="3";
			 }
			 else if(comboBoxclass->SelectedIndex==3){
				 selInd="4";
			 }
			 else if(comboBoxclass->SelectedIndex==4){
				 selInd="5";
			 }
			 availRooms->Items->Clear();
			 query="select * from hotel.rooms where class='"+selInd+"' and status = '1' ;";
			 String^ s = L"datasource=localhost;port=3306;username=root;password=hotel";
			 MySqlConnection^ con=gcnew MySqlConnection(s);
			 MySqlCommand^ cmd=gcnew MySqlCommand(query,con);
			 MySqlDataReader^ read;
			 int count=0;	
			 try{
				 
				 con->Open();
				 read=cmd->ExecuteReader();
				 while(read->Read()){
					 roomId=read["idrooms"]->ToString();
					 roomNo=read["roomno"]->ToString();
					 ListViewItem^ item=gcnew ListViewItem(roomId);
					 item->SubItems->Add(roomNo);
					 array<ListViewItem^>^temp = {item};
					 availRooms->Items->AddRange(temp);
				 }

			 }catch(Exception^ e){
				 MessageBox::Show(e->Message);
			 }

		 }
private: System::Void addToList_Click(System::Object^  sender, System::EventArgs^  e) {
			 ListView::CheckedListViewItemCollection^ myInd = availRooms->CheckedItems;
			 System::Collections::IEnumerator^ myEnum = myInd->GetEnumerator();
			 int count=0;
			 String^ idroom="";
			 String^ roomno="";
			 int size=0;
			 int flag=1;
			 while(myEnum->MoveNext())
			 {
				 ListViewItem^ item=safe_cast<ListViewItem^>(myEnum->Current);
				 idroom=item->Text;
				 roomno=item->Text;
				 for(size=0;size<bookedRooms->Items->Count;size++){
					 if(idroom==bookedRooms->Items[size]->Text){
						 flag=0;
						 break;
					 }
				 }
				 if(flag==0){
					 MessageBox::Show("Already there!");
				 }
				 else{
					 ListViewItem^ item1=gcnew ListViewItem(idroom);
					 item1->SubItems->Add(roomno);
					// item1->SubItems->Add("jaffa");
					 array<ListViewItem^>^temp = {item1};
					 bookedRooms->Items->AddRange(temp);
				 }

			 }
		 }
private: System::Void deleteToList_Click(System::Object^  sender, System::EventArgs^  e) {

			 ListView::CheckedListViewItemCollection^ myInd = bookedRooms->CheckedItems;
			 System::Collections::IEnumerator^ myEnum = myInd->GetEnumerator();
			 int count=0;
			 String^ idroom;
			 String^ roomno;
			 int size;
			 int flag=1;
			 while(myEnum->MoveNext())
			 {
				ListViewItem^ item=safe_cast<ListViewItem^>(myEnum->Current);
				bookedRooms->Items->Remove(item);
			 }

		 }
private: System::Void bookRooms_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(bookedRooms->Items->Count == 0){
				 MessageBox::Show("Select a room dude!");
				 return;
			 }
			 String^ datein = dateTimePicker1->Text;
			 String^ dateout= dateTimePicker2->Text;
			 String^ nod=daysbox->Text;

			 if(datein=="" || dateout=="" || nod==""){
				 MessageBox::Show("Please, fill all the details!");
				 return;
			 }
			 h_guest^ hg=gcnew h_guest(bookedRooms,datein,dateout,nod,EmpId);
			 hg->ShowDialog();
			 this->Close();
		 }

private: System::Void dateTimePicker2_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 
		 }
private: System::Void tourButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 //ShellExecute(NULL, _T("open"), _T("hotel.pdf"),NULL,NULL,SW_SHOW);
		 }
};
}

