#include<iostream>
#include"circle.h"
#include"point.h"
using namespace std;

////点类
//class Point
//{
//private:
//	int m_X;
//	int m_Y;
//
//public:
//	void setX(int x) //设置x值
//	{
//		m_X = x;
//	}
//	int getX() //获取x值
//	{
//		return m_X;
//	}
//
//	void setY(int y) //设置y值
//	{
//		m_Y = y;
//	}
//	int getY() //获取y值
//	{
//		return m_Y;
//	}
//};

////圆类
//class Circle
//{
//private:
//	int m_R;
//	Point m_Center;
//
//public:
//	void setR(int r) //设置半径
//	{
//		m_R = r;
//	}
//	int getR() //获取半径
//	{
//		return m_R;
//	}
//
//	void setCenter(Point center) //设置圆心
//	{
//		m_Center = center;
//	}
//	Point getCenter() //获取圆心
//	{
//		return m_Center;
//	}
//};

//判断点和圆关系
void isInCircle(Circle& c, Point& p)
{
	int d = 
		(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());

	if (d < c.getR() * c.getR()) {
		cout << "点在圆内" << endl;
	}
	else if (d == c.getR() * c.getR()) {
		cout << "点在圆上" << endl;
	}
	else {
		cout << "点在圆外" << endl;
	}
}

int main()
{
	Point center;
	center.setX(0);
	center.setY(10);

	Circle c1;
	c1.setCenter(center);
	c1.setR(10);

	Point p1;
	p1.setX(0);
	p1.setY(0);

	isInCircle(c1, p1);

	system("pause");

	return 0;
}