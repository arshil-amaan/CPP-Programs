#include <iostream>
using namespace std;
void isLeap(int year)
{
	//divisible by 4 and NOT Divisible by 100 ==>Leap
    if(year%4==0 && year%100!=0)
        cout<<year<<" is Leap Year";
    else
    //Even if not divisible by 100 check whether divisible by 400 ==>Leap
        if(year%400==0)
            cout<<year<<" is Leap Year";
        else
        //Otherwise ==> NOT Leap (Common Year)
            cout<<year<<" is NOT a Leap Year";
}
int main()
{
	int year;
	//Input Year from user
    cin>>year;
    //calling isLeap()
    isLeap(year);
    return 0;
}
