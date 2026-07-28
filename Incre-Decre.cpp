

#include <iostream>
using namespace std;
int main()
{ int counter=5;
cout << "initial counter:" <<counter << std::endl;
cout <<"pre-increment (++counter):" <<(++counter) <<endl;
cout << "counter after pre-increment:" << counter <<endl;
cout <<"post-increment (counter++):" <<(counter++) << endl;
cout << "counter after post-increment:" << counter << endl;
cout <<"pre-decrement (--counter):" << ( --counter) <<std::endl;
cout <<"counter after pre-decrement:" << counter <<std::endl;
cout << "post-decrement (counter--):" << (counter--) << std::endl;
cout << "counter after post-decrement:" << counter << std::endl;
return 0;
}