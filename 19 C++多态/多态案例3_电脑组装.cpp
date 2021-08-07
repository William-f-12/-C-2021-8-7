#include<iostream>
using namespace std;

//抽象不同零件类
//抽象CPU类
class CPU
{
public:
	//抽象的计算函数
	virtual void calculate() = 0;
};

//抽象显卡类
class VideoCard
{
public:
	//抽象的显示函数
	virtual void display() = 0;
};

//抽象内存条类
class Memory
{
public:
	//抽象的计算函数
	virtual void storage() = 0;
};

//具体厂商
//intel厂商
class IntelCPU : public CPU
{
public:
	virtual void calculate()
	{
		cout << "Intel的cpu开始计算了" << endl;
	}
};
class IntelVideoCard : public VideoCard
{
public:
	virtual void display()
	{
		cout << "Intel的显卡开始显示了" << endl;
	}
};
class IntelMemory : public Memory
{
public:
	virtual void storage()
	{
		cout << "Intel的内存条开始存储了" << endl;
	}
};

//Lenovo厂商
class LenovoCPU : public CPU
{
public:
	virtual void calculate()
	{
		cout << "Lenovo的cpu开始计算了" << endl;
	}
};
class LenovoVideoCard : public VideoCard
{
public:
	virtual void display()
	{
		cout << "Lenovo的显卡开始显示了" << endl;
	}
};
class LenovoMemory : public Memory
{
public:
	virtual void storage()
	{
		cout << "Lenovo的内存条开始存储了" << endl;
	}
};

//电脑类
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
		//释放零件
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

	//提供工作函数
	void work()
	{
		m_cpu->calculate();
		m_vc->display();
		m_mem->storage();
	}

private:
	CPU* m_cpu;		//CPU零件指针
	VideoCard* m_vc;	//显卡零件指针
	Memory* m_mem;	//内存条零件指针
};

void test()
{
	//第一台电脑的零件
	CPU* intelcpu = new IntelCPU;
	VideoCard* intelvideocard = new IntelVideoCard;
	Memory* intelmemory = new IntelMemory;
	//创建第一台电脑
	cout << "\n第一台电脑" << endl;
	Computer* computer1 = new Computer(intelcpu, intelvideocard, intelmemory);
	computer1->work();
	delete computer1;

	//创建第二台电脑
	cout << "\n第二台电脑" << endl;
	Computer* computer2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);
	computer2->work();
	delete computer2;

	//创建第三台电脑
	cout << "\n第三台电脑" << endl;
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