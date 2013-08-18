#pragma once
#include <conio.h>
#include <ctype.h>
namespace hotel {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for editRoom
	/// </summary>
	public ref class editRoom : public System::Windows::Forms::Form
	{
	private: bool nonNumberEntered; 
	public:
		editRoom(void)
		{
			InitializeComponent();
			//
			showClassInfo();
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~editRoom()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^  classInfo;

	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::Button^  editClassInfo;
	private: System::Windows::Forms::GroupBox^  editClassInfoBox;
	private: System::Windows::Forms::Label^  typeClassLabel;
	private: System::Windows::Forms::TextBox^  desClassText;


	private: System::Windows::Forms::TextBox^  costClassText;

	private: System::Windows::Forms::TextBox^  typeClassText;

	private: System::Windows::Forms::Label^  desClassLabel;

	private: System::Windows::Forms::Label^  costClassLabel;


	private: System::Windows::Forms::Button^  saveClassInfo;
	private: System::Windows::Forms::Button^  cancelEditing;
	private: System::Windows::Forms::Button^  addNewClass;
	private: System::Windows::Forms::GroupBox^  addNewClassBox;
	private: System::Windows::Forms::TextBox^  typeNewClassText;


	private: System::Windows::Forms::TextBox^  desNewClassText;
	private: System::Windows::Forms::TextBox^  costNewClassText;
	private: System::Windows::Forms::Label^  desNewClassLabel;

	private: System::Windows::Forms::Label^  costNewClassLabel;

	private: System::Windows::Forms::Label^  typeNewClassLabel;
	private: System::Windows::Forms::Button^  cancelNewClassButton;

	private: System::Windows::Forms::Button^  addNewClassButton;












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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(editRoom::typeid));
			this->classInfo = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->editClassInfo = (gcnew System::Windows::Forms::Button());
			this->editClassInfoBox = (gcnew System::Windows::Forms::GroupBox());
			this->cancelEditing = (gcnew System::Windows::Forms::Button());
			this->saveClassInfo = (gcnew System::Windows::Forms::Button());
			this->desClassLabel = (gcnew System::Windows::Forms::Label());
			this->costClassLabel = (gcnew System::Windows::Forms::Label());
			this->desClassText = (gcnew System::Windows::Forms::TextBox());
			this->costClassText = (gcnew System::Windows::Forms::TextBox());
			this->typeClassText = (gcnew System::Windows::Forms::TextBox());
			this->typeClassLabel = (gcnew System::Windows::Forms::Label());
			this->addNewClassBox = (gcnew System::Windows::Forms::GroupBox());
			this->cancelNewClassButton = (gcnew System::Windows::Forms::Button());
			this->addNewClassButton = (gcnew System::Windows::Forms::Button());
			this->desNewClassLabel = (gcnew System::Windows::Forms::Label());
			this->costNewClassLabel = (gcnew System::Windows::Forms::Label());
			this->typeNewClassLabel = (gcnew System::Windows::Forms::Label());
			this->desNewClassText = (gcnew System::Windows::Forms::TextBox());
			this->costNewClassText = (gcnew System::Windows::Forms::TextBox());
			this->typeNewClassText = (gcnew System::Windows::Forms::TextBox());
			this->addNewClass = (gcnew System::Windows::Forms::Button());
			this->editClassInfoBox->SuspendLayout();
			this->addNewClassBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// classInfo
			// 
			this->classInfo->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {this->columnHeader1, this->columnHeader2, 
				this->columnHeader3});
			this->classInfo->FullRowSelect = true;
			this->classInfo->GridLines = true;
			this->classInfo->Location = System::Drawing::Point(59, 12);
			this->classInfo->Name = L"classInfo";
			this->classInfo->Size = System::Drawing::Size(544, 278);
			this->classInfo->TabIndex = 0;
			this->classInfo->UseCompatibleStateImageBehavior = false;
			this->classInfo->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Class";
			this->columnHeader1->Width = 94;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Cost";
			this->columnHeader2->Width = 80;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Description";
			this->columnHeader3->Width = 371;
			// 
			// editClassInfo
			// 
			this->editClassInfo->Location = System::Drawing::Point(59, 302);
			this->editClassInfo->Name = L"editClassInfo";
			this->editClassInfo->Size = System::Drawing::Size(85, 45);
			this->editClassInfo->TabIndex = 1;
			this->editClassInfo->Text = L"Edit Class Info";
			this->editClassInfo->UseVisualStyleBackColor = true;
			this->editClassInfo->Click += gcnew System::EventHandler(this, &editRoom::editClassInfo_Click);
			// 
			// editClassInfoBox
			// 
			this->editClassInfoBox->BackColor = System::Drawing::Color::Transparent;
			this->editClassInfoBox->Controls->Add(this->cancelEditing);
			this->editClassInfoBox->Controls->Add(this->saveClassInfo);
			this->editClassInfoBox->Controls->Add(this->desClassLabel);
			this->editClassInfoBox->Controls->Add(this->costClassLabel);
			this->editClassInfoBox->Controls->Add(this->desClassText);
			this->editClassInfoBox->Controls->Add(this->costClassText);
			this->editClassInfoBox->Controls->Add(this->typeClassText);
			this->editClassInfoBox->Controls->Add(this->typeClassLabel);
			this->editClassInfoBox->Location = System::Drawing::Point(59, 353);
			this->editClassInfoBox->Name = L"editClassInfoBox";
			this->editClassInfoBox->Size = System::Drawing::Size(241, 188);
			this->editClassInfoBox->TabIndex = 2;
			this->editClassInfoBox->TabStop = false;
			this->editClassInfoBox->Text = L"Class Info";
			// 
			// cancelEditing
			// 
			this->cancelEditing->Location = System::Drawing::Point(126, 141);
			this->cancelEditing->Name = L"cancelEditing";
			this->cancelEditing->Size = System::Drawing::Size(75, 23);
			this->cancelEditing->TabIndex = 7;
			this->cancelEditing->Text = L"Cancel";
			this->cancelEditing->UseVisualStyleBackColor = true;
			this->cancelEditing->Click += gcnew System::EventHandler(this, &editRoom::cancelEditing_Click);
			// 
			// saveClassInfo
			// 
			this->saveClassInfo->Location = System::Drawing::Point(30, 141);
			this->saveClassInfo->Name = L"saveClassInfo";
			this->saveClassInfo->Size = System::Drawing::Size(75, 23);
			this->saveClassInfo->TabIndex = 6;
			this->saveClassInfo->Text = L"Save";
			this->saveClassInfo->UseVisualStyleBackColor = true;
			this->saveClassInfo->Click += gcnew System::EventHandler(this, &editRoom::saveClassInfo_Click);
			// 
			// desClassLabel
			// 
			this->desClassLabel->AutoSize = true;
			this->desClassLabel->Location = System::Drawing::Point(45, 92);
			this->desClassLabel->Name = L"desClassLabel";
			this->desClassLabel->Size = System::Drawing::Size(60, 13);
			this->desClassLabel->TabIndex = 5;
			this->desClassLabel->Text = L"Description";
			// 
			// costClassLabel
			// 
			this->costClassLabel->AutoSize = true;
			this->costClassLabel->Location = System::Drawing::Point(45, 66);
			this->costClassLabel->Name = L"costClassLabel";
			this->costClassLabel->Size = System::Drawing::Size(28, 13);
			this->costClassLabel->TabIndex = 4;
			this->costClassLabel->Text = L"Cost";
			// 
			// desClassText
			// 
			this->desClassText->Location = System::Drawing::Point(111, 92);
			this->desClassText->Multiline = true;
			this->desClassText->Name = L"desClassText";
			this->desClassText->Size = System::Drawing::Size(100, 20);
			this->desClassText->TabIndex = 3;
			// 
			// costClassText
			// 
			this->costClassText->Location = System::Drawing::Point(111, 66);
			this->costClassText->Name = L"costClassText";
			this->costClassText->Size = System::Drawing::Size(100, 20);
			this->costClassText->TabIndex = 2;
			this->costClassText->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &editRoom::costClassText_KeyPress);
			// 
			// typeClassText
			// 
			this->typeClassText->Location = System::Drawing::Point(111, 40);
			this->typeClassText->Name = L"typeClassText";
			this->typeClassText->ReadOnly = true;
			this->typeClassText->Size = System::Drawing::Size(100, 20);
			this->typeClassText->TabIndex = 1;
			// 
			// typeClassLabel
			// 
			this->typeClassLabel->AutoSize = true;
			this->typeClassLabel->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->typeClassLabel->Location = System::Drawing::Point(45, 40);
			this->typeClassLabel->Name = L"typeClassLabel";
			this->typeClassLabel->Size = System::Drawing::Size(31, 13);
			this->typeClassLabel->TabIndex = 0;
			this->typeClassLabel->Text = L"Type";
			// 
			// addNewClassBox
			// 
			this->addNewClassBox->BackColor = System::Drawing::Color::Transparent;
			this->addNewClassBox->Controls->Add(this->cancelNewClassButton);
			this->addNewClassBox->Controls->Add(this->addNewClassButton);
			this->addNewClassBox->Controls->Add(this->desNewClassLabel);
			this->addNewClassBox->Controls->Add(this->costNewClassLabel);
			this->addNewClassBox->Controls->Add(this->typeNewClassLabel);
			this->addNewClassBox->Controls->Add(this->desNewClassText);
			this->addNewClassBox->Controls->Add(this->costNewClassText);
			this->addNewClassBox->Controls->Add(this->typeNewClassText);
			this->addNewClassBox->Location = System::Drawing::Point(362, 353);
			this->addNewClassBox->Name = L"addNewClassBox";
			this->addNewClassBox->Size = System::Drawing::Size(241, 188);
			this->addNewClassBox->TabIndex = 8;
			this->addNewClassBox->TabStop = false;
			this->addNewClassBox->Text = L"New Class Info";
			// 
			// cancelNewClassButton
			// 
			this->cancelNewClassButton->Location = System::Drawing::Point(126, 141);
			this->cancelNewClassButton->Name = L"cancelNewClassButton";
			this->cancelNewClassButton->Size = System::Drawing::Size(75, 23);
			this->cancelNewClassButton->TabIndex = 7;
			this->cancelNewClassButton->Text = L"Cancel";
			this->cancelNewClassButton->UseVisualStyleBackColor = true;
			this->cancelNewClassButton->Click += gcnew System::EventHandler(this, &editRoom::cancelNewClassButton_Click);
			// 
			// addNewClassButton
			// 
			this->addNewClassButton->Location = System::Drawing::Point(30, 141);
			this->addNewClassButton->Name = L"addNewClassButton";
			this->addNewClassButton->Size = System::Drawing::Size(75, 23);
			this->addNewClassButton->TabIndex = 6;
			this->addNewClassButton->Text = L"Add ";
			this->addNewClassButton->UseVisualStyleBackColor = true;
			this->addNewClassButton->Click += gcnew System::EventHandler(this, &editRoom::addNewClassButton_Click);
			// 
			// desNewClassLabel
			// 
			this->desNewClassLabel->AutoSize = true;
			this->desNewClassLabel->Location = System::Drawing::Point(27, 91);
			this->desNewClassLabel->Name = L"desNewClassLabel";
			this->desNewClassLabel->Size = System::Drawing::Size(60, 13);
			this->desNewClassLabel->TabIndex = 5;
			this->desNewClassLabel->Text = L"Description";
			// 
			// costNewClassLabel
			// 
			this->costNewClassLabel->AutoSize = true;
			this->costNewClassLabel->Location = System::Drawing::Point(27, 63);
			this->costNewClassLabel->Name = L"costNewClassLabel";
			this->costNewClassLabel->Size = System::Drawing::Size(28, 13);
			this->costNewClassLabel->TabIndex = 4;
			this->costNewClassLabel->Text = L"Cost";
			// 
			// typeNewClassLabel
			// 
			this->typeNewClassLabel->AutoSize = true;
			this->typeNewClassLabel->Location = System::Drawing::Point(27, 40);
			this->typeNewClassLabel->Name = L"typeNewClassLabel";
			this->typeNewClassLabel->Size = System::Drawing::Size(31, 13);
			this->typeNewClassLabel->TabIndex = 3;
			this->typeNewClassLabel->Text = L"Type";
			this->typeNewClassLabel->Click += gcnew System::EventHandler(this, &editRoom::typeNewClassLabel_Click);
			// 
			// desNewClassText
			// 
			this->desNewClassText->Location = System::Drawing::Point(111, 86);
			this->desNewClassText->Multiline = true;
			this->desNewClassText->Name = L"desNewClassText";
			this->desNewClassText->Size = System::Drawing::Size(100, 20);
			this->desNewClassText->TabIndex = 2;
			// 
			// costNewClassText
			// 
			this->costNewClassText->Location = System::Drawing::Point(111, 60);
			this->costNewClassText->Name = L"costNewClassText";
			this->costNewClassText->Size = System::Drawing::Size(100, 20);
			this->costNewClassText->TabIndex = 1;
			this->costNewClassText->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &editRoom::costNewClassText_KeyDown);
			this->costNewClassText->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &editRoom::costNewClassText_KeyPress);
			// 
			// typeNewClassText
			// 
			this->typeNewClassText->Location = System::Drawing::Point(111, 37);
			this->typeNewClassText->Name = L"typeNewClassText";
			this->typeNewClassText->ReadOnly = true;
			this->typeNewClassText->Size = System::Drawing::Size(100, 20);
			this->typeNewClassText->TabIndex = 0;
			this->typeNewClassText->TextChanged += gcnew System::EventHandler(this, &editRoom::textBox1_TextChanged);
			// 
			// addNewClass
			// 
			this->addNewClass->Location = System::Drawing::Point(362, 302);
			this->addNewClass->Name = L"addNewClass";
			this->addNewClass->Size = System::Drawing::Size(90, 45);
			this->addNewClass->TabIndex = 3;
			this->addNewClass->Text = L"Add New Class";
			this->addNewClass->UseVisualStyleBackColor = true;
			this->addNewClass->Click += gcnew System::EventHandler(this, &editRoom::addNewClass_Click);
			// 
			// editRoom
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(656, 590);
			this->Controls->Add(this->addNewClassBox);
			this->Controls->Add(this->addNewClass);
			this->Controls->Add(this->editClassInfoBox);
			this->Controls->Add(this->editClassInfo);
			this->Controls->Add(this->classInfo);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"editRoom";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Edit Rooms";
			this->Load += gcnew System::EventHandler(this, &editRoom::editRoom_Load);
			this->editClassInfoBox->ResumeLayout(false);
			this->editClassInfoBox->PerformLayout();
			this->addNewClassBox->ResumeLayout(false);
			this->addNewClassBox->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void editRoom_Load(System::Object^  sender, System::EventArgs^  e) {
		 }

