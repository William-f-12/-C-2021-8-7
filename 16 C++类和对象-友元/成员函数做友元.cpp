#include<iostream>
#include<string>
using namespace std;

class Building2;
class GoodGuy
{
public:
	GoodGuy();
	~GoodGuy();
	Building2* building;

	void visit();  //让visit函数可以访问building中的私有成员
	void visit2(); //让visit2函数不可以访问
};

class Building2
{
friend void GoodGuy::visit();
public:
	string m_SittingRoom;

private:
	string m_BedRoom;

public:
	Building2();
};

GoodGuy::GoodGuy()
{
	building = new Building2;
}
GoodGuy::~GoodGuy()
{
	delete building;
}

void GoodGuy::visit()
{
	cout << "visit正在访问：" << building->m_SittingRoom << endl;
	cout << "visit正在访问：" << building->m_BedRoom << endl;
}

void GoodGuy::visit2()
{
	cout << "visit2正在访问：" << building->m_SittingRoom << endl;
	//cout << "visit正在访问：" << building->m_BedRoom << endl;
}

Building2::Building2()
{
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}

int main()
{
	GoodGuy gg;
	gg.visit();
	gg.visit2();

	system("pause");
	return 0;
}