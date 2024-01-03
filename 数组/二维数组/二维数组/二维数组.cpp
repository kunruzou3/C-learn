#include<iostream>
using namespace std;
#include<string>

int main()
{
	//二维数组
	int arr[2][3] = {{1,2,3},{4,5,6}};
	cout << arr[0][0] << endl;
	//使用嵌套循环遍历，外层循环打印行数，内层循环打印列数。
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << "二维数组所占内存空间大小：" << sizeof(arr) << endl;
	cout << "二维数组第一行所占内存空间大小：" << sizeof(arr[0]) << endl;
	cout << "二维数组每个元素所占内存空间大小：" << sizeof(arr[0][0]) << endl;
	cout << "二维数组的行数：" << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "二维数组的列数：" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;

	//案例：三行三列数组，求每一行的总和。
	int scores[3][3] = {
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};
	string names[3] = { "张三","李四","王五" };
	for(int i = 0; i < 3; i++)
	{
		int sum = 0;
		for(int j = 0; j < 3; j++)
		{
			sum += scores[i][j];
		}
		cout << "第" << i + 1 << "行的总和为：" << sum << endl;
		cout << names[i] << "的总分为" << sum << endl;
	}
	
	system("pause");
	return 0;
}