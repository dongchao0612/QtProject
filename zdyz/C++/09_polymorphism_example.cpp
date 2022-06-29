#include <iostream>
#include <string>
using namespace std;

/* ����һ�������� */
class Animal
{
public:
	virtual void run() {
		cout<<"Animal��run()����"<<endl;
	}
};

/* ����һ�����࣬���̳ж����� */
class Dog : public Animal
{
public:
	void run() {
		cout<<"Dog��run()����"<<endl;
	}

};

/* ����һ��è�࣬���̳ж����� */
class Cat : public Animal
{
public:
	void run() {
		cout<<"Cat��run()����"<<endl;
	}

};

int main()
{
	/* ����һ��Animal��ָ�����ע����û��ʵ���� */
	Animal *animal;
	/* ʵ����dog���� */
	Dog dog;
	/* ʵ����cat���� */
	Cat cat;

	/* �洢dog����ĵ�ַ */
	animal = &dog;
	/* ����run()���� */
	animal->run();

	/* �洢cat����ĵ�ַ */
	animal = &cat;
	/* ����run()���� */
	animal->run();
	
    return 0;
}




