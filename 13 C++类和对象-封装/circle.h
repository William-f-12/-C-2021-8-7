#pragma once //防止头文件重复包含
#include<iostream>
#include"point.h"
using namespace std;

//圆类
class Circle
{
private:
	int m_R;
	Point m_Center;

public:
	void setR(int r); //设置半径

	int getR(); //获取半径

	void setCenter(Point center); //设置圆心

	Point getCenter(); //获取圆心
};