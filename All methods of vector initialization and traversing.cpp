#include <bits/stdc++.h>
using namespace std;
 
int main() {
    // vector initialization method 1
    // '=' is optional
	vector<int> v1={1,2,3,4,5};
 
	// vector initialization method 2
	// using push_back()
	// It can be used for user input
	vector<int> v2;
	v2.push_back(6);
	v2.push_back(7);
	v2.push_back(8);
	v2.push_back(9);
	v2.push_back(10);
 
	// vector initialization method 3
	// vect(how many , what)
	vector<int> v3(5,15);
 
	// vector initialization method 4
	vector<int> v4{16,17,18,19,20};
 
	// vector initialization method 5
	// array to vector
	int arr[5]={21,22,23,24,25};
	// vect(start , end+1)
	vector<int> v5(arr + 2,arr + 5);
 
	// vector initialization method 6
	// vector to vector
	vector<int> vect{26,27,28,29,30};
	vector<int> v6(vect.begin(),vect.end());
 
	// vector initialization method 7
	// vect(size)
	vector<int> v7(5);
	int value = 35;
	// repeatation in vector using fill(from , to , what)
	fill(v7.begin(),v7.end(),value);
 
	vector<int> v8{36,37,38,39,40};
 
 
	/**************************************************************************/
 
	// printing all vectors
	cout<<"vector v1\n";
	// vect.size() returns the number of elements in vector
	for(int i=0;i<v1.size();i++)
	    cout<<v1[i]<<" ";
 
	cout<<"\n";
 
	cout<<"vector v2\n";
	for(int i=0;i<v2.size();i++)
	// vect.at(index) index out of bound check and throws warning
	    cout<<v2.at(i)<<" ";
 
	cout<<"\n";
 
	cout<<"vector v3 (Only displaying manipulated)\n";
	for(auto i : v3)
	// output can be manipulated just like array, but original values are unchanged
	    cout<<i*2<<" ";
 
	cout<<"\n";
 
	cout<<"vector v4\n";
	// using iterator
	// 'auto' is used in place of vector<int>::iterator
	for(auto it=v2.begin();it!=v2.end();it++)
	    cout<<*it<<" ";
 
	cout<<"\n";
 
	cout<<"vector v5\n";
	for(auto i : v5)
	    cout<<i<<" ";
 
	cout<<"\n";
 
	cout<<"vector v6\n";
	for(auto i : v6)
	    cout<<i<<" ";
 
	cout<<"\n";
 
	cout<<"vector v6 (After change using reference operator)\n";
	// using reference operator actual vector elements can be updated
	for(auto &i : v6)
	{
	    i=7;
	    cout<<i<<" ";
	}
 
	cout<<"\n";
 
	cout<<"vector v7\n";
	for(auto i : v7)
	    cout<<i<<" ";
 
	cout<<"\n";
 
	cout<<"vector v8\n";
	// reverse vector print using vect.rbegin() (address of last element)
	// vect.rend() (address of before first element)
	// these are special functions because "it++"  will decrease address
	for(auto it=v8.rbegin();it!=v8.rend();it++)
	    cout<<*it<<" ";
	return 0;
}
