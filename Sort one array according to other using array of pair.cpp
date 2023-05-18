#include <iostream>
#include <algorithm>
using namespace std;
void sortChar(int intarr[],char chararr[],int n) {
	// array of pair
	pair<int,char> pairarr[n];
 
	// assigning elements to array of pair
	for(int i=0;i<n;i++)
	{
		pairarr[i]={intarr[i],chararr[i]};
	}
 
	// sorting is performed over first element by default
	sort(pairarr,pairarr + n);
 
	// Printing second elements of array of pair
	for(int i=0;i<n;i++)
	{
		cout<<pairarr[i].second<<" ";
	}
}
 
int main() {
	int size=5;
	int intarr[size]={2,5,4,3,1};
	char chararr[size]={'e','b','c','a','d'};
	sortChar(intarr,chararr,size);
	return 0;
}
