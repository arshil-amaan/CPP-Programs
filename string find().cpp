#include <iostream>
using namespace std;

int main() {
	//string created
	string myString = "Myself Arshil Amaan Ansari";

	//previewing saved string
	cout<<"Saved string is \""<<myString<<"\""<<endl;

	//asking what needs to be found
	string findIt;
	cout<<"What you wanna find?\n";
	cin>>findIt;

	//storing result in res after find()
	int res = myString.find(findIt);

	//if searched string not found find() returns "string::npos"
	if(res == string::npos)
		cout<<"Not found";
	else
		cout<<"First occurrence at "<<res;
	return 0;
}
