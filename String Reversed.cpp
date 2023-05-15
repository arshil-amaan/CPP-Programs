#include <iostream>
using namespace std;
 
int main() {
	cout<<"Enter string you want to reverse"<<endl;
	string origstr;
	getline(cin,origstr);
 
	//printing original string
	cout<<origstr<<endl;
 
	//printing stored reversed
	//declare new empty string
	string newstr= "";
	for(int i = 0;i<=origstr.length();i++)
	newstr = newstr + origstr[origstr.length()-i];
	cout<<newstr<<endl;
 
	//printing string backwards directly
	for(int i=origstr.length();i>-1;i--)
	cout<<origstr[i];
	return 0;
}
