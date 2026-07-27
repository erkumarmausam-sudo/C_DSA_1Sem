

#include <iostream>
using namespace std;
int main()
{
   
int n;
cout<< "valu of numbr";
cin >> n;
int fat = 1;
for(int i=n;i>>1;i--)
{fat*=i;}
cout<<fat;

    return 0;
}