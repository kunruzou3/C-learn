#include<iostream>
using namespace std;
#include<string>

struct student
{
	string name;
	int age;
	int score;
};

//��ӡѧ����Ϣ�ĺ���
//1.ֵ����
void printStudent1(struct student s)
{
	cout << "�Ӻ����� ���� " << s.name << " ���� " << s.age << " ���� " << s.score << endl;

}
//2.��ַ����
void printStudent2(struct student *p)
{
	cout << "�Ӻ���2�� ���� " << p->name << " ���� " << p->age << endl;
}
int main()
{
	struct student s;
	s.name = "����";
	s.age = 20;
	s.score = 85;

	printStudent1(s);
	//cout << "main�����д�ӡ ���� " << s.name << " ���� " << s.age << " ���� " << s.score << endl;
	printStudent2(&s);

	system("pause");
	return 0;
}