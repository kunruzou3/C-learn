#include<iostream>
using namespace std;

int main()
{
/*	//for loop. 打印1到9
	for (int i = 0; i < 10; i++)
	{
		cout << i << endl;
	}
*/
	//案例：敲七。
	for (int i = 0; i < 100; i++)
	{
		if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7) //如果是7的倍数，或者个位十位是7.
		{
			cout << "敲桌子" << endl;
		}
		else 
		{
			cout << i << endl;
		}
	}
	system("pause");
	return 0;
}
//嵌套循环
/*
for(int i = 0; i < 10; i++)
{
	for(int j = 0; j < 10; j++)
	{
		cout << "* ";
	}
	cout << endl;
}
*/