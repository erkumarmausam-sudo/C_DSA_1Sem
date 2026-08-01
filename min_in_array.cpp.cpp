#include <iostream>
using namespace std;
int main()
{
	int arr[]= {111,34,53,89,23,54,77};
	int min = arr[0];
	int secmin = 0;
	for(int i=0; i<7; i++)
	{
		if(arr[i]<min)
		{
			secmin = min;
			min = arr[i];

		}
		else if(arr[i]<secmin && arr[i] !=min) {
			secmin =arr[i];
		}
	}
	cout<<"second minimum value is :"<<secmin;
	return 0;
}