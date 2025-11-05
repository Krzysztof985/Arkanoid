#pragma once
#include <Windows.h>

namespace Arkanoid {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o Gra
	/// </summary>
	public ref class Gra : public System::Windows::Forms::Form
	{
	public:
		Gra(void)
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
		~Gra()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  kulka;
	protected:
	private: System::Windows::Forms::Timer^  zegar;
	private: System::Windows::Forms::PictureBox^  Platforma;

	private: System::Windows::Forms::Label^  lblPunkty;

	private: System::Windows::Forms::Label^  lblZycia;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  jeszczeRaz;
	private: System::Windows::Forms::Label^  koniec;
	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::PictureBox^  pictureBox11;
	private: System::Windows::Forms::PictureBox^  pictureBox12;
	private: System::Windows::Forms::PictureBox^  pictureBox13;
	private: System::Windows::Forms::PictureBox^  pictureBox14;
	private: System::Windows::Forms::PictureBox^  pictureBox15;
	private: System::Windows::Forms::PictureBox^  pictureBox16;
	private: System::Windows::Forms::PictureBox^  pictureBox17;
	private: System::Windows::Forms::PictureBox^  pictureBox18;
	private: System::Windows::Forms::PictureBox^  pictureBox19;
	private: System::Windows::Forms::PictureBox^  pictureBox20;
	private: System::Windows::Forms::PictureBox^  pictureBox21;
	private: System::Windows::Forms::PictureBox^  pictureBox22;
	private: System::Windows::Forms::PictureBox^  pictureBox23;
	private: System::Windows::Forms::PictureBox^  pictureBox24;
	private: System::Windows::Forms::PictureBox^  pictureBox25;
	private: System::Windows::Forms::PictureBox^  pictureBox26;
	private: System::Windows::Forms::PictureBox^  pictureBox27;
	private: System::Windows::Forms::PictureBox^  pictureBox28;
	private: System::Windows::Forms::PictureBox^  pictureBox29;
	private: System::Windows::Forms::PictureBox^  pictureBox30;
	private: System::Windows::Forms::PictureBox^  pictureBox31;
	private: System::Windows::Forms::PictureBox^  pictureBox32;
	private: System::Windows::Forms::PictureBox^  pictureBox33;
	private: System::Windows::Forms::PictureBox^  pictureBox34;
	private: System::Windows::Forms::PictureBox^  pictureBox35;
	private: System::Windows::Forms::PictureBox^  pictureBox36;
	private: System::Windows::Forms::PictureBox^  pictureBox37;
	private: System::Windows::Forms::PictureBox^  pictureBox38;
	private: System::Windows::Forms::PictureBox^  pictureBox39;
	private: System::Windows::Forms::PictureBox^  pictureBox40;
	private: System::Windows::Forms::PictureBox^  pictureBox41;
	private: System::Windows::Forms::PictureBox^  pictureBox42;
	private: System::Windows::Forms::PictureBox^  pictureBox43;
	private: System::Windows::Forms::PictureBox^  pictureBox44;
	private: System::Windows::Forms::PictureBox^  pictureBox45;
	private: System::Windows::Forms::PictureBox^  pictureBox46;
	private: System::Windows::Forms::PictureBox^  pictureBox47;
	private: System::Windows::Forms::PictureBox^  pictureBox48;
	private: System::Windows::Forms::Label^ Bonus;
	private: System::Windows::Forms::Label^ Przeszkoda;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;











	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Gra::typeid));
			this->kulka = (gcnew System::Windows::Forms::PictureBox());
			this->zegar = (gcnew System::Windows::Forms::Timer(this->components));
			this->Platforma = (gcnew System::Windows::Forms::PictureBox());
			this->lblPunkty = (gcnew System::Windows::Forms::Label());
			this->lblZycia = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->jeszczeRaz = (gcnew System::Windows::Forms::Label());
			this->koniec = (gcnew System::Windows::Forms::Label());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox26 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox29 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox32 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox33 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox34 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox35 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox36 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox37 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox38 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox39 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox40 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox41 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox42 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox43 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox44 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox45 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox46 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox47 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox48 = (gcnew System::Windows::Forms::PictureBox());
			this->Bonus = (gcnew System::Windows::Forms::Label());
			this->Przeszkoda = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kulka))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Platforma))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox45))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox46))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox47))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox48))->BeginInit();
			this->SuspendLayout();
			// 
			// kulka
			// 
			this->kulka->BackColor = System::Drawing::Color::Transparent;
			this->kulka->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"kulka.Image")));
			this->kulka->Location = System::Drawing::Point(498, 685);
			this->kulka->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->kulka->Name = L"kulka";
			this->kulka->Size = System::Drawing::Size(60, 38);
			this->kulka->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->kulka->TabIndex = 0;
			this->kulka->TabStop = false;
			// 
			// zegar
			// 
			this->zegar->Enabled = true;
			this->zegar->Interval = 20;
			this->zegar->Tick += gcnew System::EventHandler(this, &Gra::zegar_Tick);
			// 
			// Platforma
			// 
			this->Platforma->BackColor = System::Drawing::Color::Transparent;
			this->Platforma->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Platforma.Image")));
			this->Platforma->Location = System::Drawing::Point(414, 722);
			this->Platforma->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Platforma->Name = L"Platforma";
			this->Platforma->Size = System::Drawing::Size(200, 43);
			this->Platforma->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Platforma->TabIndex = 1;
			this->Platforma->TabStop = false;
			// 
			// lblPunkty
			// 
			this->lblPunkty->AutoSize = true;
			this->lblPunkty->Font = (gcnew System::Drawing::Font(L"MV Boli", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPunkty->Location = System::Drawing::Point(693, 20);
			this->lblPunkty->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblPunkty->Name = L"lblPunkty";
			this->lblPunkty->Size = System::Drawing::Size(77, 39);
			this->lblPunkty->TabIndex = 3;
			this->lblPunkty->Text = L"000";
			// 
			// lblZycia
			// 
			this->lblZycia->AutoSize = true;
			this->lblZycia->Font = (gcnew System::Drawing::Font(L"MV Boli", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblZycia->Location = System::Drawing::Point(918, 20);
			this->lblZycia->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblZycia->Name = L"lblZycia";
			this->lblZycia->Size = System::Drawing::Size(36, 39);
			this->lblZycia->TabIndex = 5;
			this->lblZycia->Text = L"2";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"MV Boli", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label1->Location = System::Drawing::Point(570, 20);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(112, 39);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Punkty";
			this->label1->Click += gcnew System::EventHandler(this, &Gra::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"MV Boli", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label2->Location = System::Drawing::Point(825, 20);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 39);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Próby";
			// 
			// jeszczeRaz
			// 
			this->jeszczeRaz->AutoSize = true;
			this->jeszczeRaz->BackColor = System::Drawing::Color::Bisque;
			this->jeszczeRaz->Font = (gcnew System::Drawing::Font(L"MV Boli", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->jeszczeRaz->Location = System::Drawing::Point(669, 538);
			this->jeszczeRaz->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->jeszczeRaz->Name = L"jeszczeRaz";
			this->jeszczeRaz->Size = System::Drawing::Size(171, 92);
			this->jeszczeRaz->TabIndex = 8;
			this->jeszczeRaz->Text = L"Zagraj \r\nponownie";
			this->jeszczeRaz->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->jeszczeRaz->Visible = false;
			this->jeszczeRaz->Click += gcnew System::EventHandler(this, &Gra::jeszczeRaz_Click_1);
			// 
			// koniec
			// 
			this->koniec->AutoSize = true;
			this->koniec->BackColor = System::Drawing::Color::Ivory;
			this->koniec->Font = (gcnew System::Drawing::Font(L"MV Boli", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->koniec->Location = System::Drawing::Point(208, 538);
			this->koniec->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->koniec->Name = L"koniec";
			this->koniec->Size = System::Drawing::Size(126, 92);
			this->koniec->TabIndex = 9;
			this->koniec->Text = L"Koniec\r\ngry";
			this->koniec->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->koniec->Visible = false;
			this->koniec->Click += gcnew System::EventHandler(this, &Gra::koniec_Click_1);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"n_blok_czerwony.png");
			this->imageList1->Images->SetKeyName(1, L"n_blok_metalowy.png");
			this->imageList1->Images->SetKeyName(2, L"n_blok_metalowy_ukruszony.png");
			this->imageList1->Images->SetKeyName(3, L"n_blok_niebieski.png");
			this->imageList1->Images->SetKeyName(4, L"n_blok_zielony.png");
			this->imageList1->Images->SetKeyName(5, L"n_blok_zloty.png");
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(52, 131);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(114, 55);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Tag = L"Hard";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(52, 382);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(114, 55);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 11;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Tag = L"normal";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(52, 331);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(114, 55);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 12;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Tag = L"normal";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(52, 280);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(114, 55);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 13;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Tag = L"normal";
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(52, 231);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(114, 55);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 14;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Tag = L"normal";
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(52, 182);
			this->pictureBox6->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(114, 55);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 15;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Tag = L"Hard";
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(176, 182);
			this->pictureBox7->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(114, 55);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 21;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Tag = L"Hard";
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(176, 231);
			this->pictureBox8->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(114, 55);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 20;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Tag = L"normal";
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(176, 280);
			this->pictureBox9->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(114, 55);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 19;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Tag = L"normal";
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(176, 331);
			this->pictureBox10->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(114, 55);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox10->TabIndex = 18;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Tag = L"normal";
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(176, 382);
			this->pictureBox11->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(114, 55);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox11->TabIndex = 17;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Tag = L"normal";
			// 
			// pictureBox12
			// 
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(176, 131);
			this->pictureBox12->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(114, 55);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox12->TabIndex = 16;
			this->pictureBox12->TabStop = false;
			this->pictureBox12->Tag = L"Hard";
			// 
			// pictureBox13
			// 
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(298, 182);
			this->pictureBox13->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(114, 55);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox13->TabIndex = 27;
			this->pictureBox13->TabStop = false;
			this->pictureBox13->Tag = L"Hard";
			// 
			// pictureBox14
			// 
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(298, 231);
			this->pictureBox14->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(114, 55);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox14->TabIndex = 26;
			this->pictureBox14->TabStop = false;
			this->pictureBox14->Tag = L"normal";
			// 
			// pictureBox15
			// 
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(298, 280);
			this->pictureBox15->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(114, 55);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox15->TabIndex = 25;
			this->pictureBox15->TabStop = false;
			this->pictureBox15->Tag = L"normal";
			// 
			// pictureBox16
			// 
			this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.Image")));
			this->pictureBox16->Location = System::Drawing::Point(298, 331);
			this->pictureBox16->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(114, 55);
			this->pictureBox16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox16->TabIndex = 24;
			this->pictureBox16->TabStop = false;
			this->pictureBox16->Tag = L"normal";
			// 
			// pictureBox17
			// 
			this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.Image")));
			this->pictureBox17->Location = System::Drawing::Point(298, 382);
			this->pictureBox17->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(114, 55);
			this->pictureBox17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox17->TabIndex = 23;
			this->pictureBox17->TabStop = false;
			this->pictureBox17->Tag = L"normal";
			// 
			// pictureBox18
			// 
			this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.Image")));
			this->pictureBox18->Location = System::Drawing::Point(298, 131);
			this->pictureBox18->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(114, 55);
			this->pictureBox18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox18->TabIndex = 22;
			this->pictureBox18->TabStop = false;
			this->pictureBox18->Tag = L"Hard";
			// 
			// pictureBox19
			// 
			this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox19.Image")));
			this->pictureBox19->Location = System::Drawing::Point(422, 182);
			this->pictureBox19->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(114, 55);
			this->pictureBox19->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox19->TabIndex = 33;
			this->pictureBox19->TabStop = false;
			this->pictureBox19->Tag = L"Hard";
			// 
			// pictureBox20
			// 
			this->pictureBox20->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox20.Image")));
			this->pictureBox20->Location = System::Drawing::Point(422, 231);
			this->pictureBox20->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(114, 55);
			this->pictureBox20->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox20->TabIndex = 32;
			this->pictureBox20->TabStop = false;
			this->pictureBox20->Tag = L"normal";
			// 
			// pictureBox21
			// 
			this->pictureBox21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox21.Image")));
			this->pictureBox21->Location = System::Drawing::Point(422, 280);
			this->pictureBox21->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(114, 55);
			this->pictureBox21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox21->TabIndex = 31;
			this->pictureBox21->TabStop = false;
			this->pictureBox21->Tag = L"normal";
			// 
			// pictureBox22
			// 
			this->pictureBox22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox22.Image")));
			this->pictureBox22->Location = System::Drawing::Point(422, 331);
			this->pictureBox22->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(114, 55);
			this->pictureBox22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox22->TabIndex = 30;
			this->pictureBox22->TabStop = false;
			this->pictureBox22->Tag = L"normal";
			// 
			// pictureBox23
			// 
			this->pictureBox23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox23.Image")));
			this->pictureBox23->Location = System::Drawing::Point(422, 382);
			this->pictureBox23->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(114, 55);
			this->pictureBox23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox23->TabIndex = 29;
			this->pictureBox23->TabStop = false;
			this->pictureBox23->Tag = L"normal";
			// 
			// pictureBox24
			// 
			this->pictureBox24->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox24.Image")));
			this->pictureBox24->Location = System::Drawing::Point(422, 131);
			this->pictureBox24->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(114, 55);
			this->pictureBox24->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox24->TabIndex = 28;
			this->pictureBox24->TabStop = false;
			this->pictureBox24->Tag = L"Hard";
			// 
			// pictureBox25
			// 
			this->pictureBox25->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox25.Image")));
			this->pictureBox25->Location = System::Drawing::Point(544, 182);
			this->pictureBox25->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(114, 55);
			this->pictureBox25->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox25->TabIndex = 39;
			this->pictureBox25->TabStop = false;
			this->pictureBox25->Tag = L"Hard";
			// 
			// pictureBox26
			// 
			this->pictureBox26->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox26.Image")));
			this->pictureBox26->Location = System::Drawing::Point(544, 231);
			this->pictureBox26->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox26->Name = L"pictureBox26";
			this->pictureBox26->Size = System::Drawing::Size(114, 55);
			this->pictureBox26->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox26->TabIndex = 38;
			this->pictureBox26->TabStop = false;
			this->pictureBox26->Tag = L"normal";
			// 
			// pictureBox27
			// 
			this->pictureBox27->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox27.Image")));
			this->pictureBox27->Location = System::Drawing::Point(544, 280);
			this->pictureBox27->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox27->Name = L"pictureBox27";
			this->pictureBox27->Size = System::Drawing::Size(114, 55);
			this->pictureBox27->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox27->TabIndex = 37;
			this->pictureBox27->TabStop = false;
			this->pictureBox27->Tag = L"normal";
			// 
			// pictureBox28
			// 
			this->pictureBox28->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox28.Image")));
			this->pictureBox28->Location = System::Drawing::Point(544, 331);
			this->pictureBox28->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox28->Name = L"pictureBox28";
			this->pictureBox28->Size = System::Drawing::Size(114, 55);
			this->pictureBox28->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox28->TabIndex = 36;
			this->pictureBox28->TabStop = false;
			this->pictureBox28->Tag = L"normal";
			// 
			// pictureBox29
			// 
			this->pictureBox29->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox29.Image")));
			this->pictureBox29->Location = System::Drawing::Point(544, 382);
			this->pictureBox29->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox29->Name = L"pictureBox29";
			this->pictureBox29->Size = System::Drawing::Size(114, 55);
			this->pictureBox29->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox29->TabIndex = 35;
			this->pictureBox29->TabStop = false;
			this->pictureBox29->Tag = L"normal";
			// 
			// pictureBox30
			// 
			this->pictureBox30->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox30.Image")));
			this->pictureBox30->Location = System::Drawing::Point(544, 131);
			this->pictureBox30->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox30->Name = L"pictureBox30";
			this->pictureBox30->Size = System::Drawing::Size(114, 55);
			this->pictureBox30->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox30->TabIndex = 34;
			this->pictureBox30->TabStop = false;
			this->pictureBox30->Tag = L"Hard";
			// 
			// pictureBox31
			// 
			this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox31.Image")));
			this->pictureBox31->Location = System::Drawing::Point(668, 182);
			this->pictureBox31->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(114, 55);
			this->pictureBox31->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox31->TabIndex = 45;
			this->pictureBox31->TabStop = false;
			this->pictureBox31->Tag = L"Hard";
			// 
			// pictureBox32
			// 
			this->pictureBox32->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox32.Image")));
			this->pictureBox32->Location = System::Drawing::Point(668, 231);
			this->pictureBox32->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox32->Name = L"pictureBox32";
			this->pictureBox32->Size = System::Drawing::Size(114, 55);
			this->pictureBox32->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox32->TabIndex = 44;
			this->pictureBox32->TabStop = false;
			this->pictureBox32->Tag = L"normal";
			// 
			// pictureBox33
			// 
			this->pictureBox33->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox33.Image")));
			this->pictureBox33->Location = System::Drawing::Point(668, 280);
			this->pictureBox33->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox33->Name = L"pictureBox33";
			this->pictureBox33->Size = System::Drawing::Size(114, 55);
			this->pictureBox33->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox33->TabIndex = 43;
			this->pictureBox33->TabStop = false;
			this->pictureBox33->Tag = L"normal";
			// 
			// pictureBox34
			// 
			this->pictureBox34->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox34.Image")));
			this->pictureBox34->Location = System::Drawing::Point(668, 331);
			this->pictureBox34->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox34->Name = L"pictureBox34";
			this->pictureBox34->Size = System::Drawing::Size(114, 55);
			this->pictureBox34->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox34->TabIndex = 42;
			this->pictureBox34->TabStop = false;
			this->pictureBox34->Tag = L"normal";
			// 
			// pictureBox35
			// 
			this->pictureBox35->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox35.Image")));
			this->pictureBox35->Location = System::Drawing::Point(668, 382);
			this->pictureBox35->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox35->Name = L"pictureBox35";
			this->pictureBox35->Size = System::Drawing::Size(114, 55);
			this->pictureBox35->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox35->TabIndex = 41;
			this->pictureBox35->TabStop = false;
			this->pictureBox35->Tag = L"normal";
			// 
			// pictureBox36
			// 
			this->pictureBox36->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox36.Image")));
			this->pictureBox36->Location = System::Drawing::Point(668, 131);
			this->pictureBox36->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox36->Name = L"pictureBox36";
			this->pictureBox36->Size = System::Drawing::Size(114, 55);
			this->pictureBox36->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox36->TabIndex = 40;
			this->pictureBox36->TabStop = false;
			this->pictureBox36->Tag = L"Hard";
			// 
			// pictureBox37
			// 
			this->pictureBox37->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox37.Image")));
			this->pictureBox37->Location = System::Drawing::Point(790, 182);
			this->pictureBox37->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox37->Name = L"pictureBox37";
			this->pictureBox37->Size = System::Drawing::Size(114, 55);
			this->pictureBox37->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox37->TabIndex = 51;
			this->pictureBox37->TabStop = false;
			this->pictureBox37->Tag = L"Hard";
			// 
			// pictureBox38
			// 
			this->pictureBox38->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox38.Image")));
			this->pictureBox38->Location = System::Drawing::Point(790, 231);
			this->pictureBox38->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox38->Name = L"pictureBox38";
			this->pictureBox38->Size = System::Drawing::Size(114, 55);
			this->pictureBox38->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox38->TabIndex = 50;
			this->pictureBox38->TabStop = false;
			this->pictureBox38->Tag = L"normal";
			// 
			// pictureBox39
			// 
			this->pictureBox39->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox39.Image")));
			this->pictureBox39->Location = System::Drawing::Point(790, 280);
			this->pictureBox39->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox39->Name = L"pictureBox39";
			this->pictureBox39->Size = System::Drawing::Size(114, 55);
			this->pictureBox39->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox39->TabIndex = 49;
			this->pictureBox39->TabStop = false;
			this->pictureBox39->Tag = L"normal";
			// 
			// pictureBox40
			// 
			this->pictureBox40->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox40.Image")));
			this->pictureBox40->Location = System::Drawing::Point(790, 331);
			this->pictureBox40->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox40->Name = L"pictureBox40";
			this->pictureBox40->Size = System::Drawing::Size(114, 55);
			this->pictureBox40->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox40->TabIndex = 48;
			this->pictureBox40->TabStop = false;
			this->pictureBox40->Tag = L"normal";
			// 
			// pictureBox41
			// 
			this->pictureBox41->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox41.Image")));
			this->pictureBox41->Location = System::Drawing::Point(790, 382);
			this->pictureBox41->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox41->Name = L"pictureBox41";
			this->pictureBox41->Size = System::Drawing::Size(114, 55);
			this->pictureBox41->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox41->TabIndex = 47;
			this->pictureBox41->TabStop = false;
			this->pictureBox41->Tag = L"normal";
			// 
			// pictureBox42
			// 
			this->pictureBox42->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox42.Image")));
			this->pictureBox42->Location = System::Drawing::Point(790, 131);
			this->pictureBox42->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox42->Name = L"pictureBox42";
			this->pictureBox42->Size = System::Drawing::Size(114, 55);
			this->pictureBox42->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox42->TabIndex = 46;
			this->pictureBox42->TabStop = false;
			this->pictureBox42->Tag = L"Hard";
			// 
			// pictureBox43
			// 
			this->pictureBox43->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox43.Image")));
			this->pictureBox43->Location = System::Drawing::Point(914, 182);
			this->pictureBox43->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox43->Name = L"pictureBox43";
			this->pictureBox43->Size = System::Drawing::Size(114, 55);
			this->pictureBox43->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox43->TabIndex = 57;
			this->pictureBox43->TabStop = false;
			this->pictureBox43->Tag = L"Hard";
			// 
			// pictureBox44
			// 
			this->pictureBox44->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox44.Image")));
			this->pictureBox44->Location = System::Drawing::Point(914, 231);
			this->pictureBox44->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox44->Name = L"pictureBox44";
			this->pictureBox44->Size = System::Drawing::Size(114, 55);
			this->pictureBox44->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox44->TabIndex = 56;
			this->pictureBox44->TabStop = false;
			this->pictureBox44->Tag = L"normal";
			// 
			// pictureBox45
			// 
			this->pictureBox45->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox45.Image")));
			this->pictureBox45->Location = System::Drawing::Point(914, 280);
			this->pictureBox45->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox45->Name = L"pictureBox45";
			this->pictureBox45->Size = System::Drawing::Size(114, 55);
			this->pictureBox45->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox45->TabIndex = 55;
			this->pictureBox45->TabStop = false;
			this->pictureBox45->Tag = L"normal";
			// 
			// pictureBox46
			// 
			this->pictureBox46->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox46.Image")));
			this->pictureBox46->Location = System::Drawing::Point(914, 331);
			this->pictureBox46->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox46->Name = L"pictureBox46";
			this->pictureBox46->Size = System::Drawing::Size(114, 55);
			this->pictureBox46->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox46->TabIndex = 54;
			this->pictureBox46->TabStop = false;
			this->pictureBox46->Tag = L"normal";
			// 
			// pictureBox47
			// 
			this->pictureBox47->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox47.Image")));
			this->pictureBox47->Location = System::Drawing::Point(914, 382);
			this->pictureBox47->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox47->Name = L"pictureBox47";
			this->pictureBox47->Size = System::Drawing::Size(114, 55);
			this->pictureBox47->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox47->TabIndex = 53;
			this->pictureBox47->TabStop = false;
			this->pictureBox47->Tag = L"normal";
			// 
			// pictureBox48
			// 
			this->pictureBox48->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox48.Image")));
			this->pictureBox48->Location = System::Drawing::Point(914, 131);
			this->pictureBox48->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox48->Name = L"pictureBox48";
			this->pictureBox48->Size = System::Drawing::Size(114, 55);
			this->pictureBox48->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox48->TabIndex = 52;
			this->pictureBox48->TabStop = false;
			this->pictureBox48->Tag = L"Hard";
			// 
			// Bonus
			// 
			this->Bonus->AutoSize = true;
			this->Bonus->BackColor = System::Drawing::Color::AliceBlue;
			this->Bonus->Font = (gcnew System::Drawing::Font(L"Ravie", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Bonus->ForeColor = System::Drawing::Color::DarkBlue;
			this->Bonus->Location = System::Drawing::Point(975, 538);
			this->Bonus->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Bonus->Name = L"Bonus";
			this->Bonus->Size = System::Drawing::Size(28, 27);
			this->Bonus->TabIndex = 58;
			this->Bonus->Tag = L"Neutral";
			this->Bonus->Text = L"\?";
			this->Bonus->Visible = false;
			// 
			// Przeszkoda
			// 
			this->Przeszkoda->AutoSize = true;
			this->Przeszkoda->BackColor = System::Drawing::Color::AliceBlue;
			this->Przeszkoda->Font = (gcnew System::Drawing::Font(L"Ravie", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Przeszkoda->ForeColor = System::Drawing::Color::DarkRed;
			this->Przeszkoda->Location = System::Drawing::Point(975, 626);
			this->Przeszkoda->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Przeszkoda->Name = L"Przeszkoda";
			this->Przeszkoda->Size = System::Drawing::Size(28, 27);
			this->Przeszkoda->TabIndex = 59;
			this->Przeszkoda->Tag = L"Neutral";
			this->Przeszkoda->Text = L"\?";
			this->Przeszkoda->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(96, 22);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 20);
			this->label3->TabIndex = 60;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"MV Boli", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(190, 22);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 39);
			this->label4->TabIndex = 61;
			// 
			// Gra
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1056, 771);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Przeszkoda);
			this->Controls->Add(this->Bonus);
			this->Controls->Add(this->pictureBox43);
			this->Controls->Add(this->pictureBox44);
			this->Controls->Add(this->pictureBox45);
			this->Controls->Add(this->pictureBox46);
			this->Controls->Add(this->pictureBox47);
			this->Controls->Add(this->pictureBox48);
			this->Controls->Add(this->pictureBox37);
			this->Controls->Add(this->pictureBox38);
			this->Controls->Add(this->pictureBox39);
			this->Controls->Add(this->pictureBox40);
			this->Controls->Add(this->pictureBox41);
			this->Controls->Add(this->pictureBox42);
			this->Controls->Add(this->pictureBox31);
			this->Controls->Add(this->pictureBox32);
			this->Controls->Add(this->pictureBox33);
			this->Controls->Add(this->pictureBox34);
			this->Controls->Add(this->pictureBox35);
			this->Controls->Add(this->pictureBox36);
			this->Controls->Add(this->pictureBox25);
			this->Controls->Add(this->pictureBox26);
			this->Controls->Add(this->pictureBox27);
			this->Controls->Add(this->pictureBox28);
			this->Controls->Add(this->pictureBox29);
			this->Controls->Add(this->pictureBox30);
			this->Controls->Add(this->pictureBox19);
			this->Controls->Add(this->pictureBox20);
			this->Controls->Add(this->pictureBox21);
			this->Controls->Add(this->pictureBox22);
			this->Controls->Add(this->pictureBox23);
			this->Controls->Add(this->pictureBox24);
			this->Controls->Add(this->pictureBox13);
			this->Controls->Add(this->pictureBox14);
			this->Controls->Add(this->pictureBox15);
			this->Controls->Add(this->pictureBox16);
			this->Controls->Add(this->pictureBox17);
			this->Controls->Add(this->pictureBox18);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->koniec);
			this->Controls->Add(this->jeszczeRaz);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lblZycia);
			this->Controls->Add(this->lblPunkty);
			this->Controls->Add(this->Platforma);
			this->Controls->Add(this->kulka);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->MaximizeBox = false;
			this->Name = L"Gra";
			this->Text = L"Arkanoid";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Gra::ruchPlatformy);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Gra::Gra_KeyUp);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kulka))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Platforma))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox45))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox46))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox47))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox48))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		// STYL GRAFICZNY ^
		// DZIA£ANIE v
		// Zmienne
		int x = 0; // Po³o¿enie kulki w poziomie
		int y = 0; // Po³o¿enie kulki w pionie
		int punkty = 0;
		int proby = 2;
		int rozbiteBloczki = 0;
		char kierunek;
		bool blokada = false; // Blokada spacji na czas, gdy nie jest potrzebna
		int predkosc = 0; // Wartoœæ modyfikacji prêdkoœci kulki
		int modyfikacja = 0; // Modyfikacja ruchu platformy