private: System::Void showClassInfo(){
			 String^ h = L"datasource=localhost;port=3306;username=root;password=hotel";
			 String^ query="select * from hotel.classinfo where 1";
			 MySqlConnection^ con=gcnew MySqlConnection(h);
			 MySqlCommand^ cmd=gcnew MySqlCommand(query,con);
			 MySqlDataReader^ read;
			 String^ type;
			 String^ cost;
			 String^ description;
			 classInfo->Items->Clear();
			 try{
				 con->Open();
				 read=cmd->ExecuteReader();
				 while (read->Read())
				 {
					 
					 type=read["type"]->ToString();
					 cost=read["cost"]->ToString();
					 description=read["description"]->ToString();
					 ListViewItem^ item=gcnew ListViewItem(type);
					 item->SubItems->Add(cost);
					 item->SubItems->Add(description);
					 array<ListViewItem^>^temp = {item};
					 classInfo->Items->AddRange(temp);
				 }
			 }catch(Exception^ e){
				 MessageBox::Show(e->Message);
			 }

		 }
private: System::Void editClassInfo_Click(System::Object^  sender, System::EventArgs^  e) {

			 ListView::SelectedListViewItemCollection^ myItems=classInfo->SelectedItems;
			 System::Collections::IEnumerator^ myEnum = myItems->GetEnumerator();
			 int count=0;
			 String^ type;
			 String^ cost;
			 String^ description;
			 while(myEnum->MoveNext())
			 {
				 count++;
				 ListViewItem^ item = safe_cast<ListViewItem^>(myEnum->Current);
				 type=item->Text;
				 cost=item->SubItems[1]->Text;
				 description=item->SubItems[2]->Text;
			 }
			 if(count==0){
				 MessageBox::Show("Please select a class from the list");
				 return;
			 }
			 typeClassText->Text=type;
			 costClassText->Text=cost;
			 desClassText->Text=description;
			 editClassInfoBox->Visible=true;
		 }
