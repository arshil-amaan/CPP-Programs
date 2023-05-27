#include <iostream>
using namespace std;
//Right Angle Triangle using nested loops
int main() {
    int s;
    cin>>s;
    //for rows
    for(int i=0;i<s;i++)
    {
        //for columns
        for(int j=0;j<=i;j++)
        {
            cout<<"*  ";
        }
        cout<<"\n";
    }
	return 0;
}
