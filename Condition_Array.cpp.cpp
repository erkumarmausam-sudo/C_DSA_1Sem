#include <iostream>
using namespace std;
int main()
{
    int n, largest;
    int array[5]={10,20,30,40,50};
    largest=array[0];
    for(n=0;n<5;n++)   {
        if(largest<=array[n])
        largest=array[n];
    }
cout<<largest<<endl;
    return 0;
}