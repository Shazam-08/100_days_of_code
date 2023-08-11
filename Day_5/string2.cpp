// This code is to check two strings and see if string goal is just a string with its contents similar as string s but just shifted left n times.
// where n can be n>0 && n<s.length()

#include <iostream>
#include<string>
using namespace std;

bool check_shift(string s, string goal){
    if(s.length()!=goal.length())
    return false;
    string temp = s+s;
    if(temp.find(goal)!=-1)
    return true;
    else 
    return false;
}

int main()
{
    string str = "abcdef";
    string str2 = "cdefab";
   if( check_shift(str,str2))
   cout<<"The string is same just shifted left"<<endl;
   else
   cout<<"The string is not shifted at all";
    return 0;
}