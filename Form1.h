#pragma once
#include "Main1.h"

using namespace BTL_OOP;
namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SqlClient;


	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
		SqlConnection^ conect = gcnew SqlConnection("Data Source=.\\SQLEXPRESS;Initial Catalog=BTL_Data;Integrated Security=True");
	public:
		Form1(void)
		{
			conect->Open();
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//


		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::TextBox^ tbx_username_;
	protected:
	public: System::Windows::Forms::TextBox^ tbx_password_;

	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btn_Login_;
	private: System::Windows::Forms::Button^ btn_Exit_;

	private: System::Windows::Forms::CheckBox^ chx_check_pass;
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::ImageList^ imageList2;

	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->tbx_username_ = (gcnew System::Windows::Forms::TextBox());
			this->tbx_password_ = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btn_Login_ = (gcnew System::Windows::Forms::Button());
			this->btn_Exit_ = (gcnew System::Windows::Forms::Button());
			this->chx_check_pass = (gcnew System::Windows::Forms::CheckBox());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->imageList2 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->SuspendLayout();
			// 
			// tbx_username_
			// 
			this->tbx_username_->BackColor = System::Drawing::SystemColors::Window;
			this->tbx_username_->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbx_username_->Location = System::Drawing::Point(274, 97);
			this->tbx_username_->Name = L"tbx_username_";
			this->tbx_username_->Size = System::Drawing::Size(182, 34);
			this->tbx_username_->TabIndex = 1;
			this->tbx_username_->TextChanged += gcnew System::EventHandler(this, &Form1::tbx_username__TextChanged);
			// 
			// tbx_password_
			// 
			this->tbx_password_->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbx_password_->Location = System::Drawing::Point(274, 153);
			this->tbx_password_->Name = L"tbx_password_";
			this->tbx_password_->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->tbx_password_->Size = System::Drawing::Size(182, 34);
			this->tbx_password_->TabIndex = 2;
			this->tbx_password_->UseSystemPasswordChar = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(111, 100);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(157, 26);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Tên đăng nhập:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(111, 156);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(105, 26);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Mật khẩu:";
			// 
			// btn_Login_
			// 
			this->btn_Login_->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->btn_Login_->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Login_->Location = System::Drawing::Point(148, 221);
			this->btn_Login_->Name = L"btn_Login_";
			this->btn_Login_->Size = System::Drawing::Size(171, 53);
			this->btn_Login_->TabIndex = 5;
			this->btn_Login_->Text = L"Đăng nhập";
			this->btn_Login_->UseVisualStyleBackColor = false;
			this->btn_Login_->Click += gcnew System::EventHandler(this, &Form1::btn_Login__Click);
			// 
			// btn_Exit_
			// 
			this->btn_Exit_->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Exit_->Location = System::Drawing::Point(392, 226);
			this->btn_Exit_->Name = L"btn_Exit_";
			this->btn_Exit_->Size = System::Drawing::Size(103, 42);
			this->btn_Exit_->TabIndex = 6;
			this->btn_Exit_->Text = L"Thoát";
			this->btn_Exit_->UseVisualStyleBackColor = true;
			this->btn_Exit_->Click += gcnew System::EventHandler(this, &Form1::btn_Exit__Click);
			// 
			// chx_check_pass
			// 
			this->chx_check_pass->AutoSize = true;
			this->chx_check_pass->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chx_check_pass->Location = System::Drawing::Point(367, 193);
			this->chx_check_pass->Name = L"chx_check_pass";
			this->chx_check_pass->Size = System::Drawing::Size(128, 23);
			this->chx_check_pass->TabIndex = 7;
			this->chx_check_pass->Text = L"Hiện mật khẩu";
			this->chx_check_pass->UseVisualStyleBackColor = true;
			this->chx_check_pass->CheckedChanged += gcnew System::EventHandler(this, &Form1::chx_check_pass_CheckedChanged);
			// 
			// imageList1
			// 
			this->imageList1->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
			this->imageList1->ImageSize = System::Drawing::Size(16, 16);
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			// 
			// imageList2
			// 
			this->imageList2->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
			this->imageList2->ImageSize = System::Drawing::Size(16, 16);
			this->imageList2->TransparentColor = System::Drawing::Color::Transparent;
			// 
			// Form1
			// 
			this->AcceptButton = this->btn_Login_;
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->ClientSize = System::Drawing::Size(510, 295);
			this->Controls->Add(this->btn_Login_);
			this->Controls->Add(this->btn_Exit_);
			this->Controls->Add(this->chx_check_pass);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tbx_username_);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tbx_password_);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Đăng nhập";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void tbx_username__TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}


private: System::Void btn_Login__Click(System::Object^ sender, System::EventArgs^ e) {
	if (tbx_password_->Text == "" || tbx_username_->Text == "") {
		MessageBox::Show(L"Vui lòng nhập đầy đủ tên đăng nhập và mật khẩu", L"Không hợp lệ", MessageBoxButtons::OKCancel, MessageBoxIcon::Error);
	}
	else {

		String^ user = tbx_username_->Text;
		String^ pass = tbx_password_->Text;
		String^ admin_user = "Admin";
		String^ admin_pass = "12345";
		SqlCommand^ cmd = gcnew  SqlCommand("SELECT * FROM Account WHERE Username='" + user + "' and Password='" + pass + "' ", conect);
		SqlDataReader^ data = cmd->ExecuteReader();

		
		if (data->Read() == true || (user == admin_user&& pass==admin_pass) ) {

			

			Main^ main = gcnew Main();
			main->lbl_name_staff->Text = user->ToString();
			this->Hide();
			main->ShowDialog();
			this->Show();
			tbx_username_->Clear();
			tbx_password_->Clear();
			data->Close();

		}
		else {
			MessageBox::Show(L"Sai tên tài khoản hoặc mật khẩu, vui lòng thử lại", L"Đăng nhập thất bại", MessageBoxButtons::RetryCancel, MessageBoxIcon::Error);
			data->Close();
		}
		
	}

}
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	
}
private: System::Void btn_Exit__Click(System::Object^ sender, System::EventArgs^ e) {
	if (MessageBox::Show(L"Bạn có muốn thoát chương trình? ", L"Thông báo", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
		Application::Exit();
	}
}
private: System::Void chx_check_pass_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	if (chx_check_pass->Checked ) {
		tbx_password_->UseSystemPasswordChar = false;
	}
	else {
		tbx_password_->UseSystemPasswordChar = true;
	}
}

};
}
