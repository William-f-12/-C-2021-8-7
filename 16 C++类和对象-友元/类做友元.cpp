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

//��������
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

//����д��Ա����
Goodguy::Goodguy()
{
	//�������������
	building = new Building1;
}
Goodguy::~Goodguy()
{
	delete building;
}

void Goodguy::visit()
{
	cout << "�û������ڷ��ʣ�" << building->m_SittingRoom << endl;
	cout << "�û������ڷ��ʣ�" << building->m_BedRoom << endl;
}

Building1::Building1()
{
	m_SittingRoom = "����";
	m_BedRoom = "����";
}

int main2()
{
	Goodguy gg;
	gg.visit();

	system("pause");
	return 0;
}