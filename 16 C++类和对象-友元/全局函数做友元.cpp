#include<iostream>
#include<string>
using namespace std;

//��Ԫ��Ŀ�ľ�����һ�����������������һ�����е�˽�г�Ա
//��Ԫ�Ĺؼ���Ϊfriend

//��������
class Building
{
	//goodGuyȫ�ֺ�����Building�ĺ����� ���Է���˽�г�Ա
	friend void goodGuy(Building* building);

public:
	string m_SittingRoom;

private:
	string m_BedRoom;

public:
	Building()
	{
		m_SittingRoom = "����";
		m_BedRoom = "����";
	}
};

//ȫ�ֺ���
void goodGuy(Building* building)
{
	cout << "�û������ڷ��ʣ�" << building->m_SittingRoom << endl;

	cout << "�û������ڷ��ʣ�" << building->m_BedRoom << endl;
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