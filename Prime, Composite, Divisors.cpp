#include<iostream>
using namespace std;
 
bool is_prime(int a) {
    for(int i=2;i<a;i++) {
    	//check if divisible by all numbers
        if(a%i==0) {
            // cout<<i<<"\n";
            cout<<a<<" is not prime \n";
            return false;
        }
    }
    return true;
}
 
void divisors(int a) {
    for(int i=2;i<a;i++) {
    	//checking if any number able to fully divide given number
        if(a%i==0)
        //printing the numbers which can fully divide given number
        cout<<i<<" ";
    }
}
int main() {
    int b;
    cin>>b;
 
    if(is_prime(b))
    	cout<<b<<" is Prime";
    else
    	cout<<"Below are its all divisors \n";
 
    divisors(b);
 
    return 0;
}
