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
		e.m_name = "员工";
		e.m_name += nameSeed[i];
		e.m_salary = rand() % 10000 + 10000;

		vEmployee.push_back(e);
	}
}

void setGroup(vector<employee>& v, multimap<int, employee>& m)
{
	for (vector<employee>::iterator it = v.begin(); it != v.end(); it++)
	{
		//产生随机部门编号
		int deptId = rand() % 3; //0, 1, 2

		//将员工插入到分组中
		//key部门编号 value员工
		m.insert(make_pair(deptId, *it));
	}
}

void showEmployeeByGroup(multimap<int ,employee>& m)
{
	cout << "策划部门：" << endl;
	multimap<int, employee>::iterator pos = m.find(CEHUA);
	int count = m.count(CEHUA); // 统计策划部门人数
	int index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "姓名: " << pos->second.m_name << " 工资: " << pos->second.m_salary << endl;
	}

	cout << "--------------------------" << endl;
	cout << "美术部门：" << endl;
	pos = m.find(MEISHU);
	count = m.count(MEISHU);
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "姓名: " << pos->second.m_name << " 工资: " << pos->second.m_salary << endl;
	}

	cout << "--------------------------" << endl;
	cout << "研发部门：" << endl;
	pos = m.find(YANFA);
	count = m.count(YANFA);
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "姓名: " << pos->second.m_name << " 工资: " << pos->second.m_salary << endl;
	}
}

int main()
{
	srand((unsigned int)time(NULL));

	//1. 创建员工
	vector<employee> vEmployee;
	createEmployee(vEmployee);

	//2. 分组
	multimap<int, employee> mEmployee;
	setGroup(vEmployee, mEmployee);

	//3. 分组显示员工
	showEmployeeByGroup(mEmployee);

	////测试
	//for (vector<employee>::iterator it = vEmployee.begin(); it != vEmployee.end(); it++)
	//{
	//	cout << "姓名： " << it->m_name << " 工资： " << it->m_salary << endl;
	//}

	system("pause");
	return 0;
}