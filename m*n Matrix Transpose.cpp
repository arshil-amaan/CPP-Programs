#include <iostream>
using namespace std;

int main()  {
	int n,m,temp;
	cin>>n>>m;
	int arr[n][m];

	//input array
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>arr[i][j];
 
	cout<<"previously\n";
	//print arr
	for(int i=0;i<n;i++) {
		for(int j=0;j<m;j++)
			cout<<arr[i][j]<<"\t";
	cout<<"\n";
	}
 
	cout<<"Transposed\n";
	//print arr
	for(int i=0;i<m;i++) {  
		for(int j=0;j<n;j++)
			cout<<arr[j][i]<<"\t";
		cout<<"\n";
	}
	return 0;
}
