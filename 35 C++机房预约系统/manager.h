#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
#include"identity.h"
#include"student.h"
#include"teacher.h"
#include"computerRoom.h"
#include"globalFile.h"

//管理员类
class Manager : public Identity
{
public:

	//默认构造
	Manager();

	//有参构造
	Manager(string name, string password);

	//菜单界面
	virtual void showMenus();

	//添加账号
	void addPerson();

	//查看账号
	void showPerson();

	//查看机房信息
	void showComputer();

	//清空预约纪录
	void clearFile();

	//初始化容器
	void initVector();

	//检查重复(true表示重复 false表示不重复)
	bool checkRepeat(int id, int type);

	//学生容器
	vector<Student> vStu;

	//老师容器
	vector<Teacher> vTea;

	//机房信息
	vector<ComputerRoom> vCom;
};