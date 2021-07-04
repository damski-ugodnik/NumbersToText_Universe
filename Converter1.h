#pragma once
#include <msclr/marshal.h>
#include <math.h>
namespace DtoS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Converter1
	/// </summary>
	public ref class Converter1 : public System::Windows::Forms::Form
	{
	public:
		Converter1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Converter1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Converter1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button1->Cursor = System::Windows::Forms::Cursors::Default;
			this->button1->Font = (gcnew System::Drawing::Font(L"Nasalization", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(42, 143);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(118, 40);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Convert";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Converter1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(42, 101);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(154, 29);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Converter1::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FloralWhite;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(274, 109);
			this->label1->MinimumSize = System::Drawing::Size(120, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(120, 21);
			this->label1->TabIndex = 3;
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(115, 109);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 4;
			this->label2->Click += gcnew System::EventHandler(this, &Converter1::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::DarkSlateGray;
			this->label3->Font = (gcnew System::Drawing::Font(L"Nasalization", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(37, 67);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(176, 17);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Insert number";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::DarkSlateGray;
			this->label4->Font = (gcnew System::Drawing::Font(L"Nasalization", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label4->Location = System::Drawing::Point(269, 67);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(152, 17);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Text format";
			// 
			// Converter1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gray;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(984, 241);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Converter1";
			this->Text = L"Converter1";
			this->TransparencyKey = System::Drawing::Color::Red;
			this->Load += gcnew System::EventHandler(this, &Converter1::Converter1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
	   char* ToCnstChr(String^ str) {
		   msclr::interop::marshal_context oMarshalContext;
		   char* ready = _strdup(oMarshalContext.marshal_as<const char*>(str));
		   return ready;
	   }
	   String^ conversion(int natur) {
		   array < String^>^ ones = gcnew
			   array<String^ >(10)
		   {
			   "", "one ", "two ", "three ", "four ", "five ", "six ", "seven ", "eight ", "nine "
		   };

		   int a, b, c, d, e, f, g, h, i, j;


		   String^ result = "";
		   if (natur < 0) {
			   result += "minus ";
			   natur = fabs(natur);
		   }

		   a = natur % 10;
		   b = (natur % 100) / 10;
		   c = (natur % 1000) / 100;
		   d = (natur % 10000) / 1000;
		   e = (natur % 100000) / 10000;
		   f = (natur % 1000000) / 100000;
		   g = (natur % 10000000) / 1000000;
		   h = (natur % 100000000) / 10000000;
		   i = (natur % 1000000000) / 100000000;
		   j = (natur % 10000000000) / 1000000000;

		   if (j != 0)
			   result += ones[j] + "billion ";

		   if (!(g == 0 && h == 0 && i == 0))
			   result += tripletConv(g, h, i) + "million ";

		   if (!(d == 0 && e == 0 && f == 0))
			   result += tripletConv(d, e, f) + "thousand ";

		   if (!(a == 0 && b == 0 && c == 0))
			   result += tripletConv(a, b, c);


		   return result;
	   }

	   String^ tripletConv(int a, int b, int c) {
		   array < String^>^ ones = gcnew
			   array<String^ >(10)
		   {
			   "", "one ", "two ", "three ", "four ", "five ", "six ", "seven ", "eight ", "nine "
		   };
		   array < String^>^ teen = gcnew
			   array<String^ >(10)
		   {
			   "", "eleven ", "twelve ", "thirteen ", "fourteen ", "fifteen ", "sixteen ", "seventeen ", "eighteen ", "nineteen "
		   };
		   array < String^>^ tens = gcnew
			   array<String^ >(10)
		   {
			   "", "ten", "twenty ", "thirty ", "fourty ", "fifty ", "sixty ", "seventy ", "eighty ", "ninety "
		   };
		   array < String^>^ hundreds = gcnew
			   array<String^ >(10)
		   {
			   "", "one hundred ", "two hundred ", "three hundred ", "four hundred ", "five hundred ", "six hundred ", "seven hundred ", "eight hundred ", "nine hundred "
		   };

		   String^ first, ^ second, ^ third;
		   if (a != 0 && b != 1)
			   first = ones[a];
		   else if (a == 0 && b == 0)
			   first = "";

		   if (b == 0)
			   second = "";
		   else if (b == 1 && a != 0)
			   second = teen[a];
		   else
			   second = tens[b];

		   if (c != 0)
			   third = hundreds[c];
		   return third + second + first;
	   }


private: System::Void Converter1_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}

