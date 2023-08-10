// This is the code to left rotate an array where all the elements will shift to their left side and the first element will shift to the last index of the array

#include<iostream>
using namespace std;

void left(int arr[],int n){
    
    int temp = arr[0];
    for(int i=0;i<n-1;i++){
        arr[i] = arr[i+1];
    }arr[n-1] = temp;
}

int main(){
    
     int arr[]= {1,2,3,4,5};
     int n = sizeof(arr)/sizeof(arr[0]);
     left(arr,n);
     for(int i=0;i<n;i++){
         cout<<arr[i]<<" ";
     }
     
    
    return 0;
}