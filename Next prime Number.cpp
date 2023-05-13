#include <iostream>
using namespace std;
//Next Prime
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
    //checks from next to double of that number
    for(int i=n+1;i<2*n;i++)
    if(isPrime(i))
    {
        cout<<i;
	    return 0;
    }
}
