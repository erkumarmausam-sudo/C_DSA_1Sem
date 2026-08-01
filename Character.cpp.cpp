#include <iostream>
using namespace std;
int main()
{
	int x,y; 
	for(x=1; x<=4; x++)
	{	for(y=1; y<=4; y++)
		{	cout<<" ";
		}
		for(y=63+1*x; y>=65; y--)
		{
			cout<<char(y);
		}
		cout<<endl;
	}

	return 0;
}