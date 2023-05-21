#include <iostream>
using namespace std;
 
int main() {
  int n,maxzer=0,zerincol=0,finans=0;
  cin>>n;
  int arr[n][n];
 
  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    {
      cin>>arr[i][j];
    }
 
  //print arr
  for(int i=0;i<n;i++)
  {  
    for(int j=0;j<n;j++)
    {
      cout<<arr[i][j]<<"\t";
    }
    cout<<"\n";
  }
 
  cout<<"\n";
 
  for(int j=0;j<n;j++)
  {
    zerincol=0;
    for(int i=0;i<n;i++)
    {
      if(arr[i][j]==0)
      zerincol++;
    }
    cout<<"zeros in col "<<j<<" - "<<zerincol<<"\n";
    if(zerincol>maxzer)
    {  
      maxzer=zerincol;
      finans=j;
    }
  }
 
  cout<<"\nmaximum "<<maxzer<<" zeros are there, which are in column index "<<finans;
 
    return 0;
}
