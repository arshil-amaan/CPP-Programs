#include <iostream>
using namespace std;

int sumOfAll(int a) {
	int ld, sum=0;
	while(a>0){
		ld=a%10;
		a=a/10;
		sum=sum+ld;
    }
    return sum;
}
int main() {
    int num;
    cin>>num;
	int t=sumOfAll(num);
	while(t>9)
	{
	    t=sumOfAll(t);
	}
	// cout<<sumOfAll(t);
	cout<<t;
}
