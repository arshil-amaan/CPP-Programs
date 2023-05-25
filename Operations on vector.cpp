#include <bits/stdc++.h>
// #include <vector>
using namespace std;
int main() {
	// Create an empty vector
	vector<int> vect1{1,2,3,4,5,6,7,8,9};
	cout<<"vect1 is :\n";
	for (auto i : vect1)
		cout<<i<<" ";
 
	cout<<"\nvect1.push_back() inserts element at end\n";
	vect1.push_back(42);
	for(auto i : vect1)
		cout<<i<<" ";
 
	cout<<"\nvect1.pop_back() removes last element\n";
	vect1.pop_back();
	for(auto i : vect1)
		cout<<i<<" ";
 
	cout<<"\nvect1.front() gives first element\n";
	cout<<vect1.front();

	cout<<"\nvect1.back() gives last element\n";
	//front() and back() return references hence can be used on left
	cout<<vect1.back()<<"\n";

	cout<<"vect1.insert(where,what) inserts element at provided place\n";
	// begin() and end() returns iterator hence can be used on left only using *
	int m =25;
	vect1.insert(vect1.begin(),m);
	for (auto i : vect1)
		cout<<i<<" ";
 
	cout<<"\nvect1.insert(vect.begin()+index,what) will insert at index location\n";
	vect1.insert(vect1.begin()+3,45);
	for(auto i : vect1)
        cout<<i<<" ";
 
    cout<<"\nvect1.insert(where + index,how many,what) will insert at index location\n";
    vect1.insert(vect1.begin()+4,2,39);
    for(auto i : vect1)
        cout<<i<<" ";
 
    cout<<"\nvect2.insert(where + index,starting + index,end + index) will insert another vector at index location\n";
    vector<int> vect2{77,88};
    vect2.insert(vect2.begin()+1,vect1.begin()+3,vect1.begin()+8);
    for(auto i : vect2)
        cout<<i<<" ";
 
 
    cout<<"\nvect1.erase(from where) erases that element\n";
    vect1.erase(vect1.begin());
    for(auto i : vect1)
    cout<<i<<" ";
 
    cout<<"\nvect1.erase(from where, till where) erases that element\n";
    vect1.erase(vect1.begin()+2,vect1.begin()+5);
    for(auto i : vect1)
    cout<<i<<" ";
 
    cout<<"\ncurrently vect2 is :\n";
    for(auto i : vect2)
        cout<<i<<" ";
 
    cout<<"\ncurrently vect2.size() is :\n";
    cout<<vect2.size();
 
    cout<<"\nvect2.clear() deletes whole vector";
    vect2.clear();
 
    cout<<"\nafter vect2.clear() vect2 is :\n";
    for(auto i : vect2)
        cout<<i<<" ";
 
    cout<<"\nnow vect2.size() is :\n";
    cout<<vect2.size();
 
    cout<<"\nvect2.empty() returns 1 if it is empty otherwise 0\n";
    cout<<"because vect2 is empty hence "<<vect2.empty();
 
    cout<<"\ncurrently vect1 is :\n";
    for(auto i : vect1)
        cout<<i<<" ";
 
    cout<<"\nvect1.resize(new size) resizes vect1\n";
    vect1.resize(7);
 
    cout<<"now vect1 is :\n";
    for(auto i : vect1)
        cout<<i<<" ";
 
    cout<<"\nvect1.resize(new size,value) resizes vect1, default value is 0\n";
	vect1.resize(10);
 
	cout<<"after further updation vect1 is :\n";
    for(auto i : vect1)
        cout<<i<<" ";
 
    cout<<"\nwe can also change default value of initialization (0) to anything\n";
	vect1.resize(12,99);
 
	cout<<"after further updation vect1 is :\n";
    for(auto i : vect1)
        cout<<i<<" ";
 
	return 0;
}
 
