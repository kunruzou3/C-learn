#include<iostream>
using namespace std;

//���庯����ʵ�������������н�������
//�����������Ҫ����ֵ������ʹ��void,��дreturn
void swap(int num1, int num2)
{
	cout << "����ǰ��" << endl;
	cout << num1 << endl;
	cout << num2 << endl;
	int temp = 0;
	temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "������" << endl;
	cout << num1 << endl;
	cout << num2 << endl;
}

int main2()
{
	int a = 20;
	int b = 30;
	swap(a, b);
	//ֵ���ݵ�ʱ���βη����ı䣬ʵ�β������κθı䣬����a��b��ֵ��������
	system("pause");
	return 0;
}