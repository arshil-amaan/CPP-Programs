#include <iostream>
using namespace std;

//only difference between class and struct is
//by default struct are public and class are private
//but we can make them public or private by below commented method

//created class student
//class student
//{  public:
//    //struct student has int type roll no string name int type rank
//    int rn;
//    string name;
//    int rank;
//};


//created struct student
struct student
 {
 	//struct student has int type roll no string name int type rank
     int rn;
     string name;
     int rank;
 };
 
int main() {
    //created student type variables
    student abc;
    student xyz;
 
    //data storing in struct method 1
    abc = {23,"Amar",15};
 
    //data storing in struct method 
    xyz.rn = 25;
    xyz.name = "Akbar";
 
    //print struct data
    cout<<abc.rn<<" "<<abc.name<<" "<<abc.rank<<endl;
 
    //by default garbage values will be stored in each
    cout<<xyz.rn<<" "<<xyz.name<<" "<<xyz.rank<<endl;
	return 0;
}
