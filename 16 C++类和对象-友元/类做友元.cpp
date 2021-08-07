#include<iostream>
using namespace std;

class Building1;

class Goodguy
{
public:
	Building1* building;

	Goodguy();
	~Goodguy();
	void visit();
};

//建筑物类
class Building1
{
friend class Goodguy;

public:
	string m_SittingRoom;

private:
	string m_BedRoom;

public:
	Building1();
};

//类外写成员函数
Goodguy::Goodguy()
{
	//创建建筑物对象
	building = new Building1;
}
Goodguy::~Goodguy()
{
	delete building;
}

void Goodguy::visit()
{
	cout << "好基友正在访问：" << building->m_SittingRoom << endl;
	cout << "好基友正在访问：" << building->m_BedRoom << endl;
}

Building1::Building1()
{
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}

int main2()
{
	Goodguy gg;
	gg.visit();

	system("pause");
	return 0;
}