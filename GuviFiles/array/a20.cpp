// You are given with a list of size ‘n’. The list is imposed with a condition that all elements must be of range 0 to n-1.
// Your task is to rearrange the numbers such that arr[i] becomes arr[arr[i]].


// Input Description:
// You are given size of array ‘n’.n space separated numbers in next line.

// Output Description:
// Print all elements after rearranging.

// Sample Input :
// 5
// 4 0 2 1 3
// Sample Output :
// 3 4 2 0 1

#include <bits/stdc++.h>
using namespace std;

void sortarray(vector<int>& arr) {
        
        int n = arr.size();
        vector<int> result(n) ;
        int i=0;
        while(i<n){
        result[i] = arr[arr[i]];
        i++;
        }
 arr = std::move(result);   // new learning this is for write back
}

int main() {
    int siz;
    cin >> siz;
    vector<int> array(siz);
    for (int i = 0; i < siz; ++i) {
        cin >> array[i];
    }
    sortarray(array);

    for (int j = 0; j < siz; ++j) {
            if (j) cout << ' ';
            cout << array[j];
        }
        cout << '\n';
    return 0;
}


