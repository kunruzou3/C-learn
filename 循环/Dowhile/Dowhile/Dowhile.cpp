#include<iostream>
using namespace std;

int main()
{
/*	//do..while循环
	int num = 0;
	do
	{
		cout << num << endl;
		num++;
	} 
	while (num < 10);
*/
	//案例：水仙花数，三位数，各个位的数字的三次方的和等于该数本身。
	//三位数100-999，获取个位；数字%10取模，获取十位：数字/10再%10，获取百位：数字/100。原因：整数除法结果还是整数。
	int num = 100;
	do
	{
		int a = 0; //个位
		int b = 0; //十位
		int c = 0; //百位
		a = num % 10;
		b = num / 10 % 10;
		c = num / 100;
		if(a*a*a + b*b*b + c*c*c == num)  //如果是水仙花数才打印，否则不用打印。
		{
			cout << num << endl;
		}
		num++;
	} while (num < 1000);

	system("pause");
	return 0;
}