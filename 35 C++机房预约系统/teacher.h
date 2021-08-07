#pragma once
#include<iostream>
#include<string>
#include<vector>
using namespace std;
#include"identity.h"
#include"order.h"

//教师类
class Teacher : public Identity
{
public:

	//默认构造
	Teacher();

	//有参构造
	Teacher(int empId, string name, string password);

	//菜单界面
	virtual void showMenus();

	//查看所有预约
	void showAllOrder();

	//审核预约
	void validOrder();

	//教师编号
	int m_empId;
};