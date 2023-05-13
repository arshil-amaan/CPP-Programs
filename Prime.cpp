#include <iostream>
using namespace std;
//Prime
int main()
{
    int n;
    cin>>n;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<n<<" is NON Prime.";
            return 0;
        }
    }
    cout<<n<<" is Prime.";
	return 0;
}
