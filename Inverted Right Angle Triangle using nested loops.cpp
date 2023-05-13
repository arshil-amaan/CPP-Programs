#include <iostream>
using namespace std;
//Inverted Right Angle Triangle using nested loops
int main()
{
    int s;
    cin>>s;
    for(int i=0;i<s;i++)
    {
        for(int j=0;j<(s-i);j++)
        {
           cout<<"*  ";
        }
        cout<<"\n";
    }
	return 0;
}
