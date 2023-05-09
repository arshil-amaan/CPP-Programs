#include <iostream>
using namespace std;
//factorial
int factorial(int num)
{
	//unnecessary global facto created intentionally for static variable understanding
	int facto;
    // int fact=1;
    for(int i=1;i<=num;i++)
	{	//static variable runs only once
		static int fact=1;
	    fact=fact*i;
	    facto=fact;
    }
    return facto;
}
int main() {
    int num;
    cin>>num;
    cout<<factorial(num);
	return 0;
}
