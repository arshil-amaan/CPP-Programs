#include <iostream>
using namespace std;

int main() {
	int row=3, col=3;
	// cin>>row;
	// cin>>col;
	int arr[row][col];
	//array input
	for(int i=0;i<row;i++) {
		for(int j=0;j<col;j++)
			cin>>arr[i][j];
	//printing entered array
	for(int i=0;i<row;i++) {
		for(int j=0;j<row;j++)
			cout<<arr[i][j]<<" ";
		cout<<"\n";
	}
    //anpther array created
    int brr[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<row;j++)
        {
        	//holding transposed elements in new array
            brr[i][j]=arr[j][i];
        }
    }
 
 
    cout<<"\nTranspose:\n";
    //printing transposed array
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<row;j++)
        {
            cout<<brr[i][j]<<" ";
        }
        cout<<"\n";
    }
	return 0;
}
