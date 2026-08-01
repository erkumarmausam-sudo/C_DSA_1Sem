#include <iostream>
using namespace std;
void swapNumbers(int*x,int*y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}
int main() {
	int a=10,b=20;
	cout<<"Before swapping:a="<<a<<",b="<<b<<endl;
	swapNumbers(&a,&b);
	cout<<"After swapping:a="<<a<<",b="<<b<<endl;



	return 0;
}