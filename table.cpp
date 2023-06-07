#include <iostream>
using namespace std;
//table
void table(int num) {
	for(int i=1;i<=10;i++)
		cout<<num*i<<" ";
}
int main() {
	int num;
	cin>>num;
	table(num);
	return 0;
}
