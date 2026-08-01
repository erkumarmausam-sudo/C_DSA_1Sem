#include <iostream>
using namespace std;
void printNum(int n){
    if(n > 10) return;
    cout<< n <<" ";
    printNum(n + 1);
}
int main()
{ printNum(1);


    return 0;
}