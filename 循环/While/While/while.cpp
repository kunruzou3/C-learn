#include<iostream>
using namespace std;
#include<ctime> //timeϵͳʱ��ͷ�ļ�����

int main()
{
/*	//whileѭ��
    //��ӡ0-9
	int num = 0;
	while (num < 10)   //()��Ϊѭ������
	{
		cout << num << endl;
		num++;
	}
*/
	//�����������֣��¶����˳���Ϸ���´��˼����£�ֱ���¶�ϵͳ������ɵ��Ǹ�����Ϊֹ��
	srand((unsigned int)time(NULL)); //�����������ӣ����ڵ�ǰϵͳʱ���������������ֹÿ�ζ���42.
	int num = rand() % 100 + 1;  //����0~99�������(+1��Ϊ1��100�������)
	// cout << num << endl;

	while (1)
	{
		int val = 0;
		cout << "��������Ĳ²�����: " << endl;
		cin >> val;

		if (val > num)
		{
			cout << "�²����" << endl;
		}
		else if (num > val)
		{
			cout << "�²��С" << endl;
		}
		else
		{
			cout << "�¶��˹�ϲ" << endl;
			break; //�˳�ѭ��
		}
	}

	system("pause");
	return 0;
}