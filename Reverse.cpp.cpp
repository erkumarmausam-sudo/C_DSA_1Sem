#include <iostream>
using namespace std;
int countones(int a[1000],int n)
{
	int count=0;
	for (int i=0; i<n; i++)
	{
		if (a[i]==1)
			count++;
	}
	return count;
}
int main()
{
	int a[1000];
	int n;
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>a[i];
	int res=countones(a,n);
	cout<<"No of 1's in array is "<<res;
return 0;
}