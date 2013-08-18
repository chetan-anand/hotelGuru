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
	/// Summary for importTables
	/// </summary>
	public ref class importTables : public System::Windows::Forms::Form
	{
	public:
		importTables(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~importTables()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  roomsBrowse;
	private: System::Windows::Forms::Button^  discBrowse;




	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  exportRooms;
	private: System::Windows::Forms::Button^  exportDisc;


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
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->roomsBrowse = (gcnew System::Windows::Forms::Button());
			this->discBrowse = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->exportRooms = (gcnew System::Windows::Forms::Button());
			this->exportDisc = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(93, 52);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(184, 20);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(93, 91);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(184, 20);
			this->textBox2->TabIndex = 1;
			// 
			// roomsBrowse
			// 
			this->roomsBrowse->Location = System::Drawing::Point(283, 52);
			this->roomsBrowse->Name = L"roomsBrowse";
			this->roomsBrowse->Size = System::Drawing::Size(75, 23);
			this->roomsBrowse->TabIndex = 2;
			this->roomsBrowse->Text = L"Browse";
			this->roomsBrowse->UseVisualStyleBackColor = true;
			this->roomsBrowse->Click += gcnew System::EventHandler(this, &importTables::roomsBrowse_Click);
			// 
			// discBrowse
			// 
			this->discBrowse->Location = System::Drawing::Point(283, 89);
			this->discBrowse->Name = L"discBrowse";
			this->discBrowse->Size = System::Drawing::Size(75, 23);
			this->discBrowse->TabIndex = 3;
			this->discBrowse->Text = L"Browse";
			this->discBrowse->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(29, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Rooms";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(29, 91);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Discount";
			// 
			// exportRooms
			// 
			this->exportRooms->Location = System::Drawing::Point(387, 52);
			this->exportRooms->Name = L"exportRooms";
			this->exportRooms->Size = System::Drawing::Size(75, 23);
			this->exportRooms->TabIndex = 6;
			this->exportRooms->Text = L"Export";
			this->exportRooms->UseVisualStyleBackColor = true;
			this->exportRooms->Click += gcnew System::EventHandler(this, &importTables::exportRooms_Click);
			// 
			// exportDisc
			// 
			this->exportDisc->Location = System::Drawing::Point(387, 89);
			this->exportDisc->Name = L"exportDisc";
			this->exportDisc->Size = System::Drawing::Size(75, 23);
			this->exportDisc->TabIndex = 7;
			this->exportDisc->Text = L"Export";
			this->exportDisc->UseVisualStyleBackColor = true;
			// 
			// importTables
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(493, 219);
			this->Controls->Add(this->exportDisc);
			this->Controls->Add(this->exportRooms);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->discBrowse);
			this->Controls->Add(this->roomsBrowse);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"importTables";
			this->Text = L"Import Tables";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void roomsBrowse_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				 {
					 String^ filepath=openFileDialog1->FileName;
					 textBox1->Text=filepath;
				 }
			 }
private: System::Void exportRooms_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ filepath=textBox1->Text;
			 if(filepath!=""){
					String^ query="LOAD DATA LOCAL INFILE '"+filepath+"' INTO TABLE sample.rooms FIELDS TERMINATED BY ',' ENCLOSED BY '\"' lines terminated by '\\n'";
					String^ s = L"datasource=localhost;port=3306;username=root;password=hotel";
					MySqlConnection^ con=gcnew MySqlConnection(s);
					MySqlCommand^ cmd=gcnew MySqlCommand(query,con);
					MessageBox::Show(query);
					try{
						con->Open();
						cmd->ExecuteReader();
					}catch(Exception^ e){
						MessageBox::Show(e->Message);		
					}
			 }
			 else{
				 MessageBox::Show("Please select a file!");
			 }
		 }
};
}
