#include<iostream>
using namespace std;

int main1()
{
	//if, else, else-if���, Ƕ�����
	int score = 0;
	cout << "�������" << endl;
	cin >> score;
	cout << "����Ϊ: " << score << endl;

	if (score > 600) {
		cout << "��ϲ��һ����ѧ��" << endl;
		if (score > 700) { cout << "����" << endl; }
		else if (score > 650) { cout << "�廪��" << endl; }
		else { cout << "�˴�" << endl; }
	}
	else if (score > 500) {
		cout << "�ٽ�����!������" << endl;
	}
	else if (score > 400) {
		cout << "������" << endl;
	}
	else {
		cout << "��ҪŬ����" << endl;
	}

	//��Ŀ�����
	//���ʽ1 �� ���ʽ2 �� ���ʽ3
	//������ʽ1Ϊ�棬ִ�в����ر��ʽ2������ִ�в����ر��ʽ3
	int a = 10;
	int b = 20;
	int c = 0;

	c = (a > b ? a : b);
	cout << "c = " << c << endl;
	//��C++����Ŀ��������ص��Ǳ��������Լ�����ֵ
	(a > b ? a : b) = 100;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	//switch���
	int score1 = 0;
	cout << "�����Ӱ��֣� " << endl;
	cin >> score1; 

	switch (score1) 
	{
	case 10:
		cout << "����" << endl;
		break;
	case 9:	case 8:
		cout << "�ܺ�" << endl;
		break;
	case 7:	case 6:
		cout << "һ��" << endl;
		break;
	default:
		cout << "��Ƭ" << endl;
		break;
	}
	//switchȱ��:�ж���ֻ�������ͻ����ַ��ͣ���������һ������
	//switch�ŵ�:�ṹ������ִ��Ч�ʸ�

	system("pause");

	return 0;
}