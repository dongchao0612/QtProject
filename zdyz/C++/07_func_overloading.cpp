#include <iostream>
#include <string>
using namespace std;

class Dog
{
public:
	string name;
	void getWeight(int weight) {
		cout<<name<<"�������ǣ�"<<weight<<"kG"<<endl;
	}

	void getWeight(double weight) {
		cout<<name<<"�������ǣ�"<<weight<<"kG"<<endl;
	}
};

int main()
{
	Dog dog;
	dog.name = "����";
	dog.getWeight(10);
	dog.getWeight(10.5);
    return 0;
}




