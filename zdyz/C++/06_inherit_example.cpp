#include <iostream>
#include <string>
using namespace std;

/*�����࣬����������������ԣ�
 *��ɫ�����أ���ÿ�ֶ��ﶼ���е�����
 */
class Animal
{
public:
	/* ��ɫ��Ա���� */
	string color;
	/* ���س�Ա���� */
	int weight;
};

/*�ù���̳���������࣬���ڹ�����д�Լ������ԡ�
 *����ӵ���Լ�������name��age��run()������ͬʱҲ�̳���
 *�������color��weight������
 */
class Dog : public Animal
{
public:
	string name;
	int age;
	void run();
};

int main()
{
	Dog dog;
	dog.name = "����";
	dog.age = 2;
	dog.color = "��ɫ";
	dog.weight = 120;
	cout<<"�������ֽУ�"<<dog.name<<endl;
	cout<<"���������ǣ�"<<dog.age<<endl;
	cout<<"����ë����ɫ�ǣ�"<<dog.color<<endl;
	cout<<"���������ǣ�"<<dog.weight<<endl;
    return 0;
}


