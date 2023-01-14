#pragma once

namespace GraphicTicTac {

	using namespace System;
	using namespace System::Data;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::ComponentModel;
	using namespace System::Drawing;

	// MyForm1

	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
		}

	protected:

		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;

	protected:

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel4;

	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::TextBox^ textBox3;

	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button10;

	private: System::Windows::Forms::Label^ lblPlayerO;
	private: System::Windows::Forms::Label^ lblPlayerX;


	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->lblPlayerO = (gcnew System::Windows::Forms::Label());
			this->lblPlayerX = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			 
			// button1
			
			this->button1->BackColor = System::Drawing::Color::Chocolate;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(8, 109);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(108, 105);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			 
			// button2
			
			this->button2->BackColor = System::Drawing::Color::Yellow;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(116, 110);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(108, 105);
			this->button2->TabIndex = 1;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			 
			// button3
			 
			this->button3->BackColor = System::Drawing::Color::Chocolate;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Red;
			this->button3->Location = System::Drawing::Point(223, 110);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(108, 105);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			 
			// button4
			 
			this->button4->BackColor = System::Drawing::Color::Yellow;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(9, 215);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(108, 105);
			this->button4->TabIndex = 3;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			 
			// button5
			 
			this->button5->BackColor = System::Drawing::Color::Chocolate;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::Red;
			this->button5->Location = System::Drawing::Point(116, 215);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(108, 105);
			this->button5->TabIndex = 4;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm1::button5_Click);
			 
			// button6
			 
			this->button6->BackColor = System::Drawing::Color::Yellow;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(224, 215);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(108, 105);
			this->button6->TabIndex = 5;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm1::button6_Click);
			 
			// button7
			 
			this->button7->BackColor = System::Drawing::Color::Chocolate;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::Red;
			this->button7->Location = System::Drawing::Point(9, 320);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(108, 105);
			this->button7->TabIndex = 6;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm1::button7_Click);
			
			// button8
			 
			this->button8->BackColor = System::Drawing::Color::Yellow;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(116, 319);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(108, 105);
			this->button8->TabIndex = 7;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm1::button8_Click);
			 
			// button9
			 
			this->button9->BackColor = System::Drawing::Color::Chocolate;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::Red;
			this->button9->Location = System::Drawing::Point(223, 318);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(108, 105);
			this->button9->TabIndex = 8;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm1::button9_Click);
			 
			// panel1
			
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->MaximumSize = System::Drawing::Size(732, 103);
			this->panel1->MinimumSize = System::Drawing::Size(732, 103);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(732, 103);
			this->panel1->TabIndex = 9;
			 
			// label1
			
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Black;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(93, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(536, 65);
			this->label1->TabIndex = 0;
			this->label1->Text = L"         TIC TAC TOE         ";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm1::label1_Click);
			 
			// panel2
			
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Controls->Add(this->button11);
			this->panel2->Location = System::Drawing::Point(336, 114);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(385, 211);
			this->panel2->TabIndex = 10;
			 
			// panel4
			
			this->panel4->BackColor = System::Drawing::Color::Gray;
			this->panel4->Controls->Add(this->lblPlayerO);
			this->panel4->Controls->Add(this->lblPlayerX);
			this->panel4->Controls->Add(this->textBox2);
			this->panel4->Controls->Add(this->textBox3);
			this->panel4->Location = System::Drawing::Point(21, 20);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(348, 129);
			this->panel4->TabIndex = 3;
			this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm1::panel4_Paint);
			
			// label Player O
			 
			this->lblPlayerO->AutoSize = true;
			this->lblPlayerO->BackColor = System::Drawing::Color::Gainsboro;
			this->lblPlayerO->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPlayerO->Location = System::Drawing::Point(248, 61);
			this->lblPlayerO->Name = L"lblPlayerO";
			this->lblPlayerO->Size = System::Drawing::Size(36, 39);
			this->lblPlayerO->TabIndex = 18;
			this->lblPlayerO->Text = L"0";
			 
			// label Player X
			
			this->lblPlayerX->AutoSize = true;
			this->lblPlayerX->BackColor = System::Drawing::Color::Gainsboro;
			this->lblPlayerX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPlayerX->Location = System::Drawing::Point(62, 66);
			this->lblPlayerX->Name = L"lblPlayerX";
			this->lblPlayerX->Size = System::Drawing::Size(35, 37);
			this->lblPlayerX->TabIndex = 17;
			this->lblPlayerX->Text = L"0";
			 
			// textBox 2
			
			this->textBox2->BackColor = System::Drawing::Color::Khaki;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(190, 6);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(151, 44);
			this->textBox2->TabIndex = 16;
			this->textBox2->Text = L"Player O";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox2_TextChanged);
			 
			// textBox3
			
			this->textBox3->BackColor = System::Drawing::Color::Khaki;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(8, 7);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(153, 44);
			this->textBox3->TabIndex = 13;
			this->textBox3->Text = L"Player X";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			 
			// button11
			 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(42, 156);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(297, 45);
			this->button11->TabIndex = 1;
			this->button11->Text = L"New Game";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm1::button11_Click);
			 
			// panel3
			
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel3->Controls->Add(this->button10);
			this->panel3->Location = System::Drawing::Point(336, 336);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(385, 100);
			this->panel3->TabIndex = 0;
			 
			// button10
			
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::Red;
			this->button10->Location = System::Drawing::Point(25, 11);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(340, 81);
			this->button10->TabIndex = 0;
			this->button10->Text = L"Reset";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm1::button10_Click);
			 
			// MyForm1
			 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gray;
			this->ClientSize = System::Drawing::Size(733, 446);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);


			this->MaximumSize = System::Drawing::Size(749, 485);

			this->Name = L"MyForm1";
			this->Text = L"Tic Tac Toe";

			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);

			this->panel1->ResumeLayout(false);
			
			this->panel1->PerformLayout();
			
			this->panel2->ResumeLayout(false);
			
			this->panel4->ResumeLayout(false);
			
			this->panel4->PerformLayout();
			
			this->panel3->ResumeLayout(false);

			this->ResumeLayout(false);

		}
		bool gamecheck;
		int INCR;
