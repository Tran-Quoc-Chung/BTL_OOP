#pragma once

namespace BTL_OOP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SqlClient;

	/// <summary>
	/// Summary for Bill
	/// </summary>

	public ref class Bill : public System::Windows::Forms::Form
	{

		SqlConnection^ conect = gcnew SqlConnection("Data Source=(LocalDB)\\MSSQLLocalDB;AttachDbFilename=@"C:\Users\Acer PV\OneDrive\Documents\Data.mdf";Integrated Security=True;Connect Timeout=30");
	public:
		Bill(void)
		{

			InitializeComponent();

			//
			//TODO: Add the constructor code here
			//
			SetBill();
	

		}



		void SetBill() {

			DateTime^ date = DateTime::Now;

			lbl_time->Text = date->ToString();

		}


#pragma region Declare(BILL)



	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Bill()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Label^ label1;
	protected:
	public: System::Windows::Forms::Label^ label2;
	public: System::Windows::Forms::Label^ label3;
	public: System::Windows::Forms::Label^ label4;
	public: System::Windows::Forms::Label^ label5;
	public: System::Windows::Forms::Label^ label6;
	public: System::Windows::Forms::Label^ label7;
	public: System::Windows::Forms::Label^ label8;
	public: System::Windows::Forms::Label^ label9;
	public: System::Windows::Forms::Label^ label10;
	public: System::Windows::Forms::Label^ label11;
	public: System::Windows::Forms::Label^ label12;
	public: System::Windows::Forms::Label^ label13;
	public: System::Windows::Forms::DataGridView^ dgv_bill;
	public: System::Windows::Forms::Label^ label14;
	public: System::Windows::Forms::Label^ lbl_number;
	public: System::Windows::Forms::Label^ lbl_totalBill;
	public: System::Windows::Forms::Label^ lbl_HD;
	public: System::Windows::Forms::Label^ lbl_staff;
	public: System::Windows::Forms::Label^ lbl_time;
	public: System::Windows::Forms::Button^ button1;

	protected:
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;
#pragma endregion
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->dgv_bill = (gcnew System::Windows::Forms::DataGridView());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->lbl_number = (gcnew System::Windows::Forms::Label());
			this->lbl_totalBill = (gcnew System::Windows::Forms::Label());
			this->lbl_HD = (gcnew System::Windows::Forms::Label());
			this->lbl_staff = (gcnew System::Windows::Forms::Label());
			this->lbl_time = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_bill))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(137, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(163, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"OOP COFFEE";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(115, 117);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(215, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Hóa đơn thanh toán";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(13, 161);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 23);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Số: ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(11, 199);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(96, 23);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Thời gian:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(87, 97);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(264, 25);
			this->label5->TabIndex = 4;
			this->label5->Text = L"------------------------------------";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(12, 44);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(277, 22);
			this->label6->TabIndex = 5;
			this->label6->Text = L"ĐC: P203E7 DH GTVT-CS HCM";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(12, 653);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(149, 23);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Tổng thành tiền:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(13, 240);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(169, 23);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Nhân viên phục vụ:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(262, 687);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(85, 23);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Tiền mặt";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(12, 75);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(156, 22);
			this->label10->TabIndex = 9;
			this->label10->Text = L"SDT: 0987123456";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(12, 687);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(219, 23);
			this->label11->TabIndex = 10;
			this->label11->Text = L"Phương thức thanh toán:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(62, 735);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(356, 25);
			this->label12->TabIndex = 11;
			this->label12->Text = L"Xin cảm ơn, hẹn gặp lại quý khách";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(87, 710);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(300, 25);
			this->label13->TabIndex = 12;
			this->label13->Text = L"------------------------------------";
			this->label13->Click += gcnew System::EventHandler(this, &Bill::label13_Click);
			// 
			// dgv_bill
			// 
			this->dgv_bill->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::ColumnHeader;
			this->dgv_bill->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dgv_bill->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgv_bill->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dgv_bill->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_bill->Location = System::Drawing::Point(6, 281);
			this->dgv_bill->Name = L"dgv_bill";
			this->dgv_bill->ReadOnly = true;
			this->dgv_bill->RowHeadersWidth = 51;
			this->dgv_bill->RowTemplate->Height = 24;
			this->dgv_bill->Size = System::Drawing::Size(464, 319);
			this->dgv_bill->TabIndex = 14;
			this->dgv_bill->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Bill::dgv_bill_CellContentClick);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(13, 615);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(104, 23);
			this->label14->TabIndex = 15;
			this->label14->Text = L"Tổng cộng:";
			// 
			// lbl_number
			// 
			this->lbl_number->AutoSize = true;
			this->lbl_number->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_number->Location = System::Drawing::Point(262, 616);
			this->lbl_number->Name = L"lbl_number";
			this->lbl_number->Size = System::Drawing::Size(82, 22);
			this->lbl_number->TabIndex = 16;
			this->lbl_number->Text = L"Số lượng";
			// 
			// lbl_totalBill
			// 
			this->lbl_totalBill->AutoSize = true;
			this->lbl_totalBill->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_totalBill->Location = System::Drawing::Point(262, 654);
			this->lbl_totalBill->Name = L"lbl_totalBill";
			this->lbl_totalBill->Size = System::Drawing::Size(92, 22);
			this->lbl_totalBill->TabIndex = 17;
			this->lbl_totalBill->Text = L"Thành tiền";
			// 
			// lbl_HD
			// 
			this->lbl_HD->AutoSize = true;
			this->lbl_HD->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_HD->Location = System::Drawing::Point(262, 161);
			this->lbl_HD->Name = L"lbl_HD";
			this->lbl_HD->Size = System::Drawing::Size(99, 22);
			this->lbl_HD->TabIndex = 18;
			this->lbl_HD->Text = L"Số hóa đơn";
			// 
			// lbl_staff
			// 
			this->lbl_staff->AutoSize = true;
			this->lbl_staff->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_staff->Location = System::Drawing::Point(262, 241);
			this->lbl_staff->Name = L"lbl_staff";
			this->lbl_staff->Size = System::Drawing::Size(90, 22);
			this->lbl_staff->TabIndex = 19;
			this->lbl_staff->Text = L"Nhân viên";
			// 
			// lbl_time
			// 
			this->lbl_time->AutoSize = true;
			this->lbl_time->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_time->Location = System::Drawing::Point(262, 200);
			this->lbl_time->Name = L"lbl_time";
			this->lbl_time->Size = System::Drawing::Size(86, 22);
			this->lbl_time->TabIndex = 20;
			this->lbl_time->Text = L"Thời gian";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(357, 772);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(113, 42);
			this->button1->TabIndex = 21;
			this->button1->Text = L"In hóa đơn";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Bill::button1_Click);
			// 
			// Bill
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(482, 817);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lbl_time);
			this->Controls->Add(this->lbl_staff);
			this->Controls->Add(this->lbl_HD);
			this->Controls->Add(this->lbl_totalBill);
			this->Controls->Add(this->lbl_number);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->dgv_bill);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Bill";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Bill";
			this->Load += gcnew System::EventHandler(this, &Bill::Bill_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_bill))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dgv_bill_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void Bill_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Close();
	}
	};
}
