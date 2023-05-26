#include <iostream>
using namespace std;
//access string characters by index
int main() {
	string sentence;
	cin>>sentence;
	//string_name.length() returns number of characters in string
	for(int i= 0;i<=sentence.length();i=i+2)
		//string_name[i] accesses ith character
		cout<<sentence[i];
	return 0;
}
