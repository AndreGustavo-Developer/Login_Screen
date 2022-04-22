#pragma once

namespace TelaLogin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
		{
			InitializeComponent();
			//
			//TODO: Adicione o código do construtor aqui
			//
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ dd;
	private: System::Windows::Forms::Label^ Usename;
	private: System::Windows::Forms::Label^ Password;
	private: System::Windows::Forms::TextBox^ TextBoxUsername;
	private: System::Windows::Forms::TextBox^ TextBoxPassword;
	private: System::Windows::Forms::Panel^ PanelUsername;
	private: System::Windows::Forms::Panel^ PanelPassword;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ ButtonSign;
	private: System::Windows::Forms::Button^ ButtonExit;
	private: System::Windows::Forms::Label^ LabelCopyright;
	protected:

	private:
		/// <summary>
		/// Variável de designer necessária.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necessário para suporte ao Designer - não modifique 
		/// o conteúdo deste método com o editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->dd = (gcnew System::Windows::Forms::Label());
			this->Usename = (gcnew System::Windows::Forms::Label());
			this->Password = (gcnew System::Windows::Forms::Label());
			this->TextBoxUsername = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxPassword = (gcnew System::Windows::Forms::TextBox());
			this->PanelUsername = (gcnew System::Windows::Forms::Panel());
			this->PanelPassword = (gcnew System::Windows::Forms::Panel());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ButtonSign = (gcnew System::Windows::Forms::Button());
			this->ButtonExit = (gcnew System::Windows::Forms::Button());
			this->LabelCopyright = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(318, 411);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// dd
			// 
			this->dd->AutoSize = true;
			this->dd->Location = System::Drawing::Point(399, 94);
			this->dd->Name = L"dd";
			this->dd->Size = System::Drawing::Size(153, 30);
			this->dd->TabIndex = 1;
			this->dd->Text = L"Create account";
			// 
			// Usename
			// 
			this->Usename->AutoSize = true;
			this->Usename->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.75F));
			this->Usename->Location = System::Drawing::Point(365, 160);
			this->Usename->Name = L"Usename";
			this->Usename->Size = System::Drawing::Size(60, 15);
			this->Usename->TabIndex = 2;
			this->Usename->Text = L"Username";
			this->Usename->Click += gcnew System::EventHandler(this, &Login::Usename_Click);
			// 
			// Password
			// 
			this->Password->AutoSize = true;
			this->Password->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.75F));
			this->Password->Location = System::Drawing::Point(365, 214);
			this->Password->Name = L"Password";
			this->Password->Size = System::Drawing::Size(57, 15);
			this->Password->TabIndex = 3;
			this->Password->Text = L"Password";
			this->Password->Click += gcnew System::EventHandler(this, &Login::Password_Click);
			// 
			// TextBoxUsername
			// 
			this->TextBoxUsername->BackColor = System::Drawing::Color::White;
			this->TextBoxUsername->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TextBoxUsername->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
			this->TextBoxUsername->Location = System::Drawing::Point(368, 178);
			this->TextBoxUsername->Name = L"TextBoxUsername";
			this->TextBoxUsername->Size = System::Drawing::Size(205, 20);
			this->TextBoxUsername->TabIndex = 4;
			// 
			// TextBoxPassword
			// 
			this->TextBoxPassword->BackColor = System::Drawing::Color::White;
			this->TextBoxPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TextBoxPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
			this->TextBoxPassword->Location = System::Drawing::Point(368, 233);
			this->TextBoxPassword->Name = L"TextBoxPassword";
			this->TextBoxPassword->Size = System::Drawing::Size(205, 20);
			this->TextBoxPassword->TabIndex = 5;
			this->TextBoxPassword->TextChanged += gcnew System::EventHandler(this, &Login::TextBoxPassword_TextChanged);
			// 
			// PanelUsername
			// 
			this->PanelUsername->BackColor = System::Drawing::Color::Black;
			this->PanelUsername->Location = System::Drawing::Point(370, 197);
			this->PanelUsername->Name = L"PanelUsername";
			this->PanelUsername->Size = System::Drawing::Size(205, 2);
			this->PanelUsername->TabIndex = 6;
			this->PanelUsername->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Login::PanelUsername_Paint);
			// 
			// PanelPassword
			// 
			this->PanelPassword->BackColor = System::Drawing::Color::Black;
			this->PanelPassword->Location = System::Drawing::Point(368, 256);
			this->PanelPassword->Name = L"PanelPassword";
			this->PanelPassword->Size = System::Drawing::Size(205, 2);
			this->PanelPassword->TabIndex = 7;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::White;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.75F));
			this->checkBox1->Location = System::Drawing::Point(368, 281);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(95, 19);
			this->checkBox1->TabIndex = 8;
			this->checkBox1->Text = L"I agree to the";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Login::checkBox1_CheckedChanged);
			// 
			// label1
			// 
			this->label1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.75F));
			this->label1->ForeColor = System::Drawing::Color::Purple;
			this->label1->Location = System::Drawing::Point(456, 282);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(119, 15);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Terms and Condtions\r\n\r\n";
			// 
			// ButtonSign
			// 
			this->ButtonSign->BackColor = System::Drawing::Color::Purple;
			this->ButtonSign->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ButtonSign->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ButtonSign->Enabled = false;
			this->ButtonSign->FlatAppearance->BorderSize = 0;
			this->ButtonSign->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ButtonSign->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
			this->ButtonSign->ForeColor = System::Drawing::Color::White;
			this->ButtonSign->Location = System::Drawing::Point(368, 323);
			this->ButtonSign->Name = L"ButtonSign";
			this->ButtonSign->Size = System::Drawing::Size(104, 38);
			this->ButtonSign->TabIndex = 10;
			this->ButtonSign->Text = L"Sign in";
			this->ButtonSign->UseVisualStyleBackColor = false;
			// 
			// ButtonExit
			// 
			this->ButtonExit->BackColor = System::Drawing::Color::White;
			this->ButtonExit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ButtonExit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ButtonExit->FlatAppearance->BorderColor = System::Drawing::Color::Purple;
			this->ButtonExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ButtonExit->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
			this->ButtonExit->ForeColor = System::Drawing::Color::Purple;
			this->ButtonExit->Location = System::Drawing::Point(478, 323);
			this->ButtonExit->Name = L"ButtonExit";
			this->ButtonExit->Size = System::Drawing::Size(104, 38);
			this->ButtonExit->TabIndex = 11;
			this->ButtonExit->Text = L"Exit";
			this->ButtonExit->UseVisualStyleBackColor = false;
			this->ButtonExit->Click += gcnew System::EventHandler(this, &Login::ButtonExit_Click);
			// 
			// LabelCopyright
			// 
			this->LabelCopyright->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.75F));
			this->LabelCopyright->ForeColor = System::Drawing::SystemColors::GrayText;
			this->LabelCopyright->Location = System::Drawing::Point(379, 383);
			this->LabelCopyright->Name = L"LabelCopyright";
			this->LabelCopyright->Size = System::Drawing::Size(181, 13);
			this->LabelCopyright->TabIndex = 12;
			this->LabelCopyright->Text = L"© 2022 Grape All rights reserved\r\n\r\n";
			// 
			// Login
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(634, 411);
			this->Controls->Add(this->LabelCopyright);
			this->Controls->Add(this->ButtonExit);
			this->Controls->Add(this->ButtonSign);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->PanelPassword);
			this->Controls->Add(this->PanelUsername);
			this->Controls->Add(this->TextBoxPassword);
			this->Controls->Add(this->TextBoxUsername);
			this->Controls->Add(this->Password);
			this->Controls->Add(this->Usename);
			this->Controls->Add(this->dd);
			this->Controls->Add(this->pictureBox1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
			this->Name = L"Login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void PanelUsername_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void TextBoxPassword_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Login_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Usename_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Password_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		if (checkBox1->Checked)
		{
			ButtonSign->Enabled = true;

		}
		else
		{
			ButtonSign->Enabled = false;
		}
	}

	private: System::Void ButtonExit_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Application::Exit();
	}


};
}
