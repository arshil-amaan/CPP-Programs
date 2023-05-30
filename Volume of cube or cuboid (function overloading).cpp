#include <iostream>
using namespace std;
//volume of cube or cuboid using same function (function overloading)
//single arguments calculate cube volume
int volume(int s) {
    return s*s*s;
}
//three arguments calculate cuboid volume
int volume(int l, int b, int h) {
    return l*b*h;
}
int main() {
    //ask user requirement whether cube or cuboid volume
    int op;
    cout<<"Select 1 for Volume of Cube\n";
    cout<<"Select 2 for Volume of Cuboid\n";
    cin>>op;
    cout<<op<<"\n";
    switch(op) {
        case 1:
            cout<<"You have chosen Volume of Cube"; 
            int side;
            cin>>side;
            //calling volume() with single argument
            cout<<"Volume of Cube of Side "<<side<<": "<<volume(side);
            break;
        case 2:
            cout<<"You have chosen Volume of Cuboid \n";
            int l,b,h;
            cin>>l>>b>>h;
            //calling volume() with three argument
            cout<<"Volume of Cuboid with length = "<<l<<", Width = "<<b<<", Height = "<<h<<": "<<volume(l, b, h);
            break;
        default:
            cout<<"Invalid Selection";
    }
}
