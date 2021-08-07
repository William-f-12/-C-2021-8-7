#include<iostream>
using namespace std;

//������
class AbstractDrinking
{
public:
	//��ˮ
	virtual void Boil() = 0;

	//����
	virtual void Brew() = 0;

	//���뱭��
	virtual void PourInCup() = 0;

	//���븨��
	virtual void PutSomething() = 0;

	//������Ʒ
	void makeDrink()
	{
		Boil();
		Brew();
		PourInCup();
		PutSomething();
	}
};

//��������
class Coffee : public AbstractDrinking
{
	//��ˮ
	virtual void Boil()
	{
		cout << "��ũ��ɽȪ" << endl;
	}

	//����
	virtual void Brew()
	{
		cout << "���ݿ���" << endl;
	}

	//���뱭��
	virtual void PourInCup()
	{
		cout << "������˱���" << endl;
	}

	//���븨��
	virtual void PutSomething()
	{
		cout << "�����Ǻ�ţ��" << endl;
	}
};

//������
class Tea : public AbstractDrinking
{
	//��ˮ
	virtual void Boil()
	{
		cout << "��ɽȪˮ" << endl;
	}

	//����
	virtual void Brew()
	{
		cout << "���ݲ�Ҷ" << endl;
	}

	//���뱭��
	virtual void PourInCup()
	{
		cout << "����豭��" << endl;
	}

	//���븨��
	virtual void PutSomething()
	{
		cout << "��������" << endl;
	}
};

void doWork(AbstractDrinking* abs)
{
	abs->makeDrink();
	delete abs;
}

int main4()
{
	doWork(new Coffee); //��������
	cout << "--------------" << endl;
	doWork(new Tea);	//������Ҷ

	system("pause");
	return 0;
}