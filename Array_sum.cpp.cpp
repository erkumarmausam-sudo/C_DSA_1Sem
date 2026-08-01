#include <iostream>
using namespace std;

int main()
{
    int array[] = {1,2,3,4,5,6,7,8,9,10,12,13,15,21,22,45,90,100};

    cout << array[0] + array[1] << endl;    // 1 + 2 = 3
    cout << array[16] + array[17] << endl;  // 90 + 100 = 190

    return 0;
}