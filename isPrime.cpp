#include <iostream>
using namespace std;
//Prime check
bool isPrime(int n)
{
    if(n==1)
    return false;
    else
    {
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            return false;
        }
        return true;
    }
}
int main()
{
    int n;
    cin>>n;
    //true/false bool outputs
    // cout<<std::boolalpha<<isPrime(n);
    if(isPrime(n))
    cout<<"Yes";
    else
    cout<<"No";
	return 0;
}
