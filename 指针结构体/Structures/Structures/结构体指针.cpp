#include<iostream>
using namespace std;
#include<string>
struct student
{
	string name;
	int age;
	int score;
};


int main()
{
	struct student s = { "����",18,100 };
	//ͨ��ָ��ָ��ṹ��
	student* p = &s;
	//ͨ��ָ����ʽṹ������е����� p->name
	cout << "���� " << p->name << " ���� " << p->age << endl;
	

	system("pause");
	return 0;
}