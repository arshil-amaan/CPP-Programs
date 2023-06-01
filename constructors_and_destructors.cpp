#include <iostream>
using namespace std;
class Point {
private:
    int x,y;
    int* ptr1;
    int* ptr2;
public:
    // normal constructor
    // Point(){
    //   x=1;
    //   y=1;
    // };

    // Point(int a,int b){
    //   x=a;
    //   y=b;
    // }

    // void print(){
    //   cout<<x<<" "<<y<<endl;
    // }

    //**********************************************
    // using Initialiser list (preferred)
    // Point():x(1),y(1){

    // }

    // Point(int a,int b):x(a),y(b){

    // }

    // void print(){
    //   cout<<x<<" "<<y<<endl;
    // }

    //**********************************************
    // for copy constructor
    Point(int a,int b) {
        ptr1=new int(a);
        ptr2=new int(b);
    }

    // copy constructor (provides different values i.e. p2 updation won't affect p1)
    Point(const Point &p1) {
        int val1= *(p1.ptr1);
        int val2= *(p1.ptr2);
        ptr1= new int(val1);
        ptr2= new int(val2);
    }

    void set(int a, int b) {
        *ptr1=a;
        *ptr2=b;
    }

    void print() {
        cout<<*ptr1<<" "<<*ptr2<<endl;
    }

    // destructor (max one)
    //Destruction takes place in reverse order of construction
    ~Point(){cout<<"Destructed "<<*ptr1<<" "<<*ptr2<<endl;}
};

int main(){
    // for normal and initialiser list constructor
    // Point p1, p2(5,7);
    // p1.print();
    // p2.print();

    // Point *ptr = new Point(4,8);
    // ptr->print();

    //************************************************
    // for copy constructor (default and made-up one)
    Point p1(2,4);
    Point p2(p1);  // same as->   Point p2=p1; 
    p1.print();
    p2.print();
    p2.set(1,5);
    p1.print();
    p2.print();
    return 0;
}
