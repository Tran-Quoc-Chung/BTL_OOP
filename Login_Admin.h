#pragma once
#include "AdminForm.h"

namespace BTL_OOP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Login_Admin
	/// </summary>
	public ref class Login_Admin : public System::Windows::Forms::Form
	{
	public:
		Login_Admin(void)
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
		~Login_Admin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ tbx_username_admin;
	protected:
	private: System::Windows::Forms::TextBox^ tbx_password_admin;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

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
			this->tbx_username_admin = (gcnew System::Windows::Forms::TextBox());
			this->tbx_password_admin = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// tbx_username_admin
			// 
			this->tbx_username_admin->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbx_username_admin->Location = System::Drawing::Point(213, 71);
			this->tbx_username_admin->Name = L"tbx_username_admin";
			this->tbx_username_admin->Size = System::Drawing::Size(183, 34);
			this->tbx_username_admin->TabIndex = 0;
			// 
			// tbx_password_admin
			// 
			this->tbx_password_admin->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbx_password_admin->Location = System::Drawing::Point(213, 155);
			this->tbx_password_admin->Name = L"tbx_password_admin";
			this->tbx_password_admin->Size = System::Drawing::Size(183, 34);
			this->tbx_password_admin->TabIndex = 1;
			this->tbx_password_admin->UseSystemPasswordChar = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 74);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(171, 25);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Tên đăng nhập:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 158);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(119, 25);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Mật khẩu:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(81, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(393, 32);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Đăng nhập với tư cách là quản lí";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(213, 206);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(135, 46);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Đăng nhập";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Login_Admin::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(437, 206);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(135, 46);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Quay lại";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Login_Admin::button2_Click);
			// 
			// Login_Admin
			// 
			this->AcceptButton = this->button1;
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(584, 286);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tbx_password_admin);
			this->Controls->Add(this->tbx_username_admin);
			this->Name = L"Login_Admin";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login_Admin";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		AdminForm^ admin = gcnew AdminForm();
		String^ username = "Admin";
		String^ password = "12345";

		if (tbx_password_admin->Text == password && tbx_username_admin->Text == username) {

			
			this->Hide();
			admin->ShowDialog();
			this->Close();

		}
		else {
			MessageBox::Show(L"Sai tên đăng nhập hoặc mật khẩu, vui lòng thử lại.", "Lỗi", MessageBoxButtons::RetryCancel, MessageBoxIcon::Error);
		}


	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
