#include<iostream>
using namespace std;

//�����ǳ����

//ǳ�������򵥵ĸ�ֵ����
//������ڶ�����������ռ� ���п�������

class Person5
{
public:
	int m_Age;
	int* m_Height;

	Person5()
	{
		cout << "Person5��Ĭ�Ϲ��캯������" << endl;
	}
	Person5(int age, int height)
	{
		m_Age = age;
		m_Height = new int(height);
		cout << "Person5���вι��캯������" << endl;
	}
	//�Լ�ʵ�ֿ������캯�� ���ǳ��������������
	Person5(const Person5& p)
	{
		
		m_Age = p.m_Age;
		//m_Height = p.m_Height; ������Ĭ�ϵĴ���
		//�������
		m_Height = new int(*p.m_Height);
		cout << "Person5�Ŀ������캯������" << endl;
	}

	~Person5()
	{
		//�������� �����������������ͷŲ���
		if (m_Height != NULL) {
			delete m_Height;
			m_Height = NULL;
		}
		cout << "Person5��������������" << endl;
	}
};

//����������ڶ������ٵ� һ��Ҫ�Լ�д���������캯�� ��ֹǳ�����������

void test_0()
{
	Person5 p1(18, 160);
	cout << "p1������Ϊ��" << p1.m_Age << "���Ϊ��" << *p1.m_Height << endl;

	Person5 p2(p1);
	cout << "p2������Ϊ��" << p2.m_Age << "���Ϊ��" << *p2.m_Height << endl;

	//������ñ������ṩ�Ŀ������캯�� ����ǳ��������
	//ǳ����������������� �������ڴ��ظ��ͷ�
	//ǳ����������Ҫ����������
}

int main5()
{
	test_0();

	system("pause");
	return 0;
}