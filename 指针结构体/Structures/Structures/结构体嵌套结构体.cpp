#include<iostream>
using namespace std;
#include<string>

struct student
{
	string name;
	int age;
	int score;
};
struct teacher
{
	int id;
	string name;
	int age;
	struct student stu;
};


int main()
{
	//������ʦ
	teacher t;
	t.id = 10000;
	t.name = "����";
	t.age = 50;
	t.stu.name = "С��";
	t.stu.age = 20;
	t.stu.score = 60;

	system("pause");
	return 0;
}