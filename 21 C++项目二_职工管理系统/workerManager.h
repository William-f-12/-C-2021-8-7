#pragma once // 防止头文件重复包含
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
#include"worker.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"

#define FileName "workerFile.txt"

class workerManager
{
public:	
	int m_WorkerNum; //记录职工人数
	Worker** m_WorkerArray; //职工数组指针
	bool m_FileIsEmpty; //标志文件是都为空

	//构造函数
	workerManager();

	//析构函数
	~workerManager();

	//显示菜单
	void showMenu();

	//退出系统
	void exitSystem();

	//添加职工
	void addWorker();

	//保存文件
	void save();

	//统计人数
	int getWorkerNum();

	//初始化数组
	void initWorker();

	//显示职工
	void showWorker();

	//判断职工是否存在 存在返回位置 不存在返回-1
	int IsExist(int id);

	//删除职工
	void deleteWorker();

	//修改职工
	void modWorker();

	//查找职工
	void findWorker();

	//排序职工
	void sortWorker();

	//清空文件
	void clearFile();
};