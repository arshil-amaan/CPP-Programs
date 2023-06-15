#include <iostream>
using namespace std;

int main() {
    // rows and columns
    int row,col;
    cin>>row>>col;
	int arr[row][col];
    
	//entering elements in array
    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            cin>>arr[i][j];
        }    
    }
    //printing elements of array
    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            cout<<arr[i][j]<<"  ";
        }
        cout<<"\n";
    }
	return 0;
}
