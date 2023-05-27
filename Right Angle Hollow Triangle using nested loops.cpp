#include <iostream>
using namespace std;
//Right Angle Hollow Triangle using nested loops
int main() {
	int s;
	cin>>s;
	for(int i=0;i<s;i++) {
		for(int j=0;j<s;j++) {
			if(j==0||j==i||i==s-1)
				cout<<"*  ";
			else
				cout<<"   ";
		}
		cout<<"\n";
	}
	return 0;
}
