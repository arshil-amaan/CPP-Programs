#include <iostream>
using namespace std;
//Greatest Common Divisor
int gcd(int a, int b)
{
    for(int i=min(a,b);i>1;i--)
    if(a%i==0 && b%i==0)
    {
        return i;
    }
    return 0;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);
	return 0;
}
