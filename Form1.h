#include "CRobot.h"

#pragma once


namespace ManoiControl {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	protected: 
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown3;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown4;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown5;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown6;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown7;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown8;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown9;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown10;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown11;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown12;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown13;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown14;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown15;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown16;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown17;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown18;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;

	private:
		/// <summary>
		
		CRobot* Manoi;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown19;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown20;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
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
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown7 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown8 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown9 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown10 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown11 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown12 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown13 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown14 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown15 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown16 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown17 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown18 = (gcnew System::Windows::Forms::NumericUpDown());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
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
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown19 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown20 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown20))->BeginInit();
			this->SuspendLayout();
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(165, 12);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {16383, 0, 0, 0});
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {16383, 0, 0, System::Int32::MinValue});
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 20);
			this->numericUpDown1->TabIndex = 0;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown1_ValueChanged);
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(294, 46);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {16383, 0, 0, 0});
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {16383, 0, 0, System::Int32::MinValue});
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(120, 20);
			this->numericUpDown2->TabIndex = 1;
			this->numericUpDown2->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown2_ValueChanged);
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(295, 72);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {16383, 0, 0, 0});
			this->numericUpDown3->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {16383, 0, 0, System::Int32::MinValue});
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(120, 20);
			this->numericUpDown3->TabIndex = 2;
			this->numericUpDown3->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown3_ValueChanged);
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(295, 98);
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {16383, 0, 0, 0});
			this->numericUpDown4->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {16383, 0, 0, System::Int32::MinValue});
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(120, 20);
			this->numericUpDown4->TabIndex = 3;
			this->numericUpDown4->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown4_ValueChanged);
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Location = System::Drawing::Point(40, 46);
			this->numericUpDown5->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {16383, 0, 0, 0});
			this->numericUpDown5->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {16383, 0, 0, System::Int32::MinValue});
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(120, 20);
			this->numericUpDown5->TabIndex = 4;
			this->numericUpDown5->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown5_ValueChanged);
			// 
			// numericUpDown6
			// 
			this->numericUpDown6->Location = System::Drawing::Point(40, 72);
			this->numericUpDown6->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {16383, 0, 0, 0});
			this->numericUpDown6->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {16383, 0, 0, System::Int32::MinValue});
			this->numericUpDown6->Name = L"numericUpDown6";
			this->numericUpDown6->Size = System::Drawing::Size(120, 20);
			this->numericUpDown6->TabIndex = 5;
			this->numericUpDown6->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown6_ValueChanged);
			// 
			// numericUpDown7
			// 
			this->numericUpDown7->Location = System::Drawing::Point(40, 98);
			this->numericUpDown7->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {16383, 0, 0, 0});
			this->numericUpDown7->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {16383, 0, 0, System::Int32::MinValue});
			this->numericUpDown7->Name = L"numericUpDown7";
			this->numericUpDown7->Size = System::Drawing::Size(120, 20);
			this->numericUpDown7->TabIndex = 6;
			this->numericUpDown7->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown7_ValueChanged);
			// 
			// numericUpDown8
			// 
			this->numericUpDown8->Location = System::Drawing::Point(295, 133);
			this->numericUpDown8->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {16383, 0, 0, 0});
			this->numericUpDown8->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {16383, 0, 0, System::Int32::MinValue});
			this->numericUpDown8->Name = L"numericUpDown8";
			this->numericUpDown8->Size = System::Drawing::Size(120, 20);
			this->numericUpDown8->TabIndex = 7;
			this->numericUpDown8->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown8_ValueChanged);
			// 
			// numericUpDown9
			// 
			this->numericUpDown9->Location = System::Drawing::Point(295, 157);
			this->numericUpDown9->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {16383, 0, 0, 0});
			this->numericUpDown9->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {16383, 0, 0, System::Int32::MinValue});
			this->numericUpDown9->Name = L"numericUpDown9";
			this->numericUpDown9->Size = System::Drawing::Size(120, 20);
			this->numericUpDown9->TabIndex = 8;
			this->numericUpDown9->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown9_ValueChanged);
			// 
			// numericUpDown10
			// 
			this->numericUpDown10->Location = System::Drawing::Point(295, 181);
			this->numericUpDown10->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {16383, 0, 0, 0});
			this->numericUpDown10->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {16383, 0, 0, System::Int32::MinValue});
			this->numericUpDown10->Name = L"numericUpDown10";
			this->numericUpDown10->Size = System::Drawing::Size(120, 20);
			this->numericUpDown10->TabIndex = 9;
			this->numericUpDown10->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown10_ValueChanged);
			// 
			// numericUpDown11
			// 
			this->numericUpDown11->Location = System::Drawing::Point(295, 207);
			this->numericUpDown11->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {16383, 0, 0, 0});
			this->numericUpDown11->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {16383, 0, 0, System::Int32::MinValue});
			this->numericUpDown11->Name = L"numericUpDown11";
			this->numericUpDown11->Size = System::Drawing::Size(120, 20);
			this->numericUpDown11->TabIndex = 10;
			this->numericUpDown11->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown11_ValueChanged);
			// 
			// numericUpDown12
			// 
			this->numericUpDown12->Location = System::Drawing::Point(295, 233);
			this->numericUpDown12->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {16383, 0, 0, 0});
			this->numericUpDown12->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {16383, 0, 0, System::Int32::MinValue});
			this->numericUpDown12->Name = L"numericUpDown12";
			this->numericUpDown12->Size = System::Drawing::Size(120, 20);
			this->numericUpDown12->TabIndex = 11;
			this->numericUpDown12->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown12_ValueChanged);
			// 
			// numericUpDown13
			// 
			this->numericUpDown13->Location = System::Drawing::Point(39, 133);
			this->numericUpDown13->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {16383, 0, 0, 0});
			this->numericUpDown13->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {16383, 0, 0, System::Int32::MinValue});
			this->numericUpDown13->Name = L"numericUpDown13";
			this->numericUpDown13->Size = System::Drawing::Size(120, 20);
			this->numericUpDown13->TabIndex = 12;
			this->numericUpDown13->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown13_ValueChanged);
			// 
			// numericUpDown14
			// 
			this->numericUpDown14->Location = System::Drawing::Point(39, 157);
			this->numericUpDown14->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {16383, 0, 0, 0});
			this->numericUpDown14->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {16383, 0, 0, System::Int32::MinValue});
			this->numericUpDown14->Name = L"numericUpDown14";
			this->numericUpDown14->Size = System::Drawing::Size(120, 20);
			this->numericUpDown14->TabIndex = 13;
			this->numericUpDown14->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown14_ValueChanged);
			// 
			// numericUpDown15
			// 
			this->numericUpDown15->Location = System::Drawing::Point(38, 181);
			this->numericUpDown15->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {16383, 0, 0, 0});
			this->numericUpDown15->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {16383, 0, 0, System::Int32::MinValue});
			this->numericUpDown15->Name = L"numericUpDown15";
			this->numericUpDown15->Size = System::Drawing::Size(120, 20);
			this->numericUpDown15->TabIndex = 14;
			this->numericUpDown15->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown15_ValueChanged);
			// 
			// numericUpDown16
			// 
			this->numericUpDown16->Location = System::Drawing::Point(38, 207);
			this->numericUpDown16->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {16383, 0, 0, 0});
			this->numericUpDown16->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {16383, 0, 0, System::Int32::MinValue});
			this->numericUpDown16->Name = L"numericUpDown16";
			this->numericUpDown16->Size = System::Drawing::Size(120, 20);
			this->numericUpDown16->TabIndex = 15;
			this->numericUpDown16->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown16_ValueChanged);
			// 
			// numericUpDown17
			// 
			this->numericUpDown17->Location = System::Drawing::Point(38, 233);
			this->numericUpDown17->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {16383, 0, 0, 0});
			this->numericUpDown17->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {16383, 0, 0, System::Int32::MinValue});
			this->numericUpDown17->Name = L"numericUpDown17";
			this->numericUpDown17->Size = System::Drawing::Size(120, 20);
			this->numericUpDown17->TabIndex = 16;
			this->numericUpDown17->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown17_ValueChanged);
			// 
			// numericUpDown18
			// 
			this->numericUpDown18->Location = System::Drawing::Point(44, 302);
			this->numericUpDown18->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {255, 0, 0, 0});
			this->numericUpDown18->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDown18->Name = L"numericUpDown18";
			this->numericUpDown18->Size = System::Drawing::Size(75, 20);
			this->numericUpDown18->TabIndex = 17;
			this->numericUpDown18->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(491, 202);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(50, 17);
			this->checkBox1->TabIndex = 18;
			this->checkBox1->Text = L"Sync";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(491, 43);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(145, 23);
			this->button1->TabIndex = 19;
			this->button1->Text = L"Set All";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(491, 67);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(145, 23);
			this->button2->TabIndex = 20;
			this->button2->Text = L"Set to zero";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(491, 109);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(145, 23);
			this->button3->TabIndex = 21;
			this->button3->Text = L"Get RCB Version";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(491, 149);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(145, 23);
			this->button4->TabIndex = 22;
			this->button4->Text = L"Open Com";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(491, 171);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(145, 23);
			this->button5->TabIndex = 23;
			this->button5->Text = L"Close Com";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 304);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(38, 13);
			this->label1->TabIndex = 24;
			this->label1->Text = L"Speed";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(488, 227);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(139, 13);
			this->label2->TabIndex = 25;
			this->label2->Text = L"RCB Version not checked...";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(131, 14);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(28, 13);
			this->label3->TabIndex = 26;
			this->label3->Text = L"CH1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(261, 48);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(28, 13);
			this->label4->TabIndex = 27;
			this->label4->Text = L"CH2";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(261, 74);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(28, 13);
			this->label5->TabIndex = 28;
			this->label5->Text = L"CH3";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 48);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(28, 13);
			this->label6->TabIndex = 29;
			this->label6->Text = L"CH6";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(261, 100);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(28, 13);
			this->label7->TabIndex = 30;
			this->label7->Text = L"CH5";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(6, 74);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(28, 13);
			this->label8->TabIndex = 31;
			this->label8->Text = L"CH7";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(255, 159);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(34, 13);
			this->label9->TabIndex = 32;
			this->label9->Text = L"CH12";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(255, 135);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(34, 13);
			this->label10->TabIndex = 33;
			this->label10->Text = L"CH11";
			this->label10->Click += gcnew System::EventHandler(this, &Form1::label10_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(6, 100);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(28, 13);
			this->label11->TabIndex = 34;
			this->label11->Text = L"CH9";
			this->label11->Click += gcnew System::EventHandler(this, &Form1::label11_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(255, 181);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(34, 13);
			this->label12->TabIndex = 35;
			this->label12->Text = L"CH13";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(255, 209);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(34, 13);
			this->label13->TabIndex = 36;
			this->label13->Text = L"CH14";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(255, 235);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(34, 13);
			this->label14->TabIndex = 37;
			this->label14->Text = L"CH15";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(0, 135);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(34, 13);
			this->label15->TabIndex = 38;
			this->label15->Text = L"CH17";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(0, 158);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(34, 13);
			this->label16->TabIndex = 39;
			this->label16->Text = L"CH18";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(0, 180);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(34, 13);
			this->label17->TabIndex = 40;
			this->label17->Text = L"CH19";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(0, 208);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(34, 13);
			this->label18->TabIndex = 41;
			this->label18->Text = L"CH20";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(0, 234);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(34, 13);
			this->label19->TabIndex = 42;
			this->label19->Text = L"CH21";
			// 
			// numericUpDown19
			// 
			this->numericUpDown19->Location = System::Drawing::Point(491, 278);
			this->numericUpDown19->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {78, 0, 0, 0});
			this->numericUpDown19->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDown19->Name = L"numericUpDown19";
			this->numericUpDown19->Size = System::Drawing::Size(50, 20);
			this->numericUpDown19->TabIndex = 43;
			this->numericUpDown19->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			// 
			// numericUpDown20
			// 
			this->numericUpDown20->Location = System::Drawing::Point(491, 302);
			this->numericUpDown20->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {29, 0, 0, 0});
			this->numericUpDown20->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDown20->Name = L"numericUpDown20";
			this->numericUpDown20->Size = System::Drawing::Size(50, 20);
			this->numericUpDown20->TabIndex = 44;
			this->numericUpDown20->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(426, 280);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(54, 13);
			this->label20->TabIndex = 45;
			this->label20->Text = L"Motion no";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(426, 306);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(59, 13);
			this->label21->TabIndex = 46;
			this->label21->Text = L"Position no";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(491, 330);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(145, 23);
			this->button6->TabIndex = 47;
			this->button6->Text = L"Store motion";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(3, 330);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(85, 13);
			this->label22->TabIndex = 48;
			this->label22->Text = L"Command status";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(491, 251);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(145, 23);
			this->button7->TabIndex = 49;
			this->button7->Text = L"button7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(491, 359);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(145, 23);
			this->button8->TabIndex = 50;
			this->button8->Text = L"playmotion";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(491, 388);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(145, 23);
			this->button9->TabIndex = 51;
			this->button9->Text = L"Set All Home";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(6, 352);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(85, 13);
			this->label23->TabIndex = 52;
			this->label23->Text = L"AnalogReadings";
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(491, 417);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(145, 23);
			this->button10->TabIndex = 53;
			this->button10->Text = L"Get Analog Values";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(491, 475);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(145, 23);
			this->button11->TabIndex = 54;
			this->button11->Text = L"Crouch";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(491, 446);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(145, 23);
			this->button12->TabIndex = 55;
			this->button12->Text = L"Natural Posture";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(491, 504);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(145, 23);
			this->button13->TabIndex = 56;
			this->button13->Text = L"LeftStep";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Form1::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(245, 388);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(145, 23);
			this->button14->TabIndex = 57;
			this->button14->Text = L"GetServosState";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Form1::button14_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(245, 359);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(145, 23);
			this->button15->TabIndex = 58;
			this->button15->Text = L"LearningModeInit";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Form1::button15_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(246, 417);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(144, 23);
			this->button16->TabIndex = 59;
			this->button16->Text = L"LearningModeEnd";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Form1::button16_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(654, 576);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->numericUpDown20);
			this->Controls->Add(this->numericUpDown19);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
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
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->numericUpDown18);
			this->Controls->Add(this->numericUpDown17);
			this->Controls->Add(this->numericUpDown16);
			this->Controls->Add(this->numericUpDown15);
			this->Controls->Add(this->numericUpDown14);
			this->Controls->Add(this->numericUpDown13);
			this->Controls->Add(this->numericUpDown12);
			this->Controls->Add(this->numericUpDown11);
			this->Controls->Add(this->numericUpDown10);
			this->Controls->Add(this->numericUpDown9);
			this->Controls->Add(this->numericUpDown8);
			this->Controls->Add(this->numericUpDown7);
			this->Controls->Add(this->numericUpDown6);
			this->Controls->Add(this->numericUpDown5);
			this->Controls->Add(this->numericUpDown4);
			this->Controls->Add(this->numericUpDown3);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->numericUpDown1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown20))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void numericUpDown9_ValueChanged(System::Object^  sender, System::EventArgs^  e) {

		if(checkBox1->Checked==true)
				{
					Manoi->SetSingleChannel(11,(int)numericUpDown9->Value+16384,1,0);
				}
			 }
