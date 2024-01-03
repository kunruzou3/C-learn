#include<iostream>
using namespace std;
#include<string>

//结构体属于用户自定义的数据类型(一些类型集合组成的一个类型)
//struct 结构体名称 {成员列表}
struct Student 
{
	string name;
	int age;
	int score;
}s3; //顺便创建结构体变量,不建议用

int main()
{
	//通过学生类型创建具体学生
	//2.1  struct Student s1
	// struct可以省略
	struct Student s1;
	s1.name = "张三"; // 给s1属性赋值
	s1.age = 18;
	s1.score = 100;
	cout << "姓名 " << s1.name << " 年龄 " << s1.age << " 分数 " << s1.score << endl;
	
	//2.2  struct Student s2 = {...}
	struct Student s2 = { "李四",19,84 };
	cout << "姓名 " << s2.name << " 年龄 " << s2.age << " 分数 " << s2.score << endl;

	//2.3  在定义结构体时顺便创建结构体变量
	s3.name = "王五";
	s3.age = 20;
	s3.score = 60;
	cout << "姓名 " << s3.name << " 年龄 " << s3.age << " 分数 " << s3.score << endl;

	system("pause");
	return 0;
}