#include<iostream>
using namespace std;
/*��������
* 
����ֵ���� ������ �������б�
{
 ���������
 return ���ʽ
}

*/
//ʵ��һ�����μӷ�����
int add(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}


int main()
{
	//�������� �������ƣ�������
	int a = 20;
	int b = 30;
	int c = add(a, b);
	cout << "c = " << c << endl;
	//a,bΪʵ�ʲ��������ʵ�Σ���������ʱ��num1��num2Ϊ��ʽ����������βΡ�
	//�����ú���ʱ��ʵ�ε�ֵ�ᴫ�ݸ��β�

	system("pause");
	return 0;
}