// whether there exists any integer B such that A,B, and C are in AP
#include <iostream>
using namespace std;
 
int main() {
	int A,C;
	float B;
	
	cout<<"Enter A\n";
	cin>>A;
	cout<<"\nEnter B\n";
	cin>>C;
	
	//storing mid point of A and C in B
	B=(float)(A+C)/2;
	
	//checking if B is integer
	int temp=B/1;
	if(B==temp)
		cout<<"\n"<<A<<" ("<<B<<") "<<C<<" are in AP"<<endl;
	else
		cout<<"\nNo Integer Exists such that A B C are AP"<<endl;
	return 0;
}
