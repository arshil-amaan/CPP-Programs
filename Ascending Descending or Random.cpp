#include <iostream>
using namespace std;
//Returns true if Array Elements are Ascending
bool ascCheck(int arr[],int n){
    for(int i=1;i<n-1;i++)
        if(arr[i-1]>=arr[i])
            return false;
    return true;
}

//Returns true if Array Elements are Descending
bool dscCheck(int arr[],int n)
	for(int i=1;i<n-1;i++)
		if(arr[i-1]<=arr[i])
			return false;
    return true;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	//Values Inserted
	for(int i=0;i<n;i++){
		arr[i]=0;
		cin>>arr[i];
    }
	
    if(ascCheck(arr,n))
    cout<<"Ascending";
    else if(dscCheck(arr,n))
    cout<<"Descending";
    else
    cout<<"Neither Ascending nor Descending";
	return 0;
}
