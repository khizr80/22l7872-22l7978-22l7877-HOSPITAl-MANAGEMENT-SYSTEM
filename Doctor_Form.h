#pragma once
#include "User.h"
#include"doctor.h"
#include "admin.h"

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
	private: System::Windows::Forms::Button^ button1;
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
			this->doctor_panel_complain_button = (gcnew System::Windows::Forms::Button());
			this->doctor_panel_logout_button = (gcnew System::Windows::Forms::Button());
			this->doctor_panel_view_detail = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
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
			this->view_detail_panel->SuspendLayout();
			this->complain_panel->SuspendLayout();
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
			// button1
			// 
			this->button1->Location = System::Drawing::Point(18, 145);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(122, 42);
			this->button1->TabIndex = 19;
			this->button1->Text = L"Next";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Doctor_Form::button1_Click);
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
			this->view_detail_panel->Location = System::Drawing::Point(172, 11);
			this->view_detail_panel->Name = L"view_detail_panel";
			this->view_detail_panel->Size = System::Drawing::Size(420, 384);
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
			this->complain_panel->Location = System::Drawing::Point(598, 11);
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
			// Doctor_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1247, 531);
			this->Controls->Add(this->back);
			this->Controls->Add(this->complain_panel);
			this->Controls->Add(this->view_detail_panel);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->doctor_panel_complain_button);
			this->Controls->Add(this->doctor_panel_logout_button);
			this->Controls->Add(this->doctor_panel_view_detail);
			this->Name = L"Doctor_Form";
			this->Text = L"Doctor_Form";
			this->view_detail_panel->ResumeLayout(false);
			this->view_detail_panel->PerformLayout();
			this->complain_panel->ResumeLayout(false);
			this->complain_panel->PerformLayout();
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
}
};
}
