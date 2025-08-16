// Loki wants to steal the tesseract but in order to do so, he has to rearrange the elements in an array in a specific manner which is 
//mentioned in a clue. The clue says ‘cursed are the odd and sorted are the even’. 
//Loki manages to decode the clue which translates to “sort the even positioned elements of an array, starting from the element at index 0, 
// in ascending order”. Manipulate the array so as to help Loki steal the tesseract.
 
// Input Description:
// Size of the array followed by the elements of the array

// Output Description:
// Even index array elements sorted in ascending order

// Sample Input :
// 5
// 3 9 1 44 6
// Sample Output :
// 1 9 3 44 6

#include <bits/stdc++.h>
using namespace std;
void evensortarray(vector<int>& arr) {
    int n = (int)arr.size();
    for (int i = 2; i < n; i += 2) {
        int key = arr[i];
        int j = i - 2;
        while (j >= 0 && arr[j] > key) {
            arr[j + 2] = arr[j];
            j -= 2;                
        }
        arr[j + 2] = key;
    }
}

int main() {
    int siz;
    cin >> siz;
    vector<int> array(siz);
    for (int i = 0; i < siz; ++i) {
        cin >> array[i];
    }


    evensortarray(array);

    for (int j = 0; j < siz; ++j) {
            if (j) cout << ' ';
            cout << array[j];
        }
        cout << '\n';
    return 0;
}
