#include <iostream>

using namespace std;

/* ����һ�������� */
class Animal
{
public:
    virtual void run() = 0;
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
    /* ʵ����dog���� */
    Dog dog;

    /* ʵ����cat���� */
    Cat cat;

	/*	dog����run()���� */
	dog.run();

	/* cat����run()���� */
	cat.run();

    return 0;
}


