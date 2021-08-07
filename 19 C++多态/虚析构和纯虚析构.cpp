#include<iostream>
#include<string>
using namespace std;

//��̬ʹ��ʱ ��������������Կ��ٵ����� ��ô����ָ�����ͷ�ʱ�޷����õ��������������
//�����ʽ�� �������е�����������Ϊ ������ ���� ��������

//�������ʹ����������ԣ�
// -���Խ������ָ���ͷ��������
// -����Ҫ�о���ĺ���ʵ��
//�������ʹ�����������
// -����Ǵ������� �������ڳ����� �޷�ʵ��������

//�������﷨��	virtual ~����() {}
//���������﷨�� virtual ~����() = 0;		����::~����() {}

class animal
{
public:
	virtual void speak() = 0; //���麯��

	animal()
	{
		cout << "animal�Ĺ��캯������" << endl;
	}
	//virtual ~animal() //�������������Խ�� ����ָ���ͷ��������ʱ���ɾ�������
	//{
	//	cout << "animal��������������" << endl;
	//}

	virtual ~animal() = 0; //�������� ���˴������� ������ɳ�����
};
animal::~animal() //���������ĺ���ʵ��
{
	cout << "animal�Ĵ���������������" << endl;
}

class cat : public animal
{
public:
	string* m_Name;

	cat(string name)
	{
		cout << "cat�Ĺ��캯������" << endl;
		m_Name = new string(name);
	}
	~cat()
	{
		if (m_Name != NULL)
		{
			cout << "cat��������������" << endl;
			delete m_Name;
			m_Name = NULL;
		}
	}

	virtual void speak()
	{
		cout << *m_Name << "Сè��˵��" << endl;
	}
};

//���������û�ж������� ���Բ�д�������ʹ�������

int main5()
{
	animal* animal = new cat("Tom");
	animal->speak();
	delete animal; //����ָ��������ʱ ������������������������� ��������������ж�ȡ���� �ᵼ���ڴ�й©

	system("pause");
	return 0;
}