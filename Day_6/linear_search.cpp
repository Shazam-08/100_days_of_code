// This is a basic code for the linear search in an array

#include <iostream>
using namespace std;

int linear_Search(int arr[],int n,int num){
    int pos;
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            return i+1;
        }
    }return -1;
    
}

int main()
{
    int arr[] = {12,22,34,5,6,78,90};
    int n = sizeof(arr)/sizeof(arr[0]);
    int num;
    cout<<"Enter the number to search : ";
    cin>>num;
    cout<<endl;
    cout<<"The number is present at "<<linear_Search(arr,n,num);

    return 0;
}