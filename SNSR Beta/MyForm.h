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
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ winner;


	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::LinkLabel^ linkLabel2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ final1;
	private: System::Windows::Forms::Label^ final2;




	private:

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
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->winner = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->final1 = (gcnew System::Windows::Forms::Label());
			this->final2 = (gcnew System::Windows::Forms::Label());
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->Font = (gcnew System::Drawing::Font(L"Verdana", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label2->Location = System::Drawing::Point(95, 29);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(1250, 42);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Major Analytics";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->Font = (gcnew System::Drawing::Font(L"Verdana", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(95, 71);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1254, 31);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Выберите команды, которые будут играть и нажмите запустить";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Verdana", 18));
			this->button1->Location = System::Drawing::Point(574, 106);
			this->button1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(292, 101);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Запустить";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Verdana", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(869, 106);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(212, 17);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Шанс выиграша команды №";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// label23
			// 
			this->label23->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Verdana", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label23->Location = System::Drawing::Point(1322, 106);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(23, 17);
			this->label23->TabIndex = 15;
			this->label23->Text = L"%";
			// 
			// label22
			// 
			this->label22->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Verdana", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label22->Location = System::Drawing::Point(1322, 191);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(23, 17);
			this->label22->TabIndex = 14;
			this->label22->Text = L"%";
			this->label22->Click += gcnew System::EventHandler(this, &MyForm::label22_Click);
			// 
			// label21
			// 
			this->label21->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Verdana", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->Location = System::Drawing::Point(1295, 191);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(15, 17);
			this->label21->TabIndex = 13;
			this->label21->Text = L"-";
			// 
			// label20
			// 
			this->label20->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Verdana", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->Location = System::Drawing::Point(1295, 106);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(15, 17);
			this->label20->TabIndex = 12;
			this->label20->Text = L"-";
			// 
			// label19
			// 
			this->label19->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Verdana", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->Location = System::Drawing::Point(869, 190);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(212, 17);
			this->label19->TabIndex = 11;
			this->label19->Text = L"Шанс выиграша команды №";
			// 
			// label18
			// 
			this->label18->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Verdana", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->Location = System::Drawing::Point(1139, 190);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(15, 17);
			this->label18->TabIndex = 10;
			this->label18->Text = L"-";
			// 
			// label17
			// 
			this->label17->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Verdana", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(1139, 106);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(15, 17);
			this->label17->TabIndex = 9;
			this->label17->Text = L"-";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(3, 0);
			this->label11->Margin = System::Windows::Forms::Padding(0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(761, 17);
			this->label11->TabIndex = 17;
			this->label11->Text = L"Автор программы не призывает делать ставки. Информация подается ТОЛЬКО В ОЗНАКОМИ"
				L"ТЕЛЬНЫХ ЦЕЛЯХ!";
			this->label11->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBox1->BackColor = System::Drawing::Color::White;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->textBox1->Location = System::Drawing::Point(96, 127);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox1->MaxLength = 2;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(470, 16);
			this->textBox1->TabIndex = 19;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBox2->BackColor = System::Drawing::Color::White;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->textBox2->Location = System::Drawing::Point(96, 191);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox2->MaxLength = 2;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(470, 16);
			this->textBox2->TabIndex = 20;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// label12
			// 
			this->label12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Verdana", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(93, 106);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(236, 17);
			this->label12->TabIndex = 21;
			this->label12->Text = L"Введите номер одной команды";
			this->label12->Click += gcnew System::EventHandler(this, &MyForm::label12_Click);
			// 
			// label13
			// 
			this->label13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Verdana", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(93, 170);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(242, 17);
			this->label13->TabIndex = 22;
			this->label13->Text = L"Введите номер другой команды";
			this->label13->Click += gcnew System::EventHandler(this, &MyForm::label13_Click);
			// 
			// label14
			// 
			this->label14->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label14->Location = System::Drawing::Point(5, 1);
			this->label14->Margin = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(88, 425);
			this->label14->TabIndex = 23;
			this->label14->Text = L"Команды\r\n1 \r\n2\r\n3\r\n4\r\n5\r\n6\r\n7\r\n8\r\n9\r\n10\r\n11\r\n12\r\n13\r\n14\r\n15\r\n16\r\n17\r\n18\r\n19\r\n20\r\n"
				L"21\r\n22\r\n23\r\n24\r\n";
			this->label14->Click += gcnew System::EventHandler(this, &MyForm::label14_Click);
			// 
			// panel3
			// 
			this->panel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->Controls->Add(this->label11);
			this->panel3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->panel3->Location = System::Drawing::Point(-1, 706);
			this->panel3->Margin = System::Windows::Forms::Padding(0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1368, 35);
			this->panel3->TabIndex = 25;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel3_Paint);
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Verdana", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::DarkRed;
			this->label6->Location = System::Drawing::Point(869, 153);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(15, 17);
			this->label6->TabIndex = 16;
			this->label6->Text = L"-";
			// 
			// label16
			// 
			this->label16->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label16->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label16->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(-1, 622);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(1350, 84);
			this->label16->TabIndex = 0;
			this->label16->Text = L"Тут может быть ваша реклама";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label16->Click += gcnew System::EventHandler(this, &MyForm::label16_Click);
			// 
			// winner
			// 
			this->winner->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->winner->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->winner->Cursor = System::Windows::Forms::Cursors::Hand;
			this->winner->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->winner->Location = System::Drawing::Point(872, 236);
			this->winner->Margin = System::Windows::Forms::Padding(3, 0, 3, 4);
			this->winner->Name = L"winner";
			this->winner->Size = System::Drawing::Size(477, 382);
			this->winner->TabIndex = 26;
			this->winner->Text = L"Команда-победитель турнира по версии Major Analytics";
			this->winner->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->winner->Click += gcnew System::EventHandler(this, &MyForm::label5_Click_1);
			// 
			// linkLabel1
			// 
			this->linkLabel1->ActiveLinkColor = System::Drawing::Color::Navy;
			this->linkLabel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->linkLabel1->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->linkLabel1->LinkColor = System::Drawing::Color::SteelBlue;
			this->linkLabel1->Location = System::Drawing::Point(1276, 1);
			this->linkLabel1->Margin = System::Windows::Forms::Padding(0, 0, 3, 0);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(73, 49);
			this->linkLabel1->TabIndex = 27;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Наш сайт";
			this->linkLabel1->TextAlign = System::Drawing::ContentAlignment::TopRight;
			this->linkLabel1->VisitedLinkColor = System::Drawing::Color::SteelBlue;
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel1_LinkClicked);
			// 
			// linkLabel2
			// 
			this->linkLabel2->ActiveLinkColor = System::Drawing::Color::SteelBlue;
			this->linkLabel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->linkLabel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->linkLabel2->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->linkLabel2->LinkColor = System::Drawing::Color::SteelBlue;
			this->linkLabel2->Location = System::Drawing::Point(1183, 1);
			this->linkLabel2->Margin = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(93, 28);
			this->linkLabel2->TabIndex = 28;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"Patreon";
			this->linkLabel2->TextAlign = System::Drawing::ContentAlignment::TopRight;
			this->linkLabel2->VisitedLinkColor = System::Drawing::Color::SteelBlue;
			this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel2_LinkClicked);
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25));
			this->label3->Location = System::Drawing::Point(96, 380);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(472, 96);
			this->label3->TabIndex = 29;
			this->label3->Text = L"Champions League прогноз";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label7->Location = System::Drawing::Point(96, 236);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(240, 31);
			this->label7->TabIndex = 30;
			// 
			// label8
			// 
			this->label8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label8->Location = System::Drawing::Point(96, 267);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(240, 31);
			this->label8->TabIndex = 31;
			// 
			// label9
			// 
			this->label9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label9->Location = System::Drawing::Point(96, 316);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(240, 31);
			this->label9->TabIndex = 32;
			// 
			// label10
			// 
			this->label10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label10->Location = System::Drawing::Point(96, 347);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(240, 31);
			this->label10->TabIndex = 33;
			// 
			// label15
			// 
			this->label15->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label15->Location = System::Drawing::Point(96, 587);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(240, 31);
			this->label15->TabIndex = 34;
			// 
			// label24
			// 
			this->label24->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label24->Location = System::Drawing::Point(96, 556);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(240, 31);
			this->label24->TabIndex = 35;
			// 
			// label25
			// 
			this->label25->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label25->Location = System::Drawing::Point(95, 506);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(240, 31);
			this->label25->TabIndex = 36;
			// 
			// label26
			// 
			this->label26->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label26->Location = System::Drawing::Point(95, 475);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(240, 31);
			this->label26->TabIndex = 37;
			// 
			// label27
			// 
			this->label27->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label27->Location = System::Drawing::Point(342, 236);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(226, 71);
			this->label27->TabIndex = 38;
			this->label27->Text = L"Полуфиналист 1";
			this->label27->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label28
			// 
			this->label28->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label28->Location = System::Drawing::Point(342, 307);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(226, 71);
			this->label28->TabIndex = 39;
			this->label28->Text = L"Полуфиналист 2";
			this->label28->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label29
			// 
			this->label29->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label29->Location = System::Drawing::Point(342, 547);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(226, 71);
			this->label29->TabIndex = 40;
			this->label29->Text = L"Полуфиналист 4";
			this->label29->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label30
			// 
			this->label30->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label30->Location = System::Drawing::Point(342, 476);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(226, 71);
			this->label30->TabIndex = 41;
			this->label30->Text = L"Полуфиналист 3";
			this->label30->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// final1
			// 
			this->final1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->final1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->final1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->final1->Location = System::Drawing::Point(574, 236);
			this->final1->Name = L"final1";
			this->final1->Size = System::Drawing::Size(292, 185);
			this->final1->TabIndex = 42;
			this->final1->Text = L"Финалист 1";
			this->final1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// final2
			// 
			this->final2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->final2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->final2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->final2->Location = System::Drawing::Point(574, 426);
			this->final2->Name = L"final2";
			this->final2->Size = System::Drawing::Size(292, 192);
			this->final2->TabIndex = 43;
			this->final2->Text = L"Финалист 2";
			this->final2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MyForm
			// 
			this->AllowDrop = true;
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoValidate = System::Windows::Forms::AutoValidate::Disable;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(1350, 729);
			this->Controls->Add(this->final2);
			this->Controls->Add(this->final1);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->linkLabel2);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->winner);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->ForeColor = System::Drawing::Color::SteelBlue;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->MinimumSize = System::Drawing::Size(1280, 720);
			this->Name = L"MyForm";
			this->Padding = System::Windows::Forms::Padding(1);
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e);
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
//private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e);
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
private: System::Void panel1_Paint_2(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void pictureBox1_Click_1(System::Object^ sender, System::EventArgs^ e){}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e){}
private: System::Void progressBar1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click_1(System::Object^ sender, System::EventArgs^ e);
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e);
private: System::Void label5_Click_1(System::Object^ sender, System::EventArgs^ e);
private: System::Void linkLabel2_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e);
};
}
