#include<iostream>
using namespace std;
#include<ctime> //time系统时间头文件包含

int main()
{
/*	//while循环
    //打印0-9
	int num = 0;
	while (num < 10)   //()中为循环条件
	{
		cout << num << endl;
		num++;
	}
*/
	//案例：猜数字，猜对了退出游戏，猜错了继续猜，直到猜对系统随机生成的那个数字为止。
	srand((unsigned int)time(NULL)); //添加随机数种子，基于当前系统时间生成随机数，防止每次都是42.
	int num = rand() % 100 + 1;  //生成0~99的随机数(+1后为1到100的随机数)
	// cout << num << endl;

	while (1)
	{
		int val = 0;
		cout << "请输入你的猜测数字: " << endl;
		cin >> val;

		if (val > num)
		{
			cout << "猜测过大" << endl;
		}
		else if (num > val)
		{
			cout << "猜测过小" << endl;
		}
		else
		{
			cout << "猜对了恭喜" << endl;
			break; //退出循环
		}
	}

	system("pause");
	return 0;
}