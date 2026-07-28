#include <iostream>
using namespace std;
int main()
{
    int A,B,C;
cin>>A;
    cin>>B;
    cin>>C;
    if((A>B) && (A>C))
    cout<<"A is largest number";
   else if ((B>A) && (B>C))
    cout<<"B is largest number";
    else 
    cout<<"C is largest number";
    

    return 0;
}