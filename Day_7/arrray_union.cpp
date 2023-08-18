// This is the brute force approach to finding the union of two sorted arrays and in this approach i use an ordered set which has a property to store unique and sorted elements.


#include <bits/stdc++.h>

using namespace std;

vector<int> findunion(int arr1[], int arr2[], int n, int m) {
    set<int> s;
    vector<int> temp;
    
    for(int i = 0; i < n; i++) {
        s.insert(arr1[i]);
    }
    
    for(int i = 0; i < m; i++) {
        s.insert(arr2[i]);
    }
    
    for(auto &it : s) {
        temp.push_back(it);
    }
    
    return temp;
}

int main() {
    int n = 10, m = 7;
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[] = {2, 3, 4, 4, 5, 11, 12};
    
    vector<int> unionResult = findunion(arr1, arr2, n, m);
    
    cout << "The union of the two arrays is: ";
    
    for(auto &it : unionResult) {
        cout << it << " ";
    }
    
    return 0;
}
