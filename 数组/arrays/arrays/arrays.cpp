#include<iostream>
using namespace std;

int main()
{
	//���飬�����±��0��ʼ��
	int arr[5] = {10,20,30,40,50};
	cout << arr[0] << endl;
	//����ѭ����������е�Ԫ��
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}
	//��������������ͳ��ռ���ڴ�ռ��С
	cout << "��������ռ���ڴ�ռ�Ϊ��" << sizeof(arr) << endl;
	cout << "ÿ��Ԫ��ռ�ÿռ�Ϊ��" << sizeof(arr[0]) << endl;
	cout << "������Ԫ�ظ���Ϊ��" << sizeof(arr) / sizeof(arr[0]) << endl;

	//�����������鿴��ַ
	cout << "������׵�ַΪ" << arr << endl; //����int(arr)
	cout << "�����һ��Ԫ�صĵ�ַΪ" << &arr[0] << endl; //����(int)&arr[0]
	//�������ǳ����������Խ��и�ֵ����

	system("pause");
	return 0;
}
//�������������������ֵ
/*int arr[5] = {100,200,300,350,250};
for (int i = 0; i < 5; i++)
{
	int max = 0;
	if (arr[i] > max)
	{
		max = arr[i];
	}
}
cout << "������Ϊ��" << max << endl;
*/

//������ Ԫ������
/*int arr[5] = {1,3,2,5,4};
cout << "Ԫ������ǰ��" << endl;
for (int i = 0; i < 5; i++)
{
	cout << arr[i] << endl;
}
int start = 0; //��ʼ�±�
int end sizeof(arr) / sizeof(arr[0]) - 1; //��β�±�

while (start < end) {
	int temp = arr[start];
	arr[start] = arr[end];
	arr[end] = temp; //����

	start++;
	end--;
}
cout << "�������ú�" << endl;
for (int i = 0; i < 5; i++)
{
	cout << arr[i] << endl;
}
*/




