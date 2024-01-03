#include<iostream>
using namespace std;

int main()
{
	/*
	int a = 0;
	cout << "请用户输入a的值：" << endl;
	cin >> a;  //Get user input from the keyboard
	cout << "整型变量a = " << a << endl; 
	*/
	int x, y, sum;
	cout << "请输入x值：" << endl;
	cin >> x;
	cout << "请输入y值：" << endl;
	cin >> y;
	sum = x + y;
	cout << "输入的两个数字和为：" << sum << endl;

	system("pause");
	return 0;
}