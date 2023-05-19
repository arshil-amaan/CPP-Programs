#include <iostream>
using namespace std;
 
int main() {
    // rows and columns
    int ar,ac;
    cin>>ar>>ac;
    int arr[ar][ac];
    //entering elements in array
    for(int i=0;i<ar;i++)
    {
        for(int j=0;j<ac;j++)
        {
            cin>>arr[i][j];
        }    
    }
    //printing elements of array
    for(int i=0;i<ar;i++)
    {
        for(int j=0;j<ac;j++)
        {
            cout<<arr[i][j]<<"  ";
        }
        cout<<"\n";
    }
	return 0;
}
