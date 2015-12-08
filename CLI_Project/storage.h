#pragma once
#include "memberInfo.h"
#include <fstream>
#include <iostream>
using namespace std;

namespace ManagementSystemV5 {
	using namespace System::Data::Odbc;
	using namespace System::IO;
	public ref class Storage
	{
	private:
		OdbcConnection^ Conn;
		OdbcDataAdapter ^adapter;
		DataSet^ set;

		void dbConnect()
		{
			Conn = gcnew OdbcConnection("DSN=ManagementSystemV5;UI=root;PWD=tk;");
			String^ sql = "select* from schoolmember;";
			adapter = gcnew OdbcDataAdapter(sql, Conn);
			set = gcnew DataSet();
			adapter->Fill(set, "schoolmember");
		}
		DataRow^ getRowById(char* id)
		{
			DataTable^ table = set->Tables["schoolmember"];
			DataRow^ newRow;
			array<DataColumn^>^ keys = gcnew array<DataColumn^>(2);
			keys[0] = table->Columns["id"];
			table->PrimaryKey = keys;
			string str = id;
			String^ Str = gcnew String(str.c_str());
			try {
				newRow = table->Rows->Find(Str);
			}
			catch (MissingPrimaryKeyException^)
			{
				MessageBox::Show("û�з�����");
				return nullptr;
			}
			return newRow;
		}
		void persistent()
		{
			DataSet^ updateSet;
			try
			{
				updateSet = set->GetChanges();
				if (updateSet)
				{
					OdbcCommandBuilder^ b = gcnew OdbcCommandBuilder(adapter);
					adapter->Update(updateSet, "schoolmember");
					set->AcceptChanges();
				}
			}
			catch (Exception^)
			{
				MessageBox::Show("store erro");
			}
		}

	public:
		SchoolMember* readSchoolMemberInfo(char *id)
		{
			SchoolMember*  p1 = new SchoolMember();
			fstream f;
			char path[50];
			sprintf(path, "D:\\stu\\%s.dat", id);
			f.open(path, ios::in | ios::binary);
			f.read((char*)p1, sizeof(SchoolMember));
			f.close();
			return p1;
		}
		void writeSchoolMemberInfo(SchoolMember *p)
		{
			fstream f;
			char path[50];
			sprintf(path, "D:\\stu\\%s %s.dat", p->getId(),p->getName());
			f.open(path, ios::out | ios::binary);
			f.write((char*)p, sizeof(SchoolMember));
			f.close();
		}
		cli::array<String^>^ readAllFileName()
		{
			String^ pattern = "*.dat";
			IO::DirectoryInfo ^directoryInfo = gcnew DirectoryInfo("D://stu//");
			cli::array<FileInfo^>^fileCollection  = directoryInfo->GetFiles(pattern);
			cli::array<String^>^ retString = gcnew cli::array<String^>(fileCollection->Length);
			for (int i = 0; i < fileCollection->Length; i++)
			{
				retString[i] = fileCollection[i]->Name->Substring(0,fileCollection[i]->Name->IndexOf("."));
			}
			return retString;
		}
		SchoolMember* readSchoolMemberInfoDB(char *id)
		{
			dbConnect();
			DataRow^ row = getRowById(id);
			if (row != nullptr)
			{
				SchoolMember* pm1 = new SchoolMember();
				char name[20];
				char province[10];
				char city[10];
				sprintf(name, "%s", (String^)row["name"]);
				sprintf(province, "%s", (String^)row["province"]);
				sprintf(city, "%s", (String^)row["city"]);
				pm1->setId(id);
				pm1->setName(name);
				pm1->setBirthPlace(province,city);
				pm1->setAge((int)row["age"]);
				pm1->setSex((int)row["sex"]);
				return pm1;
			}
			return nullptr;
		}
		void writeSchoolMemberInfoDB(SchoolMember *p)
		{
			dbConnect();
			DataTable^ table = set->Tables["schoolmember"];
			DataRow^ row;
			DataRow^ newRow = table->NewRow();
			string str;
			str = p->getId();
			newRow["id"] = gcnew String(str.c_str());
			str = p->getName();
			newRow["name"] = gcnew String(str.c_str());
			newRow["sex"] = p->getSex();
			newRow["age"] = p->getAge();
			char *province;
			char *city;
			p->getBirthPlace(province,city);
			str = province;
			str += city;
			newRow["homeCity"] = gcnew String(str.c_str());
			row = getRowById(p->getId());
			if (row != nullptr) //�޸�
			{
				row->Delete();	//���Լ򵥵���ɾ��,������,Ҳ����ֱ���޸�row
			
			}
			table->Rows->Add(newRow);
			persistent();
		}
	};
	
}