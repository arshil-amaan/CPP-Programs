#include <iostream>
using namespace std;
//fibonacci series number on place of 'num'
int fibo(int n) {
	if(n==1 || n==2)
		return 1;
	else {
		int a=1,b=1, c;
	    for(int i=3;i<=n;i++) {
			c=a+b;
	        a=b;
	        b=c;
	        //un-comment below line for full fibonacci series
	        // cout<<c<<" ";
	    }
    	return c;
    }
}
 
int main() {
    int num;
    cin>>num;
    // cout<<"1 1 ";
    cout<<fibo(num);
}
