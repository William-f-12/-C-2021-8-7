#pragma once //��ֹͷ�ļ��ظ�����
#include<iostream>
using namespace std;

//����
class Point
{
private:
	int m_X;
	int m_Y;

public:
	void setX(int x); //����xֵ

	int getX(); //��ȡxֵ

	void setY(int y); //����yֵ

	int getY(); //��ȡyֵ
};