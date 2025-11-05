#pragma once
#include "Autor.h"
#include "Gra.h"
#include "Instrukcja.h"

namespace Arkanoid {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o Powitanie
	/// </summary>
	public ref class Powitanie : public System::Windows::Forms::Form
	{
	public:
		Powitanie(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~Powitanie()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;



	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::PaleGreen;
			this->button1->Cursor = System::Windows::Forms::Cursors::Help;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Miriam Mono CLM", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(94, 259);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(120, 70);
			this->button1->TabIndex = 0;
			this->button1->Text = L"O autorze";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Powitanie::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Gold;
			this->button2->Cursor = System::Windows::Forms::Cursors::Cross;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Miriam Mono CLM", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->button2->Location = System::Drawing::Point(474, 259);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(120, 70);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Graj";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Powitanie::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button3->Font = (gcnew System::Drawing::Font(L"Goudy Stout", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(94, 24);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(500, 90);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Arkanoid";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::DarkKhaki;
			this->button4->Cursor = System::Windows::Forms::Cursors::Help;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Miriam Mono CLM", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->button4->Location = System::Drawing::Point(285, 259);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(120, 70);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Instrukcja";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Powitanie::button4_Click);
			// 
			// Powitanie
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(698, 452);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Powitanie";
			this->Text = L"Arkanoid";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		Gra^ zagram = gcnew Gra;
		zagram->Show();
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Autor^ autor = gcnew Autor;
		autor->ShowDialog();
	}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	Instrukcja^ instrukcja = gcnew Instrukcja;
	instrukcja->ShowDialog();
}
};
}
