#include <iostream>
using namespace std;
int main() {
	//pair has strictly two things in it 
	pair<int, string> p1(100,"Arshil");
 
	//default assigned values are 0 for int, " "(space) for string
	pair<int, int> p2;
 
	//can just be declared and initialized later
	pair<string, int> p3;
	p3={"name", 80};
 
	//accessed pair members using .first .second
	cout<<p1.first<<" "<<p1.second<<"\n";
	cout<<p2.first<<" "<<p2.second<<"\n";
	cout<<p3.first<<" "<<p3.second<<"\n";
	return 0;
}
