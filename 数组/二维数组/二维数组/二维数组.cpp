#include<iostream>
using namespace std;
#include<string>

int main()
{
	//��ά����
	int arr[2][3] = {{1,2,3},{4,5,6}};
	cout << arr[0][0] << endl;
	//ʹ��Ƕ��ѭ�����������ѭ����ӡ�������ڲ�ѭ����ӡ������
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << "��ά������ռ�ڴ�ռ��С��" << sizeof(arr) << endl;
	cout << "��ά�����һ����ռ�ڴ�ռ��С��" << sizeof(arr[0]) << endl;
	cout << "��ά����ÿ��Ԫ����ռ�ڴ�ռ��С��" << sizeof(arr[0][0]) << endl;
	cout << "��ά�����������" << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "��ά�����������" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;

	//�����������������飬��ÿһ�е��ܺ͡�
	int scores[3][3] = {
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};
	string names[3] = { "����","����","����" };
	for(int i = 0; i < 3; i++)
	{
		int sum = 0;
		for(int j = 0; j < 3; j++)
		{
			sum += scores[i][j];
		}
		cout << "��" << i + 1 << "�е��ܺ�Ϊ��" << sum << endl;
		cout << names[i] << "���ܷ�Ϊ" << sum << endl;
	}
	
	system("pause");
	return 0;
}