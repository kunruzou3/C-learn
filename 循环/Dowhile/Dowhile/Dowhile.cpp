#include<iostream>
using namespace std;

int main()
{
/*	//do..whileѭ��
	int num = 0;
	do
	{
		cout << num << endl;
		num++;
	} 
	while (num < 10);
*/
	//������ˮ�ɻ�������λ��������λ�����ֵ����η��ĺ͵��ڸ�������
	//��λ��100-999����ȡ��λ������%10ȡģ����ȡʮλ������/10��%10����ȡ��λ������/100��ԭ�����������������������
	int num = 100;
	do
	{
		int a = 0; //��λ
		int b = 0; //ʮλ
		int c = 0; //��λ
		a = num % 10;
		b = num / 10 % 10;
		c = num / 100;
		if(a*a*a + b*b*b + c*c*c == num)  //�����ˮ�ɻ����Ŵ�ӡ�������ô�ӡ��
		{
			cout << num << endl;
		}
		num++;
	} while (num < 1000);

	system("pause");
	return 0;
}