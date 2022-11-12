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
	/// Summary for Proceeds
	/// </summary>
	public ref class Proceeds : public System::Windows::Forms::Form
	{
		SqlConnection^ conect = gcnew SqlConnection("Data Source=.\\SQLEXPRESS;Initial Catalog=BTL_Data;Integrated Security=True");
	public:
		Proceeds(void)
		{	
			conect->Open();
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			SqlDataAdapter^ adap_proceeds = gcnew SqlDataAdapter("SELECT * FROM  [Proceeds]", conect);
			DataTable^ data_proceeds = gcnew DataTable();
			adap_proceeds->Fill(data_proceeds);
			dgv_proceeds->DataSource = data_proceeds;
			
		
			//	for (int i = 0; i < dgv_bill_table->Rows->Count; i++) {
			//tbx_total_bill->Text = Convert::ToString(double::Parse(tbx_total_bill->Text) + double::Parse(dgv_bill_table->Rows[i]->Cells[3]->Value->ToString()));
			int x=0;
			for (int i = 0; i < dgv_proceeds->Rows->Count; i++) {
				x = x + (Convert::ToInt32( dgv_proceeds->Rows[i]->Cells[3]->Value->ToString()));
		}
			tbx_total_proceeds->Text = x.ToString();
		
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Proceeds()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::DataGridView^ dgv_proceeds;
	private: System::Windows::Forms::TextBox^ tbx_total_proceeds;
	public:

	public:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btn_statistic;
	private: System::Windows::Forms::DateTimePicker^ dt_statistic;

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->dgv_proceeds = (gcnew System::Windows::Forms::DataGridView());
			this->tbx_total_proceeds = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btn_statistic = (gcnew System::Windows::Forms::Button());
			this->dt_statistic = (gcnew System::Windows::Forms::DateTimePicker());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_proceeds))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dgv_proceeds
			// 
			this->dgv_proceeds->AllowUserToAddRows = false;
			this->dgv_proceeds->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgv_proceeds->BackgroundColor = System::Drawing::SystemColors::ControlLight;
			this->dgv_proceeds->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::Disable;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgv_proceeds->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->dgv_proceeds->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle5->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dgv_proceeds->DefaultCellStyle = dataGridViewCellStyle5;
			this->dgv_proceeds->GridColor = System::Drawing::SystemColors::Window;
			this->dgv_proceeds->Location = System::Drawing::Point(27, 90);
			this->dgv_proceeds->Name = L"dgv_proceeds";
			this->dgv_proceeds->ReadOnly = true;
			this->dgv_proceeds->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToDisplayedHeaders;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dgv_proceeds->RowsDefaultCellStyle = dataGridViewCellStyle6;
			this->dgv_proceeds->RowTemplate->Height = 24;
			this->dgv_proceeds->Size = System::Drawing::Size(780, 518);
			this->dgv_proceeds->TabIndex = 0;
			this->dgv_proceeds->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Proceeds::dgv_proceeds_CellContentClick);
			// 
			// tbx_total_proceeds
			// 
			this->tbx_total_proceeds->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbx_total_proceeds->Location = System::Drawing::Point(1023, 168);
			this->tbx_total_proceeds->Name = L"tbx_total_proceeds";
			this->tbx_total_proceeds->Size = System::Drawing::Size(212, 39);
			this->tbx_total_proceeds->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(813, 176);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(181, 25);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Tổng doanh thu:";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->btn_statistic);
			this->panel1->Controls->Add(this->dt_statistic);
			this->panel1->Controls->Add(this->dgv_proceeds);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->tbx_total_proceeds);
			this->panel1->Location = System::Drawing::Point(0, 62);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1239, 633);
			this->panel1->TabIndex = 4;
			// 
			// btn_statistic
			// 
			this->btn_statistic->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_statistic->Location = System::Drawing::Point(545, 25);
			this->btn_statistic->Name = L"btn_statistic";
			this->btn_statistic->Size = System::Drawing::Size(162, 50);
			this->btn_statistic->TabIndex = 5;
			this->btn_statistic->Text = L"Thống kê";
			this->btn_statistic->UseVisualStyleBackColor = true;
			this->btn_statistic->Click += gcnew System::EventHandler(this, &Proceeds::btn_statistic_Click);
			// 
			// dt_statistic
			// 
			this->dt_statistic->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dt_statistic->Location = System::Drawing::Point(189, 33);
			this->dt_statistic->Name = L"dt_statistic";
			this->dt_statistic->Size = System::Drawing::Size(339, 34);
			this->dt_statistic->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(455, 21);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(316, 38);
			this->label2->TabIndex = 5;
			this->label2->Text = L"BẢNG DOANH THU";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Snap ITC", 22.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(-7, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(213, 48);
			this->label3->TabIndex = 4;
			this->label3->Text = L" ◄◄ Back";
			this->label3->Click += gcnew System::EventHandler(this, &Proceeds::label3_Click);
			// 
			// Proceeds
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(1251, 698);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel1);
			this->Name = L"Proceeds";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Proceeds";
			this->Load += gcnew System::EventHandler(this, &Proceeds::Proceeds_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_proceeds))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dgv_proceeds_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	}
private: System::Void Proceeds_Load(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	Proceeds::Hide();


}
private: System::Void btn_statistic_Click(System::Object^ sender, System::EventArgs^ e) {

	//String^ time = dt_statistic->Value.ToShortDateString();
	////convert(String, 'Date', 101) = '"+time+"'
	//SqlDataAdapter^ adap_proceeds = gcnew SqlDataAdapter(" SELECT * FROM Proceeds where Date ='"+dt_statistic->Value.ToShortDateString() + "' ", conect);
	//DataTable^ data_proceeds = gcnew DataTable();
	////	dgv_proceeds->DisplayMember = "Table";
	//dgv_proceeds->DataSource = data_proceeds; CONVERT(date, Date ,103)

	SqlCommand^ cmd_add = gcnew SqlCommand(" SELECT * FROM Proceeds where CONVERT(varchar, Date,103 ) = '" +dt_statistic->Value.ToShortDateString() + "' ", conect);
	SqlDataAdapter^ adap_table1 = gcnew SqlDataAdapter(cmd_add);
	DataTable^ data = gcnew DataTable();
	adap_table1->Fill(data);
	this->dgv_proceeds->DataSource = data;
	
	int x = 0;
	for (int i = 0; i < dgv_proceeds->Rows->Count; i++) {
		x = x + (Convert::ToInt32(dgv_proceeds->Rows[i]->Cells[3]->Value->ToString()));
	}
	tbx_total_proceeds->Text = x.ToString();

}
};
}
