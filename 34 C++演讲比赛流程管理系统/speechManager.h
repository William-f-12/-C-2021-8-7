#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<map>
#include<deque>
#include<algorithm>
#include<functional>
#include<numeric>
#include"speaker.h"
using namespace std;

//演讲比赛管理类
class SpeechManager
{
public:
	//成员属性
	//第一轮选手编号容器
	vector<int> v1;

	//第二轮选手编号容器
	vector<int> v2;

	//前三名选手编号容器
	vector<int> v3;

	//存放编号以及对于具体选手容器
	map<int, Speaker> m_Speaker;

	//存放比赛轮数
	int m_Index;

	//文件为空标志
	bool fileIsEmpty;

	//存储往届记录用的容器
	map<int, vector<string>> m_record;

	
	//构造函数
	SpeechManager();

	//初始化容器和属性
	void initSpeech();

	//创建比赛选手
	void createSpeaker();

	//显示菜单
	void showMenus();

	//开始比赛
	void startSpeech();

	//抽签
	void speechDraw();

	//比赛
	void speechContest();

	//显示结果
	void showResult();

	//保存
	void saveResult();

	//加载往届比赛记录
	void loadRecord();

	//查看往届比赛记录
	void showRecord();

	//清空往届记录
	void clearRecord();

	//退出系统
	void exitSystem();

	//析构函数
	~SpeechManager();
};