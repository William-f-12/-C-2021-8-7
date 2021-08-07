//��������
//���
// - ���غ������ò��������� ����󳣳�Ϊ��������
// - ��������ʹ�����ص�()ʱ ��Ϊ���ƺ������� Ҳ�зº���
//���ʣ�
// ��������(�º���)��һ���� ����һ������

//���������ʹ��
//�ص㣺
// - ����������ʹ��ʱ ��������ͨ������������ �����в��� �����з���ֵ
// - �������󳬳���ͨ�����ĸ��� ��������������Լ���״̬
// - �������������Ϊ��������

#include<iostream>
#include<string>
using namespace std;

// 1. ����������ʹ��ʱ ��������ͨ������������ �����в��� �����з���ֵ
class MyAdd
{
public:
	int operator()(int v1, int v2)
	{
		return v1 + v2;
	}
};

void test01()
{
	MyAdd myAdd;
	cout << myAdd(10, 10) << endl;
}

// 2. �������󳬳���ͨ�����ĸ��� ��������������Լ���״̬
class MyPrint
{
public:
	int count; // �ڲ��Լ�״̬

	MyPrint()
	{
		this->count = 0;
	}

	void operator()(string s)
	{
		cout << s << endl;
		this->count++;
	}
};

void test02()
{
	MyPrint myPrint;
	myPrint("hello world");
	myPrint("hello world");
	myPrint("hello world");

	cout << "myPrint���ô���Ϊ��" << myPrint.count << endl;
}

// 3. �������������Ϊ��������
void doPrint(MyPrint& mp, string s)
{
	mp(s);
}

void test03()
{
	MyPrint myPrint;
	doPrint(myPrint, "hello C++");
}

int main()
{
	test01();
	test02();
	test03();

	system("pause");
	return 0;
}