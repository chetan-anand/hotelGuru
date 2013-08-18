#pragma once
#include "billing.h"
#include<iostream>
namespace hotel {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;


	/// <summary>
	/// Summary for h_guest
	/// </summary>
	public ref class h_guest : public System::Windows::Forms::Form
	{
	public:
				ListView^ bookedrooms;
				String^ datein;
			String^ dateout;
			String^ nod;
			String^ EmpId;
			int flagnext;
		h_guest(ListView^ lv,String^ din,String^ dout,String^ nd,String^ empId)
		{
			InitializeComponent();
	
			bookedrooms=lv;
			//MessageBox::Show(din);
			//MessageBox::Show(dout);
			//MessageBox::Show(nd);
			datein=din;
			dateout=dout;
			nod=nd;
			EmpId=empId;
			flagnext=0;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~h_guest()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textname;
	protected: 

	protected: 

	private: System::Windows::Forms::TextBox^  textcompany;
	private: System::Windows::Forms::TextBox^  textidproof;
	private: System::Windows::Forms::TextBox^  textmailid;




	private: System::Windows::Forms::TextBox^  textaddress;
	private: System::Windows::Forms::TextBox^  textcontact;


	private: System::Windows::Forms::GroupBox^  infol;

	private: System::Windows::Forms::Label^  companyl;

	private: System::Windows::Forms::Label^  proofl;

	private: System::Windows::Forms::Label^  emaill;

	private: System::Windows::Forms::Label^  contactl;

	private: System::Windows::Forms::Label^  namel;
	private: System::Windows::Forms::Label^  addressl;

	private: System::Windows::Forms::Button^  searchl;
			 

	String^ name;
	String^ company;
	String^ address;
	String^ mailid;
	String^ contact;
	String^ idproof;
	String^ result;
	String^ city;
	String^ idguest;
	int flag_second_search;
	String^ guestclass;
	String^ guestid;
	
			 //	int firstSearch=1;




	private: System::Windows::Forms::TextBox^  textBoxcity;





	private: System::Windows::Forms::Label^  cityl;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	private: System::Windows::Forms::ColumnHeader^  columnHeader5;
	private: System::Windows::Forms::Label^  searchr;
	private: System::Windows::Forms::ColumnHeader^  columnHeader6;
	private: System::Windows::Forms::ColumnHeader^  columnHeader7;
	private: System::Windows::Forms::Button^  createguestbutton;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader8;
	private: System::Windows::Forms::ColumnHeader^  columnHeader9;
	private: System::Windows::Forms::Button^  clearGuestForm;
	private: System::Windows::Forms::Button^  next_2;















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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(h_guest::typeid));
			this->textname = (gcnew System::Windows::Forms::TextBox());
			this->textcompany = (gcnew System::Windows::Forms::TextBox());
			this->textidproof = (gcnew System::Windows::Forms::TextBox());
			this->textmailid = (gcnew System::Windows::Forms::TextBox());
			this->textaddress = (gcnew System::Windows::Forms::TextBox());
			this->textcontact = (gcnew System::Windows::Forms::TextBox());
			this->infol = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cityl = (gcnew System::Windows::Forms::Label());
			this->textBoxcity = (gcnew System::Windows::Forms::TextBox());
			this->addressl = (gcnew System::Windows::Forms::Label());
			this->companyl = (gcnew System::Windows::Forms::Label());
			this->proofl = (gcnew System::Windows::Forms::Label());
			this->emaill = (gcnew System::Windows::Forms::Label());
			this->contactl = (gcnew System::Windows::Forms::Label());
			this->namel = (gcnew System::Windows::Forms::Label());
			this->searchl = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader8 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader9 = (gcnew System::Windows::Forms::ColumnHeader());
			this->searchr = (gcnew System::Windows::Forms::Label());
			this->createguestbutton = (gcnew System::Windows::Forms::Button());
			this->clearGuestForm = (gcnew System::Windows::Forms::Button());
			this->next_2 = (gcnew System::Windows::Forms::Button());
			this->infol->SuspendLayout();
			this->SuspendLayout();
			// 
			// textname
			// 
			resources->ApplyResources(this->textname, L"textname");
			this->textname->Name = L"textname";
			// 
			// textcompany
			// 
			resources->ApplyResources(this->textcompany, L"textcompany");
			this->textcompany->Name = L"textcompany";
			this->textcompany->TextChanged += gcnew System::EventHandler(this, &h_guest::textcompany_TextChanged);
			// 
			// textidproof
			// 
			resources->ApplyResources(this->textidproof, L"textidproof");
			this->textidproof->Name = L"textidproof";
			// 
			// textmailid
			// 
			resources->ApplyResources(this->textmailid, L"textmailid");
			this->textmailid->Name = L"textmailid";
			// 
			// textaddress
			// 
			resources->ApplyResources(this->textaddress, L"textaddress");
			this->textaddress->Name = L"textaddress";
			// 
			// textcontact
			// 
			resources->ApplyResources(this->textcontact, L"textcontact");
			this->textcontact->Name = L"textcontact";
			// 
			// infol
			// 
			this->infol->BackColor = System::Drawing::Color::Transparent;
			this->infol->Controls->Add(this->label1);
			this->infol->Controls->Add(this->cityl);
			this->infol->Controls->Add(this->textBoxcity);
			this->infol->Controls->Add(this->addressl);
			this->infol->Controls->Add(this->companyl);
			this->infol->Controls->Add(this->proofl);
			this->infol->Controls->Add(this->emaill);
			this->infol->Controls->Add(this->contactl);
			this->infol->Controls->Add(this->namel);
			this->infol->Controls->Add(this->textcontact);
			this->infol->Controls->Add(this->textidproof);
			this->infol->Controls->Add(this->textmailid);
			this->infol->Controls->Add(this->textaddress);
			this->infol->Controls->Add(this->textcompany);
			this->infol->Controls->Add(this->textname);
			resources->ApplyResources(this->infol, L"infol");
			this->infol->Name = L"infol";
			this->infol->TabStop = false;
			this->infol->Enter += gcnew System::EventHandler(this, &h_guest::infol_Enter);
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->Name = L"label1";
			this->label1->Click += gcnew System::EventHandler(this, &h_guest::label1_Click_1);
			// 
			// cityl
			// 
			resources->ApplyResources(this->cityl, L"cityl");
			this->cityl->Name = L"cityl";
			// 
			// textBoxcity
			// 
			resources->ApplyResources(this->textBoxcity, L"textBoxcity");
			this->textBoxcity->Name = L"textBoxcity";
			// 
			// addressl
			// 
			resources->ApplyResources(this->addressl, L"addressl");
			this->addressl->Name = L"addressl";
			this->addressl->Click += gcnew System::EventHandler(this, &h_guest::addressl_Click);
			// 
			// companyl
			// 
			resources->ApplyResources(this->companyl, L"companyl");
			this->companyl->Name = L"companyl";
			this->companyl->Click += gcnew System::EventHandler(this, &h_guest::companyl_Click);
			// 
			// proofl
			// 
			resources->ApplyResources(this->proofl, L"proofl");
			this->proofl->Name = L"proofl";
			// 
			// emaill
			// 
			resources->ApplyResources(this->emaill, L"emaill");
			this->emaill->Name = L"emaill";
			this->emaill->Click += gcnew System::EventHandler(this, &h_guest::emaill_Click);
			// 
			// contactl
			// 
			resources->ApplyResources(this->contactl, L"contactl");
			this->contactl->Name = L"contactl";
			this->contactl->Click += gcnew System::EventHandler(this, &h_guest::contactl_Click);
			// 
			// namel
			// 
			resources->ApplyResources(this->namel, L"namel");
			this->namel->Name = L"namel";
			this->namel->Click += gcnew System::EventHandler(this, &h_guest::label1_Click);
			// 
			// searchl
			// 
			resources->ApplyResources(this->searchl, L"searchl");
			this->searchl->Name = L"searchl";
			this->searchl->UseVisualStyleBackColor = true;
			this->searchl->Click += gcnew System::EventHandler(this, &h_guest::searchl_Click);
			// 
			// listView1
			// 
			resources->ApplyResources(this->listView1, L"listView1");
			this->listView1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->listView1->BackgroundImageTiled = true;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(9) {this->columnHeader1, this->columnHeader2, 
				this->columnHeader3, this->columnHeader4, this->columnHeader5, this->columnHeader6, this->columnHeader7, this->columnHeader8, 
				this->columnHeader9});
			this->listView1->FullRowSelect = true;
			this->listView1->GridLines = true;
			this->listView1->MultiSelect = false;
			this->listView1->Name = L"listView1";
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->ItemActivate += gcnew System::EventHandler(this, &h_guest::itemActivate1);
			this->listView1->ItemChecked += gcnew System::Windows::Forms::ItemCheckedEventHandler(this, &h_guest::listView1_ItemChecked);
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &h_guest::listView1_SelectedIndexChanged);
			this->listView1->Click += gcnew System::EventHandler(this, &h_guest::listView1_Click);
			this->listView1->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &h_guest::listView1_MouseDoubleClick);
			// 
			// columnHeader1
			// 
			resources->ApplyResources(this->columnHeader1, L"columnHeader1");
			// 
			// columnHeader2
			// 
			resources->ApplyResources(this->columnHeader2, L"columnHeader2");
			// 
			// columnHeader3
			// 
			resources->ApplyResources(this->columnHeader3, L"columnHeader3");
			// 
			// columnHeader4
			// 
			resources->ApplyResources(this->columnHeader4, L"columnHeader4");
			// 
			// columnHeader5
			// 
			resources->ApplyResources(this->columnHeader5, L"columnHeader5");
			// 
			// columnHeader6
			// 
			resources->ApplyResources(this->columnHeader6, L"columnHeader6");
			// 
			// columnHeader7
			// 
			resources->ApplyResources(this->columnHeader7, L"columnHeader7");
			// 
			// columnHeader8
			// 
			resources->ApplyResources(this->columnHeader8, L"columnHeader8");
			// 
			// columnHeader9
			// 
			resources->ApplyResources(this->columnHeader9, L"columnHeader9");
			// 
			// searchr
			// 
			resources->ApplyResources(this->searchr, L"searchr");
			this->searchr->BackColor = System::Drawing::Color::Transparent;
			this->searchr->ForeColor = System::Drawing::Color::White;
			this->searchr->Name = L"searchr";
			this->searchr->Click += gcnew System::EventHandler(this, &h_guest::searchr_Click);
			// 
			// createguestbutton
			// 
			resources->ApplyResources(this->createguestbutton, L"createguestbutton");
			this->createguestbutton->Name = L"createguestbutton";
			this->createguestbutton->UseVisualStyleBackColor = true;
			this->createguestbutton->Click += gcnew System::EventHandler(this, &h_guest::createguestbutton_Click);
			// 
			// clearGuestForm
			// 
			resources->ApplyResources(this->clearGuestForm, L"clearGuestForm");
			this->clearGuestForm->Name = L"clearGuestForm";
			this->clearGuestForm->UseVisualStyleBackColor = true;
			this->clearGuestForm->Click += gcnew System::EventHandler(this, &h_guest::clearGuestForm_Click);
			// 
			// next_2
			// 
			resources->ApplyResources(this->next_2, L"next_2");
			this->next_2->Name = L"next_2";
			this->next_2->UseVisualStyleBackColor = true;
			this->next_2->Click += gcnew System::EventHandler(this, &h_guest::next_2_Click);
			// 
			// h_guest
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->next_2);
			this->Controls->Add(this->clearGuestForm);
			this->Controls->Add(this->createguestbutton);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->searchr);
			this->Controls->Add(this->searchl);
			this->Controls->Add(this->infol);
			this->MaximizeBox = false;
			this->Name = L"h_guest";
			this->Load += gcnew System::EventHandler(this, &h_guest::h_guest_Load);
			this->infol->ResumeLayout(false);
			this->infol->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		/*String^ s = L"datasource=localhost;port=3306;username=root;password=hotel";
		MySqlConnection^ con=gcnew MySqlConnection(s);*/
		


	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void companyl_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void addressl_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void emaill_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void flowLayoutPanel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void searchl_Click(System::Object^  sender, System::EventArgs^  e) {
		
		String^ s = L"datasource=localhost;port=3306;username=root;password=hotel";
		MySqlConnection^ con=gcnew MySqlConnection(s);
		String^ query;
		query="select * from hotel.guests where ";
		listView1->Items->Clear();
		if(textname->Text!="")
		{
			query += "name like'%"+textname->Text+"%' and ";
		}

		if(textcompany->Text!="")
		{
			query += "company='"+textcompany->Text+"' and ";
		}
		
		if(textaddress->Text!="")
		{
			query += "address like'%"+textaddress->Text+"%' and ";
		}
		if(textcontact->Text!="")
		{
			query += "contact='"+textcontact->Text+"' and ";
		}

		if(textidproof->Text!=""){
			query += "idproof='"+textidproof->Text+"' and ";
		}

		if(textBoxcity->Text!=""){
			query += "city='"+textBoxcity->Text+"' and ";
		}
		if(textmailid->Text!="")
		{
			query += "email='"+textmailid->Text+"' and ";
		}

		query=query+" 1;";
		//MySqlCommand^ cmd=gcnew MySqlCommand(query,con);
		MySqlCommand^ cmd=gcnew MySqlCommand(query,con);
		MySqlDataReader^ read;
		int numr=0;
		try
		{
			con->Open();
			if(numr==-1){
				MessageBox::Show("sda");
			}
			read=cmd->ExecuteReader();
			int count=0;
			while(read->Read())
			{
				count++;
				idguest=read["idguests"]->ToString();
				company=read["company"]->ToString();
				name=read["name"]->ToString();
				address=read["address"]->ToString();
				mailid=read["email"]->ToString();
				idproof=read["idproof"]->ToString();
				contact=read["contact"]->ToString();
				city=read["city"]->ToString();
				guestclass=read["class"]->ToString();

				ListViewItem^ item = gcnew ListViewItem(idguest);
				item->SubItems->Add(name);
				item->SubItems->Add(company);
				item->SubItems->Add(idproof);
				item->SubItems->Add(city);
				item->SubItems->Add(address);
				item->SubItems->Add(contact);
				item->SubItems->Add(mailid);
				item->SubItems->Add(guestclass);
				array<ListViewItem^>^temp = {item};
				listView1->Items->AddRange(temp);
				//this->listView1->Items->Add(this->item);

			}
			
			flag_second_search=1;

		}catch(Exception^ e){
		
			MessageBox::Show(e->Message);		
		}
			 }
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void searchr_Click(System::Object^  sender, System::EventArgs^  e) {

		 }
