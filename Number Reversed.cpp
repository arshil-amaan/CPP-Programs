#include<iostream>
using namespace std;
int main(){
    int t,N;
    cin>>t;
    while(t--)
    {
      int rev=0;
      cin>>N;
      while(N)
      {
	      //storing last digit at ones place in each loop
	      rev=rev*10+N%10;
	      //removing last digit
	      N=N/10;
      }
      cout<<rev<<endl;
    }
    return 0;
}
