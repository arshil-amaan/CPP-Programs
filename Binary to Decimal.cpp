#include <iostream>
#include<math.h>
using namespace std;
 
int main() {
	int binary,decimal=0,len=0,temp,temp2,ld;
	cin>>binary;
	temp=binary;
	temp2=binary;
	while(temp) {
		temp=temp/10;
		len++;
	}
 
	for(int i=0;i<=len;i++) {
		ld=temp2%10;
		temp2=temp2/10;
		decimal=decimal+pow(2,i)*ld;
	}
	cout<<"Decimal Equivalent of "<<binary<<" is "<<decimal<<endl;
	return 0;
}