private: System::Void infol_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void contactl_Click(System::Object^  sender, System::EventArgs^  e) {
		 }

private: System::Void textcompany_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void h_guest_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void listView1_Click(System::Object^  sender, System::EventArgs^  e) {
	
		 }
private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 ListView::SelectedListViewItemCollection^ breakfast = this->listView1->SelectedItems;
			 flagnext=1;
			 System::Collections::IEnumerator^ myEnum = breakfast->GetEnumerator();
			 String^ id;
			 String^ name;
			 String^ company;
			 String^ idproof;
			 String^ city;
			 String^ address;
			 String^ contact;
			 String^ email;
			 String^ class_guest;

			 //INT32 id;
			 while ( myEnum->MoveNext() )
			 {
				 ListViewItem^ item = safe_cast<ListViewItem^>(myEnum->Current);
				 id = item->Text;
				 name=item->SubItems[1]->Text;
				 company=item->SubItems[2]->Text;
				 idproof=item->SubItems[3]->Text;
				 city=item->SubItems[4]->Text;
				 address=item->SubItems[5]->Text;
				 contact=item->SubItems[6]->Text;
				 email=item->SubItems[7]->Text;
				 class_guest=item->SubItems[8]->Text;
			 }
			 guestid=id;
			 if(1){
				 textname->Text=name;
				 textcompany->Text=company;
				 textaddress->Text=address;
				 textBoxcity->Text=city;
				 textmailid->Text=email;
				 textcontact->Text=contact;
				 textidproof->Text=idproof;

			 }	

			 }
		 //searchr->Text="The guest ID selected is "+id+".";
	private: System::Void itemActivate1(System::Object^  sender, System::EventArgs^  e) {
				// MessageBox::Show("Hello world");
			 }
