#include <iostream>
#include <string>
using namespace std;

class Dog
{
public:
	string name;
	int age;

	void run() {
		cout<<"С����������:"<<name<<","<<"������"<<age<<endl;
	}
};

int main()
{
	Dog dog1;

	dog1.name = "����";
	dog1.age = 2;
	dog1.run();

	Dog *dog2 = new Dog();

	if (NULL == dog2) {
		return 0;
	}
	dog2->name = "����";
	dog2->age = 1;
	dog2->run();


	delete dog2;
	dog2 = NULL;
    return 0;
}


