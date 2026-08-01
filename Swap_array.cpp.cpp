#include <iostream>
using namespace std;
int main()
{
	int a[10]= {10,9,8,7,6,5,4,3,2,1},k,x,y,t;

	for(x=0; x<10-1; x++)
	{	for(y=0; y<10-1-x; y++)
		{	if(a[y]>a[y+1])
			{	t=a[y];
				a[y]=a[y+1];
				a[y+1]=t;
			}
		}
	}
	for(auto x:a)cout<<x<<" ";
	return 0;
}