#include<iostream>
using namespace std;

int main()
{
	//冒泡排序
	int arr[9] = { 4,2,8,0,5,7,1,3,9 };
	cout << "排序前：";
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	//排序总轮数 = 元素个数 - 1；
	//每轮对比次数 = 元素个数 - 当前排序轮数 - 1；
	for (int i = 0; i < 9 - 1; i++)
	{
		for (int j = 0; j < 9 - i - 1; j++)
		{
			//如果第一个数字比第二个大，交换两个数字
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	system("pause");
	return 0;
}