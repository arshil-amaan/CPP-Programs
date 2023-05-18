#include <bits/stdc++.h>
using namespace std;
 
// class template created
template <typename dttp>
struct point{
    dttp x,y;
    point (dttp a, dttp b){ x=a; y=b; }
    dttp getFirst(){ return x; }
    dttp getSecond();
    };
 
    //We can define function outside class template, but it requires declaration inside
    template<typename dttp>
    dttp point<dttp> ::getSecond(){ return y; }
 
int main() {
    point<int> p1(2,5);
    point<float> p2(3.5,7.2);
 
    cout<<p1.getFirst()<<" , "<<p1.getSecond();
    cout<<endl;
	cout<<p2.getFirst()<<" , "<<p2.getSecond();
	return 0;
}
