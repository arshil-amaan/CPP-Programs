#include <iostream>
#include <algorithm>
//to use vector compiler may ask for #include <vector>
#include <vector>
using namespace std;

int main() {
	vector<int> vect = {10, 20, 30, 40, 50, 60};

	// whole vector access method 1
	for(auto h : vect)
		cout<<h<<" ";
 
	cout<<"\n";
	// whole vector access method 2
	for(auto i=vect.begin();i<vect.end();i++)
		cout<<(*i)<<" ";
 
    cout<<"\n";
    // target only first element of vector using begin()
    vector<int>::iterator j=vect.begin();
    cout<<*j<<" ";
    // j++;
    j=next(j);
    cout<<*j<<" ";
 
    // target only last element of vector using end()
    // auto k can replace "vector<int>::iterator k"
    auto k=--vect.end();
    // k--;
    cout<<*k<<" ";
    // next() and prev() can take two arguments first address second index default index is 1
    k=prev(k,2);
    cout<<*k<<" ";
 
    // calculating and printing number of elements in vector
    // vector elements can be accessed like array using index
    cout<<"\nNumber of elements in vector vect = ";
    cout<<sizeof(vect)/sizeof(vect[0])<<" ";
	return 0;
}
