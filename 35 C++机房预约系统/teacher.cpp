#include"teacher.h"

//默认构造
Teacher::Teacher() {}

//有参构造
Teacher::Teacher(int empId, string name, string password)
{
	this->m_empId = empId;
	this->m_name = name;
	this->m_password = password;
}

//菜单界面
void Teacher::showMenus()
{
	cout << "欢迎教师 " << this->m_name << " 登录" << endl;
	cout << "\t\t----------------------------------------" << endl;
	cout << "\t\t|                                      |" << endl;
	cout << "\t\t|              1. 查看所有预约         |" << endl;
	cout << "\t\t|                                      |" << endl;
	cout << "\t\t|              2. 审核预约             |" << endl;
	cout << "\t\t|                                      |" << endl;
	cout << "\t\t|              0. 注销登录             |" << endl;
	cout << "\t\t|                                      |" << endl;
	cout << "\t\t----------------------------------------" << endl;
	cout << "请输入您的选择:" << endl;
}

//查看所有预约
void Teacher::showAllOrder()
{
	Order order;
	if (order.m_size == 0)
	{
		cout << "无预约记录" << endl;
		return;
	}

	for (int i = 0; i < order.m_size; i++)
	{
		cout << "学生姓名: " << order.m_allOrders[i]["stuName"];
		cout << "\t学生学号: " << order.m_allOrders[i]["stuId"];
		cout << "\t预约日期: 周" << order.m_allOrders[i]["date"];
		cout << "\t时间段: " << (order.m_allOrders[i]["interval"] == "1" ? "上午" : "下午");
		cout << "\t机房号: " << order.m_allOrders[i]["room"];
		string status = "\t状态: ";
		//1 - 审核中、 2 - 预约成功、 3 - 预约失败、 0 - 预约取消
		if (order.m_allOrders[i]["status"] == "1")
		{
			status += "审核中";
		}
		else if (order.m_allOrders[i]["status"] == "2")
		{
			status += "预约成功";
		}
		else if (order.m_allOrders[i]["status"] == "3")
		{
			status += "预约失败";
		}
		else
		{
			status += "预约已取消";
		}
		cout << status << endl;
	}
}

//审核预约
void Teacher::validOrder()
{
	Order order;
	if (order.m_size == 0)
	{
		cout << "无预约记录" << endl;
		return;
	}

	vector<int> orderIdx;
	int index = 0;
	bool is_find = false;
	for (int i = 0; i < order.m_size; i++)
	{
		//显示需审核的预约
		if (order.m_allOrders[i]["status"] == "1")
		{
			//找到了
			orderIdx.push_back(i);
			index++;
			is_find = true;
			cout << "预约编号" << index << ":";
			cout << "\t学生姓名: " << order.m_allOrders[i]["stuName"];
			cout << "\t学生学号: " << order.m_allOrders[i]["stuId"];
			cout << "\t预约日期: 周" << order.m_allOrders[i]["date"];
			cout << "\t时间段: " << (order.m_allOrders[i]["interval"] == "1" ? "上午" : "下午");
			cout << "\t机房号: " << order.m_allOrders[i]["room"] << endl;
		}
	}

	if (!is_find)
	{
		cout << "没有在审核中的预约" << endl;
		return;
	}

	cout << "\n请输入要审核的预约编号:" << endl;
	int select = 0;
	cin >> select;
	if (select < 1 || select > index)
	{
		cout << "未知编号" << endl;
		return;
	}
	int changeId = orderIdx[select - 1];

	cout << "\n请选择审核结果:" << endl;
	cout << "1 - 通过" << endl;
	cout << "2 - 不通过" << endl;
	select = 0;
	while (select > 2 || select < 1)
	{
		cout << "请输入1-2:" << endl;
		cin >> select;
	}

	//修改状态
	if (select == 1)
	{
		order.m_allOrders[changeId]["status"] = "2";
	}
	else
	{
		order.m_allOrders[changeId]["status"] = "3";
	}
	order.updateOrder();
	cout << "审核成功" << endl;
}