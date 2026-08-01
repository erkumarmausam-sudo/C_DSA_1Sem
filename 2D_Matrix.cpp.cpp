#include <iostream>
using namespace std;
int main()
{
    int i , j;
 int array[3][3]={{1,2,3},{4,5,6},{7,8,9}};
  for(i=0;i<=2;i++)
  {for(j=0;j<=2;j++)
  { cout<<array[i][j];
  }
  cout<<endl;
  }
    return 0;
}