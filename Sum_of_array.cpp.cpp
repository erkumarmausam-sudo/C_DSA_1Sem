/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
int n , avg , sum;
int array[5]={1,2,3,4,5};
cin>>n;
sum=0;
for(n=0;n<5;n++)
sum=sum+array[n];
avg=sum/5;
cout<<avg<<endl;

    return 0;
}