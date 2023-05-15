#include <iostream>
//for using C Style string functions
#include <cstring>
using namespace std;
 
int main() {
    string myString;
    //C style string
    char mystr[] = "My String";
 
    // must use '\0' it declares the end of string rest containers remain blank
    char mystr2[] = {'H','E','L','L','O','\0'};
 
    //declared size must be atleast 1 more than provided string to store '\0'
    char mystr3[15] = "Old String";
 
    //getline(cin, str_name); inputs string with spaces
    getline(cin, myString);
    //str_name.length() returns length of str_name
    cout<<myString.length()<<endl;
 
    //we can append string like below
    myString= myString + " Ansari";
 
    //str_name.substr(starting_index"0 start",characters)
    cout<<"Middle name is "<<myString.substr(7,5)<<endl;
 
    //str_name.find("custom_string") finds its first occurrence index
    cout<<myString.find("sar")<<endl;
 
    //str_name.find("custom_string",after_this_index) finds its first occurrence index
    cout<<"check this only "<<myString.find("s",3)<<endl;
 
 
    //printing whole string
    cout<<"Entered String is "<<myString<<endl;
 
    cout<<mystr<<endl;
    cout<<mystr2<<endl;
 
    //strlen(str_name) prints length of string
    cout<<strlen(mystr)<<endl;
 
    //strcmp(str1,str2) returns 0 if same, negative if str1 is befofe str2, positive if str1 is after str2
    //no ASCII comparision only Lexicographical comparision
    int cmp = strcmp(mystr,mystr2);
 
    if(cmp==0)
    cout<<"Same"<<endl;
    else if (cmp<0)
    cout<<"Lesser"<<endl;
    else
    cout<<"Greater"<<endl;
 
    cout<<"mystr3 previously "<<mystr3<<"\nAfter strcpy\n";
    strcpy(mystr3,"New String");
    cout<<mystr3<<endl;
	return 0;
}
