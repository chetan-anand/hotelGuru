#pragma once
#include<string.h>
namespace hotel {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for changePassword
	/// </summary>
	public ref class changePassword : public System::Windows::Forms::Form
	{
	public:
		changePassword(String^ user)
		{
			InitializeComponent();
			//
				username=user;
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~changePassword()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  newPwd;
	private: System::Windows::Forms::Label^  newPwd_l;
	private: System::Windows::Forms::Label^  confirmPwd_l;
	private: System::Windows::Forms::TextBox^  confirmPwd;
	private: System::Windows::Forms::Button^  submitPwd;
	private: String^ username;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(changePassword::typeid));
			this->newPwd = (gcnew System::Windows::Forms::TextBox());
			this->newPwd_l = (gcnew System::Windows::Forms::Label());
			this->confirmPwd_l = (gcnew System::Windows::Forms::Label());
			this->confirmPwd = (gcnew System::Windows::Forms::TextBox());
			this->submitPwd = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// newPwd
			// 
			this->newPwd->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->newPwd->Location = System::Drawing::Point(137, 126);
			this->newPwd->Name = L"newPwd";
			this->newPwd->Size = System::Drawing::Size(120, 20);
			this->newPwd->TabIndex = 0;
			this->newPwd->UseSystemPasswordChar = true;
			// 
			// newPwd_l
			// 
			this->newPwd_l->AutoSize = true;
			this->newPwd_l->BackColor = System::Drawing::Color::Transparent;
			this->newPwd_l->Location = System::Drawing::Point(37, 126);
			this->newPwd_l->Name = L"newPwd_l";
			this->newPwd_l->Size = System::Drawing::Size(78, 13);
			this->newPwd_l->TabIndex = 1;
			this->newPwd_l->Text = L"New Password";
			// 
			// confirmPwd_l
			// 
			this->confirmPwd_l->AutoSize = true;
			this->confirmPwd_l->BackColor = System::Drawing::Color::Transparent;
			this->confirmPwd_l->Location = System::Drawing::Point(37, 170);
			this->confirmPwd_l->Name = L"confirmPwd_l";
			this->confirmPwd_l->Size = System::Drawing::Size(91, 13);
			this->confirmPwd_l->TabIndex = 2;
			this->confirmPwd_l->Text = L"Confirm Password";
			// 
			// confirmPwd
			// 
			this->confirmPwd->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->confirmPwd->Location = System::Drawing::Point(137, 170);
			this->confirmPwd->Name = L"confirmPwd";
			this->confirmPwd->Size = System::Drawing::Size(120, 20);
			this->confirmPwd->TabIndex = 3;
			this->confirmPwd->UseSystemPasswordChar = true;
			// 
			// submitPwd
			// 
			this->submitPwd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->submitPwd->Location = System::Drawing::Point(137, 226);
			this->submitPwd->Name = L"submitPwd";
			this->submitPwd->Size = System::Drawing::Size(75, 23);
			this->submitPwd->TabIndex = 4;
			this->submitPwd->Text = L"Submit";
			this->submitPwd->UseVisualStyleBackColor = false;
			this->submitPwd->Click += gcnew System::EventHandler(this, &changePassword::submitPwd_Click);
			// 
			// changePassword
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(348, 330);
			this->Controls->Add(this->submitPwd);
			this->Controls->Add(this->confirmPwd);
			this->Controls->Add(this->confirmPwd_l);
			this->Controls->Add(this->newPwd_l);
			this->Controls->Add(this->newPwd);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"changePassword";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Change Password";
			this->Load += gcnew System::EventHandler(this, &changePassword::changePassword_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void submitPwd_Click(System::Object^  sender, System::EventArgs^  e) {
				 String^ newpwd = newPwd->Text;
				 String^ temp = confirmPwd->Text;
			     String^ error = "Reset failed! Try again. :(";
				 if(newpwd==""){
					 MessageBox::Show(error);
					 return;
				 }
				 if(newpwd==temp){
					String^ s = L"datasource=localhost;port=3306;username=root;password=hotel";
					MySqlConnection^ con=gcnew MySqlConnection(s);
					MySqlCommand^ cmd=gcnew MySqlCommand("update hotel.users set password='"+newpwd+"' where username='"+username+"'",con);
					try{
						con->Open();
						cmd->ExecuteReader();
						this->Close();
					}catch(Exception^ e){
						MessageBox::Show(e->Message);
					}
				 }
				 else{
					 MessageBox::Show(error);
				 }
			 }
private: System::Void changePassword_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
