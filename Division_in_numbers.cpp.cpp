#include <iostream>
using namespace std;
int si(int b,int c,int d) {
	return(b*c*d)/100;
}
int main() {
	int p = 100,r=12,t=23;
	cout<<si(p,r,t);
	return 0;
}