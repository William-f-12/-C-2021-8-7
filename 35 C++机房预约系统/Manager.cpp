#include"manager.h"

void printStu(Student& s)
{
	cout << "ѧ��: " << s.m_id << "\t����: " << s.m_name << "\t����: " << s.m_password << endl;
}

void printTea(Teacher& t)
{
	cout << "ѧ��: " << t.m_empId << "\t����: " << t.m_name << "\t����: " << t.m_password << endl;
}

void printCom(ComputerRoom& c)
{
	cout << "������: " << c.m_comId << "\t�������: " << c.m_maxNum << endl;
}

//Ĭ�Ϲ���
Manager::Manager() {}

//�вι���
Manager::Manager(string name, string password)
{
	this->m_name = name;
	this->m_password = password;

	//��ʼ����ʦ��ѧ������
	this->initVector();

	//��ʼ��������Ϣ
	ifstream ifs;
	ifs.open(COMPUTER_FILE, ios::in);
	
	ComputerRoom com;
	while (ifs >> com.m_comId && ifs >> com.m_maxNum)
	{
		this->vCom.push_back(com);
	}
	ifs.close();
}

//�˵�����
void Manager::showMenus()
{
	//��ʾ��Ϣ
	cout << "��ǰѧ������Ϊ: " << this->vStu.size() << endl;
	cout << "��ǰ��ʦ����Ϊ: " << this->vTea.size() << endl;

	cout << "��ӭ����Ա " << this->m_name << " ��¼" << endl;
	cout << "\t\t----------------------------------------" << endl;
	cout << "\t\t|                                      |" << endl;
	cout << "\t\t|              1. ����˺�             |" << endl;
	cout << "\t\t|                                      |" << endl;
	cout << "\t\t|              2. �鿴�˺�             |" << endl;
	cout << "\t\t|                                      |" << endl;
	cout << "\t\t|              3. �鿴����             |" << endl;
	cout << "\t\t|                                      |" << endl;
	cout << "\t\t|              4. ���ԤԼ             |" << endl;
	cout << "\t\t|                                      |" << endl;
	cout << "\t\t|              0. ע����¼             |" << endl;
	cout << "\t\t|                                      |" << endl;
	cout << "\t\t----------------------------------------" << endl;
	cout << "����������ѡ��:" << endl;
}

//����˺�
void Manager::addPerson()
{
	cout << "����������˺�����" << endl;
	cout << "1 - ���ѧ��" << endl;
	cout << "2 - �����ʦ" << endl;

	string fileName; //�ļ���
	string tip; //������ʾ
	string errorTip; //�ظ���ʾ
	ofstream ofs; //�ļ�����

	//�����û�ѡ��
	int select = 0;
	while (select != 1 && select != 2)
	{
		cout << "\n����������ѡ��:" << endl;
		cin >> select;
	}

	if (select == 1)
	{
		fileName = STUDENT_FILE;
		tip = "������ѧ�����";
		errorTip = "ѧ������ظ�������������";
	}
	else
	{
		fileName = TEACHER_FILE;
		tip = "������ְ�����";
		errorTip = "ְ������ظ�������������";
	}

	ofs.open(fileName, ios::out | ios::app);

	//�˻���Ϣ
	int id;
	string name;
	string password;

	//�û�����
	cout << tip << endl;
	cin >> id;
	bool ret = this->checkRepeat(id, select);
	while (ret)
	{
		cout << errorTip << endl;
		cin >> id;
		ret = this->checkRepeat(id, select);
	}
	cout << "����������" << endl;
	cin >> name;
	cout << "����������" << endl;
	cin >> password;

	//���ļ����������
	ofs << id << " " << name << " " << password << " " << endl;
	ofs.close();
	cout << "��ӳɹ�" << endl;
	//������ʦ��ѧ������
	this->initVector();
}

//�鿴�˺�
void Manager::showPerson()
{
	cout << "������鿴�˺�����" << endl;
	cout << "1 - �鿴ѧ��" << endl;
	cout << "2 - �鿴��ʦ" << endl;
	cout << "����������ѡ��:" << endl;
	int select = 0;
	cin >> select;

	if (select == 1)
	{
		//�鿴ѧ��
		cout << "����ѧ����Ϣ����:" << endl;
		for_each(this->vStu.begin(), this->vStu.end(), printStu);
	}
	else if(select == 2)
	{
		//�鿴��ʦ
		cout << "������ʦ��Ϣ����:" << endl;
		for_each(this->vTea.begin(), this->vTea.end(), printTea);
	}
	else
	{
		cout << "δ֪ѡ��" << endl;
	}
}

//�鿴������Ϣ
void Manager::showComputer()
{
	cout << "������Ϣ����:" << endl;
	for_each(this->vCom.begin(), this->vCom.end(), printCom);
}

//���ԤԼ��¼
void Manager::clearFile()
{
	cout << "ȷ��Ҫ���ԤԼ��" << endl;
	cout << "1 - ȷ��" << endl;
	cout << "2 - ȡ��" << endl;
	cout << "����������ѡ��:" << endl;
	int select = 0;
	cin >> select;
	if (select != 1)
	{
		cout << "ȡ�����" << endl;
		return;
	}
	ofstream ofs;
	ofs.open(ORDER_FILE, ios::trunc);
	ofs.close();
	cout << "ԤԼ�����" << endl;
}

//��ʼ������
void Manager::initVector()
{
	this->vStu.clear();
	this->vTea.clear();

	//��ȡѧ���ļ�����Ϣ
	ifstream ifs;
	ifs.open(STUDENT_FILE, ios::in);
	if (ifs.is_open())
	{
		//����vector
		Student s;
		while (ifs >> s.m_id && ifs >> s.m_name && ifs >> s.m_password)
		{
			this->vStu.push_back(s);
		}
	}
	ifs.close();

	//��ȡ��ʦ�ļ�����Ϣ
	ifs.open(TEACHER_FILE, ios::in);
	if (ifs.is_open())
	{
		//����vector
		Teacher t;
		while (ifs >> t.m_empId && ifs >> t.m_name && ifs >> t.m_password)
		{
			this->vTea.push_back(t);
		}
	}
	ifs.close();
}

//����ظ�(true��ʾ�ظ� false��ʾ���ظ�)
bool Manager::checkRepeat(int id, int type)
{
	//���ѧ��
	if (type == 1)
	{
		for (vector<Student>::iterator it = vStu.begin(); it != vStu.end(); it++)
		{
			if (id == it->m_id)
			{
				return true;
			}
		}
		return false;
	}
	//�����ʦ
	else
	{
		for (vector<Teacher>::iterator it = vTea.begin(); it != vTea.end(); it++)
		{
			if (id == it->m_empId)
			{
				return true;
			}
		}
		return false;
	}
}