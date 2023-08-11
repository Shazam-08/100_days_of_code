// This is just a simple program to input strings and print it

#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cout<<"Enter a string : ";
    getline(cin,str);
    cout<<"The input string is --> "<<str<<"\n"<<" And the length of the string is  "<<str.length();
}