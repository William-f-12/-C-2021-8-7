#include<iostream>
using namespace std;
#include"workerManager.h"


int main()
{
	//ʵ���������߶���
	workerManager wm;

	int choice = 0;
	while (1) {
		//չʾ�˵�
		wm.showMenu();
		cout << "����������ѡ��" << endl;
		cin >> choice;

		switch (choice)
		{
		case 0: //�˳�ϵͳ
			wm.exitSystem();
			break;
		case 1: //���ְ��
			wm.addWorker();
			break;
		case 2: //��ʾְ��
			wm.showWorker();
			break;
		case 3: //ɾ��ְ��
			wm.deleteWorker();
			break;
		case 4: //�޸�ְ��
			wm.modWorker();
			break;
		case 5: //����ְ��
			wm.findWorker();
			break;
		case 6: //����ְ��
			wm.sortWorker();
			break;
		case 7: //����ļ�
			wm.clearFile();
			break;
		default:
			cout << "δ֪ѡ��" << endl;
			break;
		}

		//��������
		system("pause");
		system("cls");
	}
	
	system("pause");
	return 0;
}