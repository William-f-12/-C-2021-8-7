#include<iostream>
#include<ctime>
#include"speechManager.h"
using namespace std;

int main()
{
	srand((unsigned int)time(NULL));

	//�������������
	SpeechManager sm;

	//���ڴ洢�û�����
	int choice = 0;

	while (true)
	{
		//��ʾ�˵�
		sm.showMenus();

		//�û�����
		cout << "����������ѡ��: " << endl;
		cin >> choice;

		switch (choice)
		{
		case 1: //��ʼ����
			sm.startSpeech();
			break;
		case 2: //�鿴���������¼
			sm.showRecord();
			break;
		case 3: //��ձ�����¼
			sm.clearRecord();
			break;
		case 0: //�˳�ϵͳ
			sm.exitSystem();
			break;
		default:
			break;
		}
		
		//����
		system("pause");
		system("cls");
	}

	return 0;
}