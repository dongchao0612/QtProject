#include <iostream>
#include <string>
using namespace std;

class Dog
{
public:
	string name;
	Dog(int i = 0)
	{
		total = i;
	}
	void addFood(int number) {
		total = total + number;
	}
	int getFood() {
		return total;
	}
private:
	int total;
};


int main()
{
	Dog dog;
	dog.name = "����";
	dog.addFood(3);
	dog.addFood(2);
	cout<<dog.name<<"�ܹ������"<<dog.getFood()<<"��ʳ��"<<endl;
    return 0;
}


