#include<iostream>
using namespace std;

//�̳�ʵ��ҳ��
//�̳еĺô��������ظ�����
//�﷨��class ���� : �̳з�ʽ ����

//����Ҳ��Ϊ ������
//����Ҳ��Ϊ ����

//����ҳ����
class BasePage
{
public:
	void header()
	{
		cout << "��ҳ�������Σ���¼��ע�ᡭ��������ͷ����" << endl;
	}
	void footer()
	{
		cout << "��ϵ��ʽ����ַ�������ײ���" << endl;
	}
};

//javaҳ��
class Java :public BasePage
{
public:
	void content()
	{
		cout << "JAVAѧ����Ƶ" << endl;
	}
};

//pythonҳ��
class Python :public BasePage
{
public:
	void content()
	{
		cout << "Pythonѧ����Ƶ" << endl;
	}
};

//c++ҳ��
class CPP :public BasePage
{
public:
	void content()
	{
		cout << "C++ѧ����Ƶ" << endl;
	}
};

void test1()
{
	cout << "JAVAҳ��" << endl;
	Java ja;
	ja.header();
	ja.content();
	ja.footer();

	cout << "Pythonҳ��" << endl;
	Python py;
	py.header();
	py.content();
	py.footer();

	cout << "C++ҳ��" << endl;
	CPP c;
	c.header();
	c.content();
	c.footer();
}

int main1()
{
	test1();

	system("pause");
	return 0;
}