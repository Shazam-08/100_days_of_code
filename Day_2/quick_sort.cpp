#include<iostream>
#include<vector>
using namespace std;


int partition(vector<int>&arr,int low,int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }
        while(arr[j]>pivot && j>=low+1){
            j--;
        }if(i<j)
        swap(arr[i],arr[j]);
    }swap(arr[low],arr[j]);
    return j;
}

void qs(vector<int>&arr,int low, int high){
    if(low<high){
        
       int pIndex = partition(arr,low,high);
        qs(arr,low,pIndex-1);
        qs(arr,pIndex+1,high);
    }
    
}

vector<int> quicksort (vector<int>arr){
    qs(arr,0,arr.size()-1);
    return arr;
}


int main(){
    vector<int> arr = {21,23,4,54,56,78,6,12};
    int n = arr.size();
    cout<<"The array before the sort is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    arr = quicksort(arr);
     cout<<"The array after the sort is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}