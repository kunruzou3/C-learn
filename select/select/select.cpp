#include<iostream>
using namespace std;

int main()
{
	// if...else
	int score = 0;
	cout << "请输入你的分数: " << endl;
	cin >> score;
	cout << "您的分数为: " << score << endl;

	if (score > 600)
	{
		cout << "恭喜你考上一本大学" << endl;
		if (score > 700)
		{
			cout << "考上北大" << endl;
		}
		else if (score > 650)
		{
			cout << "考上清华" << endl;
		}
		else
		{
			cout << "考上人大" << endl;
		}
	}
	else if (score > 500)
	{
		cout << "考上二本大学" << endl;
	}
	else if (score > 400)
	{
		cout << "考上三本大学" << endl;
	}
	else
	{
		cout << "未考上大学" << endl;
	}

	system("pause");
	return 0;
}
//三目运算符。 表达式1 ？表达式2 ：表达式3
/*int a = 10;
  int b = 20;
  int c = 30;
  c = (a > b ? a : b)  //如果a>b,则结果为a，否则结果为b。
  (a > b ? a : b) = 100 //三目运算符此时返回的是变量，可以继续赋值。
*/

//switch语句
/*
cout <<"请给电影打分：" << endl;
int score = 0;
cin >> score;
cout << "您打的分数为：" << score << endl;
switch (score)
{
	case 10: cout << "您认为是经典电影" << endl;
	break; //退出当前分支
	case 9: cout << "您认为是经典电影" << endl;
	break;
	default: cout << "您认为这是烂片" << endl;
	break;
}

*/