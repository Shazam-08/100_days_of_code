// This code is the optimised version of left rotating the array by d places in terms of space complexity

#include<iostream>
using namespace std;

void reverse_array(int arr[],int start,int end ){
    
    while(start<=end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    
}

void left_rotate(int arr[],int n,int d){
    
    reverse_array(arr,0,d-1);
    reverse_array(arr,d,n-1);
    reverse_array(arr,0,n-1);
    
}

int main(){
     int arr[] = {1, 2, 3, 4, 5, 6, 7};
     int n = 7;
     int d = 2;
     left_rotate(arr,n,d);
     for(int i=0;i<n;i++){
         cout<<arr[i]<<" ";
     }
    
    
    return 0;
}