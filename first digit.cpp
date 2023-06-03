#include <iostream>
using namespace std;
//First Digit of given Number
int firstDigit(int num) {
	int fd =abs(num);
	//removes ones digit untill it is single digit
	while(fd>9) {
		fd=fd/10;
	}
	return fd;
}
int main() {
	int num;
	cin>>num;
	cout<<"first digit of "<<num<<" is "<<firstDigit(num);
}
