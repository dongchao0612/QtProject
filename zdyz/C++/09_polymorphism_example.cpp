#include <iostream>
#include <string>
using namespace std;

/* 定义一个动物类 */
class Animal
{
public:
	virtual void run() {
		cout<<"Animal的run()方法"<<endl;
	}
};

/* 定义一个狗类，并继承动物类 */
class Dog : public Animal
{
public:
	void run() {
		cout<<"Dog的run()方法"<<endl;
	}

};

/* 定义一个猫类，并继承动物类 */
class Cat : public Animal
{
public:
	void run() {
		cout<<"Cat的run()方法"<<endl;
	}

};

int main()
{
	/* 声明一个Animal的指针对象，注：并没有实例化 */
	Animal *animal;
	/* 实例化dog对象 */
	Dog dog;
	/* 实例化cat对象 */
	Cat cat;

	/* 存储dog对象的地址 */
	animal = &dog;
	/* 调用run()方法 */
	animal->run();

	/* 存储cat对象的地址 */
	animal = &cat;
	/* 调用run()方法 */
	animal->run();
	
    return 0;
}




