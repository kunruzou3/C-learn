#include<iostream>
using namespace std;

int main()
{
	// if...else
	int score = 0;
	cout << "��������ķ���: " << endl;
	cin >> score;
	cout << "���ķ���Ϊ: " << score << endl;

	if (score > 600)
	{
		cout << "��ϲ�㿼��һ����ѧ" << endl;
		if (score > 700)
		{
			cout << "���ϱ���" << endl;
		}
		else if (score > 650)
		{
			cout << "�����廪" << endl;
		}
		else
		{
			cout << "�����˴�" << endl;
		}
	}
	else if (score > 500)
	{
		cout << "���϶�����ѧ" << endl;
	}
	else if (score > 400)
	{
		cout << "����������ѧ" << endl;
	}
	else
	{
		cout << "δ���ϴ�ѧ" << endl;
	}

	system("pause");
	return 0;
}
//��Ŀ������� ���ʽ1 �����ʽ2 �����ʽ3
/*int a = 10;
  int b = 20;
  int c = 30;
  c = (a > b ? a : b)  //���a>b,����Ϊa��������Ϊb��
  (a > b ? a : b) = 100 //��Ŀ�������ʱ���ص��Ǳ��������Լ�����ֵ��
*/

//switch���
/*
cout <<"�����Ӱ��֣�" << endl;
int score = 0;
cin >> score;
cout << "����ķ���Ϊ��" << score << endl;
switch (score)
{
	case 10: cout << "����Ϊ�Ǿ����Ӱ" << endl;
	break; //�˳���ǰ��֧
	case 9: cout << "����Ϊ�Ǿ����Ӱ" << endl;
	break;
	default: cout << "����Ϊ������Ƭ" << endl;
	break;
}

*/