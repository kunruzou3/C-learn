#include<iostream>
using namespace std;
#include<string>

struct Student 
{
	string name;
	int age;
	int score;
};

int main1()
{
	//�����ṹ������
	struct Student stuArray[8] =
	{
		{"����",18,100},
		{"����",28,99},
		{"����",38,66}
	};
	stuArray[2].name = "����";
	stuArray[2].age = 80;
	stuArray[2].score = 60;

	//�����ṹ������
	for (int i = 0; i < 3; i++)
	{
		cout << "���� " << stuArray[i].name
			<< " ����" << stuArray[i].age
			<< " ����" << stuArray[i].score;
	};
	system("pause");
	return 0;
}