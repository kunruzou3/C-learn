#include<iostream>
using namespace std;

int main()
{
	//数组，数组下标从0开始。
	int arr[5] = {10,20,30,40,50};
	cout << arr[0] << endl;
	//利用循环输出数组中的元素
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}
	//可以利用数组名统计占用内存空间大小
	cout << "整个数组占用内存空间为：" << sizeof(arr) << endl;
	cout << "每个元素占用空间为：" << sizeof(arr[0]) << endl;
	cout << "数组中元素个数为：" << sizeof(arr) / sizeof(arr[0]) << endl;

	//利用数组名查看地址
	cout << "数组的首地址为" << arr << endl; //或者int(arr)
	cout << "数组第一个元素的地址为" << &arr[0] << endl; //或者(int)&arr[0]
	//数组名是常量，不可以进行赋值操作

	system("pause");
	return 0;
}
//案例：从数组中找最大值
/*int arr[5] = {100,200,300,350,250};
for (int i = 0; i < 5; i++)
{
	int max = 0;
	if (arr[i] > max)
	{
		max = arr[i];
	}
}
cout << "最大的数为：" << max << endl;
*/

//案例： 元素逆置
/*int arr[5] = {1,3,2,5,4};
cout << "元素逆置前：" << endl;
for (int i = 0; i < 5; i++)
{
	cout << arr[i] << endl;
}
int start = 0; //起始下标
int end sizeof(arr) / sizeof(arr[0]) - 1; //结尾下标

while (start < end) {
	int temp = arr[start];
	arr[start] = arr[end];
	arr[end] = temp; //互换

	start++;
	end--;
}
cout << "数组逆置后：" << endl;
for (int i = 0; i < 5; i++)
{
	cout << arr[i] << endl;
}
*/




