#include <iostream>
using namespace std;
//Odd Even Game
void oddEvenGame(int n)
{
    cout<<n<<endl;
    //if even ==> Friend win
	if(n%2==0)
	    cout<<"You are Winner of this round";
	else
	//if odd ==> Ash win
	    cout<<"Ash Wins this round";
}
int main()
{
    cout<<"Welcome to the Game"<<endl;
    cout<<"Enter Any Random Number"<<endl;
    int num;
	cin>>num;
	oddEvenGame(num);
	return 0;
}
