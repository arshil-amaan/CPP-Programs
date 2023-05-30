#include <iostream>
using namespace std;
//struct point created
struct point{
  int x;
  int y;
};
int main() {
  //two different methods for data input in struct elements
  point p = {2,3};
  point q{5,9};

  //creating two pointer variables for two point type variables
  point *ptr = &p;
  point *ptr2 = &q;

  //when we access struct member using pointer we use  " -> "  operator
  //ptr->y will access data at y of p only
  //because p is assigned to *ptr
  cout<<ptr->y<<endl;
  cout<<ptr2->y<<endl;

  //changing data using -> operator
  ptr->y = 7;

  //changing data at p.x
  p.x=6;

  //printing updated value using both methods
  cout<<p.x<<" "<<ptr->y<<endl;
  return 0;
}
