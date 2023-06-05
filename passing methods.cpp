#include <iostream>
using namespace std;

// pass by value
void fun(int x, int y) {
	cout<<"x: "<<x<<"\ny: "<<y<<endl;
}

// pass by reference
void fun(int &x, int &y) {
	cout<<"x value : "<<x<<endl<<"y value : "<<y<<endl;
}

// pass by address
void fun(int *x, int *y) {
	cout<<"x is : "<<*x<<endl<<"y is : "<<*y<<endl;
}

int main() {
	int a=10,b=15;
	// pass by value, pass by reference
	fun(a,b);
	// pass by address
	fun(&a,&b);
	return 0;
}
