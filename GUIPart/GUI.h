#pragma once
#include "Assignment3.h"
#include <iostream>
#include <string>
int numA;
int denA;
int denB;
int numB;
int listBoxIndex = 0;
using namespace nspace;


namespace GUIPart {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for GUI
	/// </summary>
	public ref class GUI : public System::Windows::Forms::Form
	{
	public:
		GUI(void)
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
		~GUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;


	private: System::Windows::Forms::Button^  btnClose;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  btnEquals;
	private: System::Windows::Forms::Label^  label9;



	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(GUI::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->btnEquals = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(351, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 25);
			this->label1->TabIndex = 19;
			this->label1->Text = L"Answer:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(121, 27);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(18, 13);
			this->label2->TabIndex = 18;
			this->label2->Text = L" / ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(121, 91);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(18, 13);
			this->label3->TabIndex = 17;
			this->label3->Text = L" / ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 11);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(94, 13);
			this->label4->TabIndex = 16;
			this->label4->Text = L"First Input Fraction";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 72);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(112, 13);
			this->label5->TabIndex = 33;
			this->label5->Text = L"Second Input Fraction";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(303, 334);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(170, 25);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Error Messages:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(15, 24);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &GUI::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(145, 24);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 1;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &GUI::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(15, 88);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 2;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &GUI::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(145, 88);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 3;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &GUI::textBox4_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(362, 215);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(109, 23);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Sum:";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &GUI::button1_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(374, 72);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(99, 13);
			this->label7->TabIndex = 32;
			this->label7->Text = L"Awaiting an answer";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(305, 370);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(50, 13);
			this->label8->TabIndex = 31;
			this->label8->Text = L"No errors";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(362, 245);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(109, 23);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Subtraction:";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &GUI::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(362, 273);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(109, 23);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Multiplication:";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &GUI::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(362, 302);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(109, 23);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Division:";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &GUI::button4_Click);
			// 
			// btnClose
			// 
			this->btnClose->Location = System::Drawing::Point(15, 393);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(75, 23);
			this->btnClose->TabIndex = 30;
			this->btnClose->Text = L"Close";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &GUI::btnClose_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Sum:", L"Subtraction:", L"Multiplication:", L"Division:" });
			this->comboBox1->Location = System::Drawing::Point(15, 139);
			this->comboBox1->Margin = System::Windows::Forms::Padding(2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(164, 21);
			this->comboBox1->TabIndex = 4;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &GUI::comboBox1_SelectedIndexChanged);
			// 
			// btnEquals
			// 
			this->btnEquals->Location = System::Drawing::Point(15, 179);
			this->btnEquals->Margin = System::Windows::Forms::Padding(2);
			this->btnEquals->Name = L"btnEquals";
			this->btnEquals->Size = System::Drawing::Size(100, 19);
			this->btnEquals->TabIndex = 5;
			this->btnEquals->Text = L"Equals:";
			this->btnEquals->UseVisualStyleBackColor = true;
			this->btnEquals->Click += gcnew System::EventHandler(this, &GUI::btnEquals_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(96, 398);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(160, 13);
			this->label9->TabIndex = 34;
			this->label9->Text = L"Ryan Kinsella, 15rklk, 10194574";
			// 
			// GUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(485, 428);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->btnEquals);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->btnClose);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->KeyPreview = true;
			this->Name = L"GUI";
			this->Text = L"GUI";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &GUI::GUI_KeyDown);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

//for button1, summation
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text == L"" || textBox2->Text == L"" || textBox3->Text == L"" || textBox4->Text == L"") {
		label8->Text = L"Must have values\nin all boxes";
	}
	else if (denA != 0 && denB != 0) {
		//compute
		Fraction first = Fraction(numA, denA);
		Fraction second = Fraction(numB, denB);
		first = first + second;
		//display answer
		System::String^ str = first.numerator().ToString() + L" / " + first.denominator().ToString(); // int to string
		label7->Text = str;
	}
	else if (denA == 0 || denB == 0) {
		label8->Text = L"0 cannot be the\ndenomenator";
	}
	else {
		label8->Text = L"Cannot perform \nsummation";
	}
}
//button2, subtraction
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text == L"" || textBox2->Text == L"" || textBox3->Text == L"" || textBox4->Text == L"") {
		label8->Text = L"Must have values\nin all boxes";
	}
	else if (denA != 0 && denB != 0) {
		//compute
		Fraction first = Fraction(numA, denA);
		Fraction second = Fraction(numB, denB);
		first = first - second;
		//display answer
		System::String^ str = first.numerator().ToString() + L" / " + first.denominator().ToString(); // int to string
		label7->Text = str;
	}
	else if (denA == 0 || denB == 0) {
		label8->Text = L"0 cannot be the\ndenomenator";
	}
	else {
		label8->Text = L"Cannot perform \nsubtraction";
	}

}
//button 3, multiplication
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text == L"" || textBox2->Text == L"" || textBox3->Text == L"" || textBox4->Text == L"") {
		label8->Text = L"Must have values\nin all boxes";
	}
	else if (denA != 0 && denB != 0) {
		//compute
		Fraction first = Fraction(numA, denA);
		Fraction second = Fraction(numB, denB);
		first = first * second;
		//display answer
		System::String^ str = first.numerator().ToString() + L" / " + first.denominator().ToString(); // int to string
		label7->Text = str;
	}
	else if (denA == 0 || denB == 0) {
		label8->Text = L"0 cannot be the\ndenomenator";
	}
	else {
		label8->Text = L"Cannot perform \nmultiplication";
	}
}
//button 4, division
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text == L"" || textBox2->Text == L"" || textBox3->Text == L"" || textBox4->Text == L"") {
		label8->Text = L"Must have values\nin all boxes";
	}
	else if (denA != 0 && denB != 0) {
		//compute
		Fraction first = Fraction(numA, denA);
		Fraction second = Fraction(numB, denB);
		first = first / second;
		//display answer
		System::String^ str = first.numerator().ToString() + L" / " + first.denominator().ToString(); // int to string
		label7->Text = str;
	}
	else if (denA == 0 || denB == 0) {
		label8->Text = L"0 cannot be the\ndenomenator";
	}
	else {
		label8->Text = L"Cannot perform \ndivision";
	}
}

