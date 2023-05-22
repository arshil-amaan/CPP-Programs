#include <iostream>
using namespace std;
 
int main() {
	int n, count=0, temp;
    cout<<"Enter number of Elements"<<endl;
    cin>>n;
    temp=n;
	int arr[n];
	cout<<"Array has been Created"<<endl<<"Now enter Elements of Array"<<endl;
	for (int i=0;i<n;i++) {
		cin>>arr[i];
	}
	cout<<"Entered Array is"<<endl;
	for (int i=0;i<n;i++) {
	    cout<<arr[i]<<" ";
	}
	cout<<endl;
	for (int i=0;i<n;i++) {
	    // cout<<"checking for "<<arr[i]<<endl;
	    for (int j=i+1;j<n;j++) {
	        if(arr[i]==arr[j]) {
				count++;
	            break;
	        }
	    }
	    // cout<<"count = "<<count<<endl;
	}
	temp-=count;
	cout<<"Distinct Elements Are "<<temp;
	return 0;
}
