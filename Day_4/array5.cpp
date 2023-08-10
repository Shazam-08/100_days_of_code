// This program is to check whether an array is sorted or not 

#include <iostream>
using namespace std;
 
bool is_sorted(int arr[],int n){
    for(int i= 1;i<n;i++){
        if(arr[i]< arr[i-1]){
            return false;
        }
    }return true;
}
 
 
int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    is_sorted(arr,n)?cout<<"True":cout<<"False";
    

    return 0;
}