#include<iostream>
#include<map>
#include<string>
#include<vector>
#include<ctime>
using namespace std;
#define CEHUA  0
#define MEISHU 1
#define YANFA  2

class employee
{
public:
	string m_name;
	int m_salary;
};

void createEmployee(vector<employee>& vEmployee)
{
	string nameSeed = "ABCDEFGHIJ";
	for (int i = 0; i < 10; i++)
	{
		employee e;
		e.m_name = "Ա��";
		e.m_name += nameSeed[i];
		e.m_salary = rand() % 10000 + 10000;

		vEmployee.push_back(e);
	}
}

void setGroup(vector<employee>& v, multimap<int, employee>& m)
{
	for (vector<employee>::iterator it = v.begin(); it != v.end(); it++)
	{
		//����������ű��
		int deptId = rand() % 3; //0, 1, 2

		//��Ա�����뵽������
		//key���ű�� valueԱ��
		m.insert(make_pair(deptId, *it));
	}
}

void showEmployeeByGroup(multimap<int ,employee>& m)
{
	cout << "�߻����ţ�" << endl;
	multimap<int, employee>::iterator pos = m.find(CEHUA);
	int count = m.count(CEHUA); // ͳ�Ʋ߻���������
	int index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "����: " << pos->second.m_name << " ����: " << pos->second.m_salary << endl;
	}

	cout << "--------------------------" << endl;
	cout << "�������ţ�" << endl;
	pos = m.find(MEISHU);
	count = m.count(MEISHU);
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "����: " << pos->second.m_name << " ����: " << pos->second.m_salary << endl;
	}

	cout << "--------------------------" << endl;
	cout << "�з����ţ�" << endl;
	pos = m.find(YANFA);
	count = m.count(YANFA);
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "����: " << pos->second.m_name << " ����: " << pos->second.m_salary << endl;
	}
}

int main()
{
	srand((unsigned int)time(NULL));

	//1. ����Ա��
	vector<employee> vEmployee;
	createEmployee(vEmployee);

	//2. ����
	multimap<int, employee> mEmployee;
	setGroup(vEmployee, mEmployee);

	//3. ������ʾԱ��
	showEmployeeByGroup(mEmployee);

	////����
	//for (vector<employee>::iterator it = vEmployee.begin(); it != vEmployee.end(); it++)
	//{
	//	cout << "������ " << it->m_name << " ���ʣ� " << it->m_salary << endl;
	//}

	system("pause");
	return 0;
}