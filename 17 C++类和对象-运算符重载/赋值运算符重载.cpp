#include<iostream>
using namespace std;

//��ֵ���������
//C++��������һ�������4������
// 1. Ĭ�Ϲ��캯��
// 2. Ĭ����������
// 3. Ĭ�Ͽ�������
// 4. ��ֵ����� operator= �����Խ���ֵ����

class Human
{
public:
	int* m_Age;

	Human(int age)
	{
		m_Age = new int(age);
	}
	~Human()
	{
		if (m_Age != NULL) {
			delete m_Age;
			m_Age = NULL;
		}
	}

	Human& operator=(Human& h)
	{
		if (m_Age != NULL) {
			delete m_Age;
			m_Age = NULL;
		}
		m_Age = new int(*h.m_Age);
		return *this;
	}
};

int main4()
{
	Human p1(19);
	Human p2(10); 
	p2 = p1; //��ֵ����
	cout << "p1��������" << *p1.m_Age << endl;
	cout << "p2��������" << *p2.m_Age << endl;

	system("pause");
	return 0;
}