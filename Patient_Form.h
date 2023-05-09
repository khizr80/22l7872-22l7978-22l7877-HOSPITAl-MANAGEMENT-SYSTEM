#pragma once
#include "User.h"
#include"patient.h"
#include "admin.h"

namespace temp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Patient_Form
	/// </summary>
	public ref class Patient_Form : public System::Windows::Forms::Form
	{
	public:
		Patient_Form(void)
		{
			InitializeComponent();
			make_appointment_panel->Hide();
			cancel_appointment_panel->Hide();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Patient_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ patient_panel;
	protected:
	private: System::Windows::Forms::Button^ patient_panel_cancel_button;
	private: System::Windows::Forms::Button^ patient_panel_make_appointment_button;
	private: System::Windows::Forms::Button^ patient_panel_complaint_button;
	private: System::Windows::Forms::Button^ patient_panel_view_detail_button;
	private: System::Windows::Forms::Button^ patient_panel_logout_button;
	private: System::Windows::Forms::Panel^ make_appointment_panel;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Button^ make_appointment_back_button;
	private: System::Windows::Forms::Button^ make_appointment_ok_button;
	private: System::Windows::Forms::ComboBox^ make_appointment_panel_combo_box;
	private: System::Windows::Forms::Panel^ cancel_appointment_panel;
	private: System::Windows::Forms::Button^ cancel_appointment_back_button;
	private: System::Windows::Forms::Button^ cancel_appointment_ok_button;
	private: System::Windows::Forms::ComboBox^ cancelappointment_combobox;

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
			this->patient_panel = (gcnew System::Windows::Forms::Panel());
			this->cancel_appointment_panel = (gcnew System::Windows::Forms::Panel());
			this->cancel_appointment_back_button = (gcnew System::Windows::Forms::Button());
			this->cancel_appointment_ok_button = (gcnew System::Windows::Forms::Button());
			this->cancelappointment_combobox = (gcnew System::Windows::Forms::ComboBox());
			this->make_appointment_panel = (gcnew System::Windows::Forms::Panel());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->make_appointment_back_button = (gcnew System::Windows::Forms::Button());
			this->make_appointment_ok_button = (gcnew System::Windows::Forms::Button());
			this->make_appointment_panel_combo_box = (gcnew System::Windows::Forms::ComboBox());
			this->patient_panel_cancel_button = (gcnew System::Windows::Forms::Button());
			this->patient_panel_make_appointment_button = (gcnew System::Windows::Forms::Button());
			this->patient_panel_complaint_button = (gcnew System::Windows::Forms::Button());
			this->patient_panel_view_detail_button = (gcnew System::Windows::Forms::Button());
			this->patient_panel_logout_button = (gcnew System::Windows::Forms::Button());
			this->patient_panel->SuspendLayout();
			this->cancel_appointment_panel->SuspendLayout();
			this->make_appointment_panel->SuspendLayout();
			this->SuspendLayout();
			// 
			// patient_panel
			// 
			this->patient_panel->Controls->Add(this->cancel_appointment_panel);
			this->patient_panel->Controls->Add(this->make_appointment_panel);
			this->patient_panel->Controls->Add(this->patient_panel_cancel_button);
			this->patient_panel->Controls->Add(this->patient_panel_make_appointment_button);
			this->patient_panel->Controls->Add(this->patient_panel_complaint_button);
			this->patient_panel->Controls->Add(this->patient_panel_view_detail_button);
			this->patient_panel->Controls->Add(this->patient_panel_logout_button);
			this->patient_panel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->patient_panel->Location = System::Drawing::Point(0, 0);
			this->patient_panel->Name = L"patient_panel";
			this->patient_panel->Size = System::Drawing::Size(690, 417);
			this->patient_panel->TabIndex = 10;
			// 
			// cancel_appointment_panel
			// 
			this->cancel_appointment_panel->Controls->Add(this->cancel_appointment_back_button);
			this->cancel_appointment_panel->Controls->Add(this->cancel_appointment_ok_button);
			this->cancel_appointment_panel->Controls->Add(this->cancelappointment_combobox);
			this->cancel_appointment_panel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->cancel_appointment_panel->Location = System::Drawing::Point(0, 0);
			this->cancel_appointment_panel->Name = L"cancel_appointment_panel";
			this->cancel_appointment_panel->Size = System::Drawing::Size(690, 417);
			this->cancel_appointment_panel->TabIndex = 28;
			// 
			// cancel_appointment_back_button
			// 
			this->cancel_appointment_back_button->Location = System::Drawing::Point(146, 99);
			this->cancel_appointment_back_button->Name = L"cancel_appointment_back_button";
			this->cancel_appointment_back_button->Size = System::Drawing::Size(122, 42);
			this->cancel_appointment_back_button->TabIndex = 25;
			this->cancel_appointment_back_button->Text = L"Back";
			this->cancel_appointment_back_button->UseVisualStyleBackColor = true;
			this->cancel_appointment_back_button->Click += gcnew System::EventHandler(this, &Patient_Form::cancel_appointment_back_button_Click);
			// 
			// cancel_appointment_ok_button
			// 
			this->cancel_appointment_ok_button->Location = System::Drawing::Point(3, 99);
			this->cancel_appointment_ok_button->Name = L"cancel_appointment_ok_button";
			this->cancel_appointment_ok_button->Size = System::Drawing::Size(122, 42);
			this->cancel_appointment_ok_button->TabIndex = 24;
			this->cancel_appointment_ok_button->Text = L"Ok";
			this->cancel_appointment_ok_button->UseVisualStyleBackColor = true;
			this->cancel_appointment_ok_button->Click += gcnew System::EventHandler(this, &Patient_Form::cancel_appointment_ok_button_Click);
			// 
			// cancelappointment_combobox
			// 
			this->cancelappointment_combobox->FormattingEnabled = true;
			this->cancelappointment_combobox->Location = System::Drawing::Point(3, 17);
			this->cancelappointment_combobox->Name = L"cancelappointment_combobox";
			this->cancelappointment_combobox->Size = System::Drawing::Size(325, 21);
			this->cancelappointment_combobox->TabIndex = 1;
			this->cancelappointment_combobox->DropDown += gcnew System::EventHandler(this, &Patient_Form::cancelappointment_combobox_DropDown);
			// 
			// make_appointment_panel
			// 
			this->make_appointment_panel->Controls->Add(this->dateTimePicker1);
			this->make_appointment_panel->Controls->Add(this->make_appointment_back_button);
			this->make_appointment_panel->Controls->Add(this->make_appointment_ok_button);
			this->make_appointment_panel->Controls->Add(this->make_appointment_panel_combo_box);
			this->make_appointment_panel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->make_appointment_panel->Location = System::Drawing::Point(0, 0);
			this->make_appointment_panel->Name = L"make_appointment_panel";
			this->make_appointment_panel->Size = System::Drawing::Size(690, 417);
			this->make_appointment_panel->TabIndex = 18;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(0, 53);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(325, 20);
			this->dateTimePicker1->TabIndex = 26;
			// 
			// make_appointment_back_button
			// 
			this->make_appointment_back_button->Location = System::Drawing::Point(146, 99);
			this->make_appointment_back_button->Name = L"make_appointment_back_button";
			this->make_appointment_back_button->Size = System::Drawing::Size(122, 42);
			this->make_appointment_back_button->TabIndex = 25;
			this->make_appointment_back_button->Text = L"Back";
			this->make_appointment_back_button->UseVisualStyleBackColor = true;
			this->make_appointment_back_button->Click += gcnew System::EventHandler(this, &Patient_Form::make_appointment_back_button_Click);
			// 
			// make_appointment_ok_button
			// 
			this->make_appointment_ok_button->Location = System::Drawing::Point(3, 99);
			this->make_appointment_ok_button->Name = L"make_appointment_ok_button";
			this->make_appointment_ok_button->Size = System::Drawing::Size(122, 42);
			this->make_appointment_ok_button->TabIndex = 24;
			this->make_appointment_ok_button->Text = L"Ok";
			this->make_appointment_ok_button->UseVisualStyleBackColor = true;
			this->make_appointment_ok_button->Click += gcnew System::EventHandler(this, &Patient_Form::make_appointment_ok_button_Click);
			// 
			// make_appointment_panel_combo_box
			// 
			this->make_appointment_panel_combo_box->FormattingEnabled = true;
			this->make_appointment_panel_combo_box->Location = System::Drawing::Point(3, 17);
			this->make_appointment_panel_combo_box->Name = L"make_appointment_panel_combo_box";
			this->make_appointment_panel_combo_box->Size = System::Drawing::Size(325, 21);
			this->make_appointment_panel_combo_box->TabIndex = 1;
			this->make_appointment_panel_combo_box->DropDown += gcnew System::EventHandler(this, &Patient_Form::make_appointment_panel_combo_box_DropDown);
			this->make_appointment_panel_combo_box->SelectedIndexChanged += gcnew System::EventHandler(this, &Patient_Form::make_appointment_panel_combo_box_SelectedIndexChanged);
			// 
			// patient_panel_cancel_button
			// 
			this->patient_panel_cancel_button->Location = System::Drawing::Point(15, 205);
			this->patient_panel_cancel_button->Name = L"patient_panel_cancel_button";
			this->patient_panel_cancel_button->Size = System::Drawing::Size(122, 42);
			this->patient_panel_cancel_button->TabIndex = 17;
			this->patient_panel_cancel_button->Text = L"Cancel";
			this->patient_panel_cancel_button->UseVisualStyleBackColor = true;
			this->patient_panel_cancel_button->Click += gcnew System::EventHandler(this, &Patient_Form::patient_panel_cancel_button_Click);
			// 
			// patient_panel_make_appointment_button
			// 
			this->patient_panel_make_appointment_button->Location = System::Drawing::Point(15, 142);
			this->patient_panel_make_appointment_button->Name = L"patient_panel_make_appointment_button";
			this->patient_panel_make_appointment_button->Size = System::Drawing::Size(122, 42);
			this->patient_panel_make_appointment_button->TabIndex = 16;
			this->patient_panel_make_appointment_button->Text = L"Make";
			this->patient_panel_make_appointment_button->UseVisualStyleBackColor = true;
			this->patient_panel_make_appointment_button->Click += gcnew System::EventHandler(this, &Patient_Form::patient_panel_make_appointment_button_Click);
			// 
			// patient_panel_complaint_button
			// 
			this->patient_panel_complaint_button->Location = System::Drawing::Point(15, 79);
			this->patient_panel_complaint_button->Name = L"patient_panel_complaint_button";
			this->patient_panel_complaint_button->Size = System::Drawing::Size(122, 42);
			this->patient_panel_complaint_button->TabIndex = 7;
			this->patient_panel_complaint_button->Text = L"Complain";
			this->patient_panel_complaint_button->UseVisualStyleBackColor = true;
			// 
			// patient_panel_view_detail_button
			// 
			this->patient_panel_view_detail_button->Location = System::Drawing::Point(15, 21);
			this->patient_panel_view_detail_button->Name = L"patient_panel_view_detail_button";
			this->patient_panel_view_detail_button->Size = System::Drawing::Size(122, 42);
			this->patient_panel_view_detail_button->TabIndex = 6;
			this->patient_panel_view_detail_button->Text = L"View details";
			this->patient_panel_view_detail_button->UseVisualStyleBackColor = true;
			// 
			// patient_panel_logout_button
			// 
			this->patient_panel_logout_button->Location = System::Drawing::Point(556, 3);
			this->patient_panel_logout_button->Name = L"patient_panel_logout_button";
			this->patient_panel_logout_button->Size = System::Drawing::Size(122, 42);
			this->patient_panel_logout_button->TabIndex = 5;
			this->patient_panel_logout_button->Text = L"Logout";
			this->patient_panel_logout_button->UseVisualStyleBackColor = true;
			this->patient_panel_logout_button->Click += gcnew System::EventHandler(this, &Patient_Form::patient_panel_logout_button_Click);
			// 
			// Patient_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(690, 417);
			this->Controls->Add(this->patient_panel);
			this->Name = L"Patient_Form";
			this->Text = L"Patient_Form";
			this->patient_panel->ResumeLayout(false);
			this->cancel_appointment_panel->ResumeLayout(false);
			this->make_appointment_panel->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

		//String^ rr = "Data Source=DESKTOP-9T5F2B3;Initial Catalog=mono;Integrated Security=True";
		String^ rr = "Data Source=localhost\\sqlexpress;Initial Catalog=newmono;Integrated Security=True";

	private: System::Void patient_panel_make_appointment_button_Click(System::Object^ sender, System::EventArgs^ e) {
		
			make_appointment_panel->Visible = true;
			
		
	}
		   Patient^ user=gcnew Patient();
	private: System::Void make_appointment_ok_button_Click(System::Object^ sender, System::EventArgs^ e) {
	
			DateTime now = DateTime::Now;
			DateTime selectedDate = dateTimePicker1->Value;
			String^ doctor_id = make_appointment_panel_combo_box->SelectedItem->ToString();
			String^ y_id = "";
			String^ y_name = "";
			int length = doctor_id->Length;
			bool t = false;
			for (int i = 0;i < length;i++)
			{
				if (doctor_id[i] == ':')
					t = true;
				else if (t == true)
					y_id += doctor_id[i];
			}
			for (int i = 0;i < length;i++)
			{
				if (doctor_id[i] == ' ')
					break;
				else
					y_name += doctor_id[i];
			}
			if (selectedDate <= now)
			{
				MessageBox::Show("invalid date", "Date error", MessageBoxButtons::OK);
			}
			else
			{
				String^ x = user->getid();
				user->make_appointment(selectedDate, y_id, x, y_name);
				make_appointment_panel_combo_box->Text = "";
			}
	
	 }
	private: System::Void make_appointment_back_button_Click(System::Object^ sender, System::EventArgs^ e) {

		make_appointment_panel->Visible = false;
		patient_panel->Visible = true;

	}
private: System::Void make_appointment_panel_combo_box_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void make_appointment_panel_combo_box_DropDown(System::Object^ sender, System::EventArgs^ e) {
	try {
		String^ connString = rr;
		SqlConnection sqlConn(connString);
		sqlConn.Open();
		String^ query = "SELECT [id], [first_name] FROM doctor";
		SqlCommand^ command = gcnew SqlCommand(query, % sqlConn);
		SqlDataReader^ reader = command->ExecuteReader();
		make_appointment_panel_combo_box->Items->Clear();
		while (reader->Read()) {
			String^ doctorInfo = reader->GetString(1) + " ID:" + reader->GetString(0) + "";
			make_appointment_panel_combo_box->Items->Add(doctorInfo);
		}
		reader->Close();
		sqlConn.Close();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Failed to connect to database", "Database Connection Error", MessageBoxButtons::OK);
	}
}
	private: System::Void cancel_appointment_ok_button_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ selectedOption = cancelappointment_combobox->SelectedItem->ToString();
		user->cancel_appointment(selectedOption);
	}
	private: System::Void cancel_appointment_back_button_Click(System::Object^ sender, System::EventArgs^ e) {
		cancel_appointment_panel->Visible = false;
		patient_panel->Visible = true;
	}

	private: System::Void cancelappointment_combobox_DropDown(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ patientId = user->getid();
			String^ connString = rr;
			SqlConnection sqlConn(connString);
			sqlConn.Open();
			String^ query = "SELECT [doctor_id], [date] ,[doctor_name]FROM appointment WHERE [patient_id] = @id";
			SqlCommand^ command = gcnew SqlCommand(query, % sqlConn);
			command->Parameters->AddWithValue("@id", patientId);
			SqlDataReader^ reader = command->ExecuteReader();
			cancelappointment_combobox->Items->Clear();
			while (reader->Read()) {
				String^ doctorId = reader->GetString(0);
				DateTime date = reader->GetDateTime(1);
				String^ doctorName = reader->GetString(2);
				String^ doctorInfo = "Doctor Name:" + doctorName + " docotor id;" + doctorId + " Date," + date.ToString("yyyy-MM-dd");
				cancelappointment_combobox->Items->Add(doctorInfo);
			}
			reader->Close();
			sqlConn.Close();
		}
		catch (Exception^ e)
		{
			MessageBox::Show("Failed to connect to database", "Database Connection Error", MessageBoxButtons::OK);
		}

	}
	  
		
			   
	private: System::Void patient_panel_cancel_button_Click(System::Object^ sender, System::EventArgs^ e) {
	
		cancel_appointment_panel->Visible = true;
		
	
		 
	}

private: System::Void patient_panel_logout_button_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Restart();
}
};
}
