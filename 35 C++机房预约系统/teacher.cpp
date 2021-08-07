#include"teacher.h"

//Ĭ�Ϲ���
Teacher::Teacher() {}

//�вι���
Teacher::Teacher(int empId, string name, string password)
{
	this->m_empId = empId;
	this->m_name = name;
	this->m_password = password;
}

//�˵�����
void Teacher::showMenus()
{
	cout << "��ӭ��ʦ " << this->m_name << " ��¼" << endl;
	cout << "\t\t----------------------------------------" << endl;
	cout << "\t\t|                                      |" << endl;
	cout << "\t\t|              1. �鿴����ԤԼ         |" << endl;
	cout << "\t\t|                                      |" << endl;
	cout << "\t\t|              2. ���ԤԼ             |" << endl;
	cout << "\t\t|                                      |" << endl;
	cout << "\t\t|              0. ע����¼             |" << endl;
	cout << "\t\t|                                      |" << endl;
	cout << "\t\t----------------------------------------" << endl;
	cout << "����������ѡ��:" << endl;
}

//�鿴����ԤԼ
void Teacher::showAllOrder()
{
	Order order;
	if (order.m_size == 0)
	{
		cout << "��ԤԼ��¼" << endl;
		return;
	}

	for (int i = 0; i < order.m_size; i++)
	{
		cout << "ѧ������: " << order.m_allOrders[i]["stuName"];
		cout << "\tѧ��ѧ��: " << order.m_allOrders[i]["stuId"];
		cout << "\tԤԼ����: ��" << order.m_allOrders[i]["date"];
		cout << "\tʱ���: " << (order.m_allOrders[i]["interval"] == "1" ? "����" : "����");
		cout << "\t������: " << order.m_allOrders[i]["room"];
		string status = "\t״̬: ";
		//1 - ����С� 2 - ԤԼ�ɹ��� 3 - ԤԼʧ�ܡ� 0 - ԤԼȡ��
		if (order.m_allOrders[i]["status"] == "1")
		{
			status += "�����";
		}
		else if (order.m_allOrders[i]["status"] == "2")
		{
			status += "ԤԼ�ɹ�";
		}
		else if (order.m_allOrders[i]["status"] == "3")
		{
			status += "ԤԼʧ��";
		}
		else
		{
			status += "ԤԼ��ȡ��";
		}
		cout << status << endl;
	}
}

//���ԤԼ
void Teacher::validOrder()
{
	Order order;
	if (order.m_size == 0)
	{
		cout << "��ԤԼ��¼" << endl;
		return;
	}

	vector<int> orderIdx;
	int index = 0;
	bool is_find = false;
	for (int i = 0; i < order.m_size; i++)
	{
		//��ʾ����˵�ԤԼ
		if (order.m_allOrders[i]["status"] == "1")
		{
			//�ҵ���
			orderIdx.push_back(i);
			index++;
			is_find = true;
			cout << "ԤԼ���" << index << ":";
			cout << "\tѧ������: " << order.m_allOrders[i]["stuName"];
			cout << "\tѧ��ѧ��: " << order.m_allOrders[i]["stuId"];
			cout << "\tԤԼ����: ��" << order.m_allOrders[i]["date"];
			cout << "\tʱ���: " << (order.m_allOrders[i]["interval"] == "1" ? "����" : "����");
			cout << "\t������: " << order.m_allOrders[i]["room"] << endl;
		}
	}

	if (!is_find)
	{
		cout << "û��������е�ԤԼ" << endl;
		return;
	}

	cout << "\n������Ҫ��˵�ԤԼ���:" << endl;
	int select = 0;
	cin >> select;
	if (select < 1 || select > index)
	{
		cout << "δ֪���" << endl;
		return;
	}
	int changeId = orderIdx[select - 1];

	cout << "\n��ѡ����˽��:" << endl;
	cout << "1 - ͨ��" << endl;
	cout << "2 - ��ͨ��" << endl;
	select = 0;
	while (select > 2 || select < 1)
	{
		cout << "������1-2:" << endl;
		cin >> select;
	}

	//�޸�״̬
	if (select == 1)
	{
		order.m_allOrders[changeId]["status"] = "2";
	}
	else
	{
		order.m_allOrders[changeId]["status"] = "3";
	}
	order.updateOrder();
	cout << "��˳ɹ�" << endl;
}