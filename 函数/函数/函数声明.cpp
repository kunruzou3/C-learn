#include<iostream>
using namespace std;

//��������
int max(int a, int b);

int main1()
{
	int a = 10;
	int b = 20;
	cout << max(a, b) << endl;

	system("pause");
	return 0;
}
//����һ���ȽϺ������������ν��бȽϣ����ؽϴ��ֵ��
int max(int a, int b)
{
	return a > b ? a : b;
}

//���ļ���д
//.h��׺��ͷ�ļ���д����������
//.cpp��׺��Դ�ļ���д�����Ķ��壬ǰ���ٰ���һ��ͷ�ļ� #include��ͷ�ļ�����