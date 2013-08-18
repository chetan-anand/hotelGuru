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
	/// Summary for checkOutForm
	/// </summary>
	public ref class checkOutForm : public System::Windows::Forms::Form
	{
	public:
		checkOutForm(void)
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
		~checkOutForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  guestIDText;
	protected: 

	private: System::Windows::Forms::Label^  guestIDLabel;
	private: System::Windows::Forms::Button^  checkOutButton;

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
			this->guestIDText = (gcnew System::Windows::Forms::TextBox());
			this->guestIDLabel = (gcnew System::Windows::Forms::Label());
			this->checkOutButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// guestIDText
			// 
			this->guestIDText->Location = System::Drawing::Point(127, 46);
			this->guestIDText->Name = L"guestIDText";
			this->guestIDText->Size = System::Drawing::Size(100, 20);
			this->guestIDText->TabIndex = 0;
			// 
			// guestIDLabel
			// 
			this->guestIDLabel->AutoSize = true;
			this->guestIDLabel->Location = System::Drawing::Point(57, 46);
			this->guestIDLabel->Name = L"guestIDLabel";
			this->guestIDLabel->Size = System::Drawing::Size(49, 13);
			this->guestIDLabel->TabIndex = 1;
			this->guestIDLabel->Text = L"Guest ID";
			// 
			// checkOutButton
			// 
			this->checkOutButton->Location = System::Drawing::Point(60, 111);
			this->checkOutButton->Name = L"checkOutButton";
			this->checkOutButton->Size = System::Drawing::Size(75, 23);
			this->checkOutButton->TabIndex = 2;
			this->checkOutButton->Text = L"Check Out";
			this->checkOutButton->UseVisualStyleBackColor = true;
			this->checkOutButton->Click += gcnew System::EventHandler(this, &checkOutForm::checkOutButton_Click);
			// 
			// checkOutForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(316, 244);
			this->Controls->Add(this->checkOutButton);
			this->Controls->Add(this->guestIDLabel);
			this->Controls->Add(this->guestIDText);
			this->Name = L"checkOutForm";
			this->Text = L"checkOutForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void checkOutButton_Click(System::Object^  sender, System::EventArgs^  e) {
				 String^ id=guestIDText->Text;
				 if(id==""){
					MessageBox::Show("Please enter a valid user id");
					return;
				 }
				 String^ query="update hotel.rooms set status='1' where guestid='"+id+"';";
				 String^ s = L"datasource=localhost;port=3306;username=root;password=hotel";
				 MySqlConnection^ con=gcnew MySqlConnection(s);
				 MySqlCommand^ cmd=gcnew MySqlCommand(query,con);
				 try{
					 con->Open();
					 cmd->ExecuteReader();
					 MessageBox::Show("Guest checked out!");
				 }catch(Exception^ e){

					 MessageBox::Show(e->Message);
					 this->Close();
				 }

			 }
	};
}
