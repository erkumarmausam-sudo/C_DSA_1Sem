#include <iostream>
using namespace std;
int main()
{
	int m;
	cin>>m;
	int a[3]= {0,0,0};
	while(m--) {
		int sum=0;
		int n;
		cin>>n;
		int arr[n];
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
		}
		for(int i=0;i<n;i++) {
			sum +=arr[i];
		}
		a[m]=sum;
	}
	for(int i=2;i>=0;i--) {
		cout<<a[i]<<endl;
	}
	return 0;
}