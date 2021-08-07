#include<iostream>
using namespace std;
#include"workerManager.h"


int main()
{
	//实例化管理者对象
	workerManager wm;

	int choice = 0;
	while (1) {
		//展示菜单
		wm.showMenu();
		cout << "请输入您的选择：" << endl;
		cin >> choice;

		switch (choice)
		{
		case 0: //退出系统
			wm.exitSystem();
			break;
		case 1: //添加职工
			wm.addWorker();
			break;
		case 2: //显示职工
			wm.showWorker();
			break;
		case 3: //删除职工
			wm.deleteWorker();
			break;
		case 4: //修改职工
			wm.modWorker();
			break;
		case 5: //查找职工
			wm.findWorker();
			break;
		case 6: //排序职工
			wm.sortWorker();
			break;
		case 7: //清空文件
			wm.clearFile();
			break;
		default:
			cout << "未知选项" << endl;
			break;
		}

		//清屏操作
		system("pause");
		system("cls");
	}
	
	system("pause");
	return 0;
}