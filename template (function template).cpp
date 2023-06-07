#include <bits/stdc++.h>
using namespace std;

template <typename var>
var myMax(var a, var b) {
    return a>b?a:b;
}
 
template <typename dttp, int limit>
dttp arrMax(dttp arr[], int n) {
	dttp res=arr[0];
	if(n<limit) {
		for(int i=0;i<n;i++)
			if(arr[i]>res)
				res=arr[i];
	    cout<<"Max in arr is = ";
	    return res;
	}
	else
		cout<<"Limit Exceeded";
	return 0;
}
 
int main() {
    int in1,in2;
    float fl1,fl2;
    char ch1,ch2;
 
    cin>>in1>>in2;
    cin>>fl1>>fl2;
    cin>>ch1>>ch2;
 
    cout<<myMax<int>(in1,in2);
    cout<<endl;
    cout<<myMax<float>(fl1,fl2);
    cout<<endl;
    cout<<myMax<char>(ch1,ch2);
    cout<<endl;
 
    float arr[8];
    for(int i=0;i<8;i++)
    {
        cin>>arr[i];
    }
    for(auto i: arr)
    cout<<i<<"\t\t";
 
    cout<<endl;
 
	const int lmt=50;
	// cout<<arrMax<float,50>(arr,8);
	cout<<arrMax<float,lmt>(arr,8);
	return 0;
}
