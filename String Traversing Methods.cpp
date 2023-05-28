#include <iostream>
#include <typeinfo>
using namespace std;

int main() {
	//array traversing methods
	string mystr = "My String";
 
	//Traverse Method 1
	for(int i=0;i<mystr.length();i++)
	cout<<mystr[i];
	cout<<endl;
 
	//Traverse Method 2
	for(char x : mystr)
	cout<<x;
	cout<<endl;
 
	//Traverse Method 3
	for(auto i=mystr.begin();i!=mystr.end();i++)
	cout<<(*i);
	return 0;
}
