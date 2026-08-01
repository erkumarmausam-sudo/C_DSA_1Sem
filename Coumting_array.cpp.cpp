#include <iostream>
using namespace std;
int main()
{

	int araay[10]= {1,2,3,4,5,6,7,8,9,10};
	int even=0;
	int odd = 0;
	for( int i=0; i<=9; i++) {
		if(araay[i]%2==0) {
			even++;
		}
		else
		{
			odd++;
		}
	}
	if(even>odd) {
		cout<<"EVEN";
	}
	if (odd>even) {
		cout<<"ODD";
	}
	else
	{
		cout<<"Tie"<<endl;}
		return 0;
	}
