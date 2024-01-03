#include<iostream>
using namespace std;

int main()
{
	/*运算符
	算术运算符：加减乘除 + - * /
		        取模 % 求余数
				递增 ++ 递减 --
	赋值运算符：= += -= *= /= %=
	比较运算符：== != > < >= <=
	逻辑运算符：! && ||
	*/

	/* int a = 10, b = 3;
	cout << a % b << endl; //两个小数不能做取模运算 */

	//前置递增，先让变量递增，然后进行表达式运算
	int a1 = 10;
	int b1 = ++a1 * 10;
	cout << "a1 = " << a1 << endl; //11
	cout << "b1 = " << b1 << endl; //110
	//后置递增，先进行表达式运算，然后再变量递增
	int a2 = 10;
	int b2 = a2++ * 10;
	cout << "a2 = " << a2 << endl; //11
	cout << "b2 = " << b2 << endl; //100

	system("pause");
	return 0;
}