// Write a code to get the input in the given format and print the output in the given format.


// Input Description:
// First-line indicates two integers which are the size of array and 'K' value. Second-line indicates an integer contains elements of an array.

// Output Description:
// Print the taken input in the same format.

// Sample Input :
// 5 3
// 1 2 3 4 5
// Sample Output :
// 5 3
// 1 2 3 4 5

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k; // Read size of array and value K

    vector<int> arr(n); // Create vector of size n
    for (int i = 0; i < n; ++i) {
        cin >> arr[i]; // Read array elements
    }

    // Print the values
    cout << n << " " << k << endl;
    for (int i = 0; i < n; ++i) {
        cout << arr[i];
        if (i != n - 1) cout << " ";
    }
    cout << endl;

    return 0;
}
