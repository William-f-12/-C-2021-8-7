#include<iostream>
using namespace std;

//����ģ�������̳��� ��Ҫע�⣺
// - ������̳еĸ�����һ����ģ��ʱ ������������ʱ�� Ҫָ����������T������
// - �����ָ�� �������޷�������������ڴ�
// - ��������ָ����������T������ ����Ҳ���Ϊ��ģ��

template<class T>
class Base
{
public:
	T m;
};

//class Son :public Base //���� ����Ҫ֪�������е�T���� ���ܼ̳и�����
class Son1 : public Base<int>
{

};

//���ָ��������T����
template<class T1, class T2>
class Son2 : public Base<T1>
{
	T2 m;
};

int main5()
{
	Son1 s1;
	Son2<char, int> s2;

	system("pause");
	return 0;
}