//Average of an array
#include <iostream>
using namespace std;
int main() {
	int n, sum=0;
	double avg;
	cout<<"Enter number of Elements"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Array has been Created"<<endl;
	
	cout<<"Now enter Elements of Array"<<endl;
	for (int i=0;i<n;i++)
		cin>>arr[i];
	
	cout<<"Entered Array is"<<endl;
	for (int i=0;i<n;i++)
	    cout<<arr[i]<<" ";
	
	cout<<endl;
	for(int i=0;i<n;i++)
		sum+=arr[i];
	
	avg=(double)sum/n;
	cout<<"Average of Entered Array is "<<avg;
	return 0;
}