private: System::Void numericUpDown10_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		if(checkBox1->Checked==true)
				{
					Manoi->SetSingleChannel(12,(int)numericUpDown10->Value+16384,1,0);
				}

		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 Manoi = new CRobot;
			 button4->Enabled=false;
			 button5->Enabled=true;
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 delete Manoi;
			 button4->Enabled=true;
			 button5->Enabled=false;

		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 int positions[24];

			 positions[0]=(int)numericUpDown1->Value+16384;//1
			 
			 positions[1]=(int)numericUpDown2->Value+16384;//2
			 positions[2]=(int)numericUpDown3->Value+16384;//3
			 positions[3]=16384;//4
			 positions[4]=(int)numericUpDown4->Value+16384;//5
			 
			 positions[5]=(int)numericUpDown5->Value+16384;
			 positions[6]=(int)numericUpDown6->Value+16384;
			 positions[7]=16384;
			 positions[8]= (int)numericUpDown7->Value+16384;
			 			 
			 positions[9]=16384;
			 
			 positions[10]=(int)numericUpDown8->Value+16384;
			 positions[11]=(int)numericUpDown9->Value+16384;
			 positions[12]=(int)numericUpDown10->Value+16384;
			 positions[13]=(int)numericUpDown11->Value+16384;
			 positions[14]=(int)numericUpDown12->Value+16384;

			 positions[15]=16384;

			 positions[16]=(int)numericUpDown13->Value+16384;
			 positions[17]=(int)numericUpDown14->Value+16384;
			 positions[18]=(int)numericUpDown15->Value+16384;
			 positions[19]=(int)numericUpDown16->Value+16384;
			 positions[20]=(int)numericUpDown17->Value+16384;
			 
			 positions[21]=16384;
			 positions[22]=16384;
			 positions[23]=16384;
			 
			 int ret = Manoi->SetAllChannels(positions,254-(int)numericUpDown18->Value,0,0,0);

			 if(ret==1)
			{
				label22->Text="Command status: Success";
			}
			else
			{
				label22->Text="Command status: No ACK received";
			}
		 }
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

			 unsigned char result[65];
			 wchar_t res2[65];
			 
			 Manoi->GetRCBVersion(result);
			 for(int i=0;i<65;i++)
				{
				*(res2+i)=*(result+i);			 
				}
			 String^ version=gcnew String(res2);
			 
			 label2->Text=version;
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

			 int positions[24];

			 for(int i=0;i<24;i++)
			 {
			 positions[i]=16384;
			 }
					 
			 Manoi->SetAllChannels(positions,254-(int)numericUpDown18->Value,0,0,0);

		 }
