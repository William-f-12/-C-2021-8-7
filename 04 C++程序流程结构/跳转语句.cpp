#include<iostream>
using namespace std;

int main()
{
	//break: 
	//	1. ��switch��������У���������ֹcase������switch
	cout << "ѡ�񸱱��Ѷ�:" << endl;
	cout << "1. ��ͨ" << endl;
	cout << "2. �е�" << endl;
	cout << "3. ����" << endl;

	int select = 0;
	cin >> select;

	switch (select) {
	case 1:
		cout << "��ѡ�������ͨ�Ѷ�" << endl;
		break;
	case 2:
		cout << "��ѡ������е��Ѷ�" << endl;
		break;
	case 3:
		cout << "��ѡ����������Ѷ�" << endl;
		break;
	}

	//	2. ��ѭ������У�������������ǰ��ѭ�����
	for (int i = 0; i < 10; i++) {
		if (i == 5) { break; }
		cout << i << endl;
	}

	//	3. ��Ƕ��ѭ���У�����������ڲ�ѭ�����
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (j == 5) { break; }
			cout << "* ";
		}
		cout << endl;
	}

	//continue: ��ѭ������У���������ѭ����������δִ�е���䣬ִ����һ��ѭ��
	for (int i = 0; i <= 100; i++) {
		if (i % 2 == 0) { continue; }
		cout << i << endl;
	}

	//goto ���: �����ǵ����ƴ��ڣ�ִ�е�goto���ʱ������ת����ǵ�λ��
	cout << "1. xxxx" << endl;

	cout << "2. xxxx" << endl;
	
	goto FLAG;
	
	cout << "3. xxxx" << endl;
	
	cout << "4. xxxx" << endl;

	FLAG:
	
	cout << "5. xxxx" << endl;

	system("pause");

	return 0;
}