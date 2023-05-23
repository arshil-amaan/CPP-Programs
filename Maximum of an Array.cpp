#include <iostream>
using namespace std;

int main() {
	int n, max;
	cout<<"Enter number of Elements"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Array has been Created"<<endl;
	cout<<"Now enter Elements of Array"<<endl;
	for (int i=0;i<n;i++)
		cin>>arr[i];
	
	max=arr[0];
	cout<<"Entered Array is"<<endl;
	for (int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	for(int i=1;i<n;i++)
		if(max<arr[i])
			max=arr[i];
	cout<<"Maximum of Entered Array is "<<max;
	return 0;
}
