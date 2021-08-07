#include<iostream>
#include"circle.h"
#include"point.h"
using namespace std;

////����
//class Point
//{
//private:
//	int m_X;
//	int m_Y;
//
//public:
//	void setX(int x) //����xֵ
//	{
//		m_X = x;
//	}
//	int getX() //��ȡxֵ
//	{
//		return m_X;
//	}
//
//	void setY(int y) //����yֵ
//	{
//		m_Y = y;
//	}
//	int getY() //��ȡyֵ
//	{
//		return m_Y;
//	}
//};

////Բ��
//class Circle
//{
//private:
//	int m_R;
//	Point m_Center;
//
//public:
//	void setR(int r) //���ð뾶
//	{
//		m_R = r;
//	}
//	int getR() //��ȡ�뾶
//	{
//		return m_R;
//	}
//
//	void setCenter(Point center) //����Բ��
//	{
//		m_Center = center;
//	}
//	Point getCenter() //��ȡԲ��
//	{
//		return m_Center;
//	}
//};

//�жϵ��Բ��ϵ
void isInCircle(Circle& c, Point& p)
{
	int d = 
		(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());

	if (d < c.getR() * c.getR()) {
		cout << "����Բ��" << endl;
	}
	else if (d == c.getR() * c.getR()) {
		cout << "����Բ��" << endl;
	}
	else {
		cout << "����Բ��" << endl;
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