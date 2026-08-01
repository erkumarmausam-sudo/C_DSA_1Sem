#include <iostream>
using namespace std;
void swap(int,int);
int main()
{
	int num1,num2;
	num1 = 10;
	num2 = 20;
	cout<<"\nBefore swap: num1="<<num1<<"and num2="<<num2;
	swap(num1,num2);
	cout<<"\nAfter swap: num1="<<num1<<"and num2="<<num2;
}
void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}