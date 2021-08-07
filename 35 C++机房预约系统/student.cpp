#include"student.h"

//默认构造
Student::Student() {}

//有参构造
Student::Student(int id, string name, string password)
{
	this->m_id = id;
	this->m_name = name;
	this->m_password = password;

	//初始化机房信息
	ifstream ifs;
	ifs.open(COMPUTER_FILE, ios::in);

	ComputerRoom com;
	while (ifs >> com.m_comId && ifs >> com.m_maxNum)
	{
		this->vCom.push_back(com);
	}
	ifs.close();
}

//菜单界面
void Student::showMenus()
{
	cout << "欢迎学生 " << this->m_name << " 登录" << endl;
	cout << "\t\t----------------------------------------" << endl;
	cout << "\t\t|                                      |" << endl;
	cout << "\t\t|              1. 申请预约             |" << endl;
	cout << "\t\t|                                      |" << endl;
	cout << "\t\t|              2. 查看我的预约         |" << endl;
	cout << "\t\t|                                      |" << endl;
	cout << "\t\t|              3. 查看所有预约         |" << endl;
	cout << "\t\t|                                      |" << endl;
	cout << "\t\t|              4. 取消预约             |" << endl;
	cout << "\t\t|                                      |" << endl;
	cout << "\t\t|              0. 注销登录             |" << endl;
	cout << "\t\t|                                      |" << endl;
	cout << "\t\t----------------------------------------" << endl;
	cout << "请输入您的选择:" << endl;
}

//申请预约
void Student::applyOrder()
{
	int date = 0; //日期
	int interval = 0; //时间段
	int room = 0; //机房编号

	//用户输入
	cout << "机房开放的时间为周一至周五" << endl;
	cout << "请输入申请预约的时间" << endl;
	cout << "1 - 周一" << endl;
	cout << "2 - 周二" << endl;
	cout << "3 - 周三" << endl;
	cout << "4 - 周四" << endl;
	cout << "5 - 周五" << endl;
	while (date > 5 || date < 1)
	{
		cout << "请输入1-5:" << endl;
		cin >> date;
	}

	cout << "请输入申请预约的时间段" << endl;
	cout << "1 - 上午" << endl;
	cout << "2 - 下午" << endl;
	while (interval > 2 || interval < 1)
	{
		cout << "请输入1-2:" << endl;
		cin >> interval;
	}

	cout << "请输入申请预约的机房编号" << endl;
	for (int i = 0; i < this->vCom.size(); i++)
	{
		cout << vCom[i].m_comId << "号机房容量为: " << vCom[i].m_maxNum << endl;
	}
	while (room > this->vCom.size() || room < 1)
	{
		cout << "请输入想申请的机房编号:" << endl;
		cin >> room;
	}
	cout << "预约成功，审核中" << endl;

	ofstream ofs;
	ofs.open(ORDER_FILE, ios::app);
	ofs << "date:" << date << " ";
	ofs << "interval:" << interval << " ";
	ofs << "room:" << room << " ";
	ofs << "stuId:" << this->m_id << " ";
	ofs << "stuName:" << this->m_name << " ";
	ofs << "status:" << 1 << endl;
}

//查看自身预约
void Student::showMyOrder()
{
	Order order;
	if (order.m_size == 0)
	{
		cout << "无预约记录" << endl;
		return;
	}

	bool is_find = false;
	for (int i = 0; i < order.m_size; i++)
	{
		//寻找自身预约
		if (atoi(order.m_allOrders[i]["stuId"].c_str()) == this->m_id)
		{
			is_find = true; //找到了
			cout << "预约日期: 周" << order.m_allOrders[i]["date"];
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
	if (!is_find)
	{
		cout << "未找到记录" << endl;
	}
}

//查看所有预约
void Student::showAllOrder()
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

//取消预约
void Student::cancelOrder()
{
	Order order;
	if (order.m_size == 0)
	{
		cout << "无预约记录" << endl;
		return;
	}

	cout << "只有审核中或预约成功的申请能取消\n" << endl;

	vector<int> orderIdx;
	int index = 0;
	bool is_find = false;
	for (int i = 0; i < order.m_size; i++)
	{
		//寻找自身预约
		if (atoi(order.m_allOrders[i]["stuId"].c_str()) == this->m_id)
		{
			if (order.m_allOrders[i]["status"] == "1" || order.m_allOrders[i]["status"] == "2")
			{
				//找到了
				orderIdx.push_back(i);
				index++;
				is_find = true;
				cout << "记录" << index << ":";
				cout << "\t预约日期: 周" << order.m_allOrders[i]["date"];
				cout << "\t时间段: " << (order.m_allOrders[i]["interval"] == "1" ? "上午" : "下午");
				cout << "\t机房号: " << order.m_allOrders[i]["room"];
				string status = "\t状态: ";
				//1 - 审核中、 2 - 预约成功
				if (order.m_allOrders[i]["status"] == "1")
				{
					status += "审核中";
				}
				else if (order.m_allOrders[i]["status"] == "2")
				{
					status += "预约成功";
				}
				cout << status << endl;
			}
		}
	}
	if (!is_find)
	{
		cout << "未找到记录" << endl;
		return;
	}

	cout << "\n请输入要取消的记录编号:" << endl;
	int select = 0;
	cin >> select;
	if (select < 1 || select > index)
	{
		cout << "未知编号" << endl;
		return;
	}

	int changeId = orderIdx[select - 1];
	order.m_allOrders[changeId]["status"] = "0";
	order.updateOrder();
	
	cout << "预约已取消" << endl;
}