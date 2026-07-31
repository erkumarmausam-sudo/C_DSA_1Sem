#include <iostream>
using namespace std;
int main()

{
    int i , j,row,column, sum;
    
 int array[3][3]={{1,2,3},{4,5,6},{7,8,9}};

  for(int i=0;i<=2;i++){
   sum=0;
  for(int j=0;j<=2;j++)
  { sum+=array[i][j];
  } 
  cout<<sum<<"\n";
} row=0;
column=0;

for(int i=0;i<=2;i++){
    sum=0;
    for(int j=0;j<=2;j++){
        sum+=array[j][i];
    }cout<<sum<<"\n";
}
    return 0;
}

