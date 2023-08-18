
#include <bits/stdc++.h>

using namespace std;

vector<int> findunion(int arr1[], int arr2[], int n, int m) {
    int i = 0;
    int j = 0;
    vector<int> temp;

    while (i < n && j < m) {
        if (arr1[i] <= arr2[j]) {
            if (temp.empty() || temp.back() != arr1[i])
                temp.push_back(arr1[i]);
            i++;
        } else {
            if (temp.empty() || temp.back() != arr2[j])
                temp.push_back(arr2[j]);
            j++;
        }
    }

    while (i < n) {
        if (temp.empty() || temp.back() != arr1[i])
            temp.push_back(arr1[i]);
        i++;
    }

    while (j < m) {
        if (temp.empty() || temp.back() != arr2[j])
            temp.push_back(arr2[j]);
        j++;
    }

    return temp;
}

int main() {
    int n = 10, m = 7;
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[] = {2, 3, 4, 4, 5, 11, 12};

    vector<int> unionResult = findunion(arr1, arr2, n, m);

    cout << "The union of the two arrays is: ";

    for (auto &it : unionResult) {
        cout << it << " ";
    }

    return 0;
}

