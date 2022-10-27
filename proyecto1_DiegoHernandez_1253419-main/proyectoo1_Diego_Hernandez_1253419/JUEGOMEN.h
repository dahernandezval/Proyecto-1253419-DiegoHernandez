#include "lista.h";
#include <vector>
#include <string>
#include <sstream>
#include <iostream>
#include <cstddef>
#pragma once

namespace proyectoo1DiegoHernandez1253419 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	public ref class JUEGOMEN : public System::Windows::Forms::Form
	{
	public:
		lista* mainlist;
		lista* milist0;
		lista* milist1;
		lista* milist2;
		lista* milist3;
		lista* milist4;
		lista* milist5;
		lista* milist6;
		lista* milist7;
		String^ informe;
		int mode = 0;
		JUEGOMEN(void)
		{
			InitializeComponent();
			mainlist = new lista();
			mainlist->count = 0;
			mainlist->start = nullptr;
			mainlist->end = nullptr;

			milist0 = new lista();
			milist0->count = 0;
			milist0->start = nullptr;
			milist0->end = nullptr;

			milist1 = new lista();
			milist1->count = 0;
			milist1->start = nullptr;
			milist1->end = nullptr;

			milist2 = new lista();
			milist2->count = 0;
			milist2->start = nullptr;
			milist2->end = nullptr;

			milist3 = new lista();
			milist3->count = 0;
			milist3->start = nullptr;
			milist3->end = nullptr;

			milist4 = new lista();
			milist4->count = 0;
			milist4->start = nullptr;
			milist4->end = nullptr;

			milist5 = new lista();
			milist5->count = 0;
			milist5->start = nullptr;
			milist5->end = nullptr;

			milist6 = new lista();
			milist6->count = 0;
			milist6->start = nullptr;
			milist6->end = nullptr;

			milist7 = new lista();
			milist7->count = 0;
			milist7->start = nullptr;
			milist7->end = nullptr;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~JUEGOMEN()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox3;
	protected:
	private: System::Windows::Forms::TextBox^ pilaouttxt;
	private: System::Windows::Forms::TextBox^ pilaintxt;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::DataGridView^ Linea0;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::DataGridView^ Linea1;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridView^ Linea2;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::DataGridView^ Linea3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ Linea4;
	private: System::Windows::Forms::DataGridView^ Linea5;
	private: System::Windows::Forms::DataGridView^ Linea7;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ Linea6;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ Importxt;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::ListBox^ ListInfor;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->pilaouttxt = (gcnew System::Windows::Forms::TextBox());
			this->pilaintxt = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->Linea0 = (gcnew System::Windows::Forms::DataGridView());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->Linea1 = (gcnew System::Windows::Forms::DataGridView());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Linea2 = (gcnew System::Windows::Forms::DataGridView());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->Linea3 = (gcnew System::Windows::Forms::DataGridView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Linea4 = (gcnew System::Windows::Forms::DataGridView());
			this->Linea5 = (gcnew System::Windows::Forms::DataGridView());
			this->Linea7 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Linea6 = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->Importxt = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->ListInfor = (gcnew System::Windows::Forms::ListBox());
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Linea0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Linea1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Linea2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Linea3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Linea4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Linea5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Linea7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Linea6))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->pilaouttxt);
			this->groupBox3->Controls->Add(this->pilaintxt);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Controls->Add(this->button6);
			this->groupBox3->Location = System::Drawing::Point(257, 55);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(482, 76);
			this->groupBox3->TabIndex = 124;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Cambio de pilas";
			// 
			// pilaouttxt
			// 
			this->pilaouttxt->BackColor = System::Drawing::SystemColors::Info;
			this->pilaouttxt->Enabled = false;
			this->pilaouttxt->Location = System::Drawing::Point(90, 47);
			this->pilaouttxt->Margin = System::Windows::Forms::Padding(4);
			this->pilaouttxt->Name = L"pilaouttxt";
			this->pilaouttxt->Size = System::Drawing::Size(182, 22);
			this->pilaouttxt->TabIndex = 85;
			// 
			// pilaintxt
			// 
			this->pilaintxt->BackColor = System::Drawing::SystemColors::Info;
			this->pilaintxt->Enabled = false;
			this->pilaintxt->Location = System::Drawing::Point(90, 22);
			this->pilaintxt->Margin = System::Windows::Forms::Padding(4);
			this->pilaintxt->Name = L"pilaintxt";
			this->pilaintxt->Size = System::Drawing::Size(182, 22);
			this->pilaintxt->TabIndex = 84;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(12, 51);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(74, 17);
			this->label8->TabIndex = 83;
			this->label8->Text = L"Hacia pila:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(10, 26);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(77, 17);
			this->label7->TabIndex = 82;
			this->label7->Text = L"Mover pila:";
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::Highlight;
			this->button6->Enabled = false;
			this->button6->Location = System::Drawing::Point(280, 22);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(198, 46);
			this->button6->TabIndex = 86;
			this->button6->Text = L"Transferir";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &JUEGOMEN::button6_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->Controls->Add(this->Linea0);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->Linea1);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->Linea2);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->Linea3);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->Linea4);
			this->groupBox2->Controls->Add(this->Linea5);
			this->groupBox2->Controls->Add(this->Linea7);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->Linea6);
			this->groupBox2->Location = System::Drawing::Point(330, 151);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(507, 426);
			this->groupBox2->TabIndex = 123;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Secciones de pilas";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(14, 179);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(28, 18);
			this->label4->TabIndex = 115;
			this->label4->Text = L"P3";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(14, 371);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(28, 18);
			this->label13->TabIndex = 119;
			this->label13->Text = L"P7";
			// 
			// Linea0
			// 
			this->Linea0->BackgroundColor = System::Drawing::SystemColors::Info;
			this->Linea0->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Linea0->Location = System::Drawing::Point(48, 35);
			this->Linea0->Margin = System::Windows::Forms::Padding(4);
			this->Linea0->Name = L"Linea0";
			this->Linea0->RowHeadersWidth = 90;
			this->Linea0->Size = System::Drawing::Size(446, 39);
			this->Linea0->TabIndex = 79;
			this->Linea0->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &JUEGOMEN::Linea0_CellContentClick);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(14, 321);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(28, 18);
			this->label12->TabIndex = 118;
			this->label12->Text = L"P6";
			// 
			// Linea1
			// 
			this->Linea1->BackgroundColor = System::Drawing::SystemColors::Info;
			this->Linea1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Linea1->Location = System::Drawing::Point(49, 82);
			this->Linea1->Margin = System::Windows::Forms::Padding(4);
			this->Linea1->Name = L"Linea1";
			this->Linea1->RowHeadersWidth = 90;
			this->Linea1->Size = System::Drawing::Size(446, 38);
			this->Linea1->TabIndex = 90;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(14, 272);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(28, 18);
			this->label11->TabIndex = 117;
			this->label11->Text = L"P5";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(14, 138);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(28, 18);
			this->label3->TabIndex = 114;
			this->label3->Text = L"P2";
			// 
			// Linea2
			// 
			this->Linea2->BackgroundColor = System::Drawing::SystemColors::Info;
			this->Linea2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Linea2->Location = System::Drawing::Point(49, 130);
			this->Linea2->Margin = System::Windows::Forms::Padding(4);
			this->Linea2->Name = L"Linea2";
			this->Linea2->RowHeadersWidth = 90;
			this->Linea2->Size = System::Drawing::Size(446, 41);
			this->Linea2->TabIndex = 91;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(14, 224);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(28, 18);
			this->label10->TabIndex = 116;
			this->label10->Text = L"P4";
			// 
			// Linea3
			// 
			this->Linea3->BackgroundColor = System::Drawing::SystemColors::Info;
			this->Linea3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Linea3->Location = System::Drawing::Point(49, 179);
			this->Linea3->Margin = System::Windows::Forms::Padding(4);
			this->Linea3->Name = L"Linea3";
			this->Linea3->RowHeadersWidth = 90;
			this->Linea3->Size = System::Drawing::Size(446, 37);
			this->Linea3->TabIndex = 92;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(14, 82);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(28, 18);
			this->label2->TabIndex = 113;
			this->label2->Text = L"P1";
			// 
			// Linea4
			// 
			this->Linea4->BackgroundColor = System::Drawing::SystemColors::Info;
			this->Linea4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Linea4->Location = System::Drawing::Point(48, 224);
			this->Linea4->Margin = System::Windows::Forms::Padding(4);
			this->Linea4->Name = L"Linea4";
			this->Linea4->RowHeadersWidth = 90;
			this->Linea4->Size = System::Drawing::Size(446, 40);
			this->Linea4->TabIndex = 93;
			// 
			// Linea5
			// 
			this->Linea5->BackgroundColor = System::Drawing::SystemColors::Info;
			this->Linea5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Linea5->Location = System::Drawing::Point(49, 272);
			this->Linea5->Margin = System::Windows::Forms::Padding(4);
			this->Linea5->Name = L"Linea5";
			this->Linea5->RowHeadersWidth = 90;
			this->Linea5->Size = System::Drawing::Size(446, 41);
			this->Linea5->TabIndex = 94;
			// 
			// Linea7
			// 
			this->Linea7->BackgroundColor = System::Drawing::SystemColors::Info;
			this->Linea7->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Linea7->Location = System::Drawing::Point(49, 371);
			this->Linea7->Margin = System::Windows::Forms::Padding(4);
			this->Linea7->Name = L"Linea7";
			this->Linea7->RowHeadersWidth = 90;
			this->Linea7->Size = System::Drawing::Size(446, 38);
			this->Linea7->TabIndex = 97;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(14, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(28, 18);
			this->label1->TabIndex = 112;
			this->label1->Text = L"P0";
			// 
			// Linea6
			// 
			this->Linea6->BackgroundColor = System::Drawing::SystemColors::Info;
			this->Linea6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Linea6->Location = System::Drawing::Point(49, 321);
			this->Linea6->Margin = System::Windows::Forms::Padding(4);
			this->Linea6->Name = L"Linea6";
			this->Linea6->RowHeadersWidth = 90;
			this->Linea6->Size = System::Drawing::Size(446, 42);
			this->Linea6->TabIndex = 95;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->Importxt);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->button8);
			this->groupBox1->Controls->Add(this->button7);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Location = System::Drawing::Point(5, 157);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(299, 420);
			this->groupBox1->TabIndex = 122;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Seleccione la dificultad";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::Highlight;
			this->button4->Location = System::Drawing::Point(17, 341);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(263, 62);
			this->button4->TabIndex = 113;
			this->button4->Text = L"Salir";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &JUEGOMEN::button4_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Lime;
			this->button1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button1->Location = System::Drawing::Point(17, 44);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(121, 27);
			this->button1->TabIndex = 43;
			this->button1->Text = L"Fácil";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &JUEGOMEN::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Yellow;
			this->button2->Location = System::Drawing::Point(146, 44);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(121, 27);
			this->button2->TabIndex = 44;
			this->button2->Text = L"Normal";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &JUEGOMEN::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Red;
			this->button3->Location = System::Drawing::Point(83, 79);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(121, 27);
			this->button3->TabIndex = 45;
			this->button3->Text = L"Difícil";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &JUEGOMEN::button3_Click);
			// 
			// Importxt
			// 
			this->Importxt->BackColor = System::Drawing::SystemColors::Info;
			this->Importxt->Enabled = false;
			this->Importxt->Location = System::Drawing::Point(15, 157);
			this->Importxt->Margin = System::Windows::Forms::Padding(4);
			this->Importxt->Name = L"Importxt";
			this->Importxt->Size = System::Drawing::Size(265, 22);
			this->Importxt->TabIndex = 88;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(14, 136);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(214, 17);
			this->label9->TabIndex = 87;
			this->label9->Text = L"Seleccione el archivo a importar:";
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::Highlight;
			this->button8->Enabled = false;
			this->button8->Location = System::Drawing::Point(15, 187);
			this->button8->Margin = System::Windows::Forms::Padding(4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(265, 48);
			this->button8->TabIndex = 89;
			this->button8->Text = L"Importar";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &JUEGOMEN::button8_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::Highlight;
			this->button7->Enabled = false;
			this->button7->Location = System::Drawing::Point(17, 271);
			this->button7->Margin = System::Windows::Forms::Padding(4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(263, 55);
			this->button7->TabIndex = 96;
			this->button7->Text = L"Cambiar modo";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &JUEGOMEN::button7_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(63, 250);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(93, 17);
			this->label5->TabIndex = 80;
			this->label5->Text = L"Modo actual: ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(164, 250);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(16, 17);
			this->label6->TabIndex = 81;
			this->label6->Text = L"0";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(340, 13);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(318, 38);
			this->label17->TabIndex = 121;
			this->label17->Text = L"Menú Color manía  ";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(863, 113);
			this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(120, 40);
			this->label15->TabIndex = 120;
			this->label15->Text = L"Información\r\nMovimientos:";
			// 
			// ListInfor
			// 
			this->ListInfor->BackColor = System::Drawing::SystemColors::Info;
			this->ListInfor->FormattingEnabled = true;
			this->ListInfor->ItemHeight = 16;
			this->ListInfor->Location = System::Drawing::Point(867, 157);
			this->ListInfor->Margin = System::Windows::Forms::Padding(4);
			this->ListInfor->Name = L"ListInfor";
			this->ListInfor->Size = System::Drawing::Size(144, 420);
			this->ListInfor->TabIndex = 119;
			// 
			// JUEGOMEN
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkOrange;
			this->ClientSize = System::Drawing::Size(1021, 612);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->ListInfor);
			this->Name = L"JUEGOMEN";
			this->Text = L"JUEGOMEN";
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Linea0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Linea1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Linea2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Linea3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Linea4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Linea5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Linea7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Linea6))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
			private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

			}
	private: void ReestablecerMatriz() {
		Linea0->Rows->Clear();
		Linea0->Columns->Clear();
		Linea0->ColumnHeadersVisible = false;
		Linea0->RowHeadersVisible = false;

		Linea1->Rows->Clear();
		Linea1->Columns->Clear();
		Linea1->ColumnHeadersVisible = false;
		Linea1->RowHeadersVisible = false;

		Linea2->Rows->Clear();
		Linea2->Columns->Clear();
		Linea2->ColumnHeadersVisible = false;
		Linea2->RowHeadersVisible = false;

		Linea3->Rows->Clear();
		Linea3->Columns->Clear();
		Linea3->ColumnHeadersVisible = false;
		Linea3->RowHeadersVisible = false;

		Linea4->Rows->Clear();
		Linea4->Columns->Clear();
		Linea4->ColumnHeadersVisible = false;
		Linea4->RowHeadersVisible = false;

		Linea5->Rows->Clear();
		Linea5->Columns->Clear();
		Linea5->ColumnHeadersVisible = false;
		Linea5->RowHeadersVisible = false;

		Linea6->Rows->Clear();
		Linea6->Columns->Clear();
		Linea6->ColumnHeadersVisible = false;
		Linea6->RowHeadersVisible = false;

		Linea7->Rows->Clear();
		Linea7->Columns->Clear();
		Linea7->ColumnHeadersVisible = false;
		Linea7->RowHeadersVisible = false;
	};

	private: void iniciarMatriz() {
		button1->Enabled = false;
		button2->Enabled = false;
		button3->Enabled = false;
		button8->Enabled = true;
		Importxt->Enabled = true;
	};

		   void cambio(int pila) {
			   //Cambio de color para los bloques de pila
			   switch (pila) {
			   case 0:
				   if (milist0->count > 0) {
					   Linea0->Rows->Clear();
					   Linea0->Columns->Clear();
					   Linea0->ColumnHeadersVisible = false;
					   Linea0->RowHeadersVisible = false;

					   for (int i = 0; i < milist0->count; i++) {
						   nodo* temp;
						   temp = milist0->ExtractAtEnd();
						   Validacion(temp->value, 8);
					   }
				   }
				   break;
			   case 1:
				   if (milist1->count > 0) {
					   Linea1->Rows->Clear();
					   Linea1->Columns->Clear();
					   Linea1->ColumnHeadersVisible = false;
					   Linea1->RowHeadersVisible = false;

					   for (int i = 0; i < milist1->count; i++) {
						   nodo* temp;
						   temp = milist1->ExtractAtEnd();
						   Validacion(temp->value, 1);
					   }
				   }
				   break;
			   case 2:
				   if (milist2->count > 0) {
					   Linea2->Rows->Clear();
					   Linea2->Columns->Clear();
					   Linea2->ColumnHeadersVisible = false;
					   Linea2->RowHeadersVisible = false;

					   for (int i = 0; i < milist2->count; i++) {
						   nodo* temp;
						   temp = milist2->ExtractAtEnd();
						   Validacion(temp->value, 2);
					   }
				   }
				   break;
			   case 3:
				   if (milist3->count > 0) {
					   Linea3->Rows->Clear();
					   Linea3->Columns->Clear();
					   Linea3->ColumnHeadersVisible = false;
					   Linea3->RowHeadersVisible = false;

					   for (int i = 0; i < milist3->count; i++) {
						   nodo* temp;
						   temp = milist3->ExtractAtEnd();
						   Validacion(temp->value, 3);
					   }
				   }
				   break;
			   case 4:
				   if (milist4->count > 0) {
					   Linea4->Rows->Clear();
					   Linea4->Columns->Clear();
					   Linea4->ColumnHeadersVisible = false;
					   Linea4->RowHeadersVisible = false;

					   for (int i = 0; i < milist4->count; i++) {
						   nodo* temp;
						   temp = milist4->ExtractAtEnd();
						   Validacion(temp->value, 4);
					   }
				   }
				   break;
			   case 5:
				   if (milist5->count > 0) {
					   Linea5->Rows->Clear();
					   Linea5->Columns->Clear();
					   Linea5->ColumnHeadersVisible = false;
					   Linea5->RowHeadersVisible = false;

					   for (int i = 0; i < milist5->count; i++) {
						   nodo* temp;
						   temp = milist5->ExtractAtEnd();
						   Validacion(temp->value, 5);
					   }
				   }
				   break;
			   case 6:
				   if (milist6->count > 0) {
					   Linea6->Rows->Clear();
					   Linea6->Columns->Clear();
					   Linea6->ColumnHeadersVisible = false;
					   Linea6->RowHeadersVisible = false;

					   for (int i = 0; i < milist6->count; i++) {
						   nodo* temp;
						   temp = milist6->ExtractAtEnd();
						   Validacion(temp->value, 6);
					   }
				   }
				   break;
			   case 7:
				   if (milist7->count > 0) {
					   Linea7->Rows->Clear();
					   Linea7->Columns->Clear();
					   Linea7->ColumnHeadersVisible = false;
					   Linea7->RowHeadersVisible = false;

					   for (int i = 0; i < milist7->count; i++) {
						   nodo* temp;
						   temp = milist7->ExtractAtEnd();
						   Validacion(temp->value, 7);
					   }
				   }
				   break;
			   }
		   }
		   void Informar(int firm) {

			   // Enviar informe al listbox
			   array<String^>^ pila = informe->Split(',');
			   if (firm == 0) {
				   for each (String ^ temp in pila) {
					   ListInfor->Items->Add(temp);
				   }
			   }
		   }
		   void Validacion(int color, int pila) {
			   //Verifica si la pila tiene los colores correctos
			   if (pila == 0) {
				   milist0->InsertAtStart(color);
				   IntroducirMatriz(1, 0, color);
				   return;
			   }
			   if (pila == 1) {
				   milist1->InsertAtStart(color);
				   IntroducirMatriz(1, 1, color);
				   return;
			   }
			   if (pila == 2) {
				   milist2->InsertAtStart(color);
				   IntroducirMatriz(1, 2, color);
				   return;
			   }
			   if (pila == 3) {
				   milist3->InsertAtStart(color);
				   IntroducirMatriz(1, 3, color);
				   return;
			   }
			   if (pila == 4) {
				   milist4->InsertAtStart(color);
				   IntroducirMatriz(1, 4, color);
				   return;
			   }
			   if (pila == 5) {
				   milist5->InsertAtStart(color);
				   IntroducirMatriz(1, 5, color);
				   return;
			   }
			   if (pila == 6) {
				   milist6->InsertAtStart(color);
				   IntroducirMatriz(1, 6, color);
				   return;
			   }
			   if (pila == 7) {
				   milist7->InsertAtStart(color);
				   IntroducirMatriz(1, 7, color);
				   return;
			   }
		   }

		   void ProcesoSolucion(int pilain, int pilaout, int metodo) {
			   //Proceso para transferir y crear informe de movimiento
			   if (milist0->count > 0) {
				   if (pilain == 0 && pilaout == 0) {
					   nodo* temp;
					   if (metodo == 0) {
					   }
					   else {
						   temp = milist0->ExtractAtEnd();
						   milist0->InsertAtStart(temp->value);
						   cambio(0);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   return;
				   }
				   if (pilain == 0 && pilaout == 1) {
					   nodo* temp;
					   if (metodo == 0) {
						   temp = milist0->ExtractAtStart();
						   cambio(0);
						   milist1->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 1, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   else {
						   temp = milist0->ExtractAtEnd();
						   cambio(0);
						   milist1->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 1, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   return;
				   }
				   if (pilain == 0 && pilaout == 2) {
					   nodo* temp;
					   if (metodo == 0) {
						   temp = milist0->ExtractAtStart();
						   cambio(0);
						   milist2->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 2, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   else {
						   temp = milist0->ExtractAtEnd();
						   cambio(0);
						   milist2->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 2, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   return;
				   }
				   if (pilain == 0 && pilaout == 3) {
					   nodo* temp;
					   if (metodo == 0) {
						   temp = milist0->ExtractAtStart();
						   cambio(0);
						   milist3->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 3, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   else {
						   temp = milist0->ExtractAtEnd();
						   cambio(0);
						   milist3->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 3, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   return;
				   }
				   if (pilain == 0 && pilaout == 4) {
					   nodo* temp;
					   if (metodo == 0) {
						   temp = milist0->ExtractAtStart();
						   cambio(0);
						   milist4->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 4, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   else {
						   temp = milist0->ExtractAtEnd();
						   cambio(0);
						   milist4->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 4, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   return;
				   }
				   if (pilain == 0 && pilaout == 5) {
					   nodo* temp;
					   if (metodo == 0) {
						   temp = milist0->ExtractAtStart();
						   cambio(0);
						   milist5->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 5, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   else {
						   temp = milist0->ExtractAtEnd();
						   cambio(0);
						   milist5->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 5, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   return;
				   }
				   if (pilain == 0 && pilaout == 6) {
					   nodo* temp;
					   if (metodo == 0) {
						   temp = milist0->ExtractAtStart();
						   cambio(0);
						   milist6->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 6, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   else {
						   temp = milist0->ExtractAtEnd();
						   cambio(0);
						   milist6->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 6, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   return;
				   }
				   if (pilain == 0 && pilaout == 7) {
					   nodo* temp;
					   if (metodo == 0) {
						   temp = milist0->ExtractAtStart();
						   cambio(0);
						   milist7->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 7, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   else {
						   temp = milist0->ExtractAtEnd();
						   cambio(0);
						   milist7->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 7, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   return;
				   }
			   }
			   if (milist1->count > 0) {

				   if (pilain == 1 && pilaout == 0) {
					   nodo* temp;
					   if (metodo == 0) {
						   temp = milist1->ExtractAtStart();
						   cambio(1);
						   milist0->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 0, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   else {
						   temp = milist1->ExtractAtEnd();
						   cambio(1);
						   milist0->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 0, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   return;
				   }
				   if (pilain == 1 && pilaout == 1) {
					   nodo* temp;
					   if (metodo == 0) {
					   }
					   else {
						   temp = milist1->ExtractAtEnd();
						   milist1->InsertAtStart(temp->value);
						   cambio(1);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   return;
				   }
				   if (pilain == 1 && pilaout == 2) {
					   nodo* temp;
					   if (metodo == 0) {
						   temp = milist1->ExtractAtStart();
						   cambio(1);
						   milist2->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 2, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   else {
						   temp = milist1->ExtractAtEnd();
						   cambio(1);
						   milist2->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 2, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   return;
				   }
				   if (pilain == 1 && pilaout == 3) {
					   nodo* temp;
					   if (metodo == 0) {
						   temp = milist1->ExtractAtStart();
						   cambio(1);
						   milist3->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 3, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   else {
						   temp = milist1->ExtractAtEnd();
						   cambio(1);
						   milist3->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 3, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   return;
				   }
				   if (pilain == 1 && pilaout == 4) {
					   nodo* temp;
					   if (metodo == 0) {
						   temp = milist1->ExtractAtStart();
						   cambio(1);
						   milist4->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 4, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   else {
						   temp = milist1->ExtractAtEnd();
						   cambio(1);
						   milist4->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 4, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   return;
				   }
				   if (pilain == 1 && pilaout == 5) {
					   nodo* temp;
					   if (metodo == 0) {
						   temp = milist1->ExtractAtStart();
						   cambio(1);
						   milist5->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 5, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   else {
						   temp = milist1->ExtractAtEnd();
						   cambio(1);
						   milist5->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 5, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   return;
				   }
				   if (pilain == 1 && pilaout == 6) {
					   nodo* temp;
					   if (metodo == 0) {
						   temp = milist1->ExtractAtStart();
						   cambio(1);
						   milist6->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 6, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   else {
						   temp = milist1->ExtractAtEnd();
						   cambio(1);
						   milist6->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 6, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   return;
				   }
				   if (pilain == 1 && pilaout == 7) {
					   nodo* temp;
					   if (metodo == 0) {
						   temp = milist1->ExtractAtStart();
						   cambio(1);
						   milist7->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 7, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   else {
						   temp = milist1->ExtractAtEnd();
						   cambio(1);
						   milist7->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 7, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   return;
				   }
			   }
			   if (milist2->count > 0) {

				   if (pilain == 2 && pilaout == 0) {
					   nodo* temp;
					   if (metodo == 0) {
						   temp = milist2->ExtractAtStart();
						   cambio(2);
						   milist0->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 0, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   else {
						   temp = milist2->ExtractAtEnd();
						   cambio(2);
						   milist0->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 0, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   return;
				   }
				   if (pilain == 2 && pilaout == 1) {
					   nodo* temp;
					   if (metodo == 0) {
						   temp = milist2->ExtractAtStart();
						   cambio(2);
						   milist1->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 1, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   else {
						   temp = milist2->ExtractAtEnd();
						   cambio(2);
						   milist1->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 1, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   return;
				   }
				   if (pilain == 2 && pilaout == 2) {
					   nodo* temp;
					   if (metodo == 0) {
					   }
					   else {
						   temp = milist2->ExtractAtEnd();
						   milist2->InsertAtStart(temp->value);
						   cambio(2);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   return;
				   }
				   if (pilain == 2 && pilaout == 3) {
					   nodo* temp;
					   if (metodo == 0) {
						   temp = milist2->ExtractAtStart();
						   cambio(2);
						   milist3->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 3, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   else {
						   temp = milist2->ExtractAtEnd();
						   cambio(2);
						   milist3->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 3, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   return;
				   }
				   if (pilain == 2 && pilaout == 4) {
					   nodo* temp;
					   if (metodo == 0) {
						   temp = milist2->ExtractAtStart();
						   cambio(2);
						   milist4->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 4, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   else {
						   temp = milist2->ExtractAtEnd();
						   cambio(2);
						   milist4->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 4, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   return;
				   }
				   if (pilain == 2 && pilaout == 5) {
					   nodo* temp;
					   if (metodo == 0) {
						   temp = milist2->ExtractAtStart();
						   cambio(2);
						   milist5->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 5, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   else {
						   temp = milist2->ExtractAtEnd();
						   cambio(2);
						   milist5->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 5, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   return;
				   }
				   if (pilain == 2 && pilaout == 6) {
					   nodo* temp;
					   if (metodo == 0) {
						   temp = milist2->ExtractAtStart();
						   cambio(2);
						   milist6->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 6, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   else {
						   temp = milist2->ExtractAtEnd();
						   cambio(2);
						   milist6->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 6, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   return;
				   }
				   if (pilain == 2 && pilaout == 7) {
					   nodo* temp;
					   if (metodo == 0) {
						   temp = milist2->ExtractAtStart();
						   cambio(2);
						   milist7->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 7, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   else {
						   temp = milist2->ExtractAtEnd();
						   cambio(2);
						   milist7->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 7, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   return;
				   }
			   }
			   if (milist3->count > 0) {

				   if (pilain == 3 && pilaout == 0) {
					   nodo* temp;
					   if (metodo == 0) {
						   temp = milist3->ExtractAtStart();
						   cambio(3);
						   milist0->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 0, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   else {
						   temp = milist3->ExtractAtEnd();
						   cambio(3);
						   milist0->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 0, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   return;
				   }
				   if (pilain == 3 && pilaout == 1) {
					   nodo* temp;
					   if (metodo == 0) {
						   temp = milist3->ExtractAtStart();
						   cambio(3);
						   milist1->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 1, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   else {
						   temp = milist3->ExtractAtEnd();
						   cambio(3);
						   milist1->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 1, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   return;
				   }
				   if (pilain == 3 && pilaout == 2) {
					   nodo* temp;
					   if (metodo == 0) {
						   temp = milist3->ExtractAtStart();
						   cambio(3);
						   milist2->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 2, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   else {
						   temp = milist3->ExtractAtEnd();
						   cambio(3);
						   milist2->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 2, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   return;
				   }
				   if (pilain == 3 && pilaout == 3) {
					   nodo* temp;
					   if (metodo == 0) {
					   }
					   else {
						   temp = milist3->ExtractAtEnd();
						   milist3->InsertAtStart(temp->value);
						   cambio(3);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   return;
				   }
				   if (pilain == 3 && pilaout == 4) {
					   nodo* temp;
					   if (metodo == 0) {
						   temp = milist3->ExtractAtStart();
						   cambio(3);
						   milist4->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 4, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   else {
						   temp = milist3->ExtractAtEnd();
						   cambio(3);
						   milist4->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 4, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   return;
				   }
				   if (pilain == 3 && pilaout == 5) {
					   nodo* temp;
					   if (metodo == 0) {
						   temp = milist3->ExtractAtStart();
						   cambio(3);
						   milist5->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 5, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   else {
						   temp = milist3->ExtractAtEnd();
						   cambio(3);
						   milist5->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 5, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   return;
				   }
				   if (pilain == 3 && pilaout == 6) {
					   nodo* temp;
					   if (metodo == 0) {
						   temp = milist3->ExtractAtStart();
						   cambio(3);
						   milist6->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 6, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   else {
						   temp = milist3->ExtractAtEnd();
						   cambio(3);
						   milist6->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 6, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   return;
				   }
				   if (pilain == 3 && pilaout == 7) {
					   nodo* temp;
					   if (metodo == 0) {
						   temp = milist3->ExtractAtStart();
						   cambio(3);
						   milist7->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 7, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   else {
						   temp = milist3->ExtractAtEnd();
						   cambio(3);
						   milist7->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 7, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   return;
				   }
			   }
			   if (milist4->count > 0) {

				   if (pilain == 4 && pilaout == 0) {
					   nodo* temp;
					   if (metodo == 0) {
						   temp = milist4->ExtractAtStart();
						   cambio(4);
						   milist0->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 0, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   else {
						   temp = milist4->ExtractAtEnd();
						   cambio(4);
						   milist0->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 0, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   return;
				   }
				   if (pilain == 4 && pilaout == 1) {
					   nodo* temp;
					   if (metodo == 0) {
						   temp = milist4->ExtractAtStart();
						   cambio(4);
						   milist1->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 1, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   else {
						   temp = milist4->ExtractAtEnd();
						   cambio(4);
						   milist1->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 1, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   return;
				   }
				   if (pilain == 4 && pilaout == 2) {
					   nodo* temp;
					   if (metodo == 0) {
						   temp = milist4->ExtractAtStart();
						   cambio(4);
						   milist2->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 2, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   else {
						   temp = milist4->ExtractAtEnd();
						   cambio(4);
						   milist2->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 2, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   return;
				   }
				   if (pilain == 4 && pilaout == 3) {
					   nodo* temp;
					   if (metodo == 0) {
						   temp = milist4->ExtractAtStart();
						   cambio(4);
						   milist3->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 3, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   else {
						   temp = milist4->ExtractAtEnd();
						   cambio(4);
						   milist3->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 3, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   return;
				   }
				   if (pilain == 4 && pilaout == 4) {
					   nodo* temp;
					   if (metodo == 0) {
					   }
					   else {
						   temp = milist4->ExtractAtEnd();
						   milist4->InsertAtStart(temp->value);
						   cambio(4);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   return;
				   }
				   if (pilain == 4 && pilaout == 5) {
					   nodo* temp;
					   if (metodo == 0) {
						   temp = milist4->ExtractAtStart();
						   cambio(4);
						   milist5->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 5, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   else {
						   temp = milist4->ExtractAtEnd();
						   cambio(4);
						   milist5->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 5, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   return;
				   }
				   if (pilain == 4 && pilaout == 6) {
					   nodo* temp;
					   if (metodo == 0) {
						   temp = milist4->ExtractAtStart();
						   cambio(4);
						   milist6->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 6, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   else {
						   temp = milist4->ExtractAtEnd();
						   cambio(4);
						   milist6->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 6, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   return;
				   }
				   if (pilain == 4 && pilaout == 7) {
					   nodo* temp;
					   if (metodo == 0) {
						   temp = milist4->ExtractAtStart();
						   cambio(4);
						   milist7->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 7, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   else {
						   temp = milist4->ExtractAtEnd();
						   cambio(4);
						   milist7->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 7, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   return;
				   }
			   }
			   if (milist5->count > 0) {

				   if (pilain == 5 && pilaout == 0) {
					   nodo* temp;
					   if (metodo == 0) {
						   temp = milist5->ExtractAtStart();
						   cambio(5);
						   milist0->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 0, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   else {
						   temp = milist5->ExtractAtEnd();
						   cambio(5);
						   milist0->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 0, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   return;
				   }
				   if (pilain == 5 && pilaout == 1) {
					   nodo* temp;
					   if (metodo == 0) {
						   temp = milist5->ExtractAtStart();
						   cambio(5);
						   milist1->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 1, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   else {
						   temp = milist5->ExtractAtEnd();
						   cambio(5);
						   milist1->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 1, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   return;
				   }
				   if (pilain == 5 && pilaout == 2) {
					   nodo* temp;
					   if (metodo == 0) {
						   temp = milist5->ExtractAtStart();
						   cambio(5);
						   milist2->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 2, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   else {
						   temp = milist5->ExtractAtEnd();
						   cambio(5);
						   milist2->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 2, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   return;
				   }
				   if (pilain == 5 && pilaout == 3) {
					   nodo* temp;
					   if (metodo == 0) {
						   temp = milist5->ExtractAtStart();
						   cambio(5);
						   milist3->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 3, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   else {
						   temp = milist5->ExtractAtEnd();
						   cambio(5);
						   milist3->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 3, temp->value);;
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   return;
				   }
				   if (pilain == 5 && pilaout == 4) {
					   nodo* temp;
					   if (metodo == 0) {
						   temp = milist5->ExtractAtStart();
						   cambio(5);
						   milist4->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 4, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   else {
						   temp = milist5->ExtractAtEnd();
						   cambio(5);
						   milist4->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 4, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   return;
				   }
				   if (pilain == 5 && pilaout == 5) {
					   nodo* temp;
					   if (metodo == 0) {
					   }
					   else {
						   temp = milist5->ExtractAtEnd();
						   milist5->InsertAtStart(temp->value);
						   cambio(5);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   return;
				   }
				   if (pilain == 5 && pilaout == 6) {
					   nodo* temp;
					   if (metodo == 0) {
						   temp = milist5->ExtractAtStart();
						   cambio(5);
						   milist6->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 6, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   else {
						   temp = milist5->ExtractAtEnd();
						   cambio(5);
						   milist6->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 6, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   return;
				   }
				   if (pilain == 5 && pilaout == 7) {
					   nodo* temp;
					   if (metodo == 0) {
						   temp = milist5->ExtractAtStart();
						   cambio(5);
						   milist7->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 7, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   else {
						   temp = milist5->ExtractAtEnd();
						   cambio(5);
						   milist7->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 7, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   return;
				   }
			   }
			   if (milist6->count > 0) {

				   if (pilain == 6 && pilaout == 0) {
					   nodo* temp;
					   if (metodo == 0) {
						   temp = milist6->ExtractAtStart();
						   cambio(6);
						   milist0->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 0, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   else {
						   temp = milist6->ExtractAtEnd();
						   cambio(6);
						   milist0->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 0, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   return;
				   }
				   if (pilain == 6 && pilaout == 1) {
					   nodo* temp;
					   if (metodo == 0) {
						   temp = milist6->ExtractAtStart();
						   cambio(6);
						   milist1->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 1, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   else {
						   temp = milist6->ExtractAtEnd();
						   cambio(6);
						   milist1->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 1, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   return;
				   }
				   if (pilain == 6 && pilaout == 2) {
					   nodo* temp;
					   if (metodo == 0) {
						   temp = milist6->ExtractAtStart();
						   cambio(6);
						   milist2->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 2, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   else {
						   temp = milist6->ExtractAtEnd();
						   cambio(6);
						   milist2->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 2, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   return;
				   }
				   if (pilain == 6 && pilaout == 3) {
					   nodo* temp;
					   if (metodo == 0) {
						   temp = milist6->ExtractAtStart();
						   cambio(6);
						   milist3->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 3, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   else {
						   temp = milist6->ExtractAtEnd();
						   cambio(6);
						   milist3->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 3, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   return;
				   }
				   if (pilain == 6 && pilaout == 4) {
					   nodo* temp;
					   if (metodo == 0) {
						   temp = milist6->ExtractAtStart();
						   cambio(6);
						   milist4->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 4, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   else {
						   temp = milist6->ExtractAtEnd();
						   cambio(6);
						   milist4->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 4, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   return;
				   }
				   if (pilain == 6 && pilaout == 5) {
					   nodo* temp;
					   if (metodo == 0) {
						   temp = milist6->ExtractAtStart();
						   cambio(6);
						   milist5->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 5, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   else {
						   temp = milist6->ExtractAtEnd();
						   cambio(6);
						   milist5->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 5, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   return;
				   }
				   if (pilain == 6 && pilaout == 6) {
					   nodo* temp;
					   if (metodo == 0) {
					   }
					   else {
						   temp = milist6->ExtractAtEnd();
						   milist6->InsertAtStart(temp->value);
						   cambio(6);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   return;
				   }
				   if (pilain == 6 && pilaout == 7) {
					   nodo* temp;
					   if (metodo == 0) {
						   temp = milist6->ExtractAtStart();
						   cambio(6);
						   milist7->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 7, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   else {
						   temp = milist6->ExtractAtEnd();
						   cambio(6);
						   milist7->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 7, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   return;
				   }
			   }
			   if (milist7->count > 0) {

				   if (pilain == 7 && pilaout == 0) {
					   nodo* temp;
					   if (metodo == 0) {
						   temp = milist7->ExtractAtStart();
						   cambio(7);
						   milist0->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 0, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   else {
						   temp = milist7->ExtractAtEnd();
						   cambio(7);
						   milist0->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 0, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   return;
				   }
				   if (pilain == 7 && pilaout == 1) {
					   nodo* temp;
					   if (metodo == 0) {
						   temp = milist7->ExtractAtStart();
						   cambio(7);
						   milist1->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 1, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   else {
						   temp = milist7->ExtractAtEnd();
						   cambio(7);
						   milist1->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 1, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   return;
				   }
				   if (pilain == 7 && pilaout == 2) {
					   nodo* temp;
					   if (metodo == 0) {
						   temp = milist7->ExtractAtStart();
						   cambio(7);
						   milist2->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 2, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   else {
						   temp = milist7->ExtractAtEnd();
						   cambio(7);
						   milist2->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 2, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   return;
				   }
				   if (pilain == 7 && pilaout == 3) {
					   nodo* temp;
					   if (metodo == 0) {
						   temp = milist7->ExtractAtEnd();
						   cambio(7);
						   milist3->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 3, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   else {
						   temp = milist7->ExtractAtEnd();
						   cambio(7);
						   milist3->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 3, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   return;
				   }
				   if (pilain == 7 && pilaout == 4) {
					   nodo* temp;
					   if (metodo == 0) {
						   temp = milist7->ExtractAtEnd();
						   cambio(7);
						   milist4->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 4, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   else {
						   temp = milist7->ExtractAtEnd();
						   cambio(7);
						   milist4->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 4, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   return;
				   }
				   if (pilain == 7 && pilaout == 5) {
					   nodo* temp;
					   if (metodo == 0) {
						   temp = milist7->ExtractAtStart();
						   cambio(7);
						   milist5->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 5, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   else {
						   temp = milist7->ExtractAtEnd();
						   cambio(7);
						   milist5->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 5, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   return;
				   }
				   if (pilain == 7 && pilaout == 6) {
					   nodo* temp;
					   if (metodo == 0) {
						   temp = milist7->ExtractAtStart();
						   cambio(7);
						   milist6->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 6, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   else {
						   temp = milist7->ExtractAtEnd();
						   cambio(7);
						   milist6->InsertAtStart(temp->value);
						   IntroducirMatriz(1, 6, temp->value);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   return;
				   }
				   if (pilain == 7 && pilaout == 7) {
					   nodo* temp;
					   if (metodo == 0) {
					   }
					   else {
						   temp = milist7->ExtractAtEnd();
						   milist7->InsertAtStart(temp->value);
						   cambio(7);
						   informe = "P" + pilain + "-> P" + pilaout;
						   Informar(0);
					   }
					   return;
				   }
			   }
		   }
		   void IntroducirMatriz(int colm, int lis, int col) {
			   int colmin = colm;
			   int filsame = 0;
			   //Creacion e integracion de columna a los datagrid y listas
			   if (colmin > 0) {
				   for (int i = 0; i < colmin; i++) {
					   DataGridViewColumn^ addcolm = gcnew DataGridViewColumn();
					   addcolm->Width = 20;
					   if (col == 0) {
						   addcolm->DefaultCellStyle->BackColor = Color::Black;
					   }
					   else if (col == 1) {
						   addcolm->DefaultCellStyle->BackColor = Color::Blue;
					   }
					   else if (col == 2) {
						   addcolm->DefaultCellStyle->BackColor = Color::White;
					   }
					   else if (col == 3) {
						   addcolm->DefaultCellStyle->BackColor = Color::Red;
					   }
					   else if (col == 4) {
						   addcolm->DefaultCellStyle->BackColor = Color::Yellow;
					   }
					   else if (col == 5) {
						   addcolm->DefaultCellStyle->BackColor = Color::Green;
					   }
					   else if (col == 6) {
						   addcolm->DefaultCellStyle->BackColor = Color::Purple;
					   }
					   else if (col == 7) {
						   addcolm->DefaultCellStyle->BackColor = Color::LightBlue;
					   }

					   DataGridViewCell^ cellTemplate = gcnew DataGridViewTextBoxCell();
					   addcolm->CellTemplate = cellTemplate;

					   if (lis == 0) {
						   Linea0->Columns->Add(addcolm);
					   }
					   else if (lis == 1) {
						   Linea1->Columns->Add(addcolm);
					   }
					   else if (lis == 2) {
						   Linea2->Columns->Add(addcolm);
					   }
					   else if (lis == 3) {
						   Linea3->Columns->Add(addcolm);
					   }
					   else if (lis == 4) {
						   Linea4->Columns->Add(addcolm);
					   }
					   else if (lis == 5) {
						   Linea5->Columns->Add(addcolm);
					   }
					   else if (lis == 6) {
						   Linea6->Columns->Add(addcolm);
					   }
					   else if (lis == 7) {
						   Linea7->Columns->Add(addcolm);
					   }
				   }
			   }

			   if (filsame > 0) {
				   for (int i = 0; i < filsame; i++) {
					   Linea0->Rows->Add();
				   }
			   }
		   };
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		//Verificacion de existencia de pila y verificar si el valor ingresado es un integral
		int numoutpila = 0;
		int numinpila = 0;
		try {
			numinpila = Convert::ToInt32(pilaintxt->Text);
			numoutpila = Convert::ToInt32(pilaouttxt->Text);
			if (numoutpila < 7 || numoutpila > 0 || numinpila < 7 || numinpila > 0) {
				if (numinpila == 0) {
					ProcesoSolucion(numinpila, numoutpila, mode);
				}
				else if (numinpila == 1) {
					ProcesoSolucion(numinpila, numoutpila, mode);
				}
				else if (numinpila == 2) {
					ProcesoSolucion(numinpila, numoutpila, mode);
				}
				else if (numinpila == 3) {
					ProcesoSolucion(numinpila, numoutpila, mode);
				}
				else if (numinpila == 4) {
					ProcesoSolucion(numinpila, numoutpila, mode);
				}
				else if (numinpila == 5) {
					ProcesoSolucion(numinpila, numoutpila, mode);
				}
				else if (numinpila == 6) {
					ProcesoSolucion(numinpila, numoutpila, mode);
				}
				else if (numinpila == 7) {
					ProcesoSolucion(numinpila, numoutpila, mode);
				}
			}
			else {
				MessageBox::Show("Error detectado: "
					, "Numero de pila inexistente"
					, MessageBoxButtons::OK
					, MessageBoxIcon::Error);
			}
		}
		catch (Exception^ e) {
			MessageBox::Show("Error detectado: " + e->Message
				, "Valor no valido"
				, MessageBoxButtons::OK
				, MessageBoxIcon::Error);
		}
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	iniciarMatriz();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	iniciarMatriz();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	iniciarMatriz();
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	//Leer archivo y colores para introducirlo en los datagrid.
	button6->Enabled = true;
	button7->Enabled = true;
	button8->Enabled = false;
	pilaintxt->Enabled = true;
	pilaouttxt->Enabled = true;
	label6->Text = "Pila";
	Stream^ calc;
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		if ((calc = openFileDialog1->OpenFile()) != nullptr)
		{
			Boolean lista0 = true;
			Boolean lista1 = true;
			Boolean lista2 = true;
			Boolean lista3 = true;
			Boolean lista4 = true;
			Boolean lista5 = true;
			Boolean lista6 = true;
			Boolean lista7 = true;

			String^ nombrearchivo = openFileDialog1->InitialDirectory + openFileDialog1->FileName;
			String^ Readfile = File::ReadAllText(nombrearchivo);
			Importxt->Text = nombrearchivo;
			Importxt->Enabled = false;
			ReestablecerMatriz();
			int i = 0;
			array<String^>^ content = Readfile->Split(',');
			for each (String ^ capture in content) {
				int color = 0;
				if (capture == "B") {
					color = 0;
				}
				else if (capture == "Z") {
					color = 1;
				}
				else if (capture == "W") {
					color = 2;
				}
				else if (capture == "R") {
					color = 3;
				}
				else if (capture == "Y") {
					color = 4;
				}
				else if (capture == "G") {
					color = 5;
				}
				else if (capture == "P") {
					color = 6;
				}
				else if (capture == "N") {
					color = 7;
				}
				mainlist->InsertAtStart(color);

				if (lista0) {
					milist0->InsertAtStart(color);
					IntroducirMatriz(1, 0, color);
				}
				else if (lista1) {
					milist1->InsertAtStart(color);
					IntroducirMatriz(1, 1, color);
				}
				else if (lista2) {
					milist2->InsertAtStart(color);
					IntroducirMatriz(1, 2, color);
				}
				else if (lista3) {
					milist3->InsertAtStart(color);
					IntroducirMatriz(1, 3, color);
				}
				else if (lista4) {
					milist4->InsertAtStart(color);
					IntroducirMatriz(1, 4, color);
				}
				else if (lista5) {
					milist5->InsertAtStart(color);
					IntroducirMatriz(1, 5, color);
				}
				else if (lista6) {
					milist6->InsertAtStart(color);
					IntroducirMatriz(1, 6, color);
				}
				else if (lista7) {
					milist7->InsertAtStart(color);
					IntroducirMatriz(1, 7, color);
				}

				if (capture == "X") {
					if (lista0) {
						lista0 = false;
					}
					else if (lista1) {
						lista1 = false;
					}
					else if (lista2) {
						lista2 = false;
					}
					else if (lista3) {
						lista3 = false;
					}
					else if (lista4) {
						lista4 = false;
					}
					else if (lista5) {
						lista5 = false;
					}
					else if (lista6) {
						lista6 = false;
					}
					else if (lista7) {
						lista7 = false;
						break;
					}
					i += 1;
				}
			}
		}
}
};
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	// intercambio de modos
	if (mode == 0) {
		mode = 1;
		label6->Text = "Cola";
	}
	else
	{
		mode = 0;
		label6->Text = "Pila";
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void Linea0_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
};
