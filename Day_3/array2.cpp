// This is a little optimised version of the max element question

#include <iostream>
using namespace std;

int maximum(int arr[],int n){
    int max = arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }return max;
}
int main()
{
    int arr[] = {23,45,4,5,6,6,7,890,5,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"The maximum element is = "<<maximum(arr,n);
    return 0;
}