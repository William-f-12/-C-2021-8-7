#include"manager.h"

void printStu(Student& s)
{
	cout << "学号: " << s.m_id << "\t姓名: " << s.m_name << "\t密码: " << s.m_password << endl;
}

void printTea(Teacher& t)
{
	cout << "学号: " << t.m_empId << "\t姓名: " << t.m_name << "\t密码: " << t.m_password << endl;
}

void printCom(ComputerRoom& c)
{
	cout << "机房号: " << c.m_comId << "\t最大容量: " << c.m_maxNum << endl;
}

//默认构造
Manager::Manager() {}

//有参构造
Manager::Manager(string name, string password)
{
	this->m_name = name;
	this->m_password = password;

	//初始化老师和学生数组
	this->initVector();

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
void Manager::showMenus()
{
	//显示信息
	cout << "当前学生数量为: " << this->vStu.size() << endl;
	cout << "当前老师数量为: " << this->vTea.size() << endl;

	cout << "欢迎管理员 " << this->m_name << " 登录" << endl;
	cout << "\t\t----------------------------------------" << endl;
	cout << "\t\t|                                      |" << endl;
	cout << "\t\t|              1. 添加账号             |" << endl;
	cout << "\t\t|                                      |" << endl;
	cout << "\t\t|              2. 查看账号             |" << endl;
	cout << "\t\t|                                      |" << endl;
	cout << "\t\t|              3. 查看机房             |" << endl;
	cout << "\t\t|                                      |" << endl;
	cout << "\t\t|              4. 清空预约             |" << endl;
	cout << "\t\t|                                      |" << endl;
	cout << "\t\t|              0. 注销登录             |" << endl;
	cout << "\t\t|                                      |" << endl;
	cout << "\t\t----------------------------------------" << endl;
	cout << "请输入您的选择:" << endl;
}

//添加账号
void Manager::addPerson()
{
	cout << "请输入添加账号类型" << endl;
	cout << "1 - 添加学生" << endl;
	cout << "2 - 添加老师" << endl;

	string fileName; //文件名
	string tip; //输入提示
	string errorTip; //重复提示
	ofstream ofs; //文件对象

	//接受用户选择
	int select = 0;
	while (select != 1 && select != 2)
	{
		cout << "\n请输入您的选择:" << endl;
		cin >> select;
	}

	if (select == 1)
	{
		fileName = STUDENT_FILE;
		tip = "请输入学生编号";
		errorTip = "学生编号重复，请重新输入";
	}
	else
	{
		fileName = TEACHER_FILE;
		tip = "请输入职工编号";
		errorTip = "职工编号重复，请重新输入";
	}

	ofs.open(fileName, ios::out | ios::app);

	//账户信息
	int id;
	string name;
	string password;

	//用户输入
	cout << tip << endl;
	cin >> id;
	bool ret = this->checkRepeat(id, select);
	while (ret)
	{
		cout << errorTip << endl;
		cin >> id;
		ret = this->checkRepeat(id, select);
	}
	cout << "请输入姓名" << endl;
	cin >> name;
	cout << "请输入密码" << endl;
	cin >> password;

	//向文件中添加数据
	ofs << id << " " << name << " " << password << " " << endl;
	ofs.close();
	cout << "添加成功" << endl;
	//更新老师与学生容器
	this->initVector();
}

//查看账号
void Manager::showPerson()
{
	cout << "请输入查看账号类型" << endl;
	cout << "1 - 查看学生" << endl;
	cout << "2 - 查看老师" << endl;
	cout << "请输入您的选择:" << endl;
	int select = 0;
	cin >> select;

	if (select == 1)
	{
		//查看学生
		cout << "所有学生信息如下:" << endl;
		for_each(this->vStu.begin(), this->vStu.end(), printStu);
	}
	else if(select == 2)
	{
		//查看老师
		cout << "所有老师信息如下:" << endl;
		for_each(this->vTea.begin(), this->vTea.end(), printTea);
	}
	else
	{
		cout << "未知选项" << endl;
	}
}

//查看机房信息
void Manager::showComputer()
{
	cout << "机房信息如下:" << endl;
	for_each(this->vCom.begin(), this->vCom.end(), printCom);
}

//清空预约纪录
void Manager::clearFile()
{
	cout << "确定要清空预约吗？" << endl;
	cout << "1 - 确定" << endl;
	cout << "2 - 取消" << endl;
	cout << "请输入您的选择:" << endl;
	int select = 0;
	cin >> select;
	if (select != 1)
	{
		cout << "取消清空" << endl;
		return;
	}
	ofstream ofs;
	ofs.open(ORDER_FILE, ios::trunc);
	ofs.close();
	cout << "预约已清空" << endl;
}

//初始化容器
void Manager::initVector()
{
	this->vStu.clear();
	this->vTea.clear();

	//读取学生文件中信息
	ifstream ifs;
	ifs.open(STUDENT_FILE, ios::in);
	if (ifs.is_open())
	{
		//创建vector
		Student s;
		while (ifs >> s.m_id && ifs >> s.m_name && ifs >> s.m_password)
		{
			this->vStu.push_back(s);
		}
	}
	ifs.close();

	//读取老师文件中信息
	ifs.open(TEACHER_FILE, ios::in);
	if (ifs.is_open())
	{
		//创建vector
		Teacher t;
		while (ifs >> t.m_empId && ifs >> t.m_name && ifs >> t.m_password)
		{
			this->vTea.push_back(t);
		}
	}
	ifs.close();
}

//检查重复(true表示重复 false表示不重复)
bool Manager::checkRepeat(int id, int type)
{
	//检查学生
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
	//检查老师
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