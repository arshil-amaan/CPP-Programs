#include <iostream>
using namespace std;
//square wall using nested loops
int main()
{
    int s;
    cin>>s;
    //for rows
    for(int i=0;i<s;i++)
    {
        //for columns
        for(int j=0;j<s;j++)
        {
            cout<<"*  ";
        }
        cout<<"\n";
    }
	return 0;
}
