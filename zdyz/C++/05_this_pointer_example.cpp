#include <iostream>
#include <string>
using namespace std;

class Dog
{
public:
	string name;
	void func();
};

int main()
{
	Dog dog;
	dog.func();
    return 0;
}

void Dog::func()
{
	this->name = "����";
	cout<<"С�������ֽУ�"<<this->name<<endl;
}


