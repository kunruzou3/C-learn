#include<iostream>
using namespace std;

//定义函数，实现两个函数进行交换函数
//如果函数不需要返回值，可以使用void,不写return
void swap(int num1, int num2)
{
	cout << "交换前：" << endl;
	cout << num1 << endl;
	cout << num2 << endl;
	int temp = 0;
	temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "交换后：" << endl;
	cout << num1 << endl;
	cout << num2 << endl;
}

int main2()
{
	int a = 20;
	int b = 30;
	swap(a, b);
	//值传递的时候，形参发生改变，实参不发生任何改变，这里a和b的值不交换。
	system("pause");
	return 0;
}