#include <iostream>
using namespace std;
int main()
{
    int n;
    int array[5]={4,5,6,7,8};
    cin>>n;
    int sum=0;
    for(n=0;n<5;n++)
    sum=sum+array[n];
    cout<<sum<<endl;
    
    

    return 0;
}