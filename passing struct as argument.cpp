#include <iostream>
using namespace std;
//struct point created
struct point{
	int x;
	int y;
	int z;
};
//function that takes any struct point type variable as its argument
//this method creates a copy of whole passed struct, hence inefficient
//so better to use print(point &p)
//even better to use print(const point &p) as it restricts editing of actual data by mistake
//another method print(point *p), but this wil require -> operator to acess data i.e. p->x instead of p.x
void print(const point &p)
{
    cout<<p.x<<" , "<<p.y<<endl;
}
int main() {
    //created struct p variable
    point p = {2,5};
 
    //passing struct p variable as argument of print function
    print (p);
    return 0;
}
