#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//required variables created
	int n,*arr,sum=0;

	//array size input
	cin>>n;

	//pointer array created
	arr = new int [n];
	// int arr[n];

	//array elements input
	for(int i=0;i<n;i++)
		cin>>arr[i];

	//array elements output  
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";

	//storing sum of all elements in sum
	for(int i=0;i<n;i++)
		sum+=arr[i];

	cout<<"\n"<<sum<<"\n";

	//***Deleting Array***
	delete []arr;

	//printing first element of array
	cout<<arr[0]<<"\n";

	//array elements output 
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";


return 0;
}
