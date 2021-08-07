#include<iostream>
using namespace std;

//�������������
class MyInteger
{
	friend ostream& operator<< (ostream& cout, MyInteger myint);

private:
	int m_int;

public:
	MyInteger(int a)
	{
		m_int = a;
	}

	//����ǰ��++�����
	MyInteger& operator++() //����������Ϊ��һֱ��һ�������е�������
	{
		m_int++;
		return *this;
	}

	//���غ���++�����
	//int����ռλ���� ������������ǰ�úͺ��õ���
	MyInteger operator++(int) //���õ�������ֵ ��Ϊ��ʱֵ�ᱻ��� ���ܷ�������
	{
		//�ȷ��ؽ��
		MyInteger temp = *this;

		//�����
		m_int++;

		//��󷵻ؼ�¼���
		return temp;

	}
};

ostream& operator<< (ostream& out, MyInteger myint)
{
	out << myint.m_int;
	return out;
}

int main3()
{
	MyInteger myint(0);

	cout << ++myint << endl;
	cout << myint++ << endl;
	cout << myint << endl;

	system("pause");
	return 0;
}