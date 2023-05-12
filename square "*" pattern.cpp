#include <iostream>
using namespace std;
//square
int main() {
    int s;
    cin>>s;
    for(int i=1;i<=s;i++) {
        //first and last row
       if(i==1 || i==s) {
            for(int j=1;j<=s;j++)
            	cout<<"*\t";
        }
        else {
            //middle rows
            for(int j=1;j<=s;j++) {
                if(j==1 || j==s)
                	cout<<"*\t";
 
                //center part
                else
                cout<<"\t";
            }
        }
        cout<<"\n";
    }
	return 0;
}
