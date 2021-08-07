#include<iostream>
#include<fstream>
#include<string>
using namespace std;
#include"globalFile.h"
#include"identity.h"
#include"student.h"
#include"teacher.h"
#include"manager.h"

//�������Ա�˵�����
void managerMenu(Identity*& manager)
{
	while (true)
	{
		//���ù���Ա�Ӳ˵�
		manager->showMenus();

		//�������ָ��תΪ����ָ��
		Manager* man = (Manager*)manager;

		//�����û�ѡ��
		int select = 0;
		cin >> select;

		switch (select)
		{
		case 1: //����˺�
			man->addPerson();
			break;
		case 2: //�鿴�˺�
			man->showPerson();
			break;
		case 3: //�鿴������Ϣ
			man->showComputer();
			break;
		case 4: //���ԤԼ
			man->clearFile();
			break;
		case 0: //ע����¼
			delete manager; //���ٶ�������
			cout << "ע���ɹ�" << endl;
			return;
			break;
		default:
			cout << "δʶ������" << endl;
			break;
		}

		//����
		system("pause");
		system("cls");
	}
}

//����ѧ���˵�
void studentMenu(Identity*& student)
{
	while (true)
	{
		//���ù���Ա�Ӳ˵�
		student->showMenus();

		//�������ָ��תΪ����ָ��
		Student* stu = (Student*)student;

		//�����û�ѡ��
		int select = 0;
		cin >> select;

		switch (select)
		{
		case 1: //����ԤԼ
			stu->applyOrder();
			break;
		case 2: //�鿴�ҵ�ԤԼ
			stu->showMyOrder();
			break;
		case 3: //�鿴����ԤԼ
			stu->showAllOrder();
			break;
		case 4: //ȡ��ԤԼ
			stu->cancelOrder();
			break;
		case 0: //ע����¼
			delete student; //���ٶ�������
			cout << "ע���ɹ�" << endl;
			return;
			break;
		default:
			cout << "δʶ������" << endl;
			break;
		}

		//����
		system("pause");
		system("cls");
	}
}

//������ʦ�˵�
void teacherMenu(Identity*& teacher)
{
	while (true)
	{
		//���ù���Ա�Ӳ˵�
		teacher->showMenus();

		//�������ָ��תΪ����ָ��
		Teacher* tea = (Teacher*)teacher;

		//�����û�ѡ��
		int select = 0;
		cin >> select;

		switch (select)
		{
		case 1: //�鿴����ԤԼ
			tea->showAllOrder();
			break;
		case 2: //���ԤԼ
			tea->validOrder();
			break;
		case 0: //ע����¼
			delete teacher; //���ٶ�������
			cout << "ע���ɹ�" << endl;
			return;
			break;
		default:
			cout << "δʶ������" << endl;
			break;
		}

		//����
		system("pause");
		system("cls");
	}
}

//��¼����
void Login(string fileName, int type)
{
	Identity* person = NULL;

	ifstream ifs;
	ifs.open(fileName, ios::in);

	//�ж��ļ��Ƿ����
	if (!ifs.is_open())
	{
		cout << "�ļ�������" << endl;
		ifs.close();
		return;
	}

	//׼�������û���Ϣ
	int id = 0;
	string name;
	string password;

	//�ж����
	if (type == 1) //ѧ�����
	{
		cout << "������ѧ��:" << endl;
		cin >> id;
	}
	else if (type == 2) //��ʦ���
	{
		cout << "������ְ����:" << endl;
		cin >> id;
	}

	cout << "�������û���:" << endl;
	cin >> name;

	cout << "����������:" << endl;
	cin >> password;

	//ѧ�������֤
	if (type == 1)
	{
		int fId;
		string fName;
		string fPassword;
		while (ifs >> fId && ifs >> fName && ifs >> fPassword)
		{
			//��֤��¼
			if (fId == id && fName == name && fPassword == password)
			{
				cout << "��֤�ɹ�" << endl;
				system("pause");
				system("cls");
				person = new Student(id, name, password);
				//����ѧ���˵�
				studentMenu(person);
				return;
			}
		}
	}
	//��ʦ�����֤
	else if (type == 2)
	{
		int fId;
		string fName;
		string fPassword;
		while (ifs >> fId && ifs >> fName && ifs >> fPassword)
		{
			//��֤��¼
			if (fId == id && fName == name && fPassword == password)
			{
				cout << "��֤�ɹ�" << endl;
				system("pause");
				system("cls");
				person = new Teacher(id, name, password);
				//������ʦ�˵�
				teacherMenu(person);
				return;
			}
		}
	}
	//����Ա�����֤
	else if (type == 3)
	{
		string fName;
		string fPassword;
		while (ifs >> fName && ifs >> fPassword)
		{
			//��֤��¼
			if (fName == name && fPassword == password)
			{
				cout << "��֤�ɹ�" << endl;
				system("pause");
				system("cls");
				person = new Manager(name, password);
				//�������Ա�˵�
				managerMenu(person);
				return;
			}
		}
	}

	cout << "��֤��¼ʧ��" << endl;
}

int main()
{
	while (true)
	{
		cout << "============================= ����ԤԼϵͳ =============================" << endl;
		cout << "��ѡ�����:" << endl;
		cout << "\t\t----------------------------------------" << endl;
		cout << "\t\t|                                      |" << endl;
		cout << "\t\t|              1. ѧ������             |" << endl;
		cout << "\t\t|                                      |" << endl;
		cout << "\t\t|              2. ��   ʦ              |" << endl;
		cout << "\t\t|                                      |" << endl;
		cout << "\t\t|              3. �� �� Ա             |" << endl;
		cout << "\t\t|                                      |" << endl;
		cout << "\t\t|              0. ��   ��              |" << endl;
		cout << "\t\t|                                      |" << endl;
		cout << "\t\t----------------------------------------" << endl;
		cout << "����������ѡ��:" << endl;

		int select = 0;
		cin >> select;

		switch (select)
		{
		case 1: //ѧ��
			Login(STUDENT_FILE, 1);
			break;
		case 2: //��ʦ
			Login(TEACHER_FILE, 2);
			break;
		case 3: //����Ա
			Login(ADMIN_FILE, 3);
			break;
		case 0: //�˳�
			cout << "��ӭ��һ��ʹ��" << endl;
			system("pause");
			return 0;
		default:
			break;
		}

		system("pause");
		system("cls");
	}
}