private: System::Void listView1_MouseDoubleClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

		 }
private: System::Void listView1_ItemChecked(System::Object^  sender, System::Windows::Forms::ItemCheckedEventArgs^  e) {
			 //MessageBox::Show("hi");
		 }
private: System::Void createguestbutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ h = L"datasource=localhost;port=3306;username=root;password=hotel";
			 MySqlConnection^ con=gcnew MySqlConnection(h);
			 
			// String^ query1;
		
		if((textname->Text!="")&&(textcompany->Text!="")&&(textaddress->Text!="")&&(textcontact->Text!="")&&(textidproof->Text!="")&&(textBoxcity->Text!="")&&(textmailid->Text!=""))
		{
			MySqlCommand^ cmd1=gcnew MySqlCommand("select * from hotel.guests where name='"+textname->Text+"' and contact='"+textcontact->Text+"' and idproof='"+textidproof->Text+"' and company='"+textcompany->Text+"' and city='"+textBoxcity->Text+"' and email='"+textmailid->Text+"' and address='"+textaddress->Text+"';",con);
			MySqlCommand^ cmd2=gcnew MySqlCommand("insert into hotel.guests (name,contact,idproof,company,city,email,address,class) values('"+textname->Text+"','"+textcontact->Text+"','"+textidproof->Text+"','"+textcompany->Text+"','"+textBoxcity->Text+"','"+textmailid->Text+"','"+textaddress->Text+"','0');",con);
			MySqlDataReader^ read;
			int count=0;

			try{
				con->Open();
				read=cmd1->ExecuteReader();
				while (read->Read())
				{
					count++;
					if(count>0){
						MessageBox::Show("Guest already exists!");
						return;
				}

				}
				//if(count)
				con->Close();
				con->Open();
				cmd2->ExecuteReader();
				MessageBox::Show("Guest added");
				con->Close();
			}catch(Exception^ e){
				MessageBox::Show(e->Message);
			}
		}
		else
		{
			MessageBox::Show("Please fill all fields.");
		}

		}
private: System::Void label1_Click_1(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void clearGuestForm_Click(System::Object^  sender, System::EventArgs^  e) {
			 textaddress->Text="";
			 textBoxcity->Text="";
			 textcompany->Text="";
			 textname->Text="";
			 textcontact->Text="";
			 textidproof->Text="";
			 textmailid->Text="";
			 listView1->Items->Clear();
		 }
private: System::Void next_2_Click(System::Object^  sender, System::EventArgs^  e) {
				//String^ guest
			 //datein=din;
			 //dateout=dout;
			 //nod=nd;
			 if(flagnext==1){
			 billing^ b =gcnew billing(bookedrooms,guestid,datein,dateout,nod,EmpId);
			 b->ShowDialog();
			 this->Close();
			 }
			 else{
				 MessageBox::Show("Please select a customer");
			 }
			 //String^ guestid=
		 }
};



}