#pragma endregion

		//Button Refresh
	void renew()
	{
		button1->Enabled = false;
		button2->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
		button6->Enabled = false;
		button7->Enabled = false;
		button8->Enabled = false;
		button9->Enabled = false;
	}
	// winning score check for players
	void scorecount()
	{
		if (button1->Text == "X" && button2->Text == "X" && button3->Text == "X")
		{
			button1->BackColor = System::Drawing::Color::PowderBlue;
			button2->BackColor = System::Drawing::Color::PowderBlue;
			button3->BackColor = System::Drawing::Color::PowderBlue;
			MessageBox::Show("The Winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
			INCR = int::Parse(lblPlayerX->Text);
			lblPlayerX->Text = Convert::ToString(INCR + 1);
			renew();
		}
		if (button1->Text == "X" && button4->Text == "X" && button7->Text == "X")
		{
			button1->BackColor = System::Drawing::Color::PowderBlue;
			button4->BackColor = System::Drawing::Color::PowderBlue;
			button7->BackColor = System::Drawing::Color::PowderBlue;
			MessageBox::Show("The Winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
			INCR = int::Parse(lblPlayerX->Text);
			lblPlayerX->Text = Convert::ToString(INCR + 1);
			renew();
		}
		if (button1->Text == "X" && button5->Text == "X" && button9->Text == "X")
		{
			button1->BackColor = System::Drawing::Color::PowderBlue;
			button5->BackColor = System::Drawing::Color::PowderBlue;
			button9->BackColor = System::Drawing::Color::PowderBlue;
			MessageBox::Show("The Winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
			INCR = int::Parse(lblPlayerX->Text);
			lblPlayerX->Text = Convert::ToString(INCR + 1);
			renew();
		}
		if (button4->Text == "X" && button5->Text == "X" && button6->Text == "X")
		{
			button4->BackColor = System::Drawing::Color::PowderBlue;
			button5->BackColor = System::Drawing::Color::PowderBlue;
			button6->BackColor = System::Drawing::Color::PowderBlue;
			MessageBox::Show("The Winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
			INCR = int::Parse(lblPlayerX->Text);
			lblPlayerX->Text = Convert::ToString(INCR + 1);
			renew();
		}
		if (button7->Text == "X" && button8->Text == "X" && button9->Text == "X")
		{
			button7->BackColor = System::Drawing::Color::PowderBlue;
			button8->BackColor = System::Drawing::Color::PowderBlue;
			button9->BackColor = System::Drawing::Color::PowderBlue;
			MessageBox::Show("The Winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
			INCR = int::Parse(lblPlayerX->Text);
			lblPlayerX->Text = Convert::ToString(INCR + 1);
			renew();
		}
		if (button3->Text == "X" && button5->Text == "X" && button7->Text == "X")
		{
			button3->BackColor = System::Drawing::Color::PowderBlue;
			button5->BackColor = System::Drawing::Color::PowderBlue;
			button7->BackColor = System::Drawing::Color::PowderBlue;
			MessageBox::Show("The Winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
			INCR = int::Parse(lblPlayerX->Text);
			lblPlayerX->Text = Convert::ToString(INCR + 1);
			renew();
		}
		if (button2->Text == "X" && button5->Text == "X" && button8->Text == "X")
		{
			button2->BackColor = System::Drawing::Color::PowderBlue;
			button5->BackColor = System::Drawing::Color::PowderBlue;
			button8->BackColor = System::Drawing::Color::PowderBlue;
			MessageBox::Show("The Winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
			INCR = int::Parse(lblPlayerX->Text);
			lblPlayerX->Text = Convert::ToString(INCR + 1);
			renew();
		}

		if (button3->Text == "X" && button6->Text == "X" && button9->Text == "X")
		{
			button3->BackColor = System::Drawing::Color::PowderBlue;
			button6->BackColor = System::Drawing::Color::PowderBlue;
			button7->BackColor = System::Drawing::Color::PowderBlue;
			MessageBox::Show("The Winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
			INCR = int::Parse(lblPlayerX->Text);
			lblPlayerX->Text = Convert::ToString(INCR + 1);
			renew();
		}
		// FOR PLAYER O
		if (button1->Text == "O" && button2->Text == "O" && button3->Text == "O")
		{
			button1->BackColor = System::Drawing::Color::PowderBlue;
				button2->BackColor = System::Drawing::Color::PowderBlue;
				button3->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The Winner is Player O ", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				INCR = int::Parse(lblPlayerO->Text);
				lblPlayerO->Text = Convert::ToString(INCR + 1);
				renew();
		}
		if (button4->Text == "O" && button5->Text == "O" && button6->Text == "O")
		{
			button4->BackColor = System::Drawing::Color::PowderBlue;
			button5->BackColor = System::Drawing::Color::PowderBlue;
			button6->BackColor = System::Drawing::Color::PowderBlue;
			MessageBox::Show("The Winner is Player O ", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
			INCR = int::Parse(lblPlayerO->Text);
			lblPlayerO->Text = Convert::ToString(INCR + 1);
			renew();
		}
		if (button7->Text == "O" && button8->Text == "O" && button9->Text == "O")
		{
			button7->BackColor = System::Drawing::Color::PowderBlue;
			button8->BackColor = System::Drawing::Color::PowderBlue;
			button9->BackColor = System::Drawing::Color::PowderBlue;
			MessageBox::Show("The Winner is Player O ", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
			INCR = int::Parse(lblPlayerO->Text);
			lblPlayerO->Text = Convert::ToString(INCR + 1);
			renew();
		}
		if (button1->Text == "O" && button5->Text == "O" && button9->Text == "O")
		{
			button1->BackColor = System::Drawing::Color::PowderBlue;
			button5->BackColor = System::Drawing::Color::PowderBlue;
			button9->BackColor = System::Drawing::Color::PowderBlue;
			MessageBox::Show("The Winner is Player O ", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
			INCR = int::Parse(lblPlayerO->Text);
			lblPlayerO->Text = Convert::ToString(INCR + 1);
			renew();
		}
		if (button3->Text == "O" && button5->Text == "O" && button7->Text == "O")
		{
			button3->BackColor = System::Drawing::Color::PowderBlue;
			button5->BackColor = System::Drawing::Color::PowderBlue;
			button7->BackColor = System::Drawing::Color::PowderBlue;
			MessageBox::Show("The Winner is Player O ", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
			INCR = int::Parse(lblPlayerO->Text);
			lblPlayerO->Text = Convert::ToString(INCR + 1);
			renew();
		}
		if (button1->Text == "O" && button4->Text == "O" && button7->Text == "O")
		{
			button1->BackColor = System::Drawing::Color::PowderBlue;
			button4->BackColor = System::Drawing::Color::PowderBlue;
			button7->BackColor = System::Drawing::Color::PowderBlue;
			MessageBox::Show("The Winner is Player O ", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
			INCR = int::Parse(lblPlayerO->Text);
			lblPlayerO->Text = Convert::ToString(INCR + 1);
			renew();
		}
		if (button2->Text == "O" && button5->Text == "O" && button8->Text == "O")
		{
			button2->BackColor = System::Drawing::Color::PowderBlue;
			button5->BackColor = System::Drawing::Color::PowderBlue;
			button8->BackColor = System::Drawing::Color::PowderBlue;
			MessageBox::Show("The Winner is Player O ", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
			INCR = int::Parse(lblPlayerO->Text);
			lblPlayerO->Text = Convert::ToString(INCR + 1);
			renew();
		}
		if (button3->Text == "O" && button6->Text == "O" && button9->Text == "O")
		{
			button3->BackColor = System::Drawing::Color::PowderBlue;
			button6->BackColor = System::Drawing::Color::PowderBlue;
			button9->BackColor = System::Drawing::Color::PowderBlue;
			MessageBox::Show("The Winner is Player O ", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
			INCR = int::Parse(lblPlayerO->Text);
			lblPlayerO->Text = Convert::ToString(INCR + 1);
			renew();
		}
		else 
		{
			// check for Draw
			if ((button1->Text == "O" || button1->Text== "X") && (button2->Text == "O" || button2->Text == "X") && (button3->Text == "O" || button3->Text == "X") && (button4->Text == "O" || button4->Text == "X") && (button5->Text == "O" || button5->Text == "X") && (button6->Text == "O" || button6->Text == "X") && (button7->Text == "O" || button7->Text == "X") && (button8->Text == "O" || button8->Text == "X") && (button9->Text == "O" || button9->Text == "X"))
			{
				MessageBox::Show("GAME DRAW ", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				renew();

			}
		}
	}






	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {


		button1->Enabled = true;
		
		button2->Enabled = true;
		
		button3->Enabled = true;
		
		button4->Enabled = true;
		
		button5->Enabled = true;
		
		button6->Enabled = true;
		
		button7->Enabled = true;
		
		button8->Enabled = true;
		
		button9->Enabled = true;
		
		button1->Text = "";
		
		button2->Text = "";
		
		button3->Text = "";
		
		button4->Text = "";
		
		button5->Text = "";
		
		button6->Text = "";
		
		button7->Text = "";
		
		button8->Text = "";
		
		button9->Text = "";

		// PLAYER LABELS

		lblPlayerO->Text = "0";
		lblPlayerX->Text = "0";

		button1->BackColor = System::Drawing::Color::WhiteSmoke;
		button2->BackColor = System::Drawing::Color::WhiteSmoke;
		button3->BackColor = System::Drawing::Color::WhiteSmoke;
		button4->BackColor = System::Drawing::Color::WhiteSmoke;
		button5->BackColor = System::Drawing::Color::WhiteSmoke;
		button6->BackColor = System::Drawing::Color::WhiteSmoke;
		button7->BackColor = System::Drawing::Color::WhiteSmoke;
		button8->BackColor = System::Drawing::Color::WhiteSmoke;
		button9->BackColor = System::Drawing::Color::WhiteSmoke;


	}
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {

	if (gamecheck == false)
	{
		button7->Text = "X";
		gamecheck = true;
	}
	else
	{
		button7->Text = "O";
		gamecheck = false;
	}
	scorecount();
	button7->Enabled = false;

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	if (gamecheck == false)
	{
		button1->Text = "X";
		gamecheck = true;
	}
	else
	{
		button1->Text = "O";
		gamecheck = false;
	}
	scorecount();
	button1->Enabled = false;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (gamecheck == false)
	{
		button2->Text = "X";
		gamecheck = true;
	}
	else
	{
		button2->Text = "O";
		gamecheck = false;
	}
	scorecount();
	button2->Enabled = false;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	if (gamecheck == false)
	{
		button3->Text = "X";
		gamecheck = true;
	}
	else
	{
		button3->Text = "O";
		gamecheck = false;
	}
	scorecount();
	button3->Enabled = false;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	if (gamecheck == false)
	{
		button4->Text = "X";
		gamecheck = true;
	}
	else
	{
		button4->Text = "O";
		gamecheck = false;
	}
	scorecount();
	button4->Enabled = false;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

	if (gamecheck == false)
	{
		button5->Text = "X";
		gamecheck = true;
	}
	else
	{
		button5->Text = "O";
		gamecheck = false;
	}
	scorecount();
	button5->Enabled = false;
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {

	if (gamecheck == false)
	{
		button6->Text = "X";
		gamecheck = true;
	}
	else
	{
		button6->Text = "O";
		gamecheck = false;
	}
	scorecount();
	button6->Enabled = false;
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {

	if (gamecheck == false)
	{
		button8->Text = "X";
		gamecheck = true;
	}
	else
	{
		button8->Text = "O";
		gamecheck = false;
	}
	scorecount();
	button8->Enabled = false;
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {

	if (gamecheck == false)
	{
		button9->Text = "X";
		gamecheck = true;
	}
	else
	{
		button9->Text = "O";
		gamecheck = false;
	}
	scorecount();
	button9->Enabled = false;
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {

	button1->Enabled = true;
	
	button2->Enabled = true;
	
	button3->Enabled = true;
	
	button4->Enabled = true;
	
	button5->Enabled = true;
	
	button6->Enabled = true;
	
	button7->Enabled = true;
	
	button8->Enabled = true;
	
	button9->Enabled = true;


	button1->Text = "";
	button2->Text = "";
	button3->Text = "";
	button4->Text = "";
	button5->Text = "";
	button6->Text = "";
	button7->Text = "";
	button8->Text = "";
	button9->Text = "";

	button11-> Enabled = true;

	button1->BackColor = System::Drawing::Color::WhiteSmoke;

	button2->BackColor = System::Drawing::Color::WhiteSmoke;
	
	button3->BackColor = System::Drawing::Color::WhiteSmoke;
	
	button4->BackColor = System::Drawing::Color::WhiteSmoke;
	
	button5->BackColor = System::Drawing::Color::WhiteSmoke;
	
	button6->BackColor = System::Drawing::Color::WhiteSmoke;
	
	button7->BackColor = System::Drawing::Color::WhiteSmoke;
	
	button8->BackColor = System::Drawing::Color::WhiteSmoke;
	
	button9->BackColor = System::Drawing::Color::WhiteSmoke;
}

};

}
