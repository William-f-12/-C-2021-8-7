#include<iostream>
using namespace std;

//立方体类
class Cube
{
private:
	int m_L; //长
	int m_W; //宽
	int m_H; //高

public:
	//设置长
	void setL(int l)
	{
		m_L = l;
	}
	//获取长
	int getL()
	{
		return m_L;
	}
	//设置宽
	void setW(int w)
	{
		m_W = w;
	}
	//获取宽
	int getW()
	{
		return m_W;
	}
	//设置高
	void setH(int h)
	{
		m_H = h;
	}
	//获取高
	int getH()
	{
		return m_H;
	}

	//获取表面积
	int Sulface()
	{
		return 2 * m_L * m_W + 2 * m_W * m_H + 2 * m_H * m_L;
	}

	//获取体积
	int Volume()
	{
		return m_L * m_W * m_H;
	}

	//判断是否相等
	bool isSame(Cube& c)
	{
		if (m_L == c.getL() && m_W == c.getW() && m_H == c.getH()) {
			return true;
		}
		else {
			return false;
		}
	}
};

//利用全局函数判断两个立方体是否相等
bool isSame(Cube& c1, Cube& c2)
{
	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH()) {
		return true;
	}
	else {
		return false;
	}
}

int main4()
{
	Cube c1;
	c1.setL(10);
	c1.setW(15);
	c1.setH(20);

	cout << "c1的面积为：" << c1.Sulface() << endl;
	cout << "c1的体积为：" << c1.Volume() << endl;

	Cube c2;
	c2.setL(10);
	c2.setW(10);
	c2.setH(20);

	if (isSame(c1, c2)) {
		cout << "相等" << endl;
	}
	else {
		cout << "不相等" << endl;
	}

	if (c1.isSame(c2)) {
		cout << "相等" << endl;
	}
	else {
		cout << "不相等" << endl;
	}

	system("pause");

	return 0;
}