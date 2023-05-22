#include <iostream>
#include <typeinfo>
using namespace std;
 
int main() {
    string name,findIt;
    int count = 0;
 
    cout<<"Enter Any Sentence"<<endl;
    // name = "arshil amaan ansari"
    getline(cin,name);
 
    cout<<"string is \""<<name<<"\""<<endl;
    cout<<"What you want to find or count?"<<endl;
    cin>>findIt;
 
    cout<<"\n";
    int index = name.find(findIt);
    while(index!=string::npos)
    {
        //programmers method (notice pre increment)
        //cout<<"At index "<<index<<endl;
        //index = name.find(findIt,index+1);
 
        //better for user
        cout<<"At index "<<++index<<endl;
        index = name.find(findIt,index);
 
        count++;
	}
	cout<<"Total "<<count<<" results found"<<endl;
	return 0;
}
