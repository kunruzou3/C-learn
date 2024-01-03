#include<iostream>
using namespace std;
#include<string>

struct student
{
	string name;
	int age;
	int score;
};

//打印学生信息的函数
//1.值传递
void printStudent1(struct student s)
{
	cout << "子函数中 姓名 " << s.name << " 年龄 " << s.age << " 分数 " << s.score << endl;

}
//2.地址传递
void printStudent2(struct student *p)
{
	cout << "子函数2中 姓名 " << p->name << " 年龄 " << p->age << endl;
}
int main()
{
	struct student s;
	s.name = "张三";
	s.age = 20;
	s.score = 85;

	printStudent1(s);
	//cout << "main函数中打印 姓名 " << s.name << " 年龄 " << s.age << " 分数 " << s.score << endl;
	printStudent2(&s);

	system("pause");
	return 0;
}