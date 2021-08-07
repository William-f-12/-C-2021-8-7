#include"manager.h"

//构造函数
Manager::Manager(int id, string name, int did)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = did;
}

//显示个人信息
void Manager::showInfo()
{
	cout << "职工编号： " << this->m_Id
		<< "\t职工姓名： " << this->m_Name
		<< "\t岗位： " << this->getDeptName()
		<< "\t岗位职责： 完成老板交给的任务并派发任务给员工" << endl;
}

//获取岗位信息
string Manager::getDeptName()
{
	return string("经理");
}