#include<iostream>
using namespace std;

//����̳и���� �����ഴ������ Ҳ����ø���Ĺ��캯��

class Base
{
public:
	Base()
	{
		cout << "Base�Ĺ��캯��" << endl;
	}
	~Base()
	{
		cout << "Base����������" << endl;
	}
};

class Son :public Base
{
public:
	Son()
	{
		cout << "Son�Ĺ��캯��" << endl;
	}
	~Son()
	{
		cout << "Son����������" << endl;
	}
};

void test3()
{
	Son s;

	//�̳��еĹ��������˳�����£�
	//�ȹ��츸�� �ڹ������� 
	//�����빹���˳���෴
}

int main4()
{
	test3();

	system("pause");
	return 0;
}