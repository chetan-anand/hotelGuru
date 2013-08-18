// hotel.cpp : main project file.

#include "stdafx.h"
#include "Form1.h"
#include "InstallForm.h"
#include "addRec.h"
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <conio.h>
#using<system.dll>

using namespace std;
using namespace hotel;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System;
using namespace System::IO;
using namespace MySql::Data::MySqlClient;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	String^ h = L"datasource=localhost;port=3306;username=root;password=hotel";
	String^ query="CREATE SCHEMA `hotel` ;";
	MySqlConnection^ con=gcnew MySqlConnection(h);
	MySqlCommand^ cmd=gcnew MySqlCommand(query,con);
	try{
		con->Open();
		cmd->ExecuteReader();
		Application::Run(gcnew InstallForm());
		
	}catch(Exception^ e){
		Application::Run(gcnew Form1());
	}
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	return 0;
}