private: System::Void cancelEditing_Click(System::Object^  sender, System::EventArgs^  e) {
			 clearBox();
		 }
private: System::Void saveClassInfo_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ type=typeClassText->Text;
			 String^ cost=costClassText->Text;
			 String^ description=desClassText->Text;
			 if(cost=="" && description==""){
					MessageBox::Show("Please input valid cost and description!");
					return;
			 }
			 String^ h = L"datasource=localhost;port=3306;username=root;password=hotel";
			 MySqlConnection^ con=gcnew MySqlConnection(h);
			 String^ query="update hotel.classinfo set cost='"+cost+"',description='"+description+"' where type='"+type+"';";
			 MySqlCommand^ cmd=gcnew MySqlCommand(query,con);
			 try{
				 con->Open();
				 cmd->ExecuteReader();
				 showClassInfo();
				 clearBox();

			 }catch(Exception^ e){
				 MessageBox::Show(e->Message);
			 }

		 }
private: System::Void clearBox(){
			 typeClassText->Text="";
			 costClassText->Text="";
			 desClassText->Text="";
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void typeNewClassLabel_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void addNewClass_Click(System::Object^  sender, System::EventArgs^  e) {
			 typeNewClassText->Text=(classInfo->Items->Count+1).ToString();
		 }
private: System::Void addNewClassButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 if(typeNewClassText->Text!="" && costNewClassText->Text!="" && desNewClassText->Text!="" )
			 {
				 String^ h = L"datasource=localhost;port=3306;username=root;password=hotel";
				 MySqlConnection^ con=gcnew MySqlConnection(h);
				
			   	String^ query="insert into hotel.classinfo (type,cost,description) values('"+typeNewClassText->Text+"','"+costNewClassText->Text+"','"+desNewClassText->Text+"') ;";
				MySqlCommand^ cmd=gcnew MySqlCommand(query,con);
				try{
					con->Open();
					cmd->ExecuteReader();
					showClassInfo();

					typeNewClassText->Text=(classInfo->Items->Count+1).ToString();
					costNewClassText->Text="";
					desNewClassText->Text="";
				} 
				catch(Exception^ e){

					MessageBox::Show(e->Message);
				}
				
			 
			 }
			 else
			 {
				 MessageBox::Show("Please fill all fields");
			 }
		 }
