#include <iostream>
using namespace std;

//C++����һ����̳ж����
//�﷨�� class ���� ���̳з�ʽ ����1�� �̳з�ʽ ����2...
//��̳п��ܻ�������������ͬ����Ա���� ��Ҫ������������
//ʵ�ʿ����� ����ʹ��

class Base1
{
public:
	int a;

	Base1()
	{
		a = 100;
	}
};

class Base2
{
public:
	int a;
	int b;

	Base2()
	{
		a = 50;
		b = 200;
	}
};

//����
class Son02 : public Base1, public Base2
{
public:
	int c;
	int d;

	Son02()
	{
		c = 300;
		d = 400;
	}
};

void test6()
{
	Son02 s;
	cout << "size of son02: " << sizeof(s) << endl;

	//�������г���ͬ����Ա ��Ҫ������������
	cout << "Base1::a = " << s.Base1::a << endl; //����Base1�е�a
	cout << "Base2::a = " << s.Base2::a << endl; //����Base2�е�a
}

int main7()
{
	test6();

	system("pause");
	return 0;
}