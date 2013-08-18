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
	/// Summary for userClass
	/// </summary>
	public ref class userClass : public System::Windows::Forms::Form
	{
	public:
		userClass(void)
		{
			InitializeComponent();
			//
			showList();
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~userClass()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^  userClassList;
	protected: 

	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::GroupBox^  editClassBox;
	private: System::Windows::Forms::TextBox^  disClassText;

	private: System::Windows::Forms::TextBox^  amountClassText;

	private: System::Windows::Forms::TextBox^  classUserText;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  cancelSaveButton;


	private: System::Windows::Forms::Button^  saveUserClassButton;
	private: System::Windows::Forms::Button^  editClassUserButton;
	private: System::Windows::Forms::GroupBox^  addclass;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button2;
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
			this->userClassList = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->editClassBox = (gcnew System::Windows::Forms::GroupBox());
			this->saveUserClassButton = (gcnew System::Windows::Forms::Button());
			this->cancelSaveButton = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->disClassText = (gcnew System::Windows::Forms::TextBox());
			this->amountClassText = (gcnew System::Windows::Forms::TextBox());
			this->classUserText = (gcnew System::Windows::Forms::TextBox());
			this->editClassUserButton = (gcnew System::Windows::Forms::Button());
			this->addclass = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->editClassBox->SuspendLayout();
			this->addclass->SuspendLayout();
			this->SuspendLayout();
			// 
			// userClassList
			// 
			this->userClassList->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {this->columnHeader1, 
				this->columnHeader2, this->columnHeader3});
			this->userClassList->FullRowSelect = true;
			this->userClassList->GridLines = true;
			this->userClassList->Location = System::Drawing::Point(12, 12);
			this->userClassList->Name = L"userClassList";
			this->userClassList->Size = System::Drawing::Size(289, 213);
			this->userClassList->TabIndex = 0;
			this->userClassList->UseCompatibleStateImageBehavior = false;
			this->userClassList->View = System::Windows::Forms::View::Details;
			this->userClassList->SelectedIndexChanged += gcnew System::EventHandler(this, &userClass::listView1_SelectedIndexChanged);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Class";
			this->columnHeader1->Width = 73;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Base Amount";
			this->columnHeader2->Width = 103;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Discount";
			this->columnHeader3->Width = 113;
			// 
			// editClassBox
			// 
			this->editClassBox->Controls->Add(this->saveUserClassButton);
			this->editClassBox->Controls->Add(this->cancelSaveButton);
			this->editClassBox->Controls->Add(this->label3);
			this->editClassBox->Controls->Add(this->label2);
			this->editClassBox->Controls->Add(this->label1);
			this->editClassBox->Controls->Add(this->disClassText);
			this->editClassBox->Controls->Add(this->amountClassText);
			this->editClassBox->Controls->Add(this->classUserText);
			this->editClassBox->Location = System::Drawing::Point(328, 12);
			this->editClassBox->Name = L"editClassBox";
			this->editClassBox->Size = System::Drawing::Size(215, 213);
			this->editClassBox->TabIndex = 1;
			this->editClassBox->TabStop = false;
			this->editClassBox->Text = L"User Class";
			// 
			// saveUserClassButton
			// 
			this->saveUserClassButton->Location = System::Drawing::Point(44, 140);
			this->saveUserClassButton->Name = L"saveUserClassButton";
			this->saveUserClassButton->Size = System::Drawing::Size(75, 23);
			this->saveUserClassButton->TabIndex = 7;
			this->saveUserClassButton->Text = L"Save";
			this->saveUserClassButton->UseVisualStyleBackColor = true;
			this->saveUserClassButton->Click += gcnew System::EventHandler(this, &userClass::saveUserClassButton_Click);
			// 
			// cancelSaveButton
			// 
			this->cancelSaveButton->Location = System::Drawing::Point(128, 140);
			this->cancelSaveButton->Name = L"cancelSaveButton";
			this->cancelSaveButton->Size = System::Drawing::Size(75, 23);
			this->cancelSaveButton->TabIndex = 6;
			this->cancelSaveButton->Text = L"Cancel";
			this->cancelSaveButton->UseVisualStyleBackColor = true;
			this->cancelSaveButton->Click += gcnew System::EventHandler(this, &userClass::cancelSaveButton_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(41, 91);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(49, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Discount";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(38, 65);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Amount";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(38, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(32, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Class";
			// 
			// disClassText
			// 
			this->disClassText->Location = System::Drawing::Point(103, 91);
			this->disClassText->Name = L"disClassText";
			this->disClassText->Size = System::Drawing::Size(100, 20);
			this->disClassText->TabIndex = 2;
			// 
			// amountClassText
			// 
			this->amountClassText->Location = System::Drawing::Point(103, 65);
			this->amountClassText->Name = L"amountClassText";
			this->amountClassText->Size = System::Drawing::Size(100, 20);
			this->amountClassText->TabIndex = 1;
			// 
			// classUserText
			// 
			this->classUserText->Location = System::Drawing::Point(103, 39);
			this->classUserText->Name = L"classUserText";
			this->classUserText->ReadOnly = true;
			this->classUserText->Size = System::Drawing::Size(100, 20);
			this->classUserText->TabIndex = 0;
			this->classUserText->TextChanged += gcnew System::EventHandler(this, &userClass::classUserText_TextChanged);
			// 
			// editClassUserButton
			// 
			this->editClassUserButton->Location = System::Drawing::Point(328, 240);
			this->editClassUserButton->Name = L"editClassUserButton";
			this->editClassUserButton->Size = System::Drawing::Size(84, 33);
			this->editClassUserButton->TabIndex = 2;
			this->editClassUserButton->Text = L"Edit ";
			this->editClassUserButton->UseVisualStyleBackColor = true;
			this->editClassUserButton->Click += gcnew System::EventHandler(this, &userClass::editClassUserButton_Click);
			// 
			// addclass
			// 
			this->addclass->Controls->Add(this->button2);
			this->addclass->Controls->Add(this->button1);
			this->addclass->Controls->Add(this->label6);
			this->addclass->Controls->Add(this->label5);
			this->addclass->Controls->Add(this->label4);
			this->addclass->Controls->Add(this->textBox3);
			this->addclass->Controls->Add(this->textBox2);
			this->addclass->Controls->Add(this->textBox1);
			this->addclass->Location = System::Drawing::Point(28, 261);
			this->addclass->Name = L"addclass";
			this->addclass->Size = System::Drawing::Size(259, 216);
			this->addclass->TabIndex = 3;
			this->addclass->TabStop = false;
			this->addclass->Text = L"Add Class";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(135, 174);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &userClass::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(25, 174);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &userClass::button1_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(22, 139);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(49, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Discount";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(22, 95);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(43, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Amount";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(22, 53);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(32, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Class";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(88, 139);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(88, 95);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 1;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(88, 53);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 0;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(328, 293);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 41);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Add New Class";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &userClass::button3_Click);
			// 
			// userClass
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(555, 489);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->addclass);
			this->Controls->Add(this->editClassUserButton);
			this->Controls->Add(this->editClassBox);
			this->Controls->Add(this->userClassList);
			this->Name = L"userClass";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"User Class";
			this->editClassBox->ResumeLayout(false);
			this->editClassBox->PerformLayout();
			this->addclass->ResumeLayout(false);
			this->addclass->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void classUserText_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void showList(){
				 String^ s = L"datasource=localhost;port=3306;username=root;password=hotel";
				 MySqlConnection^ con=gcnew MySqlConnection(s);
				 String^ query="select * from hotel.discount where 1;";
				 MySqlCommand^ cmd=gcnew MySqlCommand(query,con);
				 MySqlDataReader^ read;
				 String^ classuser;
				 String^ amount;
				 String^ discount;
				 userClassList->Items->Clear();
				 try{
					 con->Open();
					 read=cmd->ExecuteReader();
					 while(read->Read()){
						 classuser=read["class"]->ToString();
						 amount=read["classamount"]->ToString();
						 discount=read["discount"]->ToString();
						 ListViewItem^ item=gcnew ListViewItem(classuser);
						 item->SubItems->Add(amount);
						 item->SubItems->Add(discount);
						 array<ListViewItem^>^temp = {item};
						 userClassList->Items->AddRange(temp);
					 }
				 }catch(Exception^ e){
					MessageBox::Show(e->Message);			
				 }
			 }
private: System::Void editClassUserButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 ListView::SelectedListViewItemCollection^ myItems=userClassList->SelectedItems;
			 System::Collections::IEnumerator^ myEnum = myItems->GetEnumerator();
			 int count=0;
			 String^ classuser;
			 String^ amount;
			 String^ discount;
			 while(myEnum->MoveNext()){
				 count++;
				 ListViewItem^ item = safe_cast<ListViewItem^>(myEnum->Current);
				 classuser=item->Text;
				 amount=item->SubItems[1]->Text;
				 discount=item->SubItems[2]->Text;

			 }
			 classUserText->Text=classuser;
			 amountClassText->Text=amount;
			 disClassText->Text=discount;
		 }
private: System::Void clearEditBox(){
			 classUserText->Text="";
			 amountClassText->Text="";
			 disClassText->Text="";
		 }
private: System::Void cancelSaveButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 clearEditBox();
		 }
private: System::Void saveUserClassButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ classusers=classUserText->Text;
			 String^ amount=amountClassText->Text;
			 String^ discount=disClassText->Text;
			 int intamount;
			 int intdiscount;
			 int count=0;
			 String^ tempamount;
			 String^ tempdiscount;
			 String^ tempclass;
			 int flag=0;
			 int tempintamount;
			 int tempintdiscount;

			 if(classusers=="" || amount=="" || discount==""){
				 MessageBox::Show("Please fill all the fields!");
				 return;
			 }

			 intamount=int::Parse(amount);
			 intdiscount=int::Parse(discount);

			 for(count=0;count<userClassList->Items->Count-1;count++){
				 tempamount=userClassList->Items[count]->SubItems[1]->Text;
				 tempintamount=int::Parse(tempamount);
				 tempdiscount=userClassList->Items[count]->SubItems[2]->Text;
				 tempintdiscount=int::Parse(tempdiscount);
				 tempclass=userClassList->Items[count]->Text;
				 if(classusers!=tempclass){
					 if((tempintamount>intamount && tempintdiscount>intdiscount) || (tempintamount<intamount && tempintdiscount<intdiscount)){
					 
					 }
					 else{
						MessageBox::Show("Please choose a reasonable amount and discount!");
						 flag=1;
						 break;
					 }
				 }
				 
			 }
			 if(flag==0){
				 String^ s = L"datasource=localhost;port=3306;username=root;password=hotel";
				 MySqlConnection^ con=gcnew MySqlConnection(s);
				 String^ query="update hotel.discount set classamount='"+amount+"',discount='"+discount+"' where class='"+classusers+"';";
				 MySqlCommand^ cmd=gcnew MySqlCommand(query,con);
				 try{
					 con->Open();
					 cmd->ExecuteReader();
					 clearEditBox();
					 MessageBox::Show("Successful!");
					 showList();
				 }catch(Exception^ e){
					MessageBox::Show(e->Message);
				 }
			 }

		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ classuser=textBox1->Text;
		String^ amount=textBox2->Text;
		String^ discount=textBox3->Text;
		int intamount;
		int intdiscount;
		String^ tempamount;
		String^ tempdiscount;
		int tempintamount;
		int tempintdiscount;
		String^ tempclass;
		int flag=0;

		int count=0;
		if(classuser=="" || amount=="" || discount==""){
				MessageBox::Show("Please fill all the details!");
				return;
		}
		intamount=int::Parse(amount);
		intdiscount=int::Parse(discount);
		for(count=0;count<userClassList->Items->Count-1;count++){
			tempamount=userClassList->Items[count]->SubItems[1]->Text;
			tempintamount=int::Parse(tempamount);
			tempdiscount=userClassList->Items[count]->SubItems[2]->Text;
			tempintdiscount=int::Parse(tempdiscount);
			tempclass=userClassList->Items[count]->Text;
			
			if((tempintamount>intamount && tempintdiscount>intdiscount) || (tempintamount<intamount && tempintdiscount<intdiscount)){
				
			}
			else{
				flag=1;
				break;
			}
		}
			if(flag==0){
				String^ query="insert into hotel.discount (class,classamount,discount) values('"+classuser+"','"+amount+"','"+discount+"')";
				String^ s = L"datasource=localhost;port=3306;username=root;password=hotel";
				MySqlConnection^ con=gcnew MySqlConnection(s);
				MySqlCommand^ cmd=gcnew MySqlCommand(query,con);
				try{
					con->Open();
					cmd->ExecuteReader();
					MessageBox::Show("New User class added");
					clearAddBox();
				}catch(Exception^ e){
					MessageBox::Show(e->Message);
					clearAddBox();
					showList();
				}
			}
			else{
				MessageBox::Show("Please choose reasonable amount and discount");
			}
			

		
		
		}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text=(userClassList->Items->Count+1).ToString();
		 }

private: System::Void clearAddBox(){
			 textBox1->Text="";
			 textBox2->Text="";
			 textBox3->Text="";
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 clearAddBox();
		 }
};
}
