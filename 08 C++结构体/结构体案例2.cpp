#include<iostream>
#include<string>
using namespace std;

struct hero
{
	string name;
	int age;
	string sex;
};

//ð������
void bubbleSort(hero heroArray[], int len)
{
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			if (heroArray[j].age > heroArray[j + 1].age) {
				hero temp = heroArray[j];
				heroArray[j] = heroArray[j + 1];
				heroArray[j + 1] = temp;
			}
		}
	}
}

int main8()
{
	hero heroArray[3] =
	{
		{"��", 23, "��"},
		{"��", 22, "��"},
		{"��", 20, "��"},
	};

	int len = sizeof(heroArray) / sizeof(heroArray[0]);
	for (int i = 0; i < len; i++) {
		cout << heroArray[i].name << heroArray[i].age << heroArray[i].sex << endl;
	}

	bubbleSort(heroArray, len);

	for (int i = 0; i < len; i++) {
		cout << heroArray[i].name << heroArray[i].age << heroArray[i].sex << endl;
	}

	system("pause");

	return 0;
}