#pragma endregion

	// Funkcja do odgrywania dŸwiêku
	private: Void zagraj(String^ dzwiek) {
		// Odtworzenie dŸwiêku
		try {
			System::Media::SoundPlayer^ graj = gcnew System::Media::SoundPlayer();
			graj->SoundLocation = dzwiek;
			graj->Load();
			graj->Play();
		}
		catch (...) {
		
		}
	}
	// Funkcja do losowania wartoœci z przedzia³u
	private: INT losuj(int a, int b) {
		int wartosc;
		Random^ losowanie = gcnew Random;
		wartosc = losowanie->Next(a, b);
		return wartosc;
	}

	// Funkcja do wykrywania kolizji bonusu/utrudnienia z platform¹
	private: BOOL wykryj(System::Windows::Forms::Label^ obiekt) {
		if ((obiekt->Left + obiekt->Width > Platforma->Left) && (obiekt->Left + obiekt->Width < Platforma->Left + Platforma->Width) && (obiekt->Top + obiekt->Height > Platforma->Top))
			return true;
		else
			return false;
	}

	// Funkcja do resetowania ustawieñ gry
	private: Void resetuj() {
		// Umieszczenie kulki we w³aœciwym miejscu
		kulka->Top = Platforma->Top - kulka->Height - 3;
		kulka->Left = Platforma->Left + Platforma->Width / 2;
		kulka->Visible = true;
		// Resetowanie ustawieñ odpowiedzialnych za poruszanie siê elementów
		zegar->Enabled = true;
		x = 0;
		y = 0;
		blokada = false;
		// Resetowanie bonusu i utrudnienia
		Bonus->Visible = false;
		modyfikacja = 0;
		Przeszkoda->Visible = false;
	}

	// Funkcja do umieszczania bonusu/utrudnienia na planszy
	private: Void umieszczenie(System::Windows::Forms::Label^ obiekt) {
		obiekt->Top = kulka->Top;
		obiekt->Left = kulka->Left;
		obiekt->Visible = true;
	}

	// Funkcja do zwiêkszania prêdkoœci kulki
	private: Void zwiekszenie( int a) {
		x < 0 ? x -= a : x += a;
		y < 0 ? y -= a : y += a;
	}

	// Funkcja do zmniejszania prêdkoœci kulki
	private: Void zmniejszenie(int a) {
		x < 0 ? x += a : x -= a;
		y < 0 ? y += a : y -= a;
	}

	// Funkcja do detekcji kolizji kulki z prawym bokiem bloczka
	private: BOOL kolizja_p(System::Windows::Forms::Control^ bloczek) {
		if (kulka->Left <= bloczek->Left + bloczek->Width &&
			kulka->Left >= bloczek->Left + bloczek->Width - 1 &&
			kulka->Top < bloczek->Top + bloczek->Height &&
			kulka->Top + kulka->Height > bloczek->Top && (bloczek->Visible == true)) {
				x = abs(x);
				return true;
		}	
		else
			return false;
	}
	// Funkcja do detekcji kolizji kulki z lewym bokiem bloczka
	private: BOOL kolizja_l(System::Windows::Forms::Control^ bloczek) {
		if (kulka->Left + kulka->Width >= bloczek->Left &&
			kulka->Left + kulka->Width <= bloczek->Left + 1 &&
			kulka->Top < bloczek->Top + bloczek->Height &&
			kulka->Top + kulka->Height > bloczek->Top && (bloczek->Visible == true)) {
			x = -abs(x);
			return true;
		}
			
		else
			return false;
	}
	// Funkcja do detekcji kolizji kulki z do³em bloczka
	private: BOOL kolizja_d(System::Windows::Forms::Control^ bloczek) {
		if (kulka->Top < bloczek->Top + bloczek->Height &&
			kulka->Left < bloczek->Left + bloczek->Width &&
			kulka->Left + kulka->Width > bloczek->Left && (bloczek->Visible == true)) {
			y = abs(y);
			return true;
		}
		else
			return false;
	}
	// Funkcja do detekcji kolizji kulki z gór¹ bloczka
	private: BOOL kolizja_g(System::Windows::Forms::Control^ bloczek) {
		if (kulka->Top + kulka->Height >= bloczek->Top &&
			kulka->Top + kulka->Height <= bloczek->Top + 1 &&
			kulka->Left < bloczek->Left + bloczek->Width &&
			kulka->Left + kulka->Width > bloczek->Left
			&& (bloczek->Visible == true)) {
			y = -abs(y);
			return true;
		}
		else
			return false;
	}
	// Funkcja obs³uguj¹ca zbicie bloczka
	private: Void zbicie(System::Windows::Forms::Control^ bloczek) {
		// Odbicie od bloczka
		if (kolizja_p(bloczek) || kolizja_l(bloczek)  || kolizja_d(bloczek) || kolizja_g(bloczek)) {
			if (bloczek->Tag != "Hard") {
				zagraj("dzwieki/zbicie7.wav");
				bloczek->Visible = false;
				rozbiteBloczki++;
				int B = 0;
				B = losuj(1, 6);
				if (B == 1 && Bonus->Visible == false) 
					umieszczenie(Bonus);
				if (B == 2 && Przeszkoda->Visible == false) 
					umieszczenie(Przeszkoda);	
			}
			else {
				PictureBox^ rozbityBloczek = (PictureBox^) bloczek;
				rozbityBloczek->Image = imageList1->Images[2];
				kulka->Image = Image::FromFile("grafiki/n_kulka_power.png");
				bloczek->Tag = "neutral";
				zagraj("dzwieki/kruszenie1.wav");
				predkosc = losuj(0, 5);
				if (x > -11 && x < 11) {
					zwiekszenie(predkosc);
				}
				else {
					zmniejszenie(predkosc);
				}
				
			}
			punkty += 10;
		}
		lblPunkty->Text = "" + punkty;
		if (rozbiteBloczki == 48) {
			zegar->Enabled = false;
			jeszczeRaz->Visible = true;
			koniec->Visible = true;
			rozbiteBloczki = 0; 
			MessageBox::Show("Wygra³eœ!!! Gratulacje!!!", "Arkanoid", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			// Przywrócenie normalnego modelu pi³ki
			kulka->Image = Image::FromFile("grafiki/n_kulka.png");
		}
	}
	
	// Dzia³ania w ramach jednego kwantu czasu
	private: System::Void zegar_Tick(System::Object^  sender, System::EventArgs^  e) {
		// Dzia³ania na cegie³kach
		for each(Control ^element in this->Controls) {
			if (element->Tag == "normal" || element->Tag == "Hard" || element->Tag == "neutral") 
				zbicie(element);
		}

		// Ruch bonusu
		if (Bonus->Visible == true) 
			Bonus->Top += 3;

		// Z³apanie bonusu
		if (wykryj(Bonus) && Bonus->Visible == true) {
			Bonus->Visible = false;
			int ktoryBonus = losuj(1, 3);
			if (ktoryBonus == 1) {
				proby += 1;
				lblZycia->Text = "" + proby;
			}
			if (ktoryBonus == 2 && (x > 2 || x < -2)) {
				zmniejszenie(1);
			}
			else
				modyfikacja += 2;
		}
		
		// Wypadniêcie bonusu z planszy
		if (Bonus->Top + Bonus->Height > Platforma->Top)
			Bonus->Visible = false;

		// Ruch utrudnienia
		if (Przeszkoda->Visible == true)
			Przeszkoda->Top += 3;

		// Z³apanie utrudnienia
		if (wykryj(Przeszkoda) && Przeszkoda->Visible == true) {
			Przeszkoda->Visible = false;
			int ktoryBonus = losuj(1, 3);
			if (ktoryBonus == 1 && proby > 1) {
				proby -= 1;
				lblZycia->Text = "" + proby;
			}
			if (ktoryBonus == 2) {
				zwiekszenie(2);
			}
			else
				modyfikacja -= 2;
		}

		// Wypadniêcie utrudnienia z planszy
		if (Przeszkoda->Top + Przeszkoda->Height > Platforma->Top)
			Przeszkoda->Visible = false;

		// Ruch kulki
		if (x == 0)
			x = y;
		if (y == 0)
			y = x;
		kulka->Left += x;
		kulka->Top += y;
		// Odbicie od œcianki prawej
		if (kulka->Left >= Gra::Width - kulka->Width) x = -x;
		// Odbicie od œcianki górnej
		if (kulka->Top <= 60) y = -y;
		// Odbicie od œcianki lewej
		if (kulka->Left <= 5) x = -x;

		// Ruch platformy w prawo
		if (kierunek == 'R' && Platforma->Left < Gra::Width - Platforma->Width - 15) {
			Platforma->Left += 20 + modyfikacja;
			if (x == 0 && y == 0)
				kulka->Left += 20;
		}
		// Ruch platformy w lewo
		if (kierunek == 'L' && Platforma->Left > 0) {
			Platforma->Left -= (20 + modyfikacja);
			if (x == 0 && y == 0)
				kulka->Left -= 20;
		}
			

		// Odbicie od platformy
		if ((kulka->Left + kulka->Width > Platforma->Left - 10) && (kulka->Left + kulka->Width < Platforma->Left + Platforma->Width + 30) && (kulka->Top + kulka->Height > Platforma->Top)) {
			zagraj("dzwieki/odbicie.wav");
			y = -y;
			if (kierunek == 'R')
				x = -y;
			else if (kierunek == 'L')
				x = y;
		}
		
		// Upuszczenie kulki
		else if (kulka->Top + kulka->Height > Platforma->Top) {
			zegar->Enabled = false;
			kulka->Visible = false;
			punkty -= 50;
			proby -= 1;
			lblPunkty->Text = "" + punkty;
			lblZycia->Text = "" + proby;
			kulka->Image = Image::FromFile("grafiki/n_kulka.png");

			if (proby > 0) {
				MessageBox::Show("Kulka wypad³a!!!", "Arkanoid", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				resetuj();
			}
			else {
				lblZycia->Text = "0";
				jeszczeRaz->Visible = true;
				koniec->Visible = true;
				rozbiteBloczki = 0;
			}
		}
	}
	// Ruch platformy
	private: System::Void ruchPlatformy(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		if (e->KeyCode == Keys::Left) kierunek = 'L';
		if (e->KeyCode == Keys::Right) kierunek = 'R';
		if ((e->KeyCode == Keys::Space) && (blokada == false)){
			x = kierunek == 'L' ? -5 : 5;
			y = -5;
			blokada = true;
		}
	}
// Nienaciskanie 
private: System::Void Gra_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	kierunek = '0';
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}

// Ponowna gra
private: System::Void jeszczeRaz_Click_1(System::Object^  sender, System::EventArgs^  e) {
	// Ustawienie liczby prób i punktów
	proby = 2;
	punkty = 0;
	lblZycia->Text = "" + proby;
	lblPunkty->Text = "" + punkty;
	// Wy³¹czenie przycisków koñca i ponownej gry
	jeszczeRaz->Visible = false;
	koniec->Visible = false;
	resetuj();
	// Ponowne w³¹czenie widocznoœci bloczków
	for each(Control^ element in this->Controls) {
		if (element->Tag == "normal" || element->Tag == "Hard" || element->Tag == "neutral")
			element->Visible = true;
		if (element->Tag == "neutral") {
			element->Tag = "Hard";
			PictureBox^ obraz = (PictureBox^) element; 
			obraz->Image = imageList1->Images[1];
		}
	}
}
// Zakoñczenie
private: System::Void koniec_Click_1(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void pictureBox32_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
