#include<iostream>
using namespace std;
/*函数定义
* 
返回值类型 函数名 （参数列表）
{
 函数体语句
 return 表达式
}

*/
//实现一个整形加法函数
int add(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}


int main()
{
	//函数调用 函数名称（参数）
	int a = 20;
	int b = 30;
	int c = add(a, b);
	cout << "c = " << c << endl;
	//a,b为实际参数，简称实参；函数定义时，num1和num2为形式参数，简称形参。
	//当调用函数时，实参的值会传递给形参

	system("pause");
	return 0;
}