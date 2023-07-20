#include<iostream>
using namespace std;
class Point{
  private:
    int x,y;
  public:
    Point(int x, int y){
      this->x=x;
      this->y=y;
    }
    void setX(int x){
      this->x=x;
    }
    void setY(int y){
      this->y=y;
    }
    int getX(){
      return x;
    }
    int getY(){
      return y;
    }
    void print(){
      cout << x << " " << y << endl;
    }

};

int main(){
  Point p1(1,2);
  Point p2(3,4);
  p1.print();
  p2.print();
  p1.setX(5);
  p1.setY(6);
  p1.print();
  p2.print();
  cout<<p1.getX()<<" ";
  cout<<p1.getY()<<endl;
  cout<<p2.getX()<<" ";
  cout<<p2.getY()<<endl;
  return 0;
}