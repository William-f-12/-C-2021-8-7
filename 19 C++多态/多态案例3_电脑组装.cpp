#include<iostream>
using namespace std;

//����ͬ�����
//����CPU��
class CPU
{
public:
	//����ļ��㺯��
	virtual void calculate() = 0;
};

//�����Կ���
class VideoCard
{
public:
	//�������ʾ����
	virtual void display() = 0;
};

//�����ڴ�����
class Memory
{
public:
	//����ļ��㺯��
	virtual void storage() = 0;
};

//���峧��
//intel����
class IntelCPU : public CPU
{
public:
	virtual void calculate()
	{
		cout << "Intel��cpu��ʼ������" << endl;
	}
};
class IntelVideoCard : public VideoCard
{
public:
	virtual void display()
	{
		cout << "Intel���Կ���ʼ��ʾ��" << endl;
	}
};
class IntelMemory : public Memory
{
public:
	virtual void storage()
	{
		cout << "Intel���ڴ�����ʼ�洢��" << endl;
	}
};

//Lenovo����
class LenovoCPU : public CPU
{
public:
	virtual void calculate()
	{
		cout << "Lenovo��cpu��ʼ������" << endl;
	}
};
class LenovoVideoCard : public VideoCard
{
public:
	virtual void display()
	{
		cout << "Lenovo���Կ���ʼ��ʾ��" << endl;
	}
};
class LenovoMemory : public Memory
{
public:
	virtual void storage()
	{
		cout << "Lenovo���ڴ�����ʼ�洢��" << endl;
	}
};

//������
class Computer
{
public:
	Computer(CPU* cpu, VideoCard* vc, Memory* mem)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}
	~Computer()
	{
		//�ͷ����
		if (m_cpu != NULL) {
			delete m_cpu;
			m_cpu = NULL;
		}
		if (m_vc != NULL) {
			delete m_vc;
			m_vc = NULL;
		}
		if (m_mem != NULL) {
			delete m_mem;
			m_mem = NULL;
		}
	}

	//�ṩ��������
	void work()
	{
		m_cpu->calculate();
		m_vc->display();
		m_mem->storage();
	}

private:
	CPU* m_cpu;		//CPU���ָ��
	VideoCard* m_vc;	//�Կ����ָ��
	Memory* m_mem;	//�ڴ������ָ��
};

void test()
{
	//��һ̨���Ե����
	CPU* intelcpu = new IntelCPU;
	VideoCard* intelvideocard = new IntelVideoCard;
	Memory* intelmemory = new IntelMemory;
	//������һ̨����
	cout << "\n��һ̨����" << endl;
	Computer* computer1 = new Computer(intelcpu, intelvideocard, intelmemory);
	computer1->work();
	delete computer1;

	//�����ڶ�̨����
	cout << "\n�ڶ�̨����" << endl;
	Computer* computer2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);
	computer2->work();
	delete computer2;

	//��������̨����
	cout << "\n����̨����" << endl;
	Computer* computer3 = new Computer(new LenovoCPU, new IntelVideoCard, new LenovoMemory);
	computer3->work();
	delete computer3;
}

int main()
{
	test();

	system("pause");
	return 0;
}