// Find the max element of an array 
// This is the brute force approach


#include <bits/stdc++.h>
using namespace std;
int maximum(vector<int>&arr){
    sort(arr.begin(),arr.end());
    return arr[arr.size()-1];
}
int main()
{
    vector<int>arr = {21,3,56,7,89,0,54,6};
    cout<<"The largest value is = "<<maximum(arr);

    return 0;
}