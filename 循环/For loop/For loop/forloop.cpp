#include<iostream>
using namespace std;

int main()
{
/*	//for loop. ��ӡ1��9
	for (int i = 0; i < 10; i++)
	{
		cout << i << endl;
	}
*/
	//���������ߡ�
	for (int i = 0; i < 100; i++)
	{
		if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7) //�����7�ı��������߸�λʮλ��7.
		{
			cout << "������" << endl;
		}
		else 
		{
			cout << i << endl;
		}
	}
	system("pause");
	return 0;
}
//Ƕ��ѭ��
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