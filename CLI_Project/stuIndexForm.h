#pragma once
#include "addStu.h"
#include "stuList.h"
#include "stuList_c4.h"
#include "HelpInfo.h"
#include "updatePasswd.h"
#include "memberInfo.h"
#include "stuInfo.h"
#include "feedbackStu.h"

namespace ManagementSystemV5 {

#pragma once
		using namespace System;
		using namespace System::ComponentModel;
		using namespace System::Collections;
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;

		/// <summary>
		/// adFormNew 摘要
		/// </summary>
		public ref class stuIndexForm : public System::Windows::Forms::Form
		{
		public:
			stuIndexForm(LoginInfo^ login)
			{
				InitializeComponent();
				//
				//TODO:  在此处添加构造函数代码
				//
				//this->name = name;
				this->thisLogin = login;
				timer1->Start();
				this->IsMdiContainer = TRUE;
				this->StartPosition = FormStartPosition::CenterScreen;
			}

		protected:
			/// <summary>
			/// 清理所有正在使用的资源。
			/// </summary>
			~stuIndexForm()
			{
				if (components)
				{
					delete components;
				}
			}
		private: String^ name;
		private: System::Windows::Forms::MenuStrip^  stuMana;
		protected:
		private: System::Windows::Forms::ToolStripMenuItem^  学生管理ToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^  新生注册ToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^  学生查阅ToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^  所有学生ToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^  修改学生信息ToolStripMenuItem;
		private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
		private: System::Windows::Forms::ToolStripMenuItem^  管理说明ToolStripMenuItem;
		private: System::Windows::Forms::StatusStrip^  statusStrip1;
		private: System::Windows::Forms::ToolStripStatusLabel^  NowData;
		private: System::Windows::Forms::ToolStripMenuItem^  信息管理ToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^  修改密码ToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^  查询个人信息ToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^  反馈信息处理ToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^  反馈信息处理ToolStripMenuItem1;
		private: System::Windows::Forms::ToolStripMenuItem^  关于系统ToolStripMenuItem;
		private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel2;
		private: System::Windows::Forms::ToolStripStatusLabel^  NowTime;
		private: System::Windows::Forms::Timer^  timer1;
		private: System::Windows::Forms::Label^  label1;
		private: System::ComponentModel::IContainer^  components;
		private: LoginInfo ^thisLogin;
		private:
			/// <summary>
			/// 必需的设计器变量。
			/// </summary>


#pragma region Windows Form Designer generated code
			/// <summary>
			/// 设计器支持所需的方法 - 不要修改
			/// 使用代码编辑器修改此方法的内容。
			/// </summary>
			void InitializeComponent(void)
			{
				this->components = (gcnew System::ComponentModel::Container());
				this->stuMana = (gcnew System::Windows::Forms::MenuStrip());
				this->信息管理ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->修改密码ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->查询个人信息ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->学生管理ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->新生注册ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->学生查阅ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->所有学生ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->修改学生信息ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
				this->管理说明ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->反馈信息处理ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->反馈信息处理ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->关于系统ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
				this->NowData = (gcnew System::Windows::Forms::ToolStripStatusLabel());
				this->toolStripStatusLabel2 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
				this->NowTime = (gcnew System::Windows::Forms::ToolStripStatusLabel());
				this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
				this->label1 = (gcnew System::Windows::Forms::Label());
				this->stuMana->SuspendLayout();
				this->statusStrip1->SuspendLayout();
				this->SuspendLayout();
				// 
				// stuMana
				// 
				this->stuMana->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12));
				this->stuMana->GripStyle = System::Windows::Forms::ToolStripGripStyle::Visible;
				this->stuMana->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
					this->信息管理ToolStripMenuItem,
						this->学生管理ToolStripMenuItem, this->反馈信息处理ToolStripMenuItem
				});
				this->stuMana->Location = System::Drawing::Point(0, 0);
				this->stuMana->Name = L"stuMana";
				this->stuMana->Size = System::Drawing::Size(714, 29);
				this->stuMana->TabIndex = 0;
				this->stuMana->Text = L"menuStrip1";
				// 
				// 信息管理ToolStripMenuItem
				// 
				this->信息管理ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
					this->修改密码ToolStripMenuItem,
						this->查询个人信息ToolStripMenuItem
				});
				this->信息管理ToolStripMenuItem->Name = L"信息管理ToolStripMenuItem";
				this->信息管理ToolStripMenuItem->Size = System::Drawing::Size(86, 25);
				this->信息管理ToolStripMenuItem->Text = L"信息管理";
				// 
				// 修改密码ToolStripMenuItem
				// 
				this->修改密码ToolStripMenuItem->Name = L"修改密码ToolStripMenuItem";
				this->修改密码ToolStripMenuItem->Size = System::Drawing::Size(176, 26);
				this->修改密码ToolStripMenuItem->Text = L"修改密码";
				this->修改密码ToolStripMenuItem->Click += gcnew System::EventHandler(this, &stuIndexForm::修改密码ToolStripMenuItem_Click);
				// 
				// 查询个人信息ToolStripMenuItem
				// 
				this->查询个人信息ToolStripMenuItem->Name = L"查询个人信息ToolStripMenuItem";
				this->查询个人信息ToolStripMenuItem->Size = System::Drawing::Size(176, 26);
				this->查询个人信息ToolStripMenuItem->Text = L"查询个人信息";
				this->查询个人信息ToolStripMenuItem->Click += gcnew System::EventHandler(this, &stuIndexForm::查询个人信息ToolStripMenuItem_Click);
				// 
				// 学生管理ToolStripMenuItem
				// 
				this->学生管理ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
					this->新生注册ToolStripMenuItem,
						this->学生查阅ToolStripMenuItem, this->toolStripSeparator1, this->管理说明ToolStripMenuItem
				});
				this->学生管理ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(134)));
				this->学生管理ToolStripMenuItem->Name = L"学生管理ToolStripMenuItem";
				this->学生管理ToolStripMenuItem->Size = System::Drawing::Size(86, 25);
				this->学生管理ToolStripMenuItem->Text = L"学生管理";
				// 
				// 新生注册ToolStripMenuItem
				// 
				this->新生注册ToolStripMenuItem->Name = L"新生注册ToolStripMenuItem";
				this->新生注册ToolStripMenuItem->Size = System::Drawing::Size(152, 26);
				this->新生注册ToolStripMenuItem->Text = L"新增选课";
				// 
				// 学生查阅ToolStripMenuItem
				// 
				this->学生查阅ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
					this->所有学生ToolStripMenuItem,
						this->修改学生信息ToolStripMenuItem
				});
				this->学生查阅ToolStripMenuItem->Name = L"学生查阅ToolStripMenuItem";
				this->学生查阅ToolStripMenuItem->Size = System::Drawing::Size(152, 26);
				this->学生查阅ToolStripMenuItem->Text = L"选课查询";
				// 
				// 所有学生ToolStripMenuItem
				// 
				this->所有学生ToolStripMenuItem->Name = L"所有学生ToolStripMenuItem";
				this->所有学生ToolStripMenuItem->Size = System::Drawing::Size(128, 26);
				this->所有学生ToolStripMenuItem->Text = L"选修课";
				// 
				// 修改学生信息ToolStripMenuItem
				// 
				this->修改学生信息ToolStripMenuItem->Name = L"修改学生信息ToolStripMenuItem";
				this->修改学生信息ToolStripMenuItem->Size = System::Drawing::Size(128, 26);
				this->修改学生信息ToolStripMenuItem->Text = L"必修课";
				// 
				// toolStripSeparator1
				// 
				this->toolStripSeparator1->Name = L"toolStripSeparator1";
				this->toolStripSeparator1->Size = System::Drawing::Size(149, 6);
				// 
				// 管理说明ToolStripMenuItem
				// 
				this->管理说明ToolStripMenuItem->Name = L"管理说明ToolStripMenuItem";
				this->管理说明ToolStripMenuItem->Size = System::Drawing::Size(152, 26);
				this->管理说明ToolStripMenuItem->Text = L"成绩查询";
				// 
				// 反馈信息处理ToolStripMenuItem
				// 
				this->反馈信息处理ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
					this->反馈信息处理ToolStripMenuItem1,
						this->关于系统ToolStripMenuItem
				});
				this->反馈信息处理ToolStripMenuItem->Name = L"反馈信息处理ToolStripMenuItem";
				this->反馈信息处理ToolStripMenuItem->Size = System::Drawing::Size(54, 25);
				this->反馈信息处理ToolStripMenuItem->Text = L"帮助";
				// 
				// 反馈信息处理ToolStripMenuItem1
				// 
				this->反馈信息处理ToolStripMenuItem1->Name = L"反馈信息处理ToolStripMenuItem1";
				this->反馈信息处理ToolStripMenuItem1->Size = System::Drawing::Size(152, 26);
				this->反馈信息处理ToolStripMenuItem1->Text = L"反馈信息";
				this->反馈信息处理ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &stuIndexForm::反馈信息处理ToolStripMenuItem1_Click);
				// 
				// 关于系统ToolStripMenuItem
				// 
				this->关于系统ToolStripMenuItem->Name = L"关于系统ToolStripMenuItem";
				this->关于系统ToolStripMenuItem->Size = System::Drawing::Size(152, 26);
				this->关于系统ToolStripMenuItem->Text = L"关于系统";
				this->关于系统ToolStripMenuItem->Click += gcnew System::EventHandler(this, &stuIndexForm::关于系统ToolStripMenuItem_Click);
				// 
				// statusStrip1
				// 
				this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
					this->NowData, this->toolStripStatusLabel2,
						this->NowTime
				});
				this->statusStrip1->Location = System::Drawing::Point(0, 295);
				this->statusStrip1->Name = L"statusStrip1";
				this->statusStrip1->Size = System::Drawing::Size(714, 22);
				this->statusStrip1->TabIndex = 1;
				this->statusStrip1->Text = L"statusStrip1";
				// 
				// NowData
				// 
				this->NowData->Name = L"NowData";
				this->NowData->Size = System::Drawing::Size(0, 17);
				// 
				// toolStripStatusLabel2
				// 
				this->toolStripStatusLabel2->Name = L"toolStripStatusLabel2";
				this->toolStripStatusLabel2->Size = System::Drawing::Size(0, 17);
				// 
				// NowTime
				// 
				this->NowTime->Name = L"NowTime";
				this->NowTime->Size = System::Drawing::Size(32, 17);
				this->NowTime->Text = L"时间";
				// 
				// timer1
				// 
				this->timer1->Tick += gcnew System::EventHandler(this, &stuIndexForm::timer1_Tick);
				// 
				// label1
				// 
				this->label1->AutoSize = true;
				this->label1->Font = (gcnew System::Drawing::Font(L"幼圆", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(134)));
				this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
					static_cast<System::Int32>(static_cast<System::Byte>(64)));
				this->label1->Location = System::Drawing::Point(557, 9);
				this->label1->Name = L"label1";
				this->label1->Size = System::Drawing::Size(0, 19);
				this->label1->TabIndex = 2;
				// 
				// stuIndexForm
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->ClientSize = System::Drawing::Size(714, 317);
				this->Controls->Add(this->label1);
				this->Controls->Add(this->statusStrip1);
				this->Controls->Add(this->stuMana);
				this->IsMdiContainer = true;
				this->MainMenuStrip = this->stuMana;
				this->MaximizeBox = false;
				this->MinimizeBox = false;
				this->Name = L"stuIndexForm";
				this->ShowIcon = false;
				this->Text = L"教务管理系统";
				this->Load += gcnew System::EventHandler(this, &stuIndexForm::adIndexForm_v4_Load);
				this->stuMana->ResumeLayout(false);
				this->stuMana->PerformLayout();
				this->statusStrip1->ResumeLayout(false);
				this->statusStrip1->PerformLayout();
				this->ResumeLayout(false);
				this->PerformLayout();

			}
