#include <iostream>
using namespace std;
void swap(int &x, int &y){
	int temp = x;
	x=y;
	y=temp;
}
int main() {
	int a,b;
	cout<<"A = "<<endl;
	cin>>a;
	cout<<"\nB = "<<endl;
	cin>>b;
	cout<<"Before Swap";
	cout<<"\n"<<"A = "<<a<<"\n"<<"B = "<<b<<endl;
	swap(a,b);
	cout<<"After Swap";
	cout<<"\n"<<"A = "<<a<<"\n"<<"B = "<<b;
	return 0;
}
