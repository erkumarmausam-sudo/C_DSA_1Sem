#include <iostream>
using namespace std;
int main()
{
int i, n=5 ,reverse;
int array[5]={1,2,3,4,5};
for(i=0;i<n/2;i++)
{
    swap(array[i],array[n-i-1]);
}
for(i=0;i<n;i++)
{
    cout<<array[i]<<" ";
}
    return 0;
}