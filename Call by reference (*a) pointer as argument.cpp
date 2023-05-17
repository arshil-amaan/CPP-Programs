#include <iostream>
using namespace std;
void reverse_dig(int *n)
{
  int ans=0,ld;
  while(*n)
  {  
    ld=*n%10;
    *n=*n/10;
    ans=ans*10+ld;
  }
  *n=ans;
}
 
void swap(int *a,int *b)
{
  int temp=*a;
  *a=*b;
  *b=temp;
}
 
int main() 
{
    int a,b;
    cin>>a>>b;
    int *pa,*pb;
    pa=&a;
    pb=&b;
 
    reverse_dig(pa);
    reverse_dig(pb);
 
    swap (pa,pb);
 
    cout<<"\n"<<a<<" "<<b;
 
}
