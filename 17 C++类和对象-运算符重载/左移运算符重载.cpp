#include<iostream>
using namespace std;

//�������������
class People
{
friend ostream& operator<<(ostream& cout, People& p); //����Ԫ����ȫ�ֺ�������˽�г�Ա

public:
	People(int a, int b)
	{
		m_A = a;
		m_B = b;
	}

private:
	int m_A;
	int m_B;

	//ͨ�������ó�Ա����������������� ��Ϊ�޷�ʵ��cout�����
	/*void operator<<( cout )
	{

	}*/
};

//ֻ������ȫ�ֺ����������������
ostream& operator<<(ostream &cout, People &p)
{
	cout << "m_A = " << p.m_A << " p.m_B = " << p.m_B;
	return cout;
}

int main2()
{
	People p(10, 10);
	cout << p << endl;

	system("pause");
	return 0;
}