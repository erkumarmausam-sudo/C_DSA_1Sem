#include <iostream>
using namespace std;
void matrix(int A[100][100], int B[100][100], int n)
{
    int C[100][100];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
			C[i][j]=A[i][j]+B[i][j];
	}

	cout<<"sum of two matrix A and B is ";
	for( int i=0; i<n; i++)
	{

		for( int j=0; j<n; j++)
			cout<<C[i][j]<<" ";
				cout<<endl;
	}

}
int main()
{
	int n;
	cin>>n;

	int A[100][100],B[100][100];
	for(int i=0; i<n; i++)
	{	for(int j=0; j<n; j++)
		{
			cin>>A[i][j];
		}
	}
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n; j++)
			{
				cin>>B[i][j];
			}
		}
		 matrix(A,B,n);
		return 0;
	}