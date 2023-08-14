// This code is to left rotate an array by d no of times
#include <iostream>
using namespace std;

void left_shift(int arr[],int n,int d){
    if(n==0)
    return;
    d = d%n;
    if(d>n)
    return;
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i] = arr[i];
    }
    
    for(int i=0;i<n-d;i++){
        arr[i] = arr[d+i];
    }
    
    for(int i=0;i<d;i++){
        arr[n-d+i] = temp[i];
    }
    
    
}

int main()
{
    int arr [] = {3,7,8,9,10,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    left_shift(arr,n,3);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
