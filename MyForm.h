#include"User.h"
#include"patient.h"
#include"doctor.h"
#include"admin.h"

#include "Doctor_Form.h"
#include "Admin_Form.h"
#include "Patient_Form.h"

using namespace System::Data::SqlClient;
namespace temp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		String^ rr = "Data Source=DESKTOP-9T5F2B3;Initial Catalog=mono;Integrated Security=True";
		//String^ rr = "Data Source=localhost\\sqlexpress;Initial Catalog=newmono;Integrated Security=True";

	public:
		MyForm(void)
		{
			InitializeComponent();
			this->Controls->Add(login_panel);
			this->Controls->Add(signup_panel);
			this->Controls->Add(forget_password_panel);
			
			signup_panel->Visible = false;
			forget_password_panel->Visible = false;
			admin_panel->Visible = false;
			doctor_panel->Visible = false;
			//patient_panel->Visible = false;
			view_detail_panel->Visible = false;
			complain_panel->Visible = false;
			main_panel ->Visible= true;
			login_panel->Visible = false;
			//make_appointment_panel->Visible = false;
			//cancel_appointment_panel->Visible = false;
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ login_panel_password_label;
	protected:
	private: System::Windows::Forms::Label^ login_panel_id_label;
	protected:
	private: System::Windows::Forms::TextBox^ login_panel_id_textbox;
	private: System::Windows::Forms::TextBox^ login_panel_password_textbox;
	private: System::Windows::Forms::Button^ login_button;
	private: System::Windows::Forms::Panel^ login_panel;
	private: System::Windows::Forms::Button^ login_panel_signup_button;
	private: System::Windows::Forms::Panel^ signup_panel;
	private: System::Windows::Forms::Button^ sign_up_panel__sign_up_button;
	private: System::Windows::Forms::Label^ signup_securityq;
	private: System::Windows::Forms::TextBox^ sign_up_security_q_textbox;
	private: System::Windows::Forms::Label^ signup_confirnpassword_label;
	private: System::Windows::Forms::TextBox^ sign_up_confirm_password_textbox;
	private: System::Windows::Forms::Label^ signup_password_label;
	private: System::Windows::Forms::TextBox^ sign_up_password_textbox;
	private: System::Windows::Forms::Label^ phone_no_label;
	private: System::Windows::Forms::TextBox^ sign_up_phone_no_textbox;
	private: System::Windows::Forms::Label^ age_label;
	private: System::Windows::Forms::Label^ lnsurance_no_label;
	private: System::Windows::Forms::Label^ id_no_label;
	private: System::Windows::Forms::Label^ llast_name_label;
	private: System::Windows::Forms::Label^ first_name_label;
	private: System::Windows::Forms::TextBox^ sign_up_last_name_textbox;
	private: System::Windows::Forms::TextBox^ sign_up_id_textbox;
	private: System::Windows::Forms::TextBox^ sign_up_insuranc_no_textbox;
	private: System::Windows::Forms::TextBox^ sign_up_age_textbox;
	private: System::Windows::Forms::TextBox^ sign_up_first_name_textbox;
	private: System::Windows::Forms::Button^ Sign_up_back;
	private: System::Windows::Forms::Button^ login_panel_forget_password;
	private: System::Windows::Forms::Panel^ forget_password_panel;
	private: System::Windows::Forms::Label^ forget_password_panel_security_q_label;
	private: System::Windows::Forms::Label^ forget_password_id_label;
	private: System::Windows::Forms::Button^ forget_password_panel_back_button;
	private: System::Windows::Forms::Button^ forget_password_panel_enter_button;
	private: System::Windows::Forms::TextBox^ forget_password_panel_security_q_textbox;
	private: System::Windows::Forms::TextBox^ forget_password_panel_id_textbox;
	private: System::Windows::Forms::Button^ login_panel_back_button;

	private: System::Windows::Forms::Label^ label3;






















	private: System::Windows::Forms::Panel^ complain_panel;
	private: System::Windows::Forms::Button^ complain_panel_ok_button;
	private: System::Windows::Forms::TextBox^ complain_panel_textbox;
	private: System::Windows::Forms::Button^ complain_panel_back_button;
	private: System::Windows::Forms::Panel^ main_panel;
	private: System::Windows::Forms::Button^ main_panel_exit_button;
	private: System::Windows::Forms::Button^ main_panel_admin_button;
	private: System::Windows::Forms::Button^ main_panel_doctor_button;
	private: System::Windows::Forms::Button^ main_panel_patient_button;
	private: System::Windows::Forms::Panel^ admin_panel;
	private: System::Windows::Forms::Button^ admin_panel_hire_doctor;
	private: System::Windows::Forms::Panel^ doctor_panel;
	private: System::Windows::Forms::Button^ doctor_panel_view_detail;
	private: System::Windows::Forms::Button^ admin_panel_logout_button;
	private: System::Windows::Forms::Button^ doctor_panel_logout_button;
	private: System::Windows::Forms::Button^ doctor_panel_complain_button;
	private: System::Windows::Forms::Button^ admin_panel_fire_doctor;
private: System::Windows::Forms::Panel^ view_detail_panel;
private: System::Windows::Forms::Button^ view_detail_panel_change_button;
private: System::Windows::Forms::Button^ view_detail_panel_back_button;
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
			this->login_panel_password_label = (gcnew System::Windows::Forms::Label());
			this->login_panel_id_label = (gcnew System::Windows::Forms::Label());
			this->login_panel_id_textbox = (gcnew System::Windows::Forms::TextBox());
			this->login_panel_password_textbox = (gcnew System::Windows::Forms::TextBox());
			this->login_button = (gcnew System::Windows::Forms::Button());
			this->login_panel = (gcnew System::Windows::Forms::Panel());
			this->login_panel_back_button = (gcnew System::Windows::Forms::Button());
			this->login_panel_forget_password = (gcnew System::Windows::Forms::Button());
			this->login_panel_signup_button = (gcnew System::Windows::Forms::Button());
			this->forget_password_panel = (gcnew System::Windows::Forms::Panel());
			this->forget_password_panel_back_button = (gcnew System::Windows::Forms::Button());
			this->forget_password_panel_enter_button = (gcnew System::Windows::Forms::Button());
			this->forget_password_panel_security_q_textbox = (gcnew System::Windows::Forms::TextBox());
			this->forget_password_panel_id_textbox = (gcnew System::Windows::Forms::TextBox());
			this->forget_password_panel_security_q_label = (gcnew System::Windows::Forms::Label());
			this->forget_password_id_label = (gcnew System::Windows::Forms::Label());
			this->signup_panel = (gcnew System::Windows::Forms::Panel());
			this->Sign_up_back = (gcnew System::Windows::Forms::Button());
			this->sign_up_panel__sign_up_button = (gcnew System::Windows::Forms::Button());
			this->signup_securityq = (gcnew System::Windows::Forms::Label());
			this->sign_up_security_q_textbox = (gcnew System::Windows::Forms::TextBox());
			this->signup_confirnpassword_label = (gcnew System::Windows::Forms::Label());
			this->sign_up_confirm_password_textbox = (gcnew System::Windows::Forms::TextBox());
			this->signup_password_label = (gcnew System::Windows::Forms::Label());
			this->sign_up_password_textbox = (gcnew System::Windows::Forms::TextBox());
			this->phone_no_label = (gcnew System::Windows::Forms::Label());
			this->sign_up_phone_no_textbox = (gcnew System::Windows::Forms::TextBox());
			this->age_label = (gcnew System::Windows::Forms::Label());
			this->lnsurance_no_label = (gcnew System::Windows::Forms::Label());
			this->id_no_label = (gcnew System::Windows::Forms::Label());
			this->llast_name_label = (gcnew System::Windows::Forms::Label());
			this->first_name_label = (gcnew System::Windows::Forms::Label());
			this->sign_up_last_name_textbox = (gcnew System::Windows::Forms::TextBox());
			this->sign_up_id_textbox = (gcnew System::Windows::Forms::TextBox());
			this->sign_up_insuranc_no_textbox = (gcnew System::Windows::Forms::TextBox());
			this->sign_up_age_textbox = (gcnew System::Windows::Forms::TextBox());
			this->sign_up_first_name_textbox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->complain_panel = (gcnew System::Windows::Forms::Panel());
			this->complain_panel_back_button = (gcnew System::Windows::Forms::Button());
			this->complain_panel_ok_button = (gcnew System::Windows::Forms::Button());
			this->complain_panel_textbox = (gcnew System::Windows::Forms::TextBox());
			this->main_panel = (gcnew System::Windows::Forms::Panel());
			this->main_panel_exit_button = (gcnew System::Windows::Forms::Button());
			this->main_panel_admin_button = (gcnew System::Windows::Forms::Button());
			this->main_panel_doctor_button = (gcnew System::Windows::Forms::Button());
			this->main_panel_patient_button = (gcnew System::Windows::Forms::Button());
			this->admin_panel = (gcnew System::Windows::Forms::Panel());
			this->admin_panel_fire_doctor = (gcnew System::Windows::Forms::Button());
			this->admin_panel_logout_button = (gcnew System::Windows::Forms::Button());
			this->admin_panel_hire_doctor = (gcnew System::Windows::Forms::Button());
			this->doctor_panel = (gcnew System::Windows::Forms::Panel());
			this->doctor_panel_complain_button = (gcnew System::Windows::Forms::Button());
			this->doctor_panel_logout_button = (gcnew System::Windows::Forms::Button());
			this->doctor_panel_view_detail = (gcnew System::Windows::Forms::Button());
			this->view_detail_panel = (gcnew System::Windows::Forms::Panel());
			this->view_detail_panel_change_button = (gcnew System::Windows::Forms::Button());
			this->view_detail_panel_back_button = (gcnew System::Windows::Forms::Button());
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
			this->login_panel->SuspendLayout();
			this->forget_password_panel->SuspendLayout();
			this->signup_panel->SuspendLayout();
			this->complain_panel->SuspendLayout();
			this->main_panel->SuspendLayout();
			this->admin_panel->SuspendLayout();
			this->doctor_panel->SuspendLayout();
			this->view_detail_panel->SuspendLayout();
			this->SuspendLayout();
			// 
			// login_panel_password_label
			// 
			this->login_panel_password_label->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->login_panel_password_label->Location = System::Drawing::Point(15, 21);
			this->login_panel_password_label->Name = L"login_panel_password_label";
			this->login_panel_password_label->Size = System::Drawing::Size(100, 25);
			this->login_panel_password_label->TabIndex = 0;
			this->login_panel_password_label->Text = L"Password";
			// 
			// login_panel_id_label
			// 
			this->login_panel_id_label->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->login_panel_id_label->Location = System::Drawing::Point(15, 95);
			this->login_panel_id_label->Name = L"login_panel_id_label";
			this->login_panel_id_label->Size = System::Drawing::Size(100, 25);
			this->login_panel_id_label->TabIndex = 1;
			this->login_panel_id_label->Text = L"Id";
			// 
			// login_panel_id_textbox
			// 
			this->login_panel_id_textbox->Location = System::Drawing::Point(18, 137);
			this->login_panel_id_textbox->Name = L"login_panel_id_textbox";
			this->login_panel_id_textbox->Size = System::Drawing::Size(263, 20);
			this->login_panel_id_textbox->TabIndex = 2;
			// 
			// login_panel_password_textbox
			// 
			this->login_panel_password_textbox->Location = System::Drawing::Point(18, 63);
			this->login_panel_password_textbox->Name = L"login_panel_password_textbox";
			this->login_panel_password_textbox->Size = System::Drawing::Size(263, 20);
			this->login_panel_password_textbox->TabIndex = 3;
			this->login_panel_password_textbox->UseSystemPasswordChar = true;
			// 
			// login_button
			// 
			this->login_button->Location = System::Drawing::Point(187, 206);
			this->login_button->Name = L"login_button";
			this->login_button->Size = System::Drawing::Size(122, 42);
			this->login_button->TabIndex = 4;
			this->login_button->Text = L"Login";
			this->login_button->UseVisualStyleBackColor = true;
			this->login_button->Click += gcnew System::EventHandler(this, &MyForm::login_button_Click);
			// 
			// login_panel
			// 
			this->login_panel->Controls->Add(this->login_panel_back_button);
			this->login_panel->Controls->Add(this->login_panel_forget_password);
			this->login_panel->Controls->Add(this->login_panel_signup_button);
			this->login_panel->Controls->Add(this->login_button);
			this->login_panel->Controls->Add(this->login_panel_password_textbox);
			this->login_panel->Controls->Add(this->login_panel_id_textbox);
			this->login_panel->Controls->Add(this->login_panel_id_label);
			this->login_panel->Controls->Add(this->login_panel_password_label);
			this->login_panel->Location = System::Drawing::Point(0, 0);
			this->login_panel->Name = L"login_panel";
			this->login_panel->Size = System::Drawing::Size(420, 450);
			this->login_panel->TabIndex = 5;
			// 
			// login_panel_back_button
			// 
			this->login_panel_back_button->Location = System::Drawing::Point(19, 285);
			this->login_panel_back_button->Name = L"login_panel_back_button";
			this->login_panel_back_button->Size = System::Drawing::Size(122, 42);
			this->login_panel_back_button->TabIndex = 9;
			this->login_panel_back_button->Text = L"Back";
			this->login_panel_back_button->UseVisualStyleBackColor = true;
			this->login_panel_back_button->Click += gcnew System::EventHandler(this, &MyForm::login_panel_exit_Click);
			// 
			// login_panel_forget_password
			// 
			this->login_panel_forget_password->Location = System::Drawing::Point(187, 285);
			this->login_panel_forget_password->Name = L"login_panel_forget_password";
			this->login_panel_forget_password->Size = System::Drawing::Size(204, 42);
			this->login_panel_forget_password->TabIndex = 7;
			this->login_panel_forget_password->Text = L"Forget password";
			this->login_panel_forget_password->UseVisualStyleBackColor = true;
			this->login_panel_forget_password->Click += gcnew System::EventHandler(this, &MyForm::login_panel_forget_password_Click);
			// 
			// login_panel_signup_button
			// 
			this->login_panel_signup_button->Location = System::Drawing::Point(19, 206);
			this->login_panel_signup_button->Name = L"login_panel_signup_button";
			this->login_panel_signup_button->Size = System::Drawing::Size(122, 42);
			this->login_panel_signup_button->TabIndex = 5;
			this->login_panel_signup_button->Text = L"Sign up";
			this->login_panel_signup_button->UseVisualStyleBackColor = true;
			this->login_panel_signup_button->Click += gcnew System::EventHandler(this, &MyForm::signup_button_Click);
			// 
			// forget_password_panel
			// 
			this->forget_password_panel->Controls->Add(this->forget_password_panel_back_button);
			this->forget_password_panel->Controls->Add(this->forget_password_panel_enter_button);
			this->forget_password_panel->Controls->Add(this->forget_password_panel_security_q_textbox);
			this->forget_password_panel->Controls->Add(this->forget_password_panel_id_textbox);
			this->forget_password_panel->Controls->Add(this->forget_password_panel_security_q_label);
			this->forget_password_panel->Controls->Add(this->forget_password_id_label);
			this->forget_password_panel->Location = System::Drawing::Point(0, 0);
			this->forget_password_panel->Name = L"forget_password_panel";
			this->forget_password_panel->Size = System::Drawing::Size(420, 450);
			this->forget_password_panel->TabIndex = 8;
			// 
			// forget_password_panel_back_button
			// 
			this->forget_password_panel_back_button->Location = System::Drawing::Point(195, 253);
			this->forget_password_panel_back_button->Name = L"forget_password_panel_back_button";
			this->forget_password_panel_back_button->Size = System::Drawing::Size(75, 34);
			this->forget_password_panel_back_button->TabIndex = 7;
			this->forget_password_panel_back_button->Text = L"Back";
			this->forget_password_panel_back_button->UseVisualStyleBackColor = true;
			this->forget_password_panel_back_button->Click += gcnew System::EventHandler(this, &MyForm::forget_password_panel_back_button_Click);
			// 
			// forget_password_panel_enter_button
			// 
			this->forget_password_panel_enter_button->Location = System::Drawing::Point(57, 253);
			this->forget_password_panel_enter_button->Name = L"forget_password_panel_enter_button";
			this->forget_password_panel_enter_button->Size = System::Drawing::Size(75, 34);
			this->forget_password_panel_enter_button->TabIndex = 6;
			this->forget_password_panel_enter_button->Text = L"Enter";
			this->forget_password_panel_enter_button->UseVisualStyleBackColor = true;
			this->forget_password_panel_enter_button->Click += gcnew System::EventHandler(this, &MyForm::forget_password_panel_enter_button_Click);
			// 
			// forget_password_panel_security_q_textbox
			// 
			this->forget_password_panel_security_q_textbox->Location = System::Drawing::Point(58, 206);
			this->forget_password_panel_security_q_textbox->Name = L"forget_password_panel_security_q_textbox";
			this->forget_password_panel_security_q_textbox->Size = System::Drawing::Size(100, 29);
			this->forget_password_panel_security_q_textbox->TabIndex = 5;
			// 
			// forget_password_panel_id_textbox
			// 
			this->forget_password_panel_id_textbox->Location = System::Drawing::Point(57, 86);
			this->forget_password_panel_id_textbox->Name = L"forget_password_panel_id_textbox";
			this->forget_password_panel_id_textbox->Size = System::Drawing::Size(100, 29);
			this->forget_password_panel_id_textbox->TabIndex = 4;
			// 
			// forget_password_panel_security_q_label
			// 
			this->forget_password_panel_security_q_label->AutoSize = true;
			this->forget_password_panel_security_q_label->Location = System::Drawing::Point(54, 154);
			this->forget_password_panel_security_q_label->Name = L"forget_password_panel_security_q_label";
			this->forget_password_panel_security_q_label->Size = System::Drawing::Size(155, 22);
			this->forget_password_panel_security_q_label->TabIndex = 3;
			this->forget_password_panel_security_q_label->Text = L"Security question";
			// 
			// forget_password_id_label
			// 
			this->forget_password_id_label->AutoSize = true;
			this->forget_password_id_label->Location = System::Drawing::Point(53, 52);
			this->forget_password_id_label->Name = L"forget_password_id_label";
			this->forget_password_id_label->Size = System::Drawing::Size(27, 22);
			this->forget_password_id_label->TabIndex = 0;
			this->forget_password_id_label->Text = L"Id";
			// 
			// signup_panel
			// 
			this->signup_panel->Controls->Add(this->Sign_up_back);
			this->signup_panel->Controls->Add(this->sign_up_panel__sign_up_button);
			this->signup_panel->Controls->Add(this->signup_securityq);
			this->signup_panel->Controls->Add(this->sign_up_security_q_textbox);
			this->signup_panel->Controls->Add(this->signup_confirnpassword_label);
			this->signup_panel->Controls->Add(this->sign_up_confirm_password_textbox);
			this->signup_panel->Controls->Add(this->signup_password_label);
			this->signup_panel->Controls->Add(this->sign_up_password_textbox);
			this->signup_panel->Controls->Add(this->phone_no_label);
			this->signup_panel->Controls->Add(this->sign_up_phone_no_textbox);
			this->signup_panel->Controls->Add(this->age_label);
			this->signup_panel->Controls->Add(this->lnsurance_no_label);
			this->signup_panel->Controls->Add(this->id_no_label);
			this->signup_panel->Controls->Add(this->llast_name_label);
			this->signup_panel->Controls->Add(this->first_name_label);
			this->signup_panel->Controls->Add(this->sign_up_last_name_textbox);
			this->signup_panel->Controls->Add(this->sign_up_id_textbox);
			this->signup_panel->Controls->Add(this->sign_up_insuranc_no_textbox);
			this->signup_panel->Controls->Add(this->sign_up_age_textbox);
			this->signup_panel->Controls->Add(this->sign_up_first_name_textbox);
			this->signup_panel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->signup_panel->Location = System::Drawing::Point(0, 0);
			this->signup_panel->Name = L"signup_panel";
			this->signup_panel->Size = System::Drawing::Size(420, 450);
			this->signup_panel->TabIndex = 6;
			// 
			// Sign_up_back
			// 
			this->Sign_up_back->Location = System::Drawing::Point(164, 384);
			this->Sign_up_back->Name = L"Sign_up_back";
			this->Sign_up_back->Size = System::Drawing::Size(122, 42);
			this->Sign_up_back->TabIndex = 19;
			this->Sign_up_back->Text = L"Back";
			this->Sign_up_back->UseVisualStyleBackColor = true;
			this->Sign_up_back->Click += gcnew System::EventHandler(this, &MyForm::Sign_up_back_Click);
			// 
			// sign_up_panel__sign_up_button
			// 
			this->sign_up_panel__sign_up_button->Location = System::Drawing::Point(17, 384);
			this->sign_up_panel__sign_up_button->Name = L"sign_up_panel__sign_up_button";
			this->sign_up_panel__sign_up_button->Size = System::Drawing::Size(122, 42);
			this->sign_up_panel__sign_up_button->TabIndex = 18;
			this->sign_up_panel__sign_up_button->Text = L"Sign up";
			this->sign_up_panel__sign_up_button->UseVisualStyleBackColor = true;
			this->sign_up_panel__sign_up_button->Click += gcnew System::EventHandler(this, &MyForm::sign_up_button_Click);
			// 
			// signup_securityq
			// 
			this->signup_securityq->AutoSize = true;
			this->signup_securityq->Location = System::Drawing::Point(13, 336);
			this->signup_securityq->Name = L"signup_securityq";
			this->signup_securityq->Size = System::Drawing::Size(88, 13);
			this->signup_securityq->TabIndex = 17;
			this->signup_securityq->Text = L"Security question";
			// 
			// sign_up_security_q_textbox
			// 
			this->sign_up_security_q_textbox->Location = System::Drawing::Point(196, 329);
			this->sign_up_security_q_textbox->Name = L"sign_up_security_q_textbox";
			this->sign_up_security_q_textbox->Size = System::Drawing::Size(142, 20);
			this->sign_up_security_q_textbox->TabIndex = 16;
			// 
			// signup_confirnpassword_label
			// 
			this->signup_confirnpassword_label->AutoSize = true;
			this->signup_confirnpassword_label->Location = System::Drawing::Point(13, 293);
			this->signup_confirnpassword_label->Name = L"signup_confirnpassword_label";
			this->signup_confirnpassword_label->Size = System::Drawing::Size(90, 13);
			this->signup_confirnpassword_label->TabIndex = 15;
			this->signup_confirnpassword_label->Text = L"Confirm password";
			// 
			// sign_up_confirm_password_textbox
			// 
			this->sign_up_confirm_password_textbox->Location = System::Drawing::Point(196, 286);
			this->sign_up_confirm_password_textbox->Name = L"sign_up_confirm_password_textbox";
			this->sign_up_confirm_password_textbox->Size = System::Drawing::Size(142, 20);
			this->sign_up_confirm_password_textbox->TabIndex = 14;
			// 
			// signup_password_label
			// 
			this->signup_password_label->AutoSize = true;
			this->signup_password_label->Location = System::Drawing::Point(13, 258);
			this->signup_password_label->Name = L"signup_password_label";
			this->signup_password_label->Size = System::Drawing::Size(53, 13);
			this->signup_password_label->TabIndex = 13;
			this->signup_password_label->Text = L"Password";
			// 
			// sign_up_password_textbox
			// 
			this->sign_up_password_textbox->Location = System::Drawing::Point(196, 251);
			this->sign_up_password_textbox->Name = L"sign_up_password_textbox";
			this->sign_up_password_textbox->Size = System::Drawing::Size(142, 20);
			this->sign_up_password_textbox->TabIndex = 12;
			// 
			// phone_no_label
			// 
			this->phone_no_label->AutoSize = true;
			this->phone_no_label->Location = System::Drawing::Point(13, 220);
			this->phone_no_label->Name = L"phone_no_label";
			this->phone_no_label->Size = System::Drawing::Size(53, 13);
			this->phone_no_label->TabIndex = 11;
			this->phone_no_label->Text = L"Phone no";
			// 
			// sign_up_phone_no_textbox
			// 
			this->sign_up_phone_no_textbox->Location = System::Drawing::Point(196, 213);
			this->sign_up_phone_no_textbox->Name = L"sign_up_phone_no_textbox";
			this->sign_up_phone_no_textbox->Size = System::Drawing::Size(142, 20);
			this->sign_up_phone_no_textbox->TabIndex = 10;
			// 
			// age_label
			// 
			this->age_label->AutoSize = true;
			this->age_label->Location = System::Drawing::Point(13, 182);
			this->age_label->Name = L"age_label";
			this->age_label->Size = System::Drawing::Size(26, 13);
			this->age_label->TabIndex = 9;
			this->age_label->Text = L"Age";
			// 
			// lnsurance_no_label
			// 
			this->lnsurance_no_label->AutoSize = true;
			this->lnsurance_no_label->Location = System::Drawing::Point(13, 143);
			this->lnsurance_no_label->Name = L"lnsurance_no_label";
			this->lnsurance_no_label->Size = System::Drawing::Size(69, 13);
			this->lnsurance_no_label->TabIndex = 8;
			this->lnsurance_no_label->Text = L"Insurance no";
			// 
			// id_no_label
			// 
			this->id_no_label->AutoSize = true;
			this->id_no_label->Location = System::Drawing::Point(13, 112);
			this->id_no_label->Name = L"id_no_label";
			this->id_no_label->Size = System::Drawing::Size(56, 13);
			this->id_no_label->TabIndex = 7;
			this->id_no_label->Text = L"ID number";
			// 
			// llast_name_label
			// 
			this->llast_name_label->AutoSize = true;
			this->llast_name_label->Location = System::Drawing::Point(13, 77);
			this->llast_name_label->Name = L"llast_name_label";
			this->llast_name_label->Size = System::Drawing::Size(58, 13);
			this->llast_name_label->TabIndex = 6;
			this->llast_name_label->Text = L"Last Name";
			// 
			// first_name_label
			// 
			this->first_name_label->AutoSize = true;
			this->first_name_label->Location = System::Drawing::Point(13, 35);
			this->first_name_label->Name = L"first_name_label";
			this->first_name_label->Size = System::Drawing::Size(57, 13);
			this->first_name_label->TabIndex = 5;
			this->first_name_label->Text = L"First Name";
			// 
			// sign_up_last_name_textbox
			// 
			this->sign_up_last_name_textbox->Location = System::Drawing::Point(196, 70);
			this->sign_up_last_name_textbox->Name = L"sign_up_last_name_textbox";
			this->sign_up_last_name_textbox->Size = System::Drawing::Size(142, 20);
			this->sign_up_last_name_textbox->TabIndex = 4;
			// 
			// sign_up_id_textbox
			// 
			this->sign_up_id_textbox->Location = System::Drawing::Point(196, 105);
			this->sign_up_id_textbox->Name = L"sign_up_id_textbox";
			this->sign_up_id_textbox->Size = System::Drawing::Size(142, 20);
			this->sign_up_id_textbox->TabIndex = 3;
			// 
			// sign_up_insuranc_no_textbox
			// 
			this->sign_up_insuranc_no_textbox->Location = System::Drawing::Point(196, 140);
			this->sign_up_insuranc_no_textbox->Name = L"sign_up_insuranc_no_textbox";
			this->sign_up_insuranc_no_textbox->Size = System::Drawing::Size(142, 20);
			this->sign_up_insuranc_no_textbox->TabIndex = 2;
			// 
			// sign_up_age_textbox
			// 
			this->sign_up_age_textbox->Location = System::Drawing::Point(196, 175);
			this->sign_up_age_textbox->Name = L"sign_up_age_textbox";
			this->sign_up_age_textbox->Size = System::Drawing::Size(142, 20);
			this->sign_up_age_textbox->TabIndex = 1;
			// 
			// sign_up_first_name_textbox
			// 
			this->sign_up_first_name_textbox->Location = System::Drawing::Point(196, 35);
			this->sign_up_first_name_textbox->Name = L"sign_up_first_name_textbox";
			this->sign_up_first_name_textbox->Size = System::Drawing::Size(142, 20);
			this->sign_up_first_name_textbox->TabIndex = 0;
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(0, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 23);
			this->label3->TabIndex = 0;
			// 
			// complain_panel
			// 
			this->complain_panel->Controls->Add(this->complain_panel_back_button);
			this->complain_panel->Controls->Add(this->complain_panel_ok_button);
			this->complain_panel->Controls->Add(this->complain_panel_textbox);
			this->complain_panel->Location = System::Drawing::Point(0, 0);
			this->complain_panel->Name = L"complain_panel";
			this->complain_panel->Size = System::Drawing::Size(232, 327);
			this->complain_panel->TabIndex = 12;
			// 
			// complain_panel_back_button
			// 
			this->complain_panel_back_button->Location = System::Drawing::Point(38, 256);
			this->complain_panel_back_button->Name = L"complain_panel_back_button";
			this->complain_panel_back_button->Size = System::Drawing::Size(122, 42);
			this->complain_panel_back_button->TabIndex = 23;
			this->complain_panel_back_button->Text = L"Back";
			this->complain_panel_back_button->UseVisualStyleBackColor = true;
			this->complain_panel_back_button->Click += gcnew System::EventHandler(this, &MyForm::complain_panel_back_button_Click);
			// 
			// complain_panel_ok_button
			// 
			this->complain_panel_ok_button->Location = System::Drawing::Point(38, 191);
			this->complain_panel_ok_button->Name = L"complain_panel_ok_button";
			this->complain_panel_ok_button->Size = System::Drawing::Size(122, 42);
			this->complain_panel_ok_button->TabIndex = 22;
			this->complain_panel_ok_button->Text = L"Ok";
			this->complain_panel_ok_button->UseVisualStyleBackColor = true;
			this->complain_panel_ok_button->Click += gcnew System::EventHandler(this, &MyForm::complain_panel_ok_button_Click);
			// 
			// complain_panel_textbox
			// 
			this->complain_panel_textbox->Location = System::Drawing::Point(38, 33);
			this->complain_panel_textbox->Name = L"complain_panel_textbox";
			this->complain_panel_textbox->Size = System::Drawing::Size(142, 29);
			this->complain_panel_textbox->TabIndex = 21;
			// 
			// main_panel
			// 
			this->main_panel->Controls->Add(this->main_panel_exit_button);
			this->main_panel->Controls->Add(this->main_panel_admin_button);
			this->main_panel->Controls->Add(this->main_panel_doctor_button);
			this->main_panel->Controls->Add(this->main_panel_patient_button);
			this->main_panel->Location = System::Drawing::Point(0, 0);
			this->main_panel->Name = L"main_panel";
			this->main_panel->Size = System::Drawing::Size(420, 450);
			this->main_panel->TabIndex = 13;
			// 
			// main_panel_exit_button
			// 
			this->main_panel_exit_button->Location = System::Drawing::Point(151, 347);
			this->main_panel_exit_button->Name = L"main_panel_exit_button";
			this->main_panel_exit_button->Size = System::Drawing::Size(122, 42);
			this->main_panel_exit_button->TabIndex = 11;
			this->main_panel_exit_button->Text = L"Exit";
			this->main_panel_exit_button->UseVisualStyleBackColor = true;
			this->main_panel_exit_button->Click += gcnew System::EventHandler(this, &MyForm::main_panel_exit_button_Click);
			// 
			// main_panel_admin_button
			// 
			this->main_panel_admin_button->Location = System::Drawing::Point(117, 271);
			this->main_panel_admin_button->Name = L"main_panel_admin_button";
			this->main_panel_admin_button->Size = System::Drawing::Size(187, 42);
			this->main_panel_admin_button->TabIndex = 10;
			this->main_panel_admin_button->Text = L"Login as admin";
			this->main_panel_admin_button->UseVisualStyleBackColor = true;
			this->main_panel_admin_button->Click += gcnew System::EventHandler(this, &MyForm::main_panel_admin_button_Click);
			// 
			// main_panel_doctor_button
			// 
			this->main_panel_doctor_button->Location = System::Drawing::Point(117, 204);
			this->main_panel_doctor_button->Name = L"main_panel_doctor_button";
			this->main_panel_doctor_button->Size = System::Drawing::Size(187, 42);
			this->main_panel_doctor_button->TabIndex = 9;
			this->main_panel_doctor_button->Text = L"Login as doctor";
			this->main_panel_doctor_button->UseVisualStyleBackColor = true;
			this->main_panel_doctor_button->Click += gcnew System::EventHandler(this, &MyForm::main_panel_doctor_button_Click);
			// 
			// main_panel_patient_button
			// 
			this->main_panel_patient_button->Location = System::Drawing::Point(115, 132);
			this->main_panel_patient_button->Name = L"main_panel_patient_button";
			this->main_panel_patient_button->Size = System::Drawing::Size(187, 42);
			this->main_panel_patient_button->TabIndex = 8;
			this->main_panel_patient_button->Text = L"Login as patient";
			this->main_panel_patient_button->UseVisualStyleBackColor = true;
			this->main_panel_patient_button->Click += gcnew System::EventHandler(this, &MyForm::main_panel_patient_button_Click);
			// 
			// admin_panel
			// 
			this->admin_panel->Controls->Add(this->admin_panel_fire_doctor);
			this->admin_panel->Controls->Add(this->admin_panel_logout_button);
			this->admin_panel->Controls->Add(this->admin_panel_hire_doctor);
			this->admin_panel->Location = System::Drawing::Point(2, 458);
			this->admin_panel->Name = L"admin_panel";
			this->admin_panel->Size = System::Drawing::Size(420, 450);
			this->admin_panel->TabIndex = 14;
			// 
			// admin_panel_fire_doctor
			// 
			this->admin_panel_fire_doctor->Location = System::Drawing::Point(15, 97);
			this->admin_panel_fire_doctor->Name = L"admin_panel_fire_doctor";
			this->admin_panel_fire_doctor->Size = System::Drawing::Size(122, 42);
			this->admin_panel_fire_doctor->TabIndex = 14;
			this->admin_panel_fire_doctor->Text = L"Fire Doctor";
			this->admin_panel_fire_doctor->UseVisualStyleBackColor = true;
			this->admin_panel_fire_doctor->Click += gcnew System::EventHandler(this, &MyForm::admin_panel_fire_doctor_Click);
			// 
			// admin_panel_logout_button
			// 
			this->admin_panel_logout_button->Location = System::Drawing::Point(295, 5);
			this->admin_panel_logout_button->Name = L"admin_panel_logout_button";
			this->admin_panel_logout_button->Size = System::Drawing::Size(122, 42);
			this->admin_panel_logout_button->TabIndex = 13;
			this->admin_panel_logout_button->Text = L"Logout";
			this->admin_panel_logout_button->UseVisualStyleBackColor = true;
			this->admin_panel_logout_button->Click += gcnew System::EventHandler(this, &MyForm::admin_panel_logout_button_Click);
			// 
			// admin_panel_hire_doctor
			// 
			this->admin_panel_hire_doctor->Location = System::Drawing::Point(15, 16);
			this->admin_panel_hire_doctor->Name = L"admin_panel_hire_doctor";
			this->admin_panel_hire_doctor->Size = System::Drawing::Size(122, 42);
			this->admin_panel_hire_doctor->TabIndex = 12;
			this->admin_panel_hire_doctor->Text = L"Hire Doctor";
			this->admin_panel_hire_doctor->UseVisualStyleBackColor = true;
		//	this->admin_panel_hire_doctor->Click += gcnew System::EventHandler(this, &MyForm::admin_panel_hire_doctor_Click);
			// 
			// doctor_panel
			// 
			this->doctor_panel->Controls->Add(this->doctor_panel_complain_button);
			this->doctor_panel->Controls->Add(this->doctor_panel_logout_button);
			this->doctor_panel->Controls->Add(this->doctor_panel_view_detail);
			this->doctor_panel->Location = System::Drawing::Point(846, 0);
			this->doctor_panel->Name = L"doctor_panel";
			this->doctor_panel->Size = System::Drawing::Size(420, 450);
			this->doctor_panel->TabIndex = 15;
			// 
			// doctor_panel_complain_button
			// 
			this->doctor_panel_complain_button->Location = System::Drawing::Point(26, 84);
			this->doctor_panel_complain_button->Name = L"doctor_panel_complain_button";
			this->doctor_panel_complain_button->Size = System::Drawing::Size(122, 42);
			this->doctor_panel_complain_button->TabIndex = 15;
			this->doctor_panel_complain_button->Text = L"Complain";
			this->doctor_panel_complain_button->UseVisualStyleBackColor = true;
			//this->doctor_panel_complain_button->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// doctor_panel_logout_button
			// 
			this->doctor_panel_logout_button->Location = System::Drawing::Point(273, 17);
			this->doctor_panel_logout_button->Name = L"doctor_panel_logout_button";
			this->doctor_panel_logout_button->Size = System::Drawing::Size(122, 42);
			this->doctor_panel_logout_button->TabIndex = 14;
			this->doctor_panel_logout_button->Text = L"Logout";
			this->doctor_panel_logout_button->UseVisualStyleBackColor = true;
			//this->doctor_panel_logout_button->Click += gcnew System::EventHandler(this, &MyForm::doctor_panel_logout_button_Click);
			// 
			// doctor_panel_view_detail
			// 
			this->doctor_panel_view_detail->Location = System::Drawing::Point(26, 16);
			this->doctor_panel_view_detail->Name = L"doctor_panel_view_detail";
			this->doctor_panel_view_detail->Size = System::Drawing::Size(122, 42);
			this->doctor_panel_view_detail->TabIndex = 13;
			this->doctor_panel_view_detail->Text = L"view detail";
			this->doctor_panel_view_detail->UseVisualStyleBackColor = true;
			//this->doctor_panel_view_detail->Click += gcnew System::EventHandler(this, &MyForm::doctor_panel_view_detail_Click);
			// 
			// view_detail_panel
			// 
			this->view_detail_panel->Controls->Add(this->view_detail_panel_change_button);
			this->view_detail_panel->Controls->Add(this->view_detail_panel_back_button);
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
			this->view_detail_panel->Location = System::Drawing::Point(441, 149);
			this->view_detail_panel->Name = L"view_detail_panel";
			this->view_detail_panel->Size = System::Drawing::Size(420, 450);
			this->view_detail_panel->TabIndex = 28;
			// 
			// view_detail_panel_change_button
			// 
			this->view_detail_panel_change_button->Location = System::Drawing::Point(28, 379);
			this->view_detail_panel_change_button->Name = L"view_detail_panel_change_button";
			this->view_detail_panel_change_button->Size = System::Drawing::Size(122, 42);
			this->view_detail_panel_change_button->TabIndex = 40;
			this->view_detail_panel_change_button->Text = L"Change";
			this->view_detail_panel_change_button->UseVisualStyleBackColor = true;
			this->view_detail_panel_change_button->Click += gcnew System::EventHandler(this, &MyForm::view_detail_panel_change_button_Click_1);
			// 
			// view_detail_panel_back_button
			// 
			this->view_detail_panel_back_button->Location = System::Drawing::Point(199, 379);
			this->view_detail_panel_back_button->Name = L"view_detail_panel_back_button";
			this->view_detail_panel_back_button->Size = System::Drawing::Size(122, 42);
			this->view_detail_panel_back_button->TabIndex = 39;
			this->view_detail_panel_back_button->Text = L"Back";
			this->view_detail_panel_back_button->UseVisualStyleBackColor = true;
			// 
			// view_detail_panel_security_q_label
			// 
			this->view_detail_panel_security_q_label->AutoSize = true;
			this->view_detail_panel_security_q_label->Location = System::Drawing::Point(48, 293);
			this->view_detail_panel_security_q_label->Name = L"view_detail_panel_security_q_label";
			this->view_detail_panel_security_q_label->Size = System::Drawing::Size(155, 22);
			this->view_detail_panel_security_q_label->TabIndex = 37;
			this->view_detail_panel_security_q_label->Text = L"Security question";
			// 
			// view_detail_security_q_textbox
			// 
			this->view_detail_security_q_textbox->Location = System::Drawing::Point(231, 286);
			this->view_detail_security_q_textbox->Name = L"view_detail_security_q_textbox";
			this->view_detail_security_q_textbox->Size = System::Drawing::Size(142, 29);
			this->view_detail_security_q_textbox->TabIndex = 36;
			// 
			// view_detail_panel_password_label
			// 
			this->view_detail_panel_password_label->AutoSize = true;
			this->view_detail_panel_password_label->Location = System::Drawing::Point(48, 253);
			this->view_detail_panel_password_label->Name = L"view_detail_panel_password_label";
			this->view_detail_panel_password_label->Size = System::Drawing::Size(94, 22);
			this->view_detail_panel_password_label->TabIndex = 33;
			this->view_detail_panel_password_label->Text = L"Password";
			// 
			// view_detail_panel_password_textbox
			// 
			this->view_detail_panel_password_textbox->Location = System::Drawing::Point(231, 246);
			this->view_detail_panel_password_textbox->Name = L"view_detail_panel_password_textbox";
			this->view_detail_panel_password_textbox->Size = System::Drawing::Size(142, 29);
			this->view_detail_panel_password_textbox->TabIndex = 32;
			// 
			// view_detail_panel_phone_no_label
			// 
			this->view_detail_panel_phone_no_label->AutoSize = true;
			this->view_detail_panel_phone_no_label->Location = System::Drawing::Point(48, 215);
			this->view_detail_panel_phone_no_label->Name = L"view_detail_panel_phone_no_label";
			this->view_detail_panel_phone_no_label->Size = System::Drawing::Size(91, 22);
			this->view_detail_panel_phone_no_label->TabIndex = 31;
			this->view_detail_panel_phone_no_label->Text = L"Phone no";
			// 
			// view_detail_panel_phone_no_textbox
			// 
			this->view_detail_panel_phone_no_textbox->Location = System::Drawing::Point(231, 208);
			this->view_detail_panel_phone_no_textbox->Name = L"view_detail_panel_phone_no_textbox";
			this->view_detail_panel_phone_no_textbox->Size = System::Drawing::Size(142, 29);
			this->view_detail_panel_phone_no_textbox->TabIndex = 30;
			// 
			// view_detail_panel_age_label
			// 
			this->view_detail_panel_age_label->AutoSize = true;
			this->view_detail_panel_age_label->Location = System::Drawing::Point(48, 177);
			this->view_detail_panel_age_label->Name = L"view_detail_panel_age_label";
			this->view_detail_panel_age_label->Size = System::Drawing::Size(45, 22);
			this->view_detail_panel_age_label->TabIndex = 29;
			this->view_detail_panel_age_label->Text = L"Age";
			// 
			// view_detail_panel_insurance_no_label
			// 
			this->view_detail_panel_insurance_no_label->AutoSize = true;
			this->view_detail_panel_insurance_no_label->Location = System::Drawing::Point(48, 138);
			this->view_detail_panel_insurance_no_label->Name = L"view_detail_panel_insurance_no_label";
			this->view_detail_panel_insurance_no_label->Size = System::Drawing::Size(119, 22);
			this->view_detail_panel_insurance_no_label->TabIndex = 28;
			this->view_detail_panel_insurance_no_label->Text = L"Insurance no";
			// 
			// view_detail_panel_id_label
			// 
			this->view_detail_panel_id_label->AutoSize = true;
			this->view_detail_panel_id_label->Location = System::Drawing::Point(48, 107);
			this->view_detail_panel_id_label->Name = L"view_detail_panel_id_label";
			this->view_detail_panel_id_label->Size = System::Drawing::Size(99, 22);
			this->view_detail_panel_id_label->TabIndex = 27;
			this->view_detail_panel_id_label->Text = L"ID number";
			// 
			// view_detail_panel_last_name_label
			// 
			this->view_detail_panel_last_name_label->AutoSize = true;
			this->view_detail_panel_last_name_label->Location = System::Drawing::Point(48, 72);
			this->view_detail_panel_last_name_label->Name = L"view_detail_panel_last_name_label";
			this->view_detail_panel_last_name_label->Size = System::Drawing::Size(101, 22);
			this->view_detail_panel_last_name_label->TabIndex = 26;
			this->view_detail_panel_last_name_label->Text = L"Last Name";
			// 
			// view_detail_panel_first_name_label
			// 
			this->view_detail_panel_first_name_label->AutoSize = true;
			this->view_detail_panel_first_name_label->Location = System::Drawing::Point(48, 33);
			this->view_detail_panel_first_name_label->Name = L"view_detail_panel_first_name_label";
			this->view_detail_panel_first_name_label->Size = System::Drawing::Size(102, 22);
			this->view_detail_panel_first_name_label->TabIndex = 25;
			this->view_detail_panel_first_name_label->Text = L"First Name";
			// 
			// view_detail_panel_last_name_textbox
			// 
			this->view_detail_panel_last_name_textbox->Location = System::Drawing::Point(231, 65);
			this->view_detail_panel_last_name_textbox->Name = L"view_detail_panel_last_name_textbox";
			this->view_detail_panel_last_name_textbox->Size = System::Drawing::Size(142, 29);
			this->view_detail_panel_last_name_textbox->TabIndex = 24;
			// 
			// view_detail_panel_id_textbox
			// 
			this->view_detail_panel_id_textbox->Enabled = false;
			this->view_detail_panel_id_textbox->Location = System::Drawing::Point(231, 100);
			this->view_detail_panel_id_textbox->Name = L"view_detail_panel_id_textbox";
			this->view_detail_panel_id_textbox->Size = System::Drawing::Size(142, 29);
			this->view_detail_panel_id_textbox->TabIndex = 23;
			// 
			// view_detail_panel_insurance_no_textbox
			// 
			this->view_detail_panel_insurance_no_textbox->Location = System::Drawing::Point(231, 135);
			this->view_detail_panel_insurance_no_textbox->Name = L"view_detail_panel_insurance_no_textbox";
			this->view_detail_panel_insurance_no_textbox->Size = System::Drawing::Size(142, 29);
			this->view_detail_panel_insurance_no_textbox->TabIndex = 22;
			// 
			// view_detail_panel_age_textbox
			// 
			this->view_detail_panel_age_textbox->Location = System::Drawing::Point(231, 170);
			this->view_detail_panel_age_textbox->Name = L"view_detail_panel_age_textbox";
			this->view_detail_panel_age_textbox->Size = System::Drawing::Size(142, 29);
			this->view_detail_panel_age_textbox->TabIndex = 21;
			// 
			// view_detail_panel_first_name_textbox
			// 
			this->view_detail_panel_first_name_textbox->Location = System::Drawing::Point(231, 30);
			this->view_detail_panel_first_name_textbox->Name = L"view_detail_panel_first_name_textbox";
			this->view_detail_panel_first_name_textbox->Size = System::Drawing::Size(142, 29);
			this->view_detail_panel_first_name_textbox->TabIndex = 20;
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(1302, 749);
			this->Controls->Add(this->view_detail_panel);
			this->Controls->Add(this->complain_panel);
			this->Controls->Add(this->doctor_panel);
			this->Controls->Add(this->admin_panel);
			this->Controls->Add(this->main_panel);
			this->Controls->Add(this->forget_password_panel);
			this->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->login_panel->ResumeLayout(false);
			this->login_panel->PerformLayout();
			this->forget_password_panel->ResumeLayout(false);
			this->forget_password_panel->PerformLayout();
			this->signup_panel->ResumeLayout(false);
			this->signup_panel->PerformLayout();
			this->complain_panel->ResumeLayout(false);
			this->complain_panel->PerformLayout();
			this->main_panel->ResumeLayout(false);
			this->admin_panel->ResumeLayout(false);
			this->doctor_panel->ResumeLayout(false);
			this->view_detail_panel->ResumeLayout(false);
			this->view_detail_panel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	public:
		User^ user;
		Patient^ userp = gcnew Patient();
		doctor^ userd = gcnew doctor();
		admin^ usera = gcnew admin();
		bool ismain_panel_patient_button = false;
		bool ismain_panel_admin_button = false;
		bool ismain_panel_doctor_button = false;
		private: System::Void login_button_Click(System::Object^ sender, System::EventArgs^ e)
		{
			String^ id = this->login_panel_id_textbox->Text;
			String^ password = this->login_panel_password_textbox->Text;
			if (ismain_panel_patient_button == true)
			{
				bool c = userp->login(id, password);
				if (c == 1)
				{
					//login_panel->Visible = false; // show the panel
					//patient_panel->Visible = true; // hide the panel
					
					MyForm::Hide();
					Patient_Form^ P = gcnew Patient_Form(userp);
					P->Show();
				}
			}
			else if (ismain_panel_doctor_button == true)
			{
				bool c = userd->login(id, password);
				if (c == 1)
				{
					//login_panel->Visible = false; // show the panel
					//doctor_panel->Visible = true; // hide the panel

					this->Hide();
					Doctor_Form^ P = gcnew Doctor_Form(userd);
					P->Show();
					login_panel_signup_button->Visible = true;
				}
			}
			else if (ismain_panel_admin_button == true)
			{
				bool c = usera->login(id, password);
				if (c == 1)
				{
					//login_panel->Visible = false; // show the panel
					//admin_panel->Visible = true; // hide the panel

					this->Hide();
					Admin_Form^ P = gcnew Admin_Form();
					P->Show();
					login_panel_signup_button->Visible = true;
				}
			}
			/*login_panel_id_textbox->Text = "";
			login_panel_password_textbox->Text = "";	*/
		}
		private: System::Void signup_button_Click(System::Object^ sender, System::EventArgs^ e)
		{
			login_panel->Visible = false; // show the panel
			signup_panel->Visible = true; // hide the panel
		}
		private: System::Void sign_up_button_Click(System::Object^ sender, System::EventArgs^ e)
		{
			String^ first_name = sign_up_first_name_textbox->Text;
			String^ last_name = sign_up_last_name_textbox->Text;
			String^ id = sign_up_id_textbox->Text;
			String^ insurance_no = sign_up_insuranc_no_textbox->Text;
			String^ age = sign_up_age_textbox->Text;
			String^ phone = sign_up_phone_no_textbox->Text;
			String^ password = sign_up_password_textbox->Text;
			String^ confirmPassword = sign_up_confirm_password_textbox->Text;
			String^ secutity_q = sign_up_security_q_textbox->Text;
			 userp->signup(id, password,first_name,last_name,insurance_no,age,phone,secutity_q,confirmPassword);
				login_panel->Visible = true; // show the panel
				signup_panel->Visible = false; // hide the panel	
				sign_up_first_name_textbox->Text = "";
				sign_up_last_name_textbox->Text = "";
				sign_up_id_textbox->Text = "";
				sign_up_insuranc_no_textbox->Text = "";
				sign_up_age_textbox->Text = "";
				sign_up_phone_no_textbox->Text = "";
				sign_up_password_textbox->Text = "";
				sign_up_confirm_password_textbox->Text = "";
				sign_up_security_q_textbox->Text = "";
		};
		private: System::Void Sign_up_back_Click(System::Object^ sender, System::EventArgs^ e)
		{
			login_panel->Visible = true; // show the panel
			signup_panel->Visible = false; // hide the panel
		}
		private: System::Void login_panel_forget_password_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			login_panel->Visible = false;
			forget_password_panel->Visible = true;
		}
		private: System::Void forget_password_panel_back_button_Click(System::Object^ sender, System::EventArgs^ e)
		{
			login_panel->Visible = true;
			forget_password_panel->Visible = false;
		}
		private: System::Void forget_password_panel_enter_button_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			String^ id = forget_password_panel_id_textbox->Text;
			String^ security_q = forget_password_panel_security_q_textbox->Text;
			if (ismain_panel_patient_button == true)
			{
				userp->forget_passowrd(id, security_q);
			}
			else if (ismain_panel_doctor_button == true)
			{
				userd->forget_passowrd(id, security_q);
			}
			else if (ismain_panel_admin_button == true)
			{
				usera->forget_passowrd(id, security_q);
			}
			forget_password_panel_id_textbox->Text="";
			forget_password_panel_security_q_textbox->Text="";
		}
		private: System::Void login_panel_exit_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			main_panel->Visible = true;
			login_panel->Visible = false;
			ismain_panel_admin_button = false;
			ismain_panel_doctor_button = false;
			ismain_panel_patient_button = false;
			login_panel_signup_button->Visible = true;
		}
		//private: System::Void patient_panel_logout_button_Click(System::Object^ sender, System::EventArgs^ e) 
		//{
		//	login_panel->Visible = true; // show the panel
		//	//patient_panel->Visible = false; // hide the panel
		//}
		//private: System::Void patient_panel_view_detail_button_Click(System::Object^ sender, System::EventArgs^ e) 
		//{
		//	view_detail_panel->Visible = true; // show the panel
		//	//patient_panel->Visible = false; // hide the panel
		//	view_detail_panel_first_name_textbox->Text = userp->first_name;
		//	view_detail_panel_last_name_textbox->Text = userp->last_name;
		//	view_detail_panel_id_textbox->Text = userp->id;
		//	view_detail_panel_insurance_no_textbox->Text = userp->insurance_no;
		//	view_detail_panel_age_textbox->Text = userp->age;
		//	view_detail_panel_phone_no_textbox->Text = userp->phone_no;
		//	view_detail_panel_password_textbox->Text = userp->password;
		//	view_detail_security_q_textbox->Text = userp->security_q;
		//}
		private: System::Void view_detail_panel_back_button_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			this->view_detail_panel_insurance_no_label->Text = L"insurance no";
			if(ismain_panel_patient_button==1)
			{
				view_detail_panel->Visible = false; // show the panel
				//patient_panel->Visible = true; // hide the panel 
			}
			else if(ismain_panel_doctor_button==1)
			{
				view_detail_panel->Visible = false; // show the panel
				doctor_panel->Visible = true; // hide the panel
			}
			else
			{
				view_detail_panel->Visible = false; // show the panel
				admin_panel->Visible = true;
				this->view_detail_panel_change_button->Text = L"Change";
				view_detail_panel_id_textbox->Enabled = false;
			}
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
			if (ismain_panel_patient_button == 1)
			{
				 userp->change_detail(f, l, id, p, in, se, a, ph);
			}
			else if(ismain_panel_doctor_button == 1)
			{
				userd->change_detail(f, l, id, p, in, se,a, ph);
			}
			else
			{
				view_detail_panel_first_name_textbox->Text = "";
				view_detail_panel_last_name_textbox->Text = "";
				view_detail_panel_id_textbox->Text = "";
				view_detail_panel_insurance_no_textbox->Text = "";
				view_detail_panel_age_textbox->Text = "";
				view_detail_panel_phone_no_textbox->Text = "";
				view_detail_panel_password_textbox->Text = "";
				view_detail_security_q_textbox->Text = "";
				userd->hiredoctor(id, p, f, l, in, a, ph, se, con);
			}
		}
		//private: System::Void patient_panel_complaint_button_Click(System::Object^ sender, System::EventArgs^ e)
		//{
		//	complain_panel->Visible = true; // show the panel
		//	//patient_panel->Visible = false; // hide the panel
		//}
		private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void complain_panel_ok_button_Click(System::Object^ sender, System::EventArgs^ e)
		{
			if (ismain_panel_admin_button == 1)
			{
				String^y = complain_panel_textbox->Text;
				userd->firedoctor(y);
				complain_panel_textbox->Text = "";
			}
			else
			{
				String^ y = complain_panel_textbox->Text;
				userp->complain(y);
				complain_panel_textbox->Text = "";
			}
		}
		private: System::Void complain_panel_back_button_Click(System::Object^ sender, System::EventArgs^ e)
		{
			complain_panel->Visible = false; // show the panel
			if (ismain_panel_patient_button == true)
				;
				//patient_panel->Visible = true; // hide the panel
			else if(ismain_panel_doctor_button==1)
				doctor_panel->Visible = true; // hide the panel
			else
				admin_panel->Visible = true;
		}
		private: System::Void main_panel_exit_button_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			this->Close();
		}
		private: System::Void main_panel_patient_button_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			main_panel->Visible = false;
			login_panel->Visible = true;
			ismain_panel_patient_button = true;
		}
		private: System::Void main_panel_doctor_button_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			main_panel->Visible = false;
			login_panel->Visible = true;
			ismain_panel_doctor_button = true;
			login_panel_signup_button->Visible = false;
		}
		private: System::Void main_panel_admin_button_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			main_panel->Visible = false;
			login_panel->Visible = true;
			ismain_panel_admin_button = true;
			login_panel_signup_button->Visible = false;
		}
		private: System::Void admin_panel_hire_doctor_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			view_detail_panel->Visible = true;
			admin_panel->Visible = false;
			view_detail_panel_insurance_no_label->Text = L"specialization";
			view_detail_panel_change_button->Text = L"Hire";
			view_detail_panel_id_textbox->Enabled=true;
		}
		//private: System::Void doctor_panel_logout_button_Click(System::Object^ sender, System::EventArgs^ e) 
		//{
		//	login_panel->Visible = true; // show the panel
		//	doctor_panel->Visible = false; // hide the panel
		//}
		private: System::Void admin_panel_logout_button_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			login_panel->Visible = true; // show the panel
			admin_panel->Visible = false; // hide the panel
		}
		//private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
		//{
		//	complain_panel->Visible = true; // show the panel
		//	doctor_panel->Visible = false; // hide the panel
		//}
		//private: System::Void doctor_panel_view_detail_Click(System::Object^ sender, System::EventArgs^ e)
		//{
		//	view_detail_panel->Visible = true; // show the panel
		//	doctor_panel->Visible = false; // hide the panel
		//	this->view_detail_panel_insurance_no_label->Text = L"specialization";
		//	view_detail_panel_first_name_textbox->Text = userd->first_name;
		//	view_detail_panel_last_name_textbox->Text = userd->last_name;
		//	view_detail_panel_id_textbox->Text = userd->id;
		//	view_detail_panel_insurance_no_textbox->Text = userd->specialization;
		//	view_detail_panel_age_textbox->Text = userd->age;
		//	view_detail_panel_phone_no_textbox->Text = userd->phone_no;
		//	view_detail_panel_password_textbox->Text = userd->password;
		//	view_detail_security_q_textbox->Text = userd->security_q;
		//}
		private: System::Void admin_panel_fire_doctor_Click(System::Object^ sender, System::EventArgs^ e)
		{
			complain_panel->Visible = true;
			admin_panel->Visible = false;
		}
		/*private: System::Void make_appointment_panel_combo_box_DropDown(System::Object^ sender, System::EventArgs^ e)
		{
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
		}*/
		/*private: System::Void patient_panel_make_appointment_button_Click(System::Object^ sender, System::EventArgs^ e)
		{
			make_appointment_panel->Visible = true;
			patient_panel->Visible = false;
		}*/
		/*private: System::Void make_appointment_ok_button_Click(System::Object^ sender, System::EventArgs^ e)*/
		/*{
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
				else if(t==true)
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
				String ^x=userp->getid();
				userp->make_appointment(selectedDate,y_id,x,y_name);
				make_appointment_panel_combo_box->Text="";
			}
		}*/
		/*private: System::Void make_appointment_back_button_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			make_appointment_panel->Visible = false;
			patient_panel->Visible = true;
		}*/
		/*private: System::Void patient_panel_cancel_button_Click(System::Object^ sender, System::EventArgs^ e)
		{
			cancel_appointment_panel->Visible = true;
			patient_panel->Visible = false;
		}
			   String^ a;
			   DateTime b;*/
		/*private: System::Void cancelappointment_combobox_DropDown(System::Object^ sender, System::EventArgs^ e)
		{
			try {
				String^ patientId = userp->getid();
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
					String^ doctorInfo = "Doctor Name:" + doctorName  + " docotor id;"+doctorId+ " Date,"+date.ToString("yyyy-MM-dd");
					cancelappointment_combobox->Items->Add(doctorInfo);
				}
				reader->Close();
				sqlConn.Close();
			}
			catch (Exception^ e)
			{
				MessageBox::Show("Failed to connect to database", "Database Connection Error", MessageBoxButtons::OK);
			}
		}*/
		/*private: System::Void cancel_appointment_back_button_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			cancel_appointment_panel->Visible = false;
			patient_panel->Visible = true;
		}
		private: System::Void cancel_appointment_ok_button_Click(System::Object^ sender, System::EventArgs^ e)
		{
			
				String^ selectedOption = cancelappointment_combobox->SelectedItem->ToString();
				userp->cancel_appointment(selectedOption);
		}

		*/
	private: System::Void view_detail_panel_change_button_Click_1(System::Object^ sender, System::EventArgs^ e) {
		}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	String^ complain;
	try
	{
		String^ connString = rr;
		SqlConnection sqlConn(connString);
		sqlConn.Open();
		String^ sqlQuery = "SELECT * FROM complain";
		SqlCommand command(sqlQuery, % sqlConn);
		SqlDataReader^ reader = command.ExecuteReader();
		MessageBox::Show(reader[0]->ToString(), "Complaints", MessageBoxButtons::OK);
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Exception", "exception", MessageBoxButtons::OK);
	}

}
};
}