#include<iostream>
using namespace std;

int main()
{
	int a = 10;
	int b = 20;
	int* p = &a;

	//const����ָ�룬����ָ�룬ָ���ָ������޸ģ�ָ��ָ���ֵ�������޸�
	const int* p = &a;
	//p=&b,��ȷ���޸���ָ���ָ��*p=20,����ָ���ֵ�������޸�

	//const���ǳ�����ָ�볣����ָ���ָ�򲻿��Ըģ�ָ��ָ���ֵ���Ը�
	int* const p = &a;
	//*p=20,��ȷ��ָ���ֵ���Ըģ�p=&b,����ָ���ָ�򲻿��Ը�


	 
	system("pause");
	return 0;
}