private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(checkBox1->Checked==true)
				{
					Manoi->SetSingleChannel(0,(int)numericUpDown1->Value+16384,1,0);
				}
		 }
private: System::Void numericUpDown5_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(checkBox1->Checked==true)
				{
					Manoi->SetSingleChannel(5,(int)numericUpDown5->Value+16384,1,0);
				}
		 }
private: System::Void numericUpDown2_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		 if(checkBox1->Checked==true)
				{
					Manoi->SetSingleChannel(1,(int)numericUpDown2->Value+16384,1,0);
				}
		 }
private: System::Void numericUpDown16_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		 if(checkBox1->Checked==true)
				{
					Manoi->SetSingleChannel(19,(int)numericUpDown16->Value+16384,1,0);
				}

		 }
private: System::Void numericUpDown15_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(checkBox1->Checked==true)
				{
					Manoi->SetSingleChannel(18,(int)numericUpDown15->Value+16384,1,0);
				}
		 }
private: System::Void numericUpDown14_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		  if(checkBox1->Checked==true)
				{
					Manoi->SetSingleChannel(17,(int)numericUpDown14->Value+16384,1,0);
				}
		 }
private: System::Void numericUpDown13_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		  if(checkBox1->Checked==true)
				{
					Manoi->SetSingleChannel(16,(int)numericUpDown13->Value+16384,1,0);
				}
		 }
