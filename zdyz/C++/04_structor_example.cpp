#include <iostream>
#include <string>
using namespace std;

class Dog
{
public:
	Dog();
	~Dog();
};

int main()
{
	Dog dog;
	cout<<"��������������ʾ��"<<endl;
    return 0;
}

Dog::Dog()
{
	cout<<"���캯��ִ�У�"<<endl;
}

Dog::~Dog()
{
	cout<<"��������ִ�У�"<<endl;
}


