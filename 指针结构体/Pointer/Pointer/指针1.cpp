#include<iostream>
using namespace std;

int main()
{
	//定义指针 数据类型 * 指针变量名
	int a = 10;
	int* p;
	p = &a; //让指针记录变量a的地址，或者int* p = &a
	cout << "a的地址为" << &a << endl;
	cout << "指针p为" << p << endl;
	//使用指针，可以通过解引用的方式来找到指针指向的内存
	//指针前加*代表解引用，找到指针指向的内存中的数据
	*p = 1000;
	cout << "a=" << a << endl;
	cout << "*p=" << *p << endl; 
	//指针所占的内存空间
	cout << "sizeof(int*) " << sizeof(int*) << endl;
	//在32位操作系统下，指针占4个字节，不管什么数据类型
	//在64位操作系统下，指针占8个字节空间大小
	system("pause");
	return 0;
}