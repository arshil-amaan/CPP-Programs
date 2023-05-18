#include <iostream>
using namespace std;
 
int main() {
	pair<int, int>p1(12,25), p2(12,10);
 
	//Only first elements are compared if they match then second are compared
	cout<<(p1==p2)<<" "<<(p1!=p2)<<" "<<(p1>p2)<<" "<<(p1<p2);
	return 0;
}
