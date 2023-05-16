#include <iostream>
using namespace std;
//struct point created
struct point{
  int x;
  int y;
 
  //constructor created
  point(int a, int b){
      x=a;
      y=b;
  }
 
  //function created to print
  void print(){
      cout<<x<<" , "<<y<<endl;
  }
};
int main() {
    //initializing two objects p and q using constructor
    point p(2,3);
    point q(5,9);
 
    //calling print() for both variables
    p.print();
    q.print();
    return 0;
}
