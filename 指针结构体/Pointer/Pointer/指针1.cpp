#include<iostream>
using namespace std;

int main()
{
	//����ָ�� �������� * ָ�������
	int a = 10;
	int* p;
	p = &a; //��ָ���¼����a�ĵ�ַ������int* p = &a
	cout << "a�ĵ�ַΪ" << &a << endl;
	cout << "ָ��pΪ" << p << endl;
	//ʹ��ָ�룬����ͨ�������õķ�ʽ���ҵ�ָ��ָ����ڴ�
	//ָ��ǰ��*��������ã��ҵ�ָ��ָ����ڴ��е�����
	*p = 1000;
	cout << "a=" << a << endl;
	cout << "*p=" << *p << endl; 
	//ָ����ռ���ڴ�ռ�
	cout << "sizeof(int*) " << sizeof(int*) << endl;
	//��32λ����ϵͳ�£�ָ��ռ4���ֽڣ�����ʲô��������
	//��64λ����ϵͳ�£�ָ��ռ8���ֽڿռ��С
	system("pause");
	return 0;
}