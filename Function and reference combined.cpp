#include <iostream>
using namespace std;
//fun() returns local static variable
int &fun() {
	//non static variables don't exist once function call is over
	//hence never return reference, a non static local variable
	static int x=10;
	return x;
}
int main() {
	//return value of fun() referenced with z
	int &z=fun();
	//fun() execute normally
	cout<<fun()<<" ";
	//changes made in z
	z=25;
	//hence changes occurred in fun()
	cout<<fun();
	return 0;
}