private: System::Void cancelNewClassButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 typeNewClassText->Text="";
			 costNewClassText->Text="";
			 desNewClassText->Text="";
		 }
private: System::Void costNewClassText_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {

		 }
private: System::Void costNewClassText_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 // Check for the flag being set in the KeyDown event.
			 if (nonNumberEntered == true)
			 {
				 // Stop the character from being entered into the control since it is non-numerical.
				 e->Handled = false;
			 }
		 }
private: System::Void costClassText_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 if (isdigit(e->KeyChar) || iscntrl(e->KeyChar)) {
				 e->Handled = false;
			 }
			 else {
				 e->Handled = true;
			 }
		 }
private: System::Void costNewClassText_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 // Initialize the flag to false.
			 nonNumberEntered = false;

			 // Determine whether the keystroke is a number from the top of the keyboard.
			 if (e->KeyCode < Keys::D0 || e->KeyCode > Keys::D9)
			 {
				 // Determine whether the keystroke is a number from the keypad.
				 if (e->KeyCode < Keys::NumPad0 || e->KeyCode > Keys::NumPad9)
				 {
					 // Determine whether the keystroke is a backspace.
					 if(e->KeyCode != Keys::Back)
					 {
						 // A non-numerical keystroke was pressed.
						 // Set the flag to true and evaluate in KeyPress event.
						 nonNumberEntered = true;
					 }
				 }
			 }
		 }
};
}
