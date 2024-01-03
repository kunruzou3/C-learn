#include <iostream>
using namespace std;
/*
常量两种定义方式
1.#define 宏常量
2.const修饰的变量
*/

#define Day 7 //第一种宏常量
int main()
{
	cout << "一周有：" << Day << "天" << endl;
	//第二种const修饰的变量
	const int month = 12;
	cout << "一年有：" << month << "个月份" << endl;

	system("pause");
	return 0;
}