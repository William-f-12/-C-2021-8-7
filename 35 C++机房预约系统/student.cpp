#include"student.h"

//Ĭ�Ϲ���
Student::Student() {}

//�вι���
Student::Student(int id, string name, string password)
{
	this->m_id = id;
	this->m_name = name;
	this->m_password = password;

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
void Student::showMenus()
{
	cout << "��ӭѧ�� " << this->m_name << " ��¼" << endl;
	cout << "\t\t----------------------------------------" << endl;
	cout << "\t\t|                                      |" << endl;
	cout << "\t\t|              1. ����ԤԼ             |" << endl;
	cout << "\t\t|                                      |" << endl;
	cout << "\t\t|              2. �鿴�ҵ�ԤԼ         |" << endl;
	cout << "\t\t|                                      |" << endl;
	cout << "\t\t|              3. �鿴����ԤԼ         |" << endl;
	cout << "\t\t|                                      |" << endl;
	cout << "\t\t|              4. ȡ��ԤԼ             |" << endl;
	cout << "\t\t|                                      |" << endl;
	cout << "\t\t|              0. ע����¼             |" << endl;
	cout << "\t\t|                                      |" << endl;
	cout << "\t\t----------------------------------------" << endl;
	cout << "����������ѡ��:" << endl;
}

//����ԤԼ
void Student::applyOrder()
{
	int date = 0; //����
	int interval = 0; //ʱ���
	int room = 0; //�������

	//�û�����
	cout << "�������ŵ�ʱ��Ϊ��һ������" << endl;
	cout << "����������ԤԼ��ʱ��" << endl;
	cout << "1 - ��һ" << endl;
	cout << "2 - �ܶ�" << endl;
	cout << "3 - ����" << endl;
	cout << "4 - ����" << endl;
	cout << "5 - ����" << endl;
	while (date > 5 || date < 1)
	{
		cout << "������1-5:" << endl;
		cin >> date;
	}

	cout << "����������ԤԼ��ʱ���" << endl;
	cout << "1 - ����" << endl;
	cout << "2 - ����" << endl;
	while (interval > 2 || interval < 1)
	{
		cout << "������1-2:" << endl;
		cin >> interval;
	}

	cout << "����������ԤԼ�Ļ������" << endl;
	for (int i = 0; i < this->vCom.size(); i++)
	{
		cout << vCom[i].m_comId << "�Ż�������Ϊ: " << vCom[i].m_maxNum << endl;
	}
	while (room > this->vCom.size() || room < 1)
	{
		cout << "������������Ļ������:" << endl;
		cin >> room;
	}
	cout << "ԤԼ�ɹ��������" << endl;

	ofstream ofs;
	ofs.open(ORDER_FILE, ios::app);
	ofs << "date:" << date << " ";
	ofs << "interval:" << interval << " ";
	ofs << "room:" << room << " ";
	ofs << "stuId:" << this->m_id << " ";
	ofs << "stuName:" << this->m_name << " ";
	ofs << "status:" << 1 << endl;
}

//�鿴����ԤԼ
void Student::showMyOrder()
{
	Order order;
	if (order.m_size == 0)
	{
		cout << "��ԤԼ��¼" << endl;
		return;
	}

	bool is_find = false;
	for (int i = 0; i < order.m_size; i++)
	{
		//Ѱ������ԤԼ
		if (atoi(order.m_allOrders[i]["stuId"].c_str()) == this->m_id)
		{
			is_find = true; //�ҵ���
			cout << "ԤԼ����: ��" << order.m_allOrders[i]["date"];
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
	if (!is_find)
	{
		cout << "δ�ҵ���¼" << endl;
	}
}

//�鿴����ԤԼ
void Student::showAllOrder()
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

//ȡ��ԤԼ
void Student::cancelOrder()
{
	Order order;
	if (order.m_size == 0)
	{
		cout << "��ԤԼ��¼" << endl;
		return;
	}

	cout << "ֻ������л�ԤԼ�ɹ���������ȡ��\n" << endl;

	vector<int> orderIdx;
	int index = 0;
	bool is_find = false;
	for (int i = 0; i < order.m_size; i++)
	{
		//Ѱ������ԤԼ
		if (atoi(order.m_allOrders[i]["stuId"].c_str()) == this->m_id)
		{
			if (order.m_allOrders[i]["status"] == "1" || order.m_allOrders[i]["status"] == "2")
			{
				//�ҵ���
				orderIdx.push_back(i);
				index++;
				is_find = true;
				cout << "��¼" << index << ":";
				cout << "\tԤԼ����: ��" << order.m_allOrders[i]["date"];
				cout << "\tʱ���: " << (order.m_allOrders[i]["interval"] == "1" ? "����" : "����");
				cout << "\t������: " << order.m_allOrders[i]["room"];
				string status = "\t״̬: ";
				//1 - ����С� 2 - ԤԼ�ɹ�
				if (order.m_allOrders[i]["status"] == "1")
				{
					status += "�����";
				}
				else if (order.m_allOrders[i]["status"] == "2")
				{
					status += "ԤԼ�ɹ�";
				}
				cout << status << endl;
			}
		}
	}
	if (!is_find)
	{
		cout << "δ�ҵ���¼" << endl;
		return;
	}

	cout << "\n������Ҫȡ���ļ�¼���:" << endl;
	int select = 0;
	cin >> select;
	if (select < 1 || select > index)
	{
		cout << "δ֪���" << endl;
		return;
	}

	int changeId = orderIdx[select - 1];
	order.m_allOrders[changeId]["status"] = "0";
	order.updateOrder();
	
	cout << "ԤԼ��ȡ��" << endl;
}