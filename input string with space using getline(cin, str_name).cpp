#include <iostream>
using namespace std;

int main() {
	string myString;
	//cin>>str_name; will stop taking input if space encountered
	// cin>>myString;
	//so use getline(cin, str_name); instead
	getline(cin, myString);
	cout<<"Entered String is "<<myString;
	return 0;
}
