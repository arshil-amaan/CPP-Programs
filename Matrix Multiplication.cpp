#include <iostream>
using namespace std;
 
int main() {
    int ar,ac;
    cin>>ar>>ac;
    int arr[ar][ac];
    //filling elements in arr
    for(int i=0;i<ar;i++)
    {
        for(int j=0;j<ac;j++)
        {
            cin>>arr[i][j];
        }    
    }
    //printing arr
    cout<<"First Matrix:\n"<<endl;
    for(int i=0;i<ar;i++)
    {
        for(int j=0;j<ac;j++)
        {
            cout<<arr[i][j]<<"  ";
        }
        cout<<"\n";
    }
 
    //filling elements in brr
    int brr[ar][ac];
    for(int i=0;i<ar;i++)
    {
        for(int j=0;j<ac;j++)
        {
            cin>>brr[i][j];
        }    
    }
    //printing brr
    cout<<"\nSecond Matrix:\n"<<endl;
    for(int i=0;i<ar;i++)
    {
        for(int j=0;j<ac;j++)
        {
            cout<<brr[i][j]<<"  ";
        }
        cout<<"\n";
    }
 
    //multiplying arr and brr and storing in crr
    int crr[ar][ac];
    for(int i=0;i<ar;i++)
    {
        for(int j=0;j<ac;j++)
        {
            int temp=0;
            for(int k=0;k<ac;k++)
            {
                temp=temp+(arr[i][k]*brr[k][j]);
            }
            crr[i][j]=temp;
        }
    }
    //printing crr
    cout<<"\nMultiplied Matrix:\n"<<endl;
    for(int i=0;i<ar;i++)
    {
        for(int j=0;j<ac;j++)
        {
            cout<<crr[i][j]<<"  ";
        }
        cout<<"\n";
    }
	return 0;
}
