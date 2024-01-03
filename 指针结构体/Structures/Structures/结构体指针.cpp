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
	struct student s = { "张三",18,100 };
	//通过指针指向结构体
	student* p = &s;
	//通过指针访问结构体变量中的数据 p->name
	cout << "姓名 " << p->name << " 年龄 " << p->age << endl;
	

	system("pause");
	return 0;
}