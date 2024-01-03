#include<iostream>
using namespace std;

int main()
{
	//空指针
	//1.空指针用于给指针变量进行初始化 2.空指针不可以进行访问
	int* p = NULL;

	//野指针
	//在程序中应避免
	int* p = (int*)0x1100; //非法内存空间

	system("pause");
	return 0;
}