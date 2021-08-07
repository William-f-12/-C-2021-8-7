#include<iostream>
using namespace std;

//��������
class Cube
{
private:
	int m_L; //��
	int m_W; //��
	int m_H; //��

public:
	//���ó�
	void setL(int l)
	{
		m_L = l;
	}
	//��ȡ��
	int getL()
	{
		return m_L;
	}
	//���ÿ�
	void setW(int w)
	{
		m_W = w;
	}
	//��ȡ��
	int getW()
	{
		return m_W;
	}
	//���ø�
	void setH(int h)
	{
		m_H = h;
	}
	//��ȡ��
	int getH()
	{
		return m_H;
	}

	//��ȡ�����
	int Sulface()
	{
		return 2 * m_L * m_W + 2 * m_W * m_H + 2 * m_H * m_L;
	}

	//��ȡ���
	int Volume()
	{
		return m_L * m_W * m_H;
	}

	//�ж��Ƿ����
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

//����ȫ�ֺ����ж������������Ƿ����
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

	cout << "c1�����Ϊ��" << c1.Sulface() << endl;
	cout << "c1�����Ϊ��" << c1.Volume() << endl;

	Cube c2;
	c2.setL(10);
	c2.setW(10);
	c2.setH(20);

	if (isSame(c1, c2)) {
		cout << "���" << endl;
	}
	else {
		cout << "�����" << endl;
	}

	if (c1.isSame(c2)) {
		cout << "���" << endl;
	}
	else {
		cout << "�����" << endl;
	}

	system("pause");

	return 0;
}