#include <iostream>
using namespace std;
//struct point created
struct point{
  int x;
  int y;
  int z;
};
int main() {
	//creating array of struct
	//each array index acts as variable
	point arr[5];
	//assigning valuesin array elements of structs
	for(int i=0; i<5; i++) {
		arr[i].x = i*2;
		arr[i].y = i*2+1;
		arr[i].z = arr[i].x+arr[i].y;
	}
 
	// printing struct array
	for(int i=0; i<5; i++)
		cout<<arr[i].x<<" , "<<arr[i].y<<" = "<<arr[i].z<<endl;
 
	//printing specific value of specific index
	//must have to save that specific array index to a variable
	point p=arr[2];
	cout<<"data at arr[2].x is "<<p.x<<endl;
	return 0;
}
