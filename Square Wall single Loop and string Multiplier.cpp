#include <iostream>
using namespace std;
//square wall using operator *
string operator * (string a, unsigned int b) {
    string output = "";
    while (b--) {
        output += a;
    }
    return output;
}
int main()
{
    int s;
    string st="";
    cin>>s;
    for(int i=0;i<s;i++)
    {
        st=st+"*  ";
    }
    st=st+"\n";
    cout<<st*s;
	return 0;
}
