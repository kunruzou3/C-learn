#include<iostream>
using namespace std;

//实现两个数字交换
void swap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}
void swap02(int* p1, int* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
int main()
{
	//指针和函数
	//1.值传递，只改变了函数中的形参，实参并没有交换
	int a = 10; int b = 20;
	swap01(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	//2.地址传递
	swap02(&a, &b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	system("pause");
	return 0;
}