#include <iostream>
using namespace std;
//how many digits in user provided integer
int main() {
	int s;
	cin>>s;
	for(int i=0;i<s;i++) {
		for(int j=0;j<s;j++) {
			if(i==0||i==(s-1)||j==0||j==(s-1))
				cout<<"*\t";
			else
				cout<<"\t";
		}
		cout<<"\n";
	}
	return 0;
}
