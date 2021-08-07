#include<iostream>
#include<string>
using namespace std;

//友元的目的就是让一个函数或者类访问另一个类中的私有成员
//友元的关键字为friend

//建筑物类
class Building
{
	//goodGuy全局函数是Building的好朋友 可以访问私有成员
	friend void goodGuy(Building* building);

public:
	string m_SittingRoom;

private:
	string m_BedRoom;

public:
	Building()
	{
		m_SittingRoom = "客厅";
		m_BedRoom = "卧室";
	}
};

//全局函数
void goodGuy(Building* building)
{
	cout << "好基友正在访问：" << building->m_SittingRoom << endl;

	cout << "好基友正在访问：" << building->m_BedRoom << endl;
}

void test01()
{
	Building building;
	goodGuy(&building);
}

int main1()
{
	test01();

	system("pause");
	return 0;
}