//get text from textbox1
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	String^ s = textBox1->Text;
	try {
		//int a = int::Parse(s); // string to int
		if (s == L"-") {
			//do nothing, need to allow "-" signs to be input
		}
		else {
			__int32 i = System::Int32::Parse(s);
			numA = i;
		}
	}
	catch (...) {
		label8->Text = L"Cannot convert \nnumber to int";
		textBox1->Text = L"";
		numA = NULL;
	}
}
//get text from textbox2
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	String^ s = textBox2->Text;
	try {
		//int a = int::Parse(s); // string to int
		if (s == L"-") {
			//do nothing, need to allow "-" signs to be input
		}
		else {
			__int32 i = System::Int32::Parse(s);
			denA = i;
		}
	}
	catch (...) {
		label8->Text = L"Cannot convert \nnumber to int";
		textBox2->Text = L"";
		denA = NULL;
	}
}
//get text from textbox3
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	String^ s = textBox3->Text;
	try {
		if (s == L"-") {
			//do nothing, need to allow "-" signs to be input
		}
		else {
			//int a = int::Parse(s); // string to int
			__int32 i = System::Int32::Parse(s);
			numB = i;
		}
	}
	catch (...) {
		label8->Text = L"Cannot convert \nnumber to int";
		textBox3->Text = L"";
		numB = NULL;
	}
}
//get text from textbox4
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	String^ s = textBox4->Text;
	try {
		if (s == L"-") {
			//do nothing, need to allow "-" signs to be input
		}
		else {
			//int a = int::Parse(s); // string to int
			__int32 i = System::Int32::Parse(s);
			denB = i;
			//System::String^ str = denB.ToString(); // int to string
		}
	}
	catch (...) {
		label8->Text = L"Cannot convert \nnumber to int";
		textBox4->Text = L"";
		denB = 0;
	}
}

//listBox1
private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	//listBox1->Items->h
}
//close button
private: System::Void btnClose_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}

