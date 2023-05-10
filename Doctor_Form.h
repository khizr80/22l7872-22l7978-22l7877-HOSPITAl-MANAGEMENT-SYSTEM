#pragma once
#include "User.h"
#include"doctor.h"
#include "admin.h"

using namespace std;
namespace temp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Doctor_Form
	/// </summary>
	public ref class Doctor_Form : public System::Windows::Forms::Form
	{
	public:

		String^ rr = "Data Source=DESKTOP-9T5F2B3;Initial Catalog=mono;Integrated Security=True";

	public:

		Doctor_Form(doctor^ obj)
		{

			userd = obj;
			InitializeComponent();
			view_detail_panel->Hide();
			complain_panel->Hide();
			file_make->Hide();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Doctor_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ complain_panel_ok_button;
	private: System::Windows::Forms::TextBox^ complain_panel_textbox;
	private: System::Windows::Forms::Panel^ complain_panel;
	private: System::Windows::Forms::Button^ doctor_panel_complain_button;
	protected:
	private: System::Windows::Forms::Button^ doctor_panel_logout_button;
	private: System::Windows::Forms::Button^ doctor_panel_view_detail;


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
	private: System::Windows::Forms::Button^ back;
	private: System::Windows::Forms::Panel^ file_make;
	private: System::Windows::Forms::TextBox^ hhis;


	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ sflt;

	private: System::Windows::Forms::TextBox^ sfnt;



	private: System::Windows::Forms::TextBox^ ph_t;

	private: System::Windows::Forms::TextBox^ a_t;
	private: System::Windows::Forms::TextBox^ l_t;
	private: System::Windows::Forms::TextBox^ f_t;
	private: System::Windows::Forms::Button^ file_make_b;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ id_t;
	private: System::Windows::Forms::TextBox^ d_t;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button2;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->doctor_panel_complain_button = (gcnew System::Windows::Forms::Button());
			this->doctor_panel_logout_button = (gcnew System::Windows::Forms::Button());
			this->doctor_panel_view_detail = (gcnew System::Windows::Forms::Button());
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
			this->complain_panel = (gcnew System::Windows::Forms::Panel());
			this->complain_panel_ok_button = (gcnew System::Windows::Forms::Button());
			this->complain_panel_textbox = (gcnew System::Windows::Forms::TextBox());
			this->back = (gcnew System::Windows::Forms::Button());
			this->file_make = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->id_t = (gcnew System::Windows::Forms::TextBox());
			this->d_t = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->sflt = (gcnew System::Windows::Forms::TextBox());
			this->sfnt = (gcnew System::Windows::Forms::TextBox());
			this->ph_t = (gcnew System::Windows::Forms::TextBox());
			this->a_t = (gcnew System::Windows::Forms::TextBox());
			this->l_t = (gcnew System::Windows::Forms::TextBox());
			this->f_t = (gcnew System::Windows::Forms::TextBox());
			this->hhis = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->file_make_b = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->view_detail_panel->SuspendLayout();
			this->complain_panel->SuspendLayout();
			this->file_make->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// doctor_panel_complain_button
			// 
			this->doctor_panel_complain_button->Location = System::Drawing::Point(18, 79);
			this->doctor_panel_complain_button->Name = L"doctor_panel_complain_button";
			this->doctor_panel_complain_button->Size = System::Drawing::Size(122, 42);
			this->doctor_panel_complain_button->TabIndex = 18;
			this->doctor_panel_complain_button->Text = L"Complain";
			this->doctor_panel_complain_button->UseVisualStyleBackColor = true;
			this->doctor_panel_complain_button->Click += gcnew System::EventHandler(this, &Doctor_Form::doctor_panel_complain_button_Click);
			// 
			// doctor_panel_logout_button
			// 
			this->doctor_panel_logout_button->Location = System::Drawing::Point(18, 353);
			this->doctor_panel_logout_button->Name = L"doctor_panel_logout_button";
			this->doctor_panel_logout_button->Size = System::Drawing::Size(122, 42);
			this->doctor_panel_logout_button->TabIndex = 17;
			this->doctor_panel_logout_button->Text = L"Logout";
			this->doctor_panel_logout_button->UseVisualStyleBackColor = true;
			this->doctor_panel_logout_button->Click += gcnew System::EventHandler(this, &Doctor_Form::doctor_panel_logout_button_Click);
			// 
			// doctor_panel_view_detail
			// 
			this->doctor_panel_view_detail->Location = System::Drawing::Point(18, 11);
			this->doctor_panel_view_detail->Name = L"doctor_panel_view_detail";
			this->doctor_panel_view_detail->Size = System::Drawing::Size(122, 42);
			this->doctor_panel_view_detail->TabIndex = 16;
			this->doctor_panel_view_detail->Text = L"view detail";
			this->doctor_panel_view_detail->UseVisualStyleBackColor = true;
			this->doctor_panel_view_detail->Click += gcnew System::EventHandler(this, &Doctor_Form::doctor_panel_view_detail_Click);
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
			this->view_detail_panel->Location = System::Drawing::Point(167, 11);
			this->view_detail_panel->Name = L"view_detail_panel";
			this->view_detail_panel->Size = System::Drawing::Size(386, 384);
			this->view_detail_panel->TabIndex = 29;
			// 
			// view_detail_panel_change_button
			// 
			this->view_detail_panel_change_button->Location = System::Drawing::Point(55, 327);
			this->view_detail_panel_change_button->Name = L"view_detail_panel_change_button";
			this->view_detail_panel_change_button->Size = System::Drawing::Size(122, 42);
			this->view_detail_panel_change_button->TabIndex = 40;
			this->view_detail_panel_change_button->Text = L"Change";
			this->view_detail_panel_change_button->UseVisualStyleBackColor = true;
			this->view_detail_panel_change_button->Click += gcnew System::EventHandler(this, &Doctor_Form::view_detail_panel_change_button_Click);
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
			// complain_panel
			// 
			this->complain_panel->Controls->Add(this->complain_panel_ok_button);
			this->complain_panel->Controls->Add(this->complain_panel_textbox);
			this->complain_panel->Location = System::Drawing::Point(265, 401);
			this->complain_panel->Name = L"complain_panel";
			this->complain_panel->Size = System::Drawing::Size(232, 169);
			this->complain_panel->TabIndex = 31;
			// 
			// complain_panel_ok_button
			// 
			this->complain_panel_ok_button->Location = System::Drawing::Point(38, 81);
			this->complain_panel_ok_button->Name = L"complain_panel_ok_button";
			this->complain_panel_ok_button->Size = System::Drawing::Size(122, 42);
			this->complain_panel_ok_button->TabIndex = 22;
			this->complain_panel_ok_button->Text = L"Ok";
			this->complain_panel_ok_button->UseVisualStyleBackColor = true;
			this->complain_panel_ok_button->Click += gcnew System::EventHandler(this, &Doctor_Form::complain_panel_ok_button_Click);
			// 
			// complain_panel_textbox
			// 
			this->complain_panel_textbox->Location = System::Drawing::Point(38, 33);
			this->complain_panel_textbox->Name = L"complain_panel_textbox";
			this->complain_panel_textbox->Size = System::Drawing::Size(142, 20);
			this->complain_panel_textbox->TabIndex = 21;
			// 
			// back
			// 
			this->back->Location = System::Drawing::Point(18, 211);
			this->back->Name = L"back";
			this->back->Size = System::Drawing::Size(122, 42);
			this->back->TabIndex = 34;
			this->back->Text = L"Back";
			this->back->UseVisualStyleBackColor = true;
			this->back->Click += gcnew System::EventHandler(this, &Doctor_Form::back_Click);
			// 
			// file_make
			// 
			this->file_make->Controls->Add(this->button2);
			this->file_make->Controls->Add(this->label8);
			this->file_make->Controls->Add(this->label7);
			this->file_make->Controls->Add(this->label6);
			this->file_make->Controls->Add(this->label5);
			this->file_make->Controls->Add(this->id_t);
			this->file_make->Controls->Add(this->d_t);
			this->file_make->Controls->Add(this->label4);
			this->file_make->Controls->Add(this->label3);
			this->file_make->Controls->Add(this->label2);
			this->file_make->Controls->Add(this->label1);
			this->file_make->Controls->Add(this->sflt);
			this->file_make->Controls->Add(this->sfnt);
			this->file_make->Controls->Add(this->ph_t);
			this->file_make->Controls->Add(this->a_t);
			this->file_make->Controls->Add(this->l_t);
			this->file_make->Controls->Add(this->f_t);
			this->file_make->Controls->Add(this->hhis);
			this->file_make->Controls->Add(this->dataGridView1);
			this->file_make->Controls->Add(this->button1);
			this->file_make->Location = System::Drawing::Point(560, 16);
			this->file_make->Name = L"file_make";
			this->file_make->Size = System::Drawing::Size(655, 378);
			this->file_make->TabIndex = 35;
			this->file_make->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Doctor_Form::file_make_Paint);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(453, 361);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(52, 13);
			this->label8->TabIndex = 41;
			this->label8->Text = L"last name";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(450, 322);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(55, 13);
			this->label7->TabIndex = 40;
			this->label7->Text = L"First name";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(190, 122);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(18, 13);
			this->label6->TabIndex = 39;
			this->label6->Text = L"ID";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(3, 118);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(28, 13);
			this->label5->TabIndex = 38;
			this->label5->Text = L"date";
			// 
			// id_t
			// 
			this->id_t->Location = System::Drawing::Point(251, 115);
			this->id_t->Name = L"id_t";
			this->id_t->Size = System::Drawing::Size(100, 20);
			this->id_t->TabIndex = 37;
			// 
			// d_t
			// 
			this->d_t->Location = System::Drawing::Point(64, 115);
			this->d_t->Name = L"d_t";
			this->d_t->Size = System::Drawing::Size(100, 20);
			this->d_t->TabIndex = 36;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(187, 74);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(52, 13);
			this->label4->TabIndex = 35;
			this->label4->Text = L"phone no";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(3, 70);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(25, 13);
			this->label3->TabIndex = 34;
			this->label3->Text = L"age";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(190, 25);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 13);
			this->label2->TabIndex = 33;
			this->label2->Text = L"last name";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 13);
			this->label1->TabIndex = 32;
			this->label1->Text = L"First name";
			// 
			// sflt
			// 
			this->sflt->Location = System::Drawing::Point(537, 358);
			this->sflt->Name = L"sflt";
			this->sflt->Size = System::Drawing::Size(100, 20);
			this->sflt->TabIndex = 31;
			// 
			// sfnt
			// 
			this->sfnt->Location = System::Drawing::Point(537, 322);
			this->sfnt->Name = L"sfnt";
			this->sfnt->Size = System::Drawing::Size(100, 20);
			this->sfnt->TabIndex = 30;
			// 
			// ph_t
			// 
			this->ph_t->Location = System::Drawing::Point(251, 67);
			this->ph_t->Name = L"ph_t";
			this->ph_t->Size = System::Drawing::Size(100, 20);
			this->ph_t->TabIndex = 29;
			// 
			// a_t
			// 
			this->a_t->Location = System::Drawing::Point(64, 67);
			this->a_t->Name = L"a_t";
			this->a_t->Size = System::Drawing::Size(100, 20);
			this->a_t->TabIndex = 28;
			// 
			// l_t
			// 
			this->l_t->Location = System::Drawing::Point(251, 21);
			this->l_t->Name = L"l_t";
			this->l_t->Size = System::Drawing::Size(100, 20);
			this->l_t->TabIndex = 27;
			// 
			// f_t
			// 
			this->f_t->Location = System::Drawing::Point(64, 20);
			this->f_t->Name = L"f_t";
			this->f_t->Size = System::Drawing::Size(100, 20);
			this->f_t->TabIndex = 26;
			this->f_t->TextChanged += gcnew System::EventHandler(this, &Doctor_Form::f_t_TextChanged);
			// 
			// hhis
			// 
			this->hhis->Location = System::Drawing::Point(156, 333);
			this->hhis->Multiline = true;
			this->hhis->Name = L"hhis";
			this->hhis->Size = System::Drawing::Size(163, 42);
			this->hhis->TabIndex = 25;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(368, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(286, 286);
			this->dataGridView1->TabIndex = 24;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(3, 333);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(122, 42);
			this->button1->TabIndex = 23;
			this->button1->Text = L"Ok";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Doctor_Form::button1_Click_1);
			// 
			// file_make_b
			// 
			this->file_make_b->Location = System::Drawing::Point(18, 146);
			this->file_make_b->Name = L"file_make_b";
			this->file_make_b->Size = System::Drawing::Size(122, 42);
			this->file_make_b->TabIndex = 36;
			this->file_make_b->Text = L"Check";
			this->file_make_b->UseVisualStyleBackColor = true;
			this->file_make_b->Click += gcnew System::EventHandler(this, &Doctor_Form::file_make_b_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(6, 269);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(122, 42);
			this->button2->TabIndex = 42;
			this->button2->Text = L"Next";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Doctor_Form::button2_Click);
			// 
			// Doctor_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1247, 531);
			this->Controls->Add(this->file_make_b);
			this->Controls->Add(this->file_make);
			this->Controls->Add(this->back);
			this->Controls->Add(this->complain_panel);
			this->Controls->Add(this->view_detail_panel);
			this->Controls->Add(this->doctor_panel_complain_button);
			this->Controls->Add(this->doctor_panel_logout_button);
			this->Controls->Add(this->doctor_panel_view_detail);
			this->Name = L"Doctor_Form";
			this->Text = L"Doctor_Form";
			this->view_detail_panel->ResumeLayout(false);
			this->view_detail_panel->PerformLayout();
			this->complain_panel->ResumeLayout(false);
			this->complain_panel->PerformLayout();
			this->file_make->ResumeLayout(false);
			this->file_make->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	}
		   doctor^ userd = gcnew doctor();
	private: System::Void doctor_panel_logout_button_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Restart();
	}
	private: System::Void doctor_panel_view_detail_Click(System::Object^ sender, System::EventArgs^ e) {
		view_detail_panel->Show();
		this->view_detail_panel_insurance_no_label->Text = L"specialization";
		view_detail_panel_first_name_textbox->Text = userd->first_name;
		view_detail_panel_last_name_textbox->Text = userd->last_name;
		view_detail_panel_id_textbox->Text = userd->id;
		view_detail_panel_insurance_no_textbox->Text = userd->specialization;
		view_detail_panel_age_textbox->Text = userd->age;
		view_detail_panel_phone_no_textbox->Text = userd->phone_no;
		view_detail_panel_password_textbox->Text = userd->password;
		view_detail_security_q_textbox->Text = userd->security_q;
	}
	private: System::Void view_detail_panel_change_button_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ f = view_detail_panel_first_name_textbox->Text;
		String^ l = view_detail_panel_last_name_textbox->Text;
		String^ id = view_detail_panel_id_textbox->Text;
		String^ in = view_detail_panel_insurance_no_textbox->Text;
		String^ a = view_detail_panel_age_textbox->Text;
		String^ ph = view_detail_panel_phone_no_textbox->Text;
		String^ p = view_detail_panel_password_textbox->Text;
		String^ se = view_detail_security_q_textbox->Text;
		String^ con = view_detail_panel_password_textbox->Text;
		userd->change_detail(f, l, id, p, in, se, a, ph);
	}
	private: System::Void doctor_panel_complain_button_Click(System::Object^ sender, System::EventArgs^ e) {
		complain_panel->Show();
	}
	private: System::Void complain_panel_ok_button_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ y = complain_panel_textbox->Text;
		userd->complain(y);
		complain_panel_textbox->Text = "";
	}
	private: System::Void back_Click(System::Object^ sender, System::EventArgs^ e) {
		view_detail_panel->Hide();
		complain_panel->Hide();
		
		file_make->Hide();
	}
	
	

	
	private: System::Void file_make_b_Click(System::Object^ sender, System::EventArgs^ e)
	{
		file_make->Show();

		
	}
	

		
	private: System::Void file_make_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		String^ connString = rr;
		SqlConnection sqlConn(connString);
		sqlConn.Open();
		String^ Id = userd->getid();
		String^ Date = d_t->Text;
		
		// Update the 'done' column to 1
		String^ updateQuery = "UPDATE appointment SET done = 1 WHERE doctor_id = @doctorId AND [date] = @appointmentDate";
		SqlCommand updateCommand(updateQuery, % sqlConn);
		updateCommand.Parameters->AddWithValue("@doctorId", Id);
		updateCommand.Parameters->AddWithValue("@appointmentDate", Date);
		updateCommand.ExecuteNonQuery();

		// Update the 'history' column
		String^ insertQuery = "UPDATE appointment SET history = @text WHERE doctor_id = @doctorId AND [date] = @appointmentDate";
		SqlCommand insertCommand(insertQuery, % sqlConn);
		insertCommand.Parameters->AddWithValue("@doctorId", Id);
		insertCommand.Parameters->AddWithValue("@appointmentDate", Date);
		String^ his = hhis->Text;
		insertCommand.Parameters->AddWithValue("@text", his);
		insertCommand.ExecuteNonQuery();
		MessageBox::Show("Added", "Database Connection Error", MessageBoxButtons::OK);

		sqlConn.Close();
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Failed to connect to the database", "Database Connection Error", MessageBoxButtons::OK);
	}


}
private: System::Void f_t_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			String^ id = userd->getid();
			String^ connString = rr;
			SqlConnection sqlConn(connString);
			sqlConn.Open();
			String^ sqlQuery = "SELECT TOP 2 * FROM appointment WHERE done = 0 AND doctor_id = @doctorId ORDER BY [date] ASC";
			SqlCommand cmd(sqlQuery, % sqlConn);
			cmd.Parameters->AddWithValue("@doctorId", id);
			SqlDataReader^ sqlDataReader = cmd.ExecuteReader();

			// Process the top 2 tuples
			int tupleCount = 0;
			while (sqlDataReader->Read() && tupleCount < 2)
			{
				// Retrieve tuple data
				String^ doctorId = sqlDataReader->GetString(0);
				String^ patientId = sqlDataReader->GetString(1);
				String^ appointmentDate = sqlDataReader->GetDateTime(2).ToString();
				String^ doctorName = sqlDataReader->GetString(3);
				String^ done = sqlDataReader->GetString(4);
				String^ firstName = sqlDataReader->GetString(6);
				String^ lastName = sqlDataReader->GetString(7);
				String^ age = sqlDataReader->GetString(8);
				String^ phone = sqlDataReader->GetString(9);
				String^ insurance = sqlDataReader->GetString(10);
				if (tupleCount == 1)
				{
					String^ sfn = sqlDataReader->GetString(6);
					String^ sln = sqlDataReader->GetString(7);
					sfnt->Text = sfn;
					sflt->Text = sln;
				}
				else
				{
					f_t->Text = firstName;
					l_t->Text = lastName;
					a_t->Text = age;
					ph_t->Text = phone;
					d_t->Text = appointmentDate;
					id_t->Text = patientId;
					// Create a SqlConnection object
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

				// Perform actions with tuple data
				// ...

				tupleCount++;
			}


			sqlDataReader->Close();
		}

		catch (Exception^ e) {
			MessageBox::Show("Failed to connect to database", "Database Connection Error", MessageBoxButtons::OK);
		}
	}

};
}
