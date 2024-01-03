#include<iostream>
using namespace std;

int main()
{
	int a = 10;
	int b = 20;
	int* p = &a;

	//const修饰指针，常量指针，指针的指向可以修改，指针指向的值不可以修改
	const int* p = &a;
	//p=&b,正确，修改了指针的指向；*p=20,错误，指向的值不可以修改

	//const修是常量，指针常量，指针的指向不可以改，指针指向的值可以改
	int* const p = &a;
	//*p=20,正确，指向的值可以改；p=&b,错误，指针的指向不可以改


	 
	system("pause");
	return 0;
}