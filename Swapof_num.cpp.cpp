#include <iostream>
using namespace std;
    void swap(int* a ,int* b)
    { 
        int temp=*a;
        *a=*b;
        *b=temp;
        cout<<"\nAfter swapping :"<<*a<<"and "<<*b;
    }
    int main(){
        int num1=10,num2=20;
        cout<<"Before swapping : "<<num1<<" and "<<num2;
        swap(&num1,&num2);
    return 0;
    }
