#pragma once
#include "conio.h"
#include "iostream"
#include "globalvars.h"
#include "time.h"
namespace hotel {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace std;
	
	using namespace System::Globalization;

	/// <summary>
	/// Summary for billing
	/// </summary>
	public ref class billing : public System::Windows::Forms::Form
	{
	public: 
				ListView^ lv;
				String^ guestid;
				String^ datein;
				String^ dateout;
				String^ numdays;
				String^ empid;
	private: System::Windows::Forms::Label^  discountl;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	public: 

	public: 
	private: System::Windows::Forms::Label^  label8;
			 
		
	public:	billing(ListView^ lf,String^ gid,String^ gdi,String^ gdo,String^ gnd, String^ empId)
		{
			InitializeComponent();
			//
				lv=lf;
				guestid=gid;
				datein=gdi;
				dateout=gdo;
				numdays=gnd;
				/*MessageBox::Show(gid);
				MessageBox::Show(gdi);
				MessageBox::Show(gdo);
				MessageBox::Show(gnd);*/
				empid=empId;
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~billing()
		{
			if (components)
			{
				delete components;
			}
		}

		System::Windows::Forms::ListViewItem^ item;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  subtotall;
	protected: 

	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  gtotall;

	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  pdiscountl;


	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  transactionl;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::GroupBox^  Guestbox;
	private: System::Windows::Forms::Label^  contactl;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  cityl;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  guestnamel;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  guestidl;
	private: System::Windows::Forms::Label^  label1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(billing::typeid));
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->discountl = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->subtotall = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->gtotall = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->pdiscountl = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->transactionl = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Guestbox = (gcnew System::Windows::Forms::GroupBox());
			this->contactl = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->cityl = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->guestnamel = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->guestidl = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->Guestbox->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->discountl);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->subtotall);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->gtotall);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->pdiscountl);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Location = System::Drawing::Point(405, 210);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(194, 123);
			this->groupBox2->TabIndex = 28;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"groupBox2";
			// 
			// discountl
			// 
			this->discountl->AutoSize = true;
			this->discountl->Location = System::Drawing::Point(128, 72);
			this->discountl->Name = L"discountl";
			this->discountl->Size = System::Drawing::Size(22, 13);
			this->discountl->TabIndex = 23;
			this->discountl->Text = L"- - -";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(21, 71);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(52, 13);
			this->label8->TabIndex = 22;
			this->label8->Text = L"Discount ";
			// 
			// subtotall
			// 
			this->subtotall->AutoSize = true;
			this->subtotall->Location = System::Drawing::Point(127, 21);
			this->subtotall->Name = L"subtotall";
			this->subtotall->Size = System::Drawing::Size(22, 13);
			this->subtotall->TabIndex = 21;
			this->subtotall->Text = L"- - -";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(19, 23);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(53, 13);
			this->label11->TabIndex = 20;
			this->label11->Text = L"Sub Total";
			// 
			// gtotall
			// 
			this->gtotall->AutoSize = true;
			this->gtotall->Location = System::Drawing::Point(131, 93);
			this->gtotall->Name = L"gtotall";
			this->gtotall->Size = System::Drawing::Size(22, 13);
			this->gtotall->TabIndex = 19;
			this->gtotall->Text = L"- - -";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(17, 94);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(63, 13);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Grand Total";
			// 
			// pdiscountl
			// 
			this->pdiscountl->AutoSize = true;
			this->pdiscountl->Location = System::Drawing::Point(128, 45);
			this->pdiscountl->Name = L"pdiscountl";
			this->pdiscountl->Size = System::Drawing::Size(22, 13);
			this->pdiscountl->TabIndex = 17;
			this->pdiscountl->Text = L"- - -";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(19, 48);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(60, 13);
			this->label6->TabIndex = 16;
			this->label6->Text = L"% Discount";
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {this->columnHeader1, this->columnHeader2, 
				this->columnHeader3});
			this->listView1->Location = System::Drawing::Point(17, 210);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(223, 151);
			this->listView1->TabIndex = 27;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Room Id";
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Room No.";
			this->columnHeader2->Width = 98;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Class";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(440, 366);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 26;
			this->button1->Text = L"submit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &billing::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->transactionl);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Location = System::Drawing::Point(401, 14);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(222, 47);
			this->groupBox1->TabIndex = 25;
			this->groupBox1->TabStop = false;
			// 
			// transactionl
			// 
			this->transactionl->AutoSize = true;
			this->transactionl->Location = System::Drawing::Point(91, 16);
			this->transactionl->Name = L"transactionl";
			this->transactionl->Size = System::Drawing::Size(22, 13);
			this->transactionl->TabIndex = 12;
			this->transactionl->Text = L"- - -";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(0, 14);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(86, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Transaction No.-";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Verdana", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(253, 30);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(123, 23);
			this->label2->TabIndex = 24;
			this->label2->Text = L"hoteLGuru";
			// 
			// Guestbox
			// 
			this->Guestbox->Controls->Add(this->contactl);
			this->Guestbox->Controls->Add(this->label7);
			this->Guestbox->Controls->Add(this->cityl);
			this->Guestbox->Controls->Add(this->label5);
			this->Guestbox->Controls->Add(this->guestnamel);
			this->Guestbox->Controls->Add(this->label3);
			this->Guestbox->Controls->Add(this->guestidl);
			this->Guestbox->Controls->Add(this->label1);
			this->Guestbox->Location = System::Drawing::Point(17, 78);
			this->Guestbox->Name = L"Guestbox";
			this->Guestbox->Size = System::Drawing::Size(208, 126);
			this->Guestbox->TabIndex = 23;
			this->Guestbox->TabStop = false;
			this->Guestbox->Text = L"Guest Info";
			// 
			// contactl
			// 
			this->contactl->AutoSize = true;
			this->contactl->Location = System::Drawing::Point(89, 102);
			this->contactl->Name = L"contactl";
			this->contactl->Size = System::Drawing::Size(0, 13);
			this->contactl->TabIndex = 8;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 100);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(44, 13);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Contact";
			// 
			// cityl
			// 
			this->cityl->AutoSize = true;
			this->cityl->Location = System::Drawing::Point(89, 71);
			this->cityl->Name = L"cityl";
			this->cityl->Size = System::Drawing::Size(0, 13);
			this->cityl->TabIndex = 5;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 69);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(24, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"City";
			// 
			// guestnamel
			// 
			this->guestnamel->AutoSize = true;
			this->guestnamel->Location = System::Drawing::Point(89, 37);
			this->guestnamel->Name = L"guestnamel";
			this->guestnamel->Size = System::Drawing::Size(0, 13);
			this->guestnamel->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 46);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(66, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Guest Name";
			// 
			// guestidl
			// 
			this->guestidl->AutoSize = true;
			this->guestidl->Location = System::Drawing::Point(89, 10);
			this->guestidl->Name = L"guestidl";
			this->guestidl->Size = System::Drawing::Size(0, 13);
			this->guestidl->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(49, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Guest ID";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(18, 19);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(44, 13);
			this->label10->TabIndex = 29;
			this->label10->Text = L"Date in ";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(19, 48);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(48, 13);
			this->label12->TabIndex = 30;
			this->label12->Text = L"Date out";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(88, 16);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(22, 13);
			this->label13->TabIndex = 31;
			this->label13->Text = L"- - -";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(88, 51);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(22, 13);
			this->label14->TabIndex = 32;
			this->label14->Text = L"- - -";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label14);
			this->groupBox3->Controls->Add(this->label13);
			this->groupBox3->Controls->Add(this->label12);
			this->groupBox3->Controls->Add(this->label10);
			this->groupBox3->Location = System::Drawing::Point(242, 79);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(221, 95);
			this->groupBox3->TabIndex = 33;
			this->groupBox3->TabStop = false;
			// 
			// billing
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(635, 419);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Guestbox);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"billing";
			this->Text = L"billing";
			this->Load += gcnew System::EventHandler(this, &billing::billing_Load);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->Guestbox->ResumeLayout(false);
			this->Guestbox->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
		
		// n is the no of rooms;
		int n;
		String^ index;
		int i;
		String^ name;
		String^ company;
		String^ city;
		String^ mailid;
		String^ contact;
		String^ idproof;
		String^ roomno;
		String^ rclass;
		
		String^ query1;
		int sum;
		int intcost;
		String^ uclass;
		String^ cost;
		String^ discount;
		String^ classamount;
		int intdiscount,intclassamount,discountcost;
		int intnumdays,sumtotal;
		String^ curamount;
		int intcuramount;
		int newamount;
		String^ camount;
		int intcamount;
		String^ newclass;
		String^ curtime;
		time_t timenow;
		String^ tempdiscount;
		
		
	private: System::Void billing_Load(System::Object^  sender, System::EventArgs^  e)
			 {
				 String^ s = L"datasource=localhost;port=3306;username=root;password=hotel";
				 MySqlConnection^ con=gcnew MySqlConnection(s);
				 String^ query="select * from hotel.guests where idguests='"+guestid+"'  ;";

				 MySqlCommand^ cmd=gcnew MySqlCommand(query,con);
				 MySqlDataReader^ read;

				 sum=0;

				 try
				 {
					 con->Open();
					 read=cmd->ExecuteReader();
					 //read->Read();
					 int counter;
					 while(read->Read())
					 {
						 company=read["company"]->ToString();
						 name=read["name"]->ToString();
						 city=read["city"]->ToString();
						 mailid=read["email"]->ToString();
						 idproof=read["idproof"]->ToString();
						 contact=read["contact"]->ToString();
						 uclass=read["class"]->ToString();
						 curamount=read["amountpaid"]->ToString();
						 //MessageBox::Show(company);
						 guestidl->Text=guestid;
						 guestnamel->Text=name;
						 cityl->Text=city;
						 contactl->Text=contact;
						 intcuramount=int::Parse(curamount);
					 }

					
					 
				 }catch(Exception^ e){

					 MessageBox::Show(e->Message);
					 //MessageBox::Show("1");
				 }
				 con->Close();

				 try{
					 con->Open();

				 }
				 catch(Exception^ e){
					 MessageBox::Show(e->Message);
					// MessageBox::Show("2");
				 }
				 i=0;

				 while(i<lv->Items->Count)
				 {
					 index=lv->Items[i]->Text;
					// MessageBox::Show(index);
					 query="select * from hotel.rooms where idrooms='"+index+"' ;";
					// MessageBox::Show(query);
					cmd=gcnew MySqlCommand(query,con);

					 try
					 {

						 read=cmd->ExecuteReader();
						 while(read->Read())
						 {

						 roomno=read["roomno"]->ToString();

						 rclass=read["class"]->ToString();
						 //datein=read["datein"]->ToString();
						 //dateout=read["dateout"]->ToString();
						 //cost=read["cost"]->ToString();
						 item = gcnew Windows::Forms::ListViewItem(this->index);
						 item->SubItems->Add(this->roomno);
						 item->SubItems->Add(this->rclass);
						 //item->SubItems->Add(this->cost);
						 this->listView1->Items->Add(item);
						 //array<listViewItem^>^temp={listViewItem};
						 //listView1->listViewItem->AddRange(temp);
						 }
						 con->Close();
						 con->Open();

						 query1="select cost from hotel.classinfo where type='"+rclass+"' ;";
						 MySqlCommand^ cmd1=gcnew MySqlCommand(query1,con);
						 MySqlDataReader^ read1;

						 try{
							 read1=cmd1->ExecuteReader();
							 while(read1->Read())
							 {cost=read1["cost"]->ToString();
							// intcost= atoi(cost->c_str);	
							 intcost=int::Parse(cost);
							 intnumdays=int::Parse(numdays);
							 sum=sum + intcost*intnumdays;
							 }
						 }

						 catch(Exception^ e){


							 MessageBox::Show(e->Message);
							// MessageBox::Show("3");
							 break;

						 }



						 i++;
					 }catch(Exception^ e){
						 MessageBox::Show(e->Message);
						// MessageBox::Show("4");
						 break;
					 }

					 //searchr->Text=name;

					con->Close();
					con->Open();
				 }
				 subtotall->Text=sum.ToString();
				 transactionl->Text="GH"+guestid+"78ghxb12";
				 label13->Text=datein;
				 label14->Text=dateout;
				 con->Close();
				 // calculating Discount now;
				 if(curamount!="0")    // only if guest has class >0 uclass!="0"
				 {

					 try{
						 con->Open();

					 }
					 catch(Exception^ e){
						 MessageBox::Show(e->Message);
						// MessageBox::Show("5");
					 }

					/* query="select * from hotel.discount where class='"+uclass+"' ;";

					 MySqlCommand^ cmd=gcnew MySqlCommand(query,con);
					 MySqlDataReader^ read;
					 

					 try
					 {

						 read=cmd->ExecuteReader();
						 while(read->Read())
						 {

						
						  discount=read["discount"]->ToString();
						 classamount=read["classamount"]->ToString();

						intdiscount= int::Parse(discount);
						  intclassamount= int::Parse(classamount);

						 discountcost= (intdiscount*sum)/100;
						 }
					 }
					 catch(Exception^ e){
						 MessageBox::Show(e->Message);
						 MessageBox::Show("6");
					 }
					 con->Close();
					 pdiscountl->Text=discount+"%";
					 discountl->Text=discountcost.ToString();
					 */

					 intdiscount=0;

					 query="select discount,classamount from hotel.discount";
					 
					 try{
					 cmd=gcnew MySqlCommand(query,con);
					 					 
					 read=cmd->ExecuteReader();

					 while(read->Read())
					 {

						 camount=read["classamount"]->ToString();
						 if(intcuramount>=(int::Parse(camount)))
						 {
							 tempdiscount=read["discount"]->ToString();
								if((int::Parse(tempdiscount))>=intdiscount)
									intdiscount=int::Parse(tempdiscount);
						 }
						 



					 }
					 read->Close();

					 pdiscountl->Text=intdiscount.ToString()+" %";
					 discountcost= (intdiscount*sum)/100;
					 discountl->Text=discountcost.ToString();

				 }
					 catch(Exception^ e){
						 MessageBox::Show(e->Message);
						 //MessageBox::Show("6");
					 }

				 }

				 else{
					 pdiscountl->Text="0 %";
					 discountl->Text="Rs. 0";
					 intdiscount=0;
					discountcost=0;
					}
				
				 guestidl->Text=guestid;
				 guestnamel->Text=name;
				 cityl->Text=city;
				 contactl->Text=contact;
				 sumtotal=sum-discountcost;
				 gtotall->Text=sumtotal.ToString();
				 
				 
				 

			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 // status 1 in rooms means available and 0 otherwise
			 // once room is booked we make it unavailable and add guestid and din and dout

			 String^ s = L"datasource=localhost;port=3306;username=root;password=hotel";
			 MySqlConnection^ con=gcnew MySqlConnection(s);
			  MySqlCommand^ cmd;
			  String^ query;
			 

			 con->Open();
			 MySqlDataReader^ read;
			 i=0;
			 while(i<lv->Items->Count)
			 {
				 index=lv->Items[i]->Text;
				// MessageBox::Show(index);
				 query="update hotel.rooms set status='0', guestid='"+guestid+"',datein='"+datein+"',dateout='"+dateout+"' where idrooms='"+index+"' ;";
				// MessageBox::Show(query);
				 cmd=gcnew MySqlCommand(query,con);

				 try
				 {

					 read=cmd->ExecuteReader();
				}
				 catch(Exception^ e){
					 MessageBox::Show(e->Message);
					 
				 }

				 read->Close();
				 i++;
			 }
			 newamount=intcuramount+sumtotal;

			 /*
		 query="select class,classamount from hotel.discount";
			 cmd=gcnew MySqlCommand(query,con);
			 read=cmd->ExecuteReader();

			 while(read->Read())
			 {

				 camount=read["classamount"]->ToString();
				 if(newamount>=(int::Parse(camount)))
					 newclass=read["class"]->ToString();
				 else{
					 break;
					}
			 

			}
			 read->Close();
			 
		 query="update hotel.guests set class='"+newclass+"',amountpaid='"+newamount.ToString()+"' where idguests='"+guestid+"' ;";

		 cmd=gcnew MySqlCommand(query,con);
		 read=cmd->ExecuteReader();

		 while(read->Read())
		 {	
			 
		 }
		 read->Close();
		 */
		 i=0;
		 //timenow=time(0);
		 DateTime date3 = DateTime::Now;
		 String^ dt;
		 dt = date3.ToString(L"u",  DateTimeFormatInfo::InvariantInfo );
		 //int kk= int::Parse(dt);
		 //kk=kk%1000;
		 //MessageBox::Show(dt);
		 //curtime=timenow.ToString();
		 try{
		 while(i<lv->Items->Count)
		 {
			 index=lv->Items[i]->Text;
			 
			 query="insert into hotel.transactionlog (date_booked,time,roomid,guestid,date_out,totalpaidbyguest,employeeid) values('"+datein+"','"+dt+"','"+index+"','"+guestid+"','"+dateout+"','"+sumtotal.ToString()+"','"+empid+"');";
			 
			 cmd=gcnew MySqlCommand(query,con);

			 try
			 {

				 read=cmd->ExecuteReader();
			 }
			 catch(Exception^ e){
				 MessageBox::Show(e->Message);

			 }

			 read->Close();
			 i++;
		 }
		 }
		 catch(Exception^ e){
			 MessageBox::Show(e->Message);

		 }
		 
		 con->Close();
		 this->Close();
	}
};
}
