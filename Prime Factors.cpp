#include <iostream>
#include <math.h>
using namespace std;
//prime factors
// Prime checking function
bool is_prime(int a) {
	for(int i=2;i<a;i++)
		if(a%i==0)
			return false;
	return true;
}

int main() {
    int num;
    cin>>num;
 
    for(int i=2;i<num;i++)
    {
        //  "!" for false
        //it will allow only prime i's to pass
        if(!is_prime(i))
        continue;
        else
        {
 
            for(int j=1;j<=num/2;j++)
            {
                //(num)[variable] typecast any data type to int forcefully
                if(num%(int)pow(i,j)==0)
                {
                    cout<<i<<" ";
                }
            }
        }
    }
    cout<<"\n1 and number itself ("<<num<<") are always factors";
	return 0;
}
