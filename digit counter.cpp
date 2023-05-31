#include <iostream>
using namespace std;
//how many digits in user provided integer
int main()
{
	int num, digits=0;
	cin>>num;
	int n=num;
	//Divide number by 10 and increase counter
	while(n>0) {
		n=n/10;
		digits++;
    }
	cout<<num<<" has "<<digits<<" Digits";
	return 0;
}
