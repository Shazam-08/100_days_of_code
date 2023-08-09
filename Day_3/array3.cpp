// This is the brute force approach to finding the second smallest element in an array

#include <bits/stdc++.h>
using namespace std;

int second_small(vector<int>&arr){
    sort(arr.begin(),arr.end());
    return arr[arr.size()-2];
    
}
 int main(){
     vector<int>arr = {56,65,67,76,89,90,3,456,66,60};
     cout<<"The second largest element is = "<<second_small(arr);
     return 0;
 }