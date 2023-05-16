#include <iostream>
using namespace std;
 
int main() {
 
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n,maxis,maxis2=0;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
 
  maxis=arr[0];
  maxis2=arr[0];
  for(int i=0;i<n-1;i++)
    if(arr[i+1]>maxis)
    {
 
      maxis=arr[i+1];
    }
  for(int i=0;i<n-1;i++)
    if(arr[i+1]>maxis2 && arr[i+1]<maxis)
    {
 
      maxis2=arr[i+1];
    }
 
 
    cout<<maxis<<" "<<maxis2;
  // for(int i=0;i<n;i++)
  //   cout<<arr[i]<<" ";
	return 0;
}
