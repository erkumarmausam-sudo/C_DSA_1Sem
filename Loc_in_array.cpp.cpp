#include <iostream>
using namespace std;
int main()
{
	int a[10],k,loc,x;
	for(k=0; k<10; k++)
	{	cin>>a[k];
	}
	cin>>loc;
	for(x=loc; x<10; x++)
	{	a[x-1]=a[x];
	}
	for(x=0; x<9; x++)
	{	cout<<a[x];
	}


return 0;
}