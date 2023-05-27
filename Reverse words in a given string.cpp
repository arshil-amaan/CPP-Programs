#include <iostream>
using namespace std;
void reverseWords(string s) {
 
  string revstr="",temp="";
  for(int i=0;i<=s.length();i++) {
    if(s[i]==' ' || i==s.length()) {
      revstr=temp+" "+revstr;
      temp="";
 
    }
    else
    {
      temp=temp+s[i];
    }
  }
  for(int i=0;i<revstr.length()-1;i++)
  cout<<revstr[i];
 
}
int main() 
{
    string str = "i like this program very much";
    reverseWords(str);
    return 0;
}
