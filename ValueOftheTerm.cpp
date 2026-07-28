

#include <iostream>
using namespace std;
int main()
{

int n;
cout<<"valu of numbr of trm";
cin >>n ;
if(n==1)
cout<<"0";
else if(n==2)
cout<<"0"<<"1";
else{
    int first=0;
    int son=1;
    int sum=0;
    cout<<"0"<<"1";
    for(int i=3;i<=n;i++)
    { sum=first+son;
      cout<<sum<<" ";
      first=son;
      son=sum;}

}
    return 0;
}