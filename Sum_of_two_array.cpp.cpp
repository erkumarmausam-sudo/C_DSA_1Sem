#include <iostream>
using namespace std;
int main()
{
 int i , j, sum=0;
 int array[3][3]={{1,2,3},{4,5,6},{7,8,9}};
  for(i=0;i<=2;i++)
  {for(j=0;j<=2;j++)
  sum=sum+array[i][j];
  
  }
  cout<<sum<<endl;
    return 0;
}