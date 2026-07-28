#include <iostream>
using namespace std;
int main()
{
    int rain,player;cin>>rain>>player;
    
     if(rain==0){
         if(player>=11)cout<<"yes game is on";
         else cout<<"no game";
         
         
     }
     else{
         cout<<"no game";
     }
    return 0;
}