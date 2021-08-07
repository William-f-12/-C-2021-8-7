#include<iostream>
#include<ctime>
#include"speechManager.h"
using namespace std;

int main()
{
	srand((unsigned int)time(NULL));

	//创建管理类对象
	SpeechManager sm;

	//用于存储用户输入
	int choice = 0;

	while (true)
	{
		//显示菜单
		sm.showMenus();

		//用户输入
		cout << "请输入您的选择: " << endl;
		cin >> choice;

		switch (choice)
		{
		case 1: //开始比赛
			sm.startSpeech();
			break;
		case 2: //查看往届比赛记录
			sm.showRecord();
			break;
		case 3: //清空比赛记录
			sm.clearRecord();
			break;
		case 0: //退出系统
			sm.exitSystem();
			break;
		default:
			break;
		}
		
		//清屏
		system("pause");
		system("cls");
	}

	return 0;
}