#include<iostream>
using namespace std;

//函数声明
int max(int a, int b);

int main1()
{
	int a = 10;
	int b = 20;
	cout << max(a, b) << endl;

	system("pause");
	return 0;
}
//定义一个比较函数，两个整形进行比较，返回较大的值。
int max(int a, int b)
{
	return a > b ? a : b;
}

//分文件编写
//.h后缀的头文件，写函数的声明
//.cpp后缀的源文件，写函数的定义，前面再包含一下头文件 #include“头文件名”