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
		Patient_Form(Patient^ obj)
		{
			InitializeComponent();
			make_appointment_panel->Hide();
			cancel_appointment_panel->Hide();
			view_detail_panel->Hide();
			complain_panel->Hide();
			PharmacyPannel->Hide();
			dataGridView1->Hide();
			user = obj;
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

	protected:
	private: System::Windows::Forms::Button^ patient_panel_cancel_button;
	private: System::Windows::Forms::Button^ patient_panel_make_appointment_button;
	private: System::Windows::Forms::Button^ patient_panel_complaint_button;
	private: System::Windows::Forms::Button^ patient_panel_view_detail_button;
	private: System::Windows::Forms::Button^ patient_panel_logout_button;
	private: System::Windows::Forms::Panel^ make_appointment_panel;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;

	private: System::Windows::Forms::Button^ make_appointment_ok_button;
	private: System::Windows::Forms::ComboBox^ make_appointment_panel_combo_box;
	private: System::Windows::Forms::Panel^ cancel_appointment_panel;

	private: System::Windows::Forms::Button^ cancel_appointment_ok_button;
	private: System::Windows::Forms::ComboBox^ cancelappointment_combobox;
	private: System::Windows::Forms::Panel^ view_detail_panel;
	private: System::Windows::Forms::Button^ view_detail_panel_change_button;

	private: System::Windows::Forms::Label^ view_detail_panel_security_q_label;
	private: System::Windows::Forms::TextBox^ view_detail_security_q_textbox;
	private: System::Windows::Forms::Label^ view_detail_panel_password_label;
	private: System::Windows::Forms::TextBox^ view_detail_panel_password_textbox;
	private: System::Windows::Forms::Label^ view_detail_panel_phone_no_label;
	private: System::Windows::Forms::TextBox^ view_detail_panel_phone_no_textbox;
	private: System::Windows::Forms::Label^ view_detail_panel_age_label;
	private: System::Windows::Forms::Label^ view_detail_panel_insurance_no_label;
	private: System::Windows::Forms::Label^ view_detail_panel_id_label;
	private: System::Windows::Forms::Label^ view_detail_panel_last_name_label;
	private: System::Windows::Forms::Label^ view_detail_panel_first_name_label;
	private: System::Windows::Forms::TextBox^ view_detail_panel_last_name_textbox;
	private: System::Windows::Forms::TextBox^ view_detail_panel_id_textbox;
	private: System::Windows::Forms::TextBox^ view_detail_panel_insurance_no_textbox;
	private: System::Windows::Forms::TextBox^ view_detail_panel_age_textbox;
	private: System::Windows::Forms::TextBox^ view_detail_panel_first_name_textbox;
	private: System::Windows::Forms::Panel^ complain_panel;

	private: System::Windows::Forms::Button^ complain_panel_ok_button;
	private: System::Windows::Forms::TextBox^ complain_panel_textbox;
	private: System::Windows::Forms::Panel^ PharmacyPannel;

	private: System::Windows::Forms::Button^ DonePharmacyButton;
	private: System::Windows::Forms::CheckBox^ CheckBox8;
	private: System::Windows::Forms::CheckBox^ CheckBox7;
	private: System::Windows::Forms::CheckBox^ CheckBox4;
	private: System::Windows::Forms::CheckBox^ CheckBox3;
	private: System::Windows::Forms::CheckBox^ CheckBox2;
	private: System::Windows::Forms::CheckBox^ CheckBox1;
	private: System::Windows::Forms::Button^ Pharmacy;
	private: System::Windows::Forms::Button^ back;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;




















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
			this->cancel_appointment_panel = (gcnew System::Windows::Forms::Panel());
			this->cancelappointment_combobox = (gcnew System::Windows::Forms::ComboBox());
			this->cancel_appointment_ok_button = (gcnew System::Windows::Forms::Button());
			this->view_detail_panel = (gcnew System::Windows::Forms::Panel());
			this->view_detail_panel_change_button = (gcnew System::Windows::Forms::Button());
			this->view_detail_panel_security_q_label = (gcnew System::Windows::Forms::Label());
			this->view_detail_security_q_textbox = (gcnew System::Windows::Forms::TextBox());
			this->view_detail_panel_password_label = (gcnew System::Windows::Forms::Label());
			this->view_detail_panel_password_textbox = (gcnew System::Windows::Forms::TextBox());
			this->view_detail_panel_phone_no_label = (gcnew System::Windows::Forms::Label());
			this->view_detail_panel_phone_no_textbox = (gcnew System::Windows::Forms::TextBox());
			this->view_detail_panel_age_label = (gcnew System::Windows::Forms::Label());
			this->view_detail_panel_insurance_no_label = (gcnew System::Windows::Forms::Label());
			this->view_detail_panel_id_label = (gcnew System::Windows::Forms::Label());
			this->view_detail_panel_last_name_label = (gcnew System::Windows::Forms::Label());
			this->view_detail_panel_first_name_label = (gcnew System::Windows::Forms::Label());
			this->view_detail_panel_last_name_textbox = (gcnew System::Windows::Forms::TextBox());
			this->view_detail_panel_id_textbox = (gcnew System::Windows::Forms::TextBox());
			this->view_detail_panel_insurance_no_textbox = (gcnew System::Windows::Forms::TextBox());
			this->view_detail_panel_age_textbox = (gcnew System::Windows::Forms::TextBox());
			this->view_detail_panel_first_name_textbox = (gcnew System::Windows::Forms::TextBox());
			this->make_appointment_panel = (gcnew System::Windows::Forms::Panel());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->make_appointment_ok_button = (gcnew System::Windows::Forms::Button());
			this->make_appointment_panel_combo_box = (gcnew System::Windows::Forms::ComboBox());
			this->patient_panel_cancel_button = (gcnew System::Windows::Forms::Button());
			this->patient_panel_make_appointment_button = (gcnew System::Windows::Forms::Button());
			this->patient_panel_complaint_button = (gcnew System::Windows::Forms::Button());
			this->patient_panel_view_detail_button = (gcnew System::Windows::Forms::Button());
			this->patient_panel_logout_button = (gcnew System::Windows::Forms::Button());
			this->complain_panel = (gcnew System::Windows::Forms::Panel());
			this->complain_panel_ok_button = (gcnew System::Windows::Forms::Button());
			this->complain_panel_textbox = (gcnew System::Windows::Forms::TextBox());
			this->PharmacyPannel = (gcnew System::Windows::Forms::Panel());
			this->DonePharmacyButton = (gcnew System::Windows::Forms::Button());
			this->CheckBox8 = (gcnew System::Windows::Forms::CheckBox());
			this->CheckBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->CheckBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->CheckBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->CheckBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->CheckBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->Pharmacy = (gcnew System::Windows::Forms::Button());
			this->back = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->cancel_appointment_panel->SuspendLayout();
			this->view_detail_panel->SuspendLayout();
			this->make_appointment_panel->SuspendLayout();
			this->complain_panel->SuspendLayout();
			this->PharmacyPannel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// cancel_appointment_panel
			// 
			this->cancel_appointment_panel->Controls->Add(this->cancelappointment_combobox);
			this->cancel_appointment_panel->Controls->Add(this->cancel_appointment_ok_button);
			this->cancel_appointment_panel->Location = System::Drawing::Point(546, 0);
			this->cancel_appointment_panel->Name = L"cancel_appointment_panel";
			this->cancel_appointment_panel->Size = System::Drawing::Size(341, 135);
			this->cancel_appointment_panel->TabIndex = 28;
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
			// cancel_appointment_ok_button
			// 
			this->cancel_appointment_ok_button->Location = System::Drawing::Point(3, 64);
			this->cancel_appointment_ok_button->Name = L"cancel_appointment_ok_button";
			this->cancel_appointment_ok_button->Size = System::Drawing::Size(122, 42);
			this->cancel_appointment_ok_button->TabIndex = 24;
			this->cancel_appointment_ok_button->Text = L"Ok";
			this->cancel_appointment_ok_button->UseVisualStyleBackColor = true;
			this->cancel_appointment_ok_button->Click += gcnew System::EventHandler(this, &Patient_Form::cancel_appointment_ok_button_Click);
			// 
			// view_detail_panel
			// 
			this->view_detail_panel->Controls->Add(this->view_detail_panel_change_button);
			this->view_detail_panel->Controls->Add(this->view_detail_panel_security_q_label);
			this->view_detail_panel->Controls->Add(this->view_detail_security_q_textbox);
			this->view_detail_panel->Controls->Add(this->view_detail_panel_password_label);
			this->view_detail_panel->Controls->Add(this->view_detail_panel_password_textbox);
			this->view_detail_panel->Controls->Add(this->view_detail_panel_phone_no_label);
			this->view_detail_panel->Controls->Add(this->view_detail_panel_phone_no_textbox);
			this->view_detail_panel->Controls->Add(this->view_detail_panel_age_label);
			this->view_detail_panel->Controls->Add(this->view_detail_panel_insurance_no_label);
			this->view_detail_panel->Controls->Add(this->view_detail_panel_id_label);
			this->view_detail_panel->Controls->Add(this->view_detail_panel_last_name_label);
			this->view_detail_panel->Controls->Add(this->view_detail_panel_first_name_label);
			this->view_detail_panel->Controls->Add(this->view_detail_panel_last_name_textbox);
			this->view_detail_panel->Controls->Add(this->view_detail_panel_id_textbox);
			this->view_detail_panel->Controls->Add(this->view_detail_panel_insurance_no_textbox);
			this->view_detail_panel->Controls->Add(this->view_detail_panel_age_textbox);
			this->view_detail_panel->Controls->Add(this->view_detail_panel_first_name_textbox);
			this->view_detail_panel->Location = System::Drawing::Point(140, 0);
			this->view_detail_panel->Name = L"view_detail_panel";
			this->view_detail_panel->Size = System::Drawing::Size(400, 391);
			this->view_detail_panel->TabIndex = 29;
			// 
			// view_detail_panel_change_button
			// 
			this->view_detail_panel_change_button->Location = System::Drawing::Point(43, 326);
			this->view_detail_panel_change_button->Name = L"view_detail_panel_change_button";
			this->view_detail_panel_change_button->Size = System::Drawing::Size(122, 42);
			this->view_detail_panel_change_button->TabIndex = 40;
			this->view_detail_panel_change_button->Text = L"Change";
			this->view_detail_panel_change_button->UseVisualStyleBackColor = true;
			this->view_detail_panel_change_button->Click += gcnew System::EventHandler(this, &Patient_Form::view_detail_panel_change_button_Click);
			// 
			// view_detail_panel_security_q_label
			// 
			this->view_detail_panel_security_q_label->AutoSize = true;
			this->view_detail_panel_security_q_label->Location = System::Drawing::Point(48, 293);
			this->view_detail_panel_security_q_label->Name = L"view_detail_panel_security_q_label";
			this->view_detail_panel_security_q_label->Size = System::Drawing::Size(88, 13);
			this->view_detail_panel_security_q_label->TabIndex = 37;
			this->view_detail_panel_security_q_label->Text = L"Security question";
			// 
			// view_detail_security_q_textbox
			// 
			this->view_detail_security_q_textbox->Location = System::Drawing::Point(231, 286);
			this->view_detail_security_q_textbox->Name = L"view_detail_security_q_textbox";
			this->view_detail_security_q_textbox->Size = System::Drawing::Size(142, 20);
			this->view_detail_security_q_textbox->TabIndex = 36;
			// 
			// view_detail_panel_password_label
			// 
			this->view_detail_panel_password_label->AutoSize = true;
			this->view_detail_panel_password_label->Location = System::Drawing::Point(48, 253);
			this->view_detail_panel_password_label->Name = L"view_detail_panel_password_label";
			this->view_detail_panel_password_label->Size = System::Drawing::Size(53, 13);
			this->view_detail_panel_password_label->TabIndex = 33;
			this->view_detail_panel_password_label->Text = L"Password";
			// 
			// view_detail_panel_password_textbox
			// 
			this->view_detail_panel_password_textbox->Location = System::Drawing::Point(231, 246);
			this->view_detail_panel_password_textbox->Name = L"view_detail_panel_password_textbox";
			this->view_detail_panel_password_textbox->Size = System::Drawing::Size(142, 20);
			this->view_detail_panel_password_textbox->TabIndex = 32;
			// 
			// view_detail_panel_phone_no_label
			// 
			this->view_detail_panel_phone_no_label->AutoSize = true;
			this->view_detail_panel_phone_no_label->Location = System::Drawing::Point(48, 215);
			this->view_detail_panel_phone_no_label->Name = L"view_detail_panel_phone_no_label";
			this->view_detail_panel_phone_no_label->Size = System::Drawing::Size(53, 13);
			this->view_detail_panel_phone_no_label->TabIndex = 31;
			this->view_detail_panel_phone_no_label->Text = L"Phone no";
			// 
			// view_detail_panel_phone_no_textbox
			// 
			this->view_detail_panel_phone_no_textbox->Location = System::Drawing::Point(231, 208);
			this->view_detail_panel_phone_no_textbox->Name = L"view_detail_panel_phone_no_textbox";
			this->view_detail_panel_phone_no_textbox->Size = System::Drawing::Size(142, 20);
			this->view_detail_panel_phone_no_textbox->TabIndex = 30;
			// 
			// view_detail_panel_age_label
			// 
			this->view_detail_panel_age_label->AutoSize = true;
			this->view_detail_panel_age_label->Location = System::Drawing::Point(48, 177);
			this->view_detail_panel_age_label->Name = L"view_detail_panel_age_label";
			this->view_detail_panel_age_label->Size = System::Drawing::Size(26, 13);
			this->view_detail_panel_age_label->TabIndex = 29;
			this->view_detail_panel_age_label->Text = L"Age";
			// 
			// view_detail_panel_insurance_no_label
			// 
			this->view_detail_panel_insurance_no_label->AutoSize = true;
			this->view_detail_panel_insurance_no_label->Location = System::Drawing::Point(48, 138);
			this->view_detail_panel_insurance_no_label->Name = L"view_detail_panel_insurance_no_label";
			this->view_detail_panel_insurance_no_label->Size = System::Drawing::Size(69, 13);
			this->view_detail_panel_insurance_no_label->TabIndex = 28;
			this->view_detail_panel_insurance_no_label->Text = L"Insurance no";
			// 
			// view_detail_panel_id_label
			// 
			this->view_detail_panel_id_label->AutoSize = true;
			this->view_detail_panel_id_label->Location = System::Drawing::Point(48, 107);
			this->view_detail_panel_id_label->Name = L"view_detail_panel_id_label";
			this->view_detail_panel_id_label->Size = System::Drawing::Size(56, 13);
			this->view_detail_panel_id_label->TabIndex = 27;
			this->view_detail_panel_id_label->Text = L"ID number";
			// 
			// view_detail_panel_last_name_label
			// 
			this->view_detail_panel_last_name_label->AutoSize = true;
			this->view_detail_panel_last_name_label->Location = System::Drawing::Point(48, 72);
			this->view_detail_panel_last_name_label->Name = L"view_detail_panel_last_name_label";
			this->view_detail_panel_last_name_label->Size = System::Drawing::Size(58, 13);
			this->view_detail_panel_last_name_label->TabIndex = 26;
			this->view_detail_panel_last_name_label->Text = L"Last Name";
			// 
			// view_detail_panel_first_name_label
			// 
			this->view_detail_panel_first_name_label->AutoSize = true;
			this->view_detail_panel_first_name_label->Location = System::Drawing::Point(48, 33);
			this->view_detail_panel_first_name_label->Name = L"view_detail_panel_first_name_label";
			this->view_detail_panel_first_name_label->Size = System::Drawing::Size(57, 13);
			this->view_detail_panel_first_name_label->TabIndex = 25;
			this->view_detail_panel_first_name_label->Text = L"First Name";
			// 
			// view_detail_panel_last_name_textbox
			// 
			this->view_detail_panel_last_name_textbox->Location = System::Drawing::Point(231, 65);
			this->view_detail_panel_last_name_textbox->Name = L"view_detail_panel_last_name_textbox";
			this->view_detail_panel_last_name_textbox->Size = System::Drawing::Size(142, 20);
			this->view_detail_panel_last_name_textbox->TabIndex = 24;
			// 
			// view_detail_panel_id_textbox
			// 
			this->view_detail_panel_id_textbox->Enabled = false;
			this->view_detail_panel_id_textbox->Location = System::Drawing::Point(231, 100);
			this->view_detail_panel_id_textbox->Name = L"view_detail_panel_id_textbox";
			this->view_detail_panel_id_textbox->Size = System::Drawing::Size(142, 20);
			this->view_detail_panel_id_textbox->TabIndex = 23;
			// 
			// view_detail_panel_insurance_no_textbox
			// 
			this->view_detail_panel_insurance_no_textbox->Location = System::Drawing::Point(231, 135);
			this->view_detail_panel_insurance_no_textbox->Name = L"view_detail_panel_insurance_no_textbox";
			this->view_detail_panel_insurance_no_textbox->Size = System::Drawing::Size(142, 20);
			this->view_detail_panel_insurance_no_textbox->TabIndex = 22;
			// 
			// view_detail_panel_age_textbox
			// 
			this->view_detail_panel_age_textbox->Location = System::Drawing::Point(231, 170);
			this->view_detail_panel_age_textbox->Name = L"view_detail_panel_age_textbox";
			this->view_detail_panel_age_textbox->Size = System::Drawing::Size(142, 20);
			this->view_detail_panel_age_textbox->TabIndex = 21;
			// 
			// view_detail_panel_first_name_textbox
			// 
			this->view_detail_panel_first_name_textbox->Location = System::Drawing::Point(231, 30);
			this->view_detail_panel_first_name_textbox->Name = L"view_detail_panel_first_name_textbox";
			this->view_detail_panel_first_name_textbox->Size = System::Drawing::Size(142, 20);
			this->view_detail_panel_first_name_textbox->TabIndex = 20;
			// 
			// make_appointment_panel
			// 
			this->make_appointment_panel->Controls->Add(this->dateTimePicker1);
			this->make_appointment_panel->Controls->Add(this->make_appointment_ok_button);
			this->make_appointment_panel->Controls->Add(this->make_appointment_panel_combo_box);
			this->make_appointment_panel->Location = System::Drawing::Point(546, 143);
			this->make_appointment_panel->Name = L"make_appointment_panel";
			this->make_appointment_panel->Size = System::Drawing::Size(338, 163);
			this->make_appointment_panel->TabIndex = 18;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(0, 53);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(325, 20);
			this->dateTimePicker1->TabIndex = 26;
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
			this->patient_panel_cancel_button->Location = System::Drawing::Point(12, 208);
			this->patient_panel_cancel_button->Name = L"patient_panel_cancel_button";
			this->patient_panel_cancel_button->Size = System::Drawing::Size(122, 42);
			this->patient_panel_cancel_button->TabIndex = 17;
			this->patient_panel_cancel_button->Text = L"Cancel";
			this->patient_panel_cancel_button->UseVisualStyleBackColor = true;
			this->patient_panel_cancel_button->Click += gcnew System::EventHandler(this, &Patient_Form::patient_panel_cancel_button_Click);
			// 
			// patient_panel_make_appointment_button
			// 
			this->patient_panel_make_appointment_button->Location = System::Drawing::Point(12, 145);
			this->patient_panel_make_appointment_button->Name = L"patient_panel_make_appointment_button";
			this->patient_panel_make_appointment_button->Size = System::Drawing::Size(122, 42);
			this->patient_panel_make_appointment_button->TabIndex = 16;
			this->patient_panel_make_appointment_button->Text = L"Make";
			this->patient_panel_make_appointment_button->UseVisualStyleBackColor = true;
			this->patient_panel_make_appointment_button->Click += gcnew System::EventHandler(this, &Patient_Form::patient_panel_make_appointment_button_Click);
			// 
			// patient_panel_complaint_button
			// 
			this->patient_panel_complaint_button->Location = System::Drawing::Point(12, 82);
			this->patient_panel_complaint_button->Name = L"patient_panel_complaint_button";
			this->patient_panel_complaint_button->Size = System::Drawing::Size(122, 42);
			this->patient_panel_complaint_button->TabIndex = 7;
			this->patient_panel_complaint_button->Text = L"Complain";
			this->patient_panel_complaint_button->UseVisualStyleBackColor = true;
			this->patient_panel_complaint_button->Click += gcnew System::EventHandler(this, &Patient_Form::patient_panel_complaint_button_Click);
			// 
			// patient_panel_view_detail_button
			// 
			this->patient_panel_view_detail_button->Location = System::Drawing::Point(12, 24);
			this->patient_panel_view_detail_button->Name = L"patient_panel_view_detail_button";
			this->patient_panel_view_detail_button->Size = System::Drawing::Size(122, 42);
			this->patient_panel_view_detail_button->TabIndex = 6;
			this->patient_panel_view_detail_button->Text = L"View details";
			this->patient_panel_view_detail_button->UseVisualStyleBackColor = true;
			this->patient_panel_view_detail_button->Click += gcnew System::EventHandler(this, &Patient_Form::patient_panel_view_detail_button_Click);
			// 
			// patient_panel_logout_button
			// 
			this->patient_panel_logout_button->Location = System::Drawing::Point(12, 421);
			this->patient_panel_logout_button->Name = L"patient_panel_logout_button";
			this->patient_panel_logout_button->Size = System::Drawing::Size(122, 42);
			this->patient_panel_logout_button->TabIndex = 5;
			this->patient_panel_logout_button->Text = L"Logout";
			this->patient_panel_logout_button->UseVisualStyleBackColor = true;
			this->patient_panel_logout_button->Click += gcnew System::EventHandler(this, &Patient_Form::patient_panel_logout_button_Click);
			// 
			// complain_panel
			// 
			this->complain_panel->Controls->Add(this->complain_panel_ok_button);
			this->complain_panel->Controls->Add(this->complain_panel_textbox);
			this->complain_panel->Location = System::Drawing::Point(909, 12);
			this->complain_panel->Name = L"complain_panel";
			this->complain_panel->Size = System::Drawing::Size(232, 169);
			this->complain_panel->TabIndex = 30;
			// 
			// complain_panel_ok_button
			// 
			this->complain_panel_ok_button->Location = System::Drawing::Point(38, 81);
			this->complain_panel_ok_button->Name = L"complain_panel_ok_button";
			this->complain_panel_ok_button->Size = System::Drawing::Size(122, 42);
			this->complain_panel_ok_button->TabIndex = 22;
			this->complain_panel_ok_button->Text = L"Ok";
			this->complain_panel_ok_button->UseVisualStyleBackColor = true;
			this->complain_panel_ok_button->Click += gcnew System::EventHandler(this, &Patient_Form::complain_panel_ok_button_Click);
			// 
			// complain_panel_textbox
			// 
			this->complain_panel_textbox->Location = System::Drawing::Point(38, 33);
			this->complain_panel_textbox->Name = L"complain_panel_textbox";
			this->complain_panel_textbox->Size = System::Drawing::Size(142, 20);
			this->complain_panel_textbox->TabIndex = 21;
			// 
			// PharmacyPannel
			// 
			this->PharmacyPannel->Controls->Add(this->DonePharmacyButton);
			this->PharmacyPannel->Controls->Add(this->CheckBox8);
			this->PharmacyPannel->Controls->Add(this->CheckBox7);
			this->PharmacyPannel->Controls->Add(this->CheckBox4);
			this->PharmacyPannel->Controls->Add(this->CheckBox3);
			this->PharmacyPannel->Controls->Add(this->CheckBox2);
			this->PharmacyPannel->Controls->Add(this->CheckBox1);
			this->PharmacyPannel->Location = System::Drawing::Point(558, 326);
			this->PharmacyPannel->Name = L"PharmacyPannel";
			this->PharmacyPannel->Size = System::Drawing::Size(366, 99);
			this->PharmacyPannel->TabIndex = 31;
			// 
			// DonePharmacyButton
			// 
			this->DonePharmacyButton->Location = System::Drawing::Point(241, 18);
			this->DonePharmacyButton->Name = L"DonePharmacyButton";
			this->DonePharmacyButton->Size = System::Drawing::Size(122, 42);
			this->DonePharmacyButton->TabIndex = 8;
			this->DonePharmacyButton->Text = L"Done";
			this->DonePharmacyButton->UseVisualStyleBackColor = true;
			this->DonePharmacyButton->Click += gcnew System::EventHandler(this, &Patient_Form::DonePharmacyButton_Click);
			// 
			// CheckBox8
			// 
			this->CheckBox8->AutoSize = true;
			this->CheckBox8->Location = System::Drawing::Point(122, 58);
			this->CheckBox8->Name = L"CheckBox8";
			this->CheckBox8->Size = System::Drawing::Size(87, 17);
			this->CheckBox8->TabIndex = 7;
			this->CheckBox8->Text = L"Frisium 50mg";
			this->CheckBox8->UseVisualStyleBackColor = true;
			// 
			// CheckBox7
			// 
			this->CheckBox7->AutoSize = true;
			this->CheckBox7->Location = System::Drawing::Point(122, 35);
			this->CheckBox7->Name = L"CheckBox7";
			this->CheckBox7->Size = System::Drawing::Size(87, 17);
			this->CheckBox7->TabIndex = 5;
			this->CheckBox7->Text = L"Caflam 50mg";
			this->CheckBox7->UseVisualStyleBackColor = true;
			// 
			// CheckBox4
			// 
			this->CheckBox4->AutoSize = true;
			this->CheckBox4->Location = System::Drawing::Point(9, 32);
			this->CheckBox4->Name = L"CheckBox4";
			this->CheckBox4->Size = System::Drawing::Size(98, 17);
			this->CheckBox4->TabIndex = 3;
			this->CheckBox4->Text = L"Novidat 500mg";
			this->CheckBox4->UseVisualStyleBackColor = true;
			// 
			// CheckBox3
			// 
			this->CheckBox3->AutoSize = true;
			this->CheckBox3->Location = System::Drawing::Point(9, 55);
			this->CheckBox3->Name = L"CheckBox3";
			this->CheckBox3->Size = System::Drawing::Size(88, 17);
			this->CheckBox3->TabIndex = 2;
			this->CheckBox3->Text = L"Flagyl 400mg";
			this->CheckBox3->UseVisualStyleBackColor = true;
			// 
			// CheckBox2
			// 
			this->CheckBox2->AutoSize = true;
			this->CheckBox2->Location = System::Drawing::Point(9, 10);
			this->CheckBox2->Name = L"CheckBox2";
			this->CheckBox2->Size = System::Drawing::Size(104, 17);
			this->CheckBox2->TabIndex = 1;
			this->CheckBox2->Text = L"Koeziday 300mg";
			this->CheckBox2->UseVisualStyleBackColor = true;
			// 
			// CheckBox1
			// 
			this->CheckBox1->AutoSize = true;
			this->CheckBox1->Location = System::Drawing::Point(122, 12);
			this->CheckBox1->Name = L"CheckBox1";
			this->CheckBox1->Size = System::Drawing::Size(120, 17);
			this->CheckBox1->TabIndex = 0;
			this->CheckBox1->Text = L"Paracetamol 500mg";
			this->CheckBox1->UseVisualStyleBackColor = true;
			// 
			// Pharmacy
			// 
			this->Pharmacy->Location = System::Drawing::Point(12, 264);
			this->Pharmacy->Name = L"Pharmacy";
			this->Pharmacy->Size = System::Drawing::Size(122, 42);
			this->Pharmacy->TabIndex = 32;
			this->Pharmacy->Text = L"Pharmacy";
			this->Pharmacy->UseVisualStyleBackColor = true;
			this->Pharmacy->Click += gcnew System::EventHandler(this, &Patient_Form::Pharmacy_Click);
			// 
			// back
			// 
			this->back->Location = System::Drawing::Point(12, 313);
			this->back->Name = L"back";
			this->back->Size = System::Drawing::Size(122, 42);
			this->back->TabIndex = 33;
			this->back->Text = L"Back";
			this->back->UseVisualStyleBackColor = true;
			this->back->Click += gcnew System::EventHandler(this, &Patient_Form::back_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(930, 196);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(286, 286);
			this->dataGridView1->TabIndex = 34;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 367);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(122, 42);
			this->button1->TabIndex = 35;
			this->button1->Text = L"Medical";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Patient_Form::button1_Click);
			// 
			// Patient_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1274, 602);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->back);
			this->Controls->Add(this->Pharmacy);
			this->Controls->Add(this->PharmacyPannel);
			this->Controls->Add(this->complain_panel);
			this->Controls->Add(this->make_appointment_panel);
			this->Controls->Add(this->cancel_appointment_panel);
			this->Controls->Add(this->view_detail_panel);
			this->Controls->Add(this->patient_panel_view_detail_button);
			this->Controls->Add(this->patient_panel_logout_button);
			this->Controls->Add(this->patient_panel_cancel_button);
			this->Controls->Add(this->patient_panel_complaint_button);
			this->Controls->Add(this->patient_panel_make_appointment_button);
			this->Name = L"Patient_Form";
			this->Text = L"Patient_Form";
			this->cancel_appointment_panel->ResumeLayout(false);
			this->view_detail_panel->ResumeLayout(false);
			this->view_detail_panel->PerformLayout();
			this->make_appointment_panel->ResumeLayout(false);
			this->complain_panel->ResumeLayout(false);
			this->complain_panel->PerformLayout();
			this->PharmacyPannel->ResumeLayout(false);
			this->PharmacyPannel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		String^ rr = "Data Source=DESKTOP-9T5F2B3;Initial Catalog=mono;Integrated Security=True";
		//String^ rr = "Data Source=localhost\\sqlexpress;Initial Catalog=newmono;Integrated Security=True";

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
		private: System::Void view_detail_panel_change_button_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			String^ f = view_detail_panel_first_name_textbox->Text;
			String^ l = view_detail_panel_last_name_textbox->Text;
			String^ id = view_detail_panel_id_textbox->Text;
			String^ in = view_detail_panel_insurance_no_textbox->Text;
			String^ a = view_detail_panel_age_textbox->Text;
			String^ ph = view_detail_panel_phone_no_textbox->Text;
			String^ p = view_detail_panel_password_textbox->Text;
			String^ se = view_detail_security_q_textbox->Text;
			String^ con = view_detail_panel_password_textbox->Text;
			user->change_detail(f, l, id, p, in, se, a, ph);
		}
	private: System::Void patient_panel_view_detail_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		view_detail_panel->Visible = true; // show the panel
		view_detail_panel_first_name_textbox->Text = user->first_name;
		view_detail_panel_last_name_textbox->Text = user->last_name;
		view_detail_panel_id_textbox->Text = user->id;
		view_detail_panel_insurance_no_textbox->Text = user->insurance_no;
		view_detail_panel_age_textbox->Text = user->age;
		view_detail_panel_phone_no_textbox->Text = user->phone_no;
		view_detail_panel_password_textbox->Text = user->password;
		view_detail_security_q_textbox->Text = user->security_q;
	}
	private: System::Void view_detail_panel_back_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		view_detail_panel->Visible = false;
	}