#pragma endregion
		
		private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			DateTime monment = DateTime::Now;
			int year = monment.Year;
			int mon = monment.Month;
			int date = monment.Day;

			int h = monment.Hour;
			int m = monment.Minute;
			int s = monment.Second;

			String ^ dateStr = "当前时间：" + year.ToString() + "-" + mon.ToString() + "-" + date.ToString() + "  ";
			String ^ timeStr = (h % 12).ToString() + ":" + m.ToString() + ":" + s.ToString();
			this->NowData->Text = dateStr;
			this->NowTime->Text = timeStr;
		}
		private: System::Void 关于系统ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			HelpInfo ^help = gcnew HelpInfo();
			help->StartPosition = FormStartPosition::CenterScreen;
			help->Name = "help";
			help->Show();
		}
private: System::Void 修改密码ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	//updatePasswd ^reset = gcnew updatePasswd(this->name);
	updatePasswd ^reset = gcnew updatePasswd(this->thisLogin);
	reset->Name = "resetPasswd";
	reset->MdiParent = this;
	reset->StartPosition = FormStartPosition::CenterParent;
	reset->WindowState = FormWindowState::Maximized;
	reset->Show();
}

private: System::Void adIndexForm_v4_Load(System::Object^  sender, System::EventArgs^  e) {
	this->label1->Text = "欢 迎 ";
	this->label1->Text += this->thisLogin->getName();

}
private: System::Void 查询个人信息ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	stuInfo ^info = gcnew stuInfo(this->thisLogin);
	info->MdiParent = this;
	info->StartPosition = FormStartPosition::CenterParent;
	info->WindowState = FormWindowState::Maximized;
	info->Name = "stuInfo";
	info->Show();
}
private: System::Void 反馈信息处理ToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (Application::OpenForms[thisLogin->getName()] == nullptr)
	{
		feedbackStu ^feed = gcnew feedbackStu();
		feed->Name = thisLogin->getName();
		feed->Text = "学生反馈";
		feed->MdiParent = this;
		feed->StartPosition = FormStartPosition::CenterParent;
		feed->WindowState = FormWindowState::Maximized;
		feed->Show();
	}
	else
	{
		while (this->ActiveMdiChild != Application::OpenForms[thisLogin->getName()])
			this->ActiveMdiChild->Hide();
	}
}
};

}