private: System::Void numericUpDown12_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		if(checkBox1->Checked==true)
				{
					Manoi->SetSingleChannel(14,(int)numericUpDown12->Value+16384,1,0);
				}

		 }
private: System::Void numericUpDown11_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			if(checkBox1->Checked==true)
				{
					Manoi->SetSingleChannel(13,(int)numericUpDown11->Value+16384,1,0);
				}

		 }
private: System::Void numericUpDown8_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(checkBox1->Checked==true)
				{
					Manoi->SetSingleChannel(10,(int)numericUpDown8->Value+16384,1,0);
				}
		 }
private: System::Void numericUpDown7_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void numericUpDown6_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void numericUpDown4_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void numericUpDown3_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		 if(checkBox1->Checked==true)
				{
					Manoi->SetSingleChannel(2,(int)numericUpDown3->Value+16384,1,0);
				}
		 }
private: System::Void numericUpDown17_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			if(checkBox1->Checked==true)
				{
					Manoi->SetSingleChannel(20,(int)numericUpDown17->Value+16384,1,0);
				}
		 }
private: System::Void label11_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			

			 int positions[24];

			 positions[0]=(int)numericUpDown1->Value+16384;//1
			 
			 positions[1]=(int)numericUpDown2->Value+16384;//2
			 positions[2]=(int)numericUpDown3->Value+16384;//3
			 positions[3]=16384;//4
			 positions[4]=(int)numericUpDown4->Value+16384;//5
			 
			 positions[5]=(int)numericUpDown5->Value+16384;
			 positions[6]=(int)numericUpDown6->Value+16384;
			 positions[7]=16384;
			 positions[8]= (int)numericUpDown7->Value+16384;
			 			 
			 positions[9]=16384;
			 
			 positions[10]=(int)numericUpDown8->Value+16384;
			 positions[11]=(int)numericUpDown9->Value+16384;
			 positions[12]=(int)numericUpDown10->Value+16384;
			 positions[13]=(int)numericUpDown11->Value+16384;
			 positions[14]=(int)numericUpDown12->Value+16384;

			 positions[15]=16384;

			 positions[16]=(int)numericUpDown13->Value+16384;
			 positions[17]=(int)numericUpDown14->Value+16384;
			 positions[18]=(int)numericUpDown15->Value+16384;
			 positions[19]=(int)numericUpDown16->Value+16384;
			 positions[20]=(int)numericUpDown17->Value+16384;
			 
			 positions[21]=16384;
			 positions[22]=16384;
				
			 int ret=Manoi->SetAllChannels(positions,254-(int)numericUpDown18->Value,3,(int)numericUpDown19->Value,(int)numericUpDown20->Value);
		 
			if(ret==1)
			{
				label22->Text="Command status: Success";
			}
			else
			{
				label22->Text="Command status: No ACK received";
			}
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 Manoi->GetAllChannels(NULL,NULL,7,(int)numericUpDown19->Value,(int)numericUpDown20->Value);
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {

			 Manoi->PlayMotion((int)numericUpDown19->Value);
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {

		int positions[24];

			 positions[0]=(int)numericUpDown1->Value+16384;//1
			 
			 positions[1]=(int)numericUpDown2->Value+16384;//2
			 positions[2]=(int)numericUpDown3->Value+16384;//3
			 positions[3]=16384;//4
			 positions[4]=(int)numericUpDown4->Value+16384;//5
			 
			 positions[5]=(int)numericUpDown5->Value+16384;
			 positions[6]=(int)numericUpDown6->Value+16384;
			 positions[7]=16384;
			 positions[8]= (int)numericUpDown7->Value+16384;
			 			 
			 positions[9]=16384;
			 
			 positions[10]=(int)numericUpDown8->Value+16384;
			 positions[11]=(int)numericUpDown9->Value+16384;
			 positions[12]=(int)numericUpDown10->Value+16384;
			 positions[13]=(int)numericUpDown11->Value+16384;
			 positions[14]=(int)numericUpDown12->Value+16384;

			 positions[15]=16384;

			 positions[16]=(int)numericUpDown13->Value+16384;
			 positions[17]=(int)numericUpDown14->Value+16384;
			 positions[18]=(int)numericUpDown15->Value+16384;
			 positions[19]=(int)numericUpDown16->Value+16384;
			 positions[20]=(int)numericUpDown17->Value+16384;
			 
			 positions[21]=16384;
			 positions[22]=16384;
				
			 int ret=Manoi->SetAllHomePosition(positions,0);
		 
			if(ret==1)
			{
				label22->Text="Command status: Success";
			}
			else
			{
				label22->Text="Command status: No ACK received";
			}
		 }
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {

			 float power,ad1,ad2,ad3;

			 Double dpower,dad1,dad2,dad3;
			
			 //dpower.Equals=&power;
			 dpower=power;
			 dad1=ad1;
			 dad2=ad2;
			 dad3=ad3;

			
			 
				Manoi->GetAnalogInputs(&power,&ad1,&ad2,&ad2);
				String^ labeltext = gcnew String("");
				labeltext=labeltext->Format("Power: {0} V, AD1: {1} V, AD2: {2} V, AD3: {3} V ",power,ad1,ad2,ad3);
				label23->Text=labeltext;

			 

			

		 }
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
			 Manoi->Crouch();
		 }
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {

			 Manoi->GoToNaturalHumanPosture();
		 }
private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
			 Manoi->LeftStep();
		 }
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
			 int positions[24];
			 Manoi->LearningModeGetServosState(positions);

		 }
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {

			 Manoi->LearningModeInit();
		 }
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
			 Manoi->LearningModeEnd();
		 }
};
}

