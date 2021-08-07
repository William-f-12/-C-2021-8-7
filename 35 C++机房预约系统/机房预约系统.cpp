#include<iostream>
#include<fstream>
#include<string>
using namespace std;
#include"globalFile.h"
#include"identity.h"
#include"student.h"
#include"teacher.h"
#include"manager.h"

//进入管理员菜单界面
void managerMenu(Identity*& manager)
{
	while (true)
	{
		//调用管理员子菜单
		manager->showMenus();

		//将父类的指针转为子类指针
		Manager* man = (Manager*)manager;

		//接受用户选项
		int select = 0;
		cin >> select;

		switch (select)
		{
		case 1: //添加账号
			man->addPerson();
			break;
		case 2: //查看账号
			man->showPerson();
			break;
		case 3: //查看机房信息
			man->showComputer();
			break;
		case 4: //清空预约
			man->clearFile();
			break;
		case 0: //注销登录
			delete manager; //销毁堆区对象
			cout << "注销成功" << endl;
			return;
			break;
		default:
			cout << "未识别命令" << endl;
			break;
		}

		//清屏
		system("pause");
		system("cls");
	}
}

//进入学生菜单
void studentMenu(Identity*& student)
{
	while (true)
	{
		//调用管理员子菜单
		student->showMenus();

		//将父类的指针转为子类指针
		Student* stu = (Student*)student;

		//接受用户选项
		int select = 0;
		cin >> select;

		switch (select)
		{
		case 1: //申请预约
			stu->applyOrder();
			break;
		case 2: //查看我的预约
			stu->showMyOrder();
			break;
		case 3: //查看所有预约
			stu->showAllOrder();
			break;
		case 4: //取消预约
			stu->cancelOrder();
			break;
		case 0: //注销登录
			delete student; //销毁堆区对象
			cout << "注销成功" << endl;
			return;
			break;
		default:
			cout << "未识别命令" << endl;
			break;
		}

		//清屏
		system("pause");
		system("cls");
	}
}

//进入老师菜单
void teacherMenu(Identity*& teacher)
{
	while (true)
	{
		//调用管理员子菜单
		teacher->showMenus();

		//将父类的指针转为子类指针
		Teacher* tea = (Teacher*)teacher;

		//接受用户选项
		int select = 0;
		cin >> select;

		switch (select)
		{
		case 1: //查看所有预约
			tea->showAllOrder();
			break;
		case 2: //审核预约
			tea->validOrder();
			break;
		case 0: //注销登录
			delete teacher; //销毁堆区对象
			cout << "注销成功" << endl;
			return;
			break;
		default:
			cout << "未识别命令" << endl;
			break;
		}

		//清屏
		system("pause");
		system("cls");
	}
}

//登录功能
void Login(string fileName, int type)
{
	Identity* person = NULL;

	ifstream ifs;
	ifs.open(fileName, ios::in);

	//判断文件是否存在
	if (!ifs.is_open())
	{
		cout << "文件不存在" << endl;
		ifs.close();
		return;
	}

	//准备接受用户信息
	int id = 0;
	string name;
	string password;

	//判断身份
	if (type == 1) //学生身份
	{
		cout << "请输入学号:" << endl;
		cin >> id;
	}
	else if (type == 2) //老师身份
	{
		cout << "请输入职工号:" << endl;
		cin >> id;
	}

	cout << "请输入用户名:" << endl;
	cin >> name;

	cout << "请输入密码:" << endl;
	cin >> password;

	//学生身份验证
	if (type == 1)
	{
		int fId;
		string fName;
		string fPassword;
		while (ifs >> fId && ifs >> fName && ifs >> fPassword)
		{
			//验证登录
			if (fId == id && fName == name && fPassword == password)
			{
				cout << "验证成功" << endl;
				system("pause");
				system("cls");
				person = new Student(id, name, password);
				//进入学生菜单
				studentMenu(person);
				return;
			}
		}
	}
	//老师身份验证
	else if (type == 2)
	{
		int fId;
		string fName;
		string fPassword;
		while (ifs >> fId && ifs >> fName && ifs >> fPassword)
		{
			//验证登录
			if (fId == id && fName == name && fPassword == password)
			{
				cout << "验证成功" << endl;
				system("pause");
				system("cls");
				person = new Teacher(id, name, password);
				//进入老师菜单
				teacherMenu(person);
				return;
			}
		}
	}
	//管理员身份验证
	else if (type == 3)
	{
		string fName;
		string fPassword;
		while (ifs >> fName && ifs >> fPassword)
		{
			//验证登录
			if (fName == name && fPassword == password)
			{
				cout << "验证成功" << endl;
				system("pause");
				system("cls");
				person = new Manager(name, password);
				//进入管理员菜单
				managerMenu(person);
				return;
			}
		}
	}

	cout << "验证登录失败" << endl;
}

int main()
{
	while (true)
	{
		cout << "============================= 机房预约系统 =============================" << endl;
		cout << "请选择身份:" << endl;
		cout << "\t\t----------------------------------------" << endl;
		cout << "\t\t|                                      |" << endl;
		cout << "\t\t|              1. 学生代表             |" << endl;
		cout << "\t\t|                                      |" << endl;
		cout << "\t\t|              2. 老   师              |" << endl;
		cout << "\t\t|                                      |" << endl;
		cout << "\t\t|              3. 管 理 员             |" << endl;
		cout << "\t\t|                                      |" << endl;
		cout << "\t\t|              0. 退   出              |" << endl;
		cout << "\t\t|                                      |" << endl;
		cout << "\t\t----------------------------------------" << endl;
		cout << "请输入您的选择:" << endl;

		int select = 0;
		cin >> select;

		switch (select)
		{
		case 1: //学生
			Login(STUDENT_FILE, 1);
			break;
		case 2: //老师
			Login(TEACHER_FILE, 2);
			break;
		case 3: //管理员
			Login(ADMIN_FILE, 3);
			break;
		case 0: //退出
			cout << "欢迎下一次使用" << endl;
			system("pause");
			return 0;
		default:
			break;
		}

		system("pause");
		system("cls");
	}
}