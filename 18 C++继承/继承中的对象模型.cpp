#include<iostream>
using namespace std;

//�̳��еĶ����е�

class Base
{
public:
	int a;
protected:
	int b;
private:
	int c;
};

class son :public Base
{
public:
	int d;
};

void test2()
{
	cout << "size of son = " << sizeof(son) << endl; //16
	//���������зǾ�̬��Ա���Զ��ᱻ����̳���ȥ
	//����������˽�г�Ա�����Ǳ��������������� ��˷��ʲ��� ��ȷʵ���̳���ȥ��
}

//���ÿ�����Ա������ʾ���߲鿴����ģ��
//ת���̷� �磺F:
//ת���ļ�·����cd ����·����
//�鿴����: cl /d1 reportSingleClassLayout���� �ļ���

int main3()
{
	test2();

	system("pause");
	return 0;
}