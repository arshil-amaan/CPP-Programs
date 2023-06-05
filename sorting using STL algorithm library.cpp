#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	//array initialized
	int N;
	cin>>N;
	int arr[N];
	for(int i=0;i<N;i++)
		cin>>arr[i];
 
	//array print
	for(auto n : arr)
		cout<<n<<" ";
 
	//Sort function called
	sort(arr,arr+5);

	cout<<"\nAfter sort\n";

	//array print
	for(auto n : arr)
		cout<<n<<" ";

	//binary search function called
	//(start,end,element)
	if(binary_search(arr,arr+5,85))
	cout<<"\nPresent";
	else
	cout<<"\nNot Present";
	return 0;
}
