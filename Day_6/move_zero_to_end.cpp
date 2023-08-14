// This is the code to move all the zeros to the end of an array it is the brute force approach

#include<iostream>
using namespace std;

void move_zero(int arr[],int n){
    if(n==0||n==1)
    return;
    int j=0;
    int temp[n];
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            temp[j] = arr[i];
            j++;
        }
    }for(int i=0;i<=j;i++){
    arr[i] = temp[i];
    }
    for(int i=j+1;i<n;i++){
    arr[i] = 0;
    }
}

int main(){
    
    int arr[] = {1 ,0 ,2 ,3 ,0 ,4 ,0 ,1};
    int n =8;
    move_zero(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}