//Using events to trigger hotkeys -> do something
private: System::Void GUI_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	//To exit, press alt-c
	if (e->Alt && e->KeyCode == Keys::C) {
		btnClose_Click(sender, e);
	}
	//To invoke the equals button, press enter
	else if (e->KeyCode == Keys::Enter) {
		btnEquals_Click(sender, e);
	}
} 	 
//Combo box with changed indices, use the equals button to compute a sum, mult, etc.
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox1->SelectedItem->ToString() == L"Sum:")
		listBoxIndex = 0;
	else if(comboBox1->SelectedItem->ToString() == L"Subtraction:")
		listBoxIndex = 1;
	else if (comboBox1->SelectedItem->ToString() == L"Multiplication:")
		listBoxIndex = 2;
	else if (comboBox1->SelectedItem->ToString() == L"Division:")
		listBoxIndex = 3;

	/*if(comboBox1->TabIndexChanged());
	comboBox1->Tab*/
	
	
}

//Equals button that references
private: System::Void btnEquals_Click(System::Object^  sender, System::EventArgs^  e) {
	//Addition
	if (listBoxIndex == 0) {
		if (textBox1->Text == L"" || textBox2->Text == L"" || textBox3->Text == L"" || textBox4->Text == L"") {
			label8->Text = L"Must have values\nin all boxes";
		}
		else if (denA != 0 && denB != 0) {
			//compute
			Fraction first = Fraction(numA, denA);
			Fraction second = Fraction(numB, denB);
			first = first + second;
			//display answer
			System::String^ str = first.numerator().ToString() + L" / " + first.denominator().ToString(); // int to string
			label7->Text = str;
		}
		else if (denA == 0 || denB == 0) {
			label8->Text = L"0 cannot be the\ndenomenator";
		}
		else {
			label8->Text = L"Cannot perform \nsummation";
		}
	}
	//Subtraction
	else if (listBoxIndex == 1) {
		if (textBox1->Text == L"" || textBox2->Text == L"" || textBox3->Text == L"" || textBox4->Text == L"") {
			label8->Text = L"Must have values\nin all boxes";
		}
		else if (denA != 0 && denB != 0) {
			//compute
			Fraction first = Fraction(numA, denA);
			Fraction second = Fraction(numB, denB);
			first = first - second;
			//display answer
			System::String^ str = first.numerator().ToString() + L" / " + first.denominator().ToString(); // int to string
			label7->Text = str;
		}
		else if (denA == 0 || denB == 0) {
			label8->Text = L"0 cannot be the\ndenomenator";
		}
		else {
			label8->Text = L"Cannot perform \nsubtraction";
		}
	}
	//Multiplication
	else if (listBoxIndex == 2) {
		if (textBox1->Text == L"" || textBox2->Text == L"" || textBox3->Text == L"" || textBox4->Text == L"") {
			label8->Text = L"Must have values\nin all boxes";
		}
		else if (denA != 0 && denB != 0) {
			//compute
			Fraction first = Fraction(numA, denA);
			Fraction second = Fraction(numB, denB);
			first = first * second;
			//display answer
			System::String^ str = first.numerator().ToString() + L" / " + first.denominator().ToString(); // int to string
			label7->Text = str;
		}
		else if (denA == 0 || denB == 0) {
			label8->Text = L"0 cannot be the\ndenomenator";
		}
		else {
			label8->Text = L"Cannot perform \nmultiplication";
		}
	}
	//Division
	else if (listBoxIndex == 3) {
		if (textBox1->Text == L"" || textBox2->Text == L"" || textBox3->Text == L"" || textBox4->Text == L"") {
			label8->Text = L"Must have values\nin all boxes";
		}
		else if (denA != 0 && denB != 0) {
			//compute
			Fraction first = Fraction(numA, denA);
			Fraction second = Fraction(numB, denB);
			first = first / second;
			//display answer
			System::String^ str = first.numerator().ToString() + L" / " + first.denominator().ToString(); // int to string
			label7->Text = str;
		}
		else if (denA == 0 || denB == 0) {
			label8->Text = L"0 cannot be the\ndenomenator";
		}
		else {
			label8->Text = L"Cannot perform \ndivision";
		}
	}

}


};
}
