#include<iostream>
using namespace std;

void bubble_sort(int arr[],int n){
    if(n == 1)
    return;
    int flag = 0;
     for(int j=0;j<=n-2;j++){
         if(arr[j]>arr[j+1]){
             int temp = arr[j];
             arr[j] = arr[j+1];
             arr[j+1] = temp;
             flag = 1;
         }
     }if(flag==0)return;
     
     bubble_sort(arr,n-1);
    
}

int main(){
    int arr[] = {12,32,4,5,67,89,90,0,43};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"The array before sorting : ";
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    bubble_sort(arr,n);
    cout<<"The array after sorting : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<" ";
    
    
    return 0;
}