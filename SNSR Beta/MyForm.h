#pragma once
#include <stdlib.h>
#include <Windows.h>
namespace SNSRBeta {

	using namespace System;
	using namespace System::Windows::Forms;
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
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label2;
	protected:
	private: System::Windows::Forms::Label^ label1;





	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Label^ label4;





	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Panel^ panel2;

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel6;







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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel7->SuspendLayout();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Verdana", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(3, 3);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(279, 41);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Major Analytics";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Verdana", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(465, 71);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(358, 54);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Выберите команды, которые будут играть и нажмите запустить";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Verdana", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(533, 128);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(215, 77);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Запустить";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Verdana", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(169, 164);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(258, 27);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Шанс выиграша команды №";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(962, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(166, 13);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Made with love by @hacerio";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Verdana", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label23->Location = System::Drawing::Point(1084, 164);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(23, 17);
			this->label23->TabIndex = 15;
			this->label23->Text = L"%";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Verdana", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label22->Location = System::Drawing::Point(503, 164);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(23, 17);
			this->label22->TabIndex = 14;
			this->label22->Text = L"%";
			this->label22->Click += gcnew System::EventHandler(this, &MyForm::label22_Click);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Verdana", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->Location = System::Drawing::Point(1063, 164);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(15, 17);
			this->label21->TabIndex = 13;
			this->label21->Text = L"-";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Verdana", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->Location = System::Drawing::Point(482, 165);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(15, 17);
			this->label20->TabIndex = 12;
			this->label20->Text = L"-";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Verdana", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->Location = System::Drawing::Point(751, 164);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(212, 17);
			this->label19->TabIndex = 11;
			this->label19->Text = L"Шанс выиграша команды №";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Verdana", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->Location = System::Drawing::Point(978, 165);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(15, 17);
			this->label18->TabIndex = 10;
			this->label18->Text = L"-";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Verdana", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(390, 164);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(15, 17);
			this->label17->TabIndex = 9;
			this->label17->Text = L"-";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(12, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(661, 13);
			this->label11->TabIndex = 17;
			this->label11->Text = L"Автор программы не призывает делать ставки . Информация подается ТОЛЬКО В ОЗНАКОМ"
				L"ИТЕЛЬНЫХ ЦЕЛЯХ!";
			this->label11->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(1088, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(19, 16);
			this->button2->TabIndex = 18;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox1->BackColor = System::Drawing::Color::White;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->textBox1->Location = System::Drawing::Point(173, 148);
			this->textBox1->MaxLength = 2;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(353, 14);
			this->textBox1->TabIndex = 19;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::White;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->textBox2->Location = System::Drawing::Point(755, 148);
			this->textBox2->MaxLength = 2;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(353, 14);
			this->textBox2->TabIndex = 20;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Verdana", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(169, 128);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(236, 17);
			this->label12->TabIndex = 21;
			this->label12->Text = L"Введите номер одной команды";
			this->label12->Click += gcnew System::EventHandler(this, &MyForm::label12_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Verdana", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(751, 128);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(242, 17);
			this->label13->TabIndex = 22;
			this->label13->Text = L"Введите номер другой команды";
			this->label13->Click += gcnew System::EventHandler(this, &MyForm::label13_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label14->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(5, 51);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(125, 429);
			this->label14->TabIndex = 23;
			this->label14->Text = resources->GetString(L"label14.Text");
			this->label14->Click += gcnew System::EventHandler(this, &MyForm::label14_Click);
			// 
			// panel2
			// 
			this->panel2->AccessibleRole = System::Windows::Forms::AccessibleRole::MenuBar;
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Location = System::Drawing::Point(3, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1111, 46);
			this->panel2->TabIndex = 24;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->Controls->Add(this->label11);
			this->panel3->Controls->Add(this->label5);
			this->panel3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->panel3->Location = System::Drawing::Point(-12, 624);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1148, 38);
			this->panel3->TabIndex = 25;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel3_Paint);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(-1, 600);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(818, 24);
			this->label15->TabIndex = 26;
			this->label15->Text = L"Программа версии: Pre-Release 1.1 . Используйте только последнюю версию программы"
				L"!";
			this->label15->Click += gcnew System::EventHandler(this, &MyForm::label15_Click);
			// 
			// panel4
			// 
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Controls->Add(this->label16);
			this->panel4->Location = System::Drawing::Point(3, 483);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(162, 115);
			this->panel4->TabIndex = 27;
			this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel4_Paint);
			// 
			// label16
			// 
			this->label16->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label16->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(1, -1);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(160, 114);
			this->label16->TabIndex = 0;
			this->label16->Text = L"Тут может быть ваша реклама";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label16->Click += gcnew System::EventHandler(this, &MyForm::label16_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Verdana", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::DarkRed;
			this->label6->Location = System::Drawing::Point(530, 208);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(15, 17);
			this->label6->TabIndex = 16;
			this->label6->Text = L"-";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->panel7);
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Location = System::Drawing::Point(173, 234);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(940, 363);
			this->panel1->TabIndex = 28;
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->panel6);
			this->panel5->Location = System::Drawing::Point(3, 3);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(190, 190);
			this->panel5->TabIndex = 29;
			// 
			// panel6
			// 
			this->panel6->Location = System::Drawing::Point(491, 3);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(443, 357);
			this->panel6->TabIndex = 30;
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->panel8);
			this->panel7->Location = System::Drawing::Point(747, 3);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(190, 190);
			this->panel7->TabIndex = 31;
			// 
			// panel8
			// 
			this->panel8->Location = System::Drawing::Point(491, 3);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(443, 357);
			this->panel8->TabIndex = 30;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->AutoValidate = System::Windows::Forms::AutoValidate::Disable;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->ClientSize = System::Drawing::Size(1120, 640);
			this->ControlBox = false;
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1120, 640);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(1120, 640);
			this->Name = L"MyForm";
			this->Padding = System::Windows::Forms::Padding(1);
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e);
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel1_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void label16_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void panel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label22_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
