//STL�ڽ���һЩ��������
//���ࣺ
// - �����º���
// - ��ϵ�º���
// - �߼��º���
//�÷���
// ��Щ�º��������Ķ��� �÷���һ�㺯����ȫ��ͬ
// ʹ���ڽ��������� ��Ҫ����ͷ�ļ� #include<functional>

#include<iostream>
#include<functional>
using namespace std;

//�����º���
// - template<class T> T plus<T> �ӷ��º���
// - template<class T> T munus<T> �����º���
// - template<class T> T multiplies<T> �˷��º���
// - template<class T> T divides<T> �����º���
// - template<class T> T modulus<T> ȡģ�º���
// - template<class T> T negate<T> ȡ���º���

//����negate��һԪ���� �������Ƕ�Ԫ����

void test03()
{
	negate<int> n;
	cout << n(10) << endl;

	plus<int> p;
	cout << "1 + 2 = " << p(1, 2) << endl;
}

int main3()
{
	test03();

	system("pause");
	return 0;
}