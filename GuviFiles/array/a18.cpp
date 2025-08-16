// Mr.Stark wants to order the employee ids, which are recorded in a 2D matrix, in ascending order. He wants to do it so as to allot a new id to a person who joins as a fresher. 
// You are the CTO of the Stark industries and you are asked by Mr.Stark to sort the data. 

// Input Description:
// Dimensions of the matrix m and n, followed by the elements of the matrix.

// Output Description:
// Matrix sorted in ascending order

// Sample Input :
// 3 3
// 87 21 34
// 89 32 78
// 12 23 45
// Sample Output :
// 12 21 23
// 32 34 45
// 78 87 89

#include <iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

void sortMatrixGlobal(vector<vector<int>>& mat){    
    vector<int> temp;
    for(auto i: mat){
        for(int j : i){
            temp.push_back(j);
        }
    }
    sort(temp.begin(), temp.end());
    int k=0;
    for(auto &i: mat){
        for(int &j : i){
            j = temp[k++];
        }
    }
}

int main() {
    int m, n;
    cin >> m >> n;
    vector<vector<int>> matrix(m, vector<int>(n));
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }
    sortMatrixGlobal(matrix);
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (j) cout << ' ';
            cout << matrix[i][j];
        }
        cout << '\n';
    }
    return 0;
}
