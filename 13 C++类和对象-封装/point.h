#pragma once //防止头文件重复包含
#include<iostream>
using namespace std;

//点类
class Point
{
private:
	int m_X;
	int m_Y;

public:
	void setX(int x); //设置x值

	int getX(); //获取x值

	void setY(int y); //设置y值

	int getY(); //获取y值
};