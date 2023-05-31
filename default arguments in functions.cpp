#include <iostream>
using namespace std;
//Sum of 1 or 2 or 3 or 4 user provided numbers
//default values of b,c,d is 0
int sum(int a,int b=0,int c=0,int d=0) {
	return a+b+c+d;
}
int main() {
	//if variables are not initialized compiler may give it garbage value
	int a=0,b=0,c=0,d=0;
	cin>>a;
	cin>>b;
	cin>>c;
	cin>>d;
	//no matter if b, c or d are blank
	cout<<sum(a,b,c,d);
	return 0;
}
