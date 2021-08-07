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

	void visit();  //��visit�������Է���building�е�˽�г�Ա
	void visit2(); //��visit2���������Է���
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
	cout << "visit���ڷ��ʣ�" << building->m_SittingRoom << endl;
	cout << "visit���ڷ��ʣ�" << building->m_BedRoom << endl;
}

void GoodGuy::visit2()
{
	cout << "visit2���ڷ��ʣ�" << building->m_SittingRoom << endl;
	//cout << "visit���ڷ��ʣ�" << building->m_BedRoom << endl;
}

Building2::Building2()
{
	m_SittingRoom = "����";
	m_BedRoom = "����";
}

int main()
{
	GoodGuy gg;
	gg.visit();
	gg.visit2();

	system("pause");
	return 0;
}