private: System::Void complain_panel_ok_button_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ y = complain_panel_textbox->Text;
	user->complain(y);
	complain_panel_textbox->Text = "";
}
private: System::Void complain_panel_back_button_Click(System::Object^ sender, System::EventArgs^ e) {
	complain_panel->Hide();
}
private: System::Void patient_panel_complaint_button_Click(System::Object^ sender, System::EventArgs^ e) {
	complain_panel->Show();
}
private: System::Void Pharmacy_Click(System::Object^ sender, System::EventArgs^ e) {
	PharmacyPannel->Show();

}
private: System::Void BackButton_Click(System::Object^ sender, System::EventArgs^ e) {
	PharmacyPannel->Hide();
}
private: System::Void DonePharmacyButton_Click(System::Object^ sender, System::EventArgs^ e) {
	int checkedBoxes = 0;
	if (CheckBox1->Checked) {
		checkedBoxes += 500;
	}
	if (CheckBox2->Checked) {
		checkedBoxes += 500;
	}
	if (CheckBox3->Checked) {
		checkedBoxes += 500;
	}
	if (CheckBox4->Checked) {
		checkedBoxes += 500;
	}
	if (CheckBox7->Checked) {
		checkedBoxes += 500;
	}
	if (CheckBox8->Checked) {
		checkedBoxes += 500;
	}
	MessageBox::Show("Total Amount to be paid is: " + checkedBoxes);

}
private: System::Void back_Click(System::Object^ sender, System::EventArgs^ e) {
	make_appointment_panel->Hide();
	cancel_appointment_panel->Hide();
	view_detail_panel->Hide();
	complain_panel->Hide();
	PharmacyPannel->Hide();
	dataGridView1->Hide();

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Show();
	String^ patientId = user->getid();
	String^ connString = rr;
	SqlConnection sqlConn(connString);
	SqlConnection^ connection = gcnew SqlConnection(connString);

	// SQL query to retrieve appointment history
	String^ query = "SELECT history FROM appointment WHERE patient_id = @PatientID";

	// Create a SqlCommand object
	SqlCommand^ cmd2 = gcnew SqlCommand(query, connection);

	// Add the patient ID parameter to the command
	cmd2->Parameters->AddWithValue("@PatientID", patientId);

	// Create a SqlDataAdapter to fetch the data
	SqlDataAdapter^ adapter = gcnew SqlDataAdapter(cmd2);

	// Create a DataSet to hold the retrieved data
	DataSet^ appointmentDataSet = gcnew DataSet();

	// Open the database connection
	connection->Open();

	// Fill the DataSet with the appointment data
	adapter->Fill(appointmentDataSet);

	// Close the database connection
	connection->Close();

	// Display the appointment data in a DataGridView (or any other view)
	// Assuming you have a DataGridView control named "dataGridView1" on your form
	dataGridView1->DataSource = appointmentDataSet->Tables[0];

}
};
}
