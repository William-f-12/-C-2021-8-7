#include<iostream>
#include<string>
using namespace std;

//��ϵ��������� ���бȽ�

class P
{
public:
	string m_Name;
	int m_Age;

	P(string name, int age)
	{
		m_Name = name;
		m_Age = age;
	}

	bool operator==(P p)
	{
		if (m_Name == p.m_Name && m_Age == p.m_Age) {
			return true;
		}
		else {
			return false;
		}
	}

	bool operator!=(P p)
	{
		if (m_Name == p.m_Name && m_Age == p.m_Age) {
			return false;
		}
		else {
			return true;
		}
	}
};

int main5()
{
	P p1("Tom", 18);
	P p2("Tim", 19);

	if (p1 == p2) {
		cout << "p1 == p2" << endl;
	}

	if (p1 != p2) {
		cout << "p1 != p2" << endl;
	}

	system("pause");
	return 0;
}