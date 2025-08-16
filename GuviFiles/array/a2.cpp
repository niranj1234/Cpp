// You are given an array of ids of prisoners. The jail authority found that there are some prisoners of same id. Your task is to help the authority in finding the common ids.


// Input Description:
// First line contains a number ‘n’ representing no of prisoners. Next line contains n space separated numbers.

// Output Description:
// Print the ids which are not unique. Print -1 if all ids are unique

// Sample Input :
// 7
// 1 1 11 121 131 141 98
// Sample Output :
// 1

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void findCommonIds(const vector<int>& ids) {
    unordered_map<int, int> idCount;
    for (int id : ids) {
        idCount[id]++;
    }

    // cout << "Common IDs: ";
    // for (const auto& pair : idCount) {
    //     cout << "[" << pair.first << ": " << pair.second << "] ";
    // }
    // cout << endl;

    bool found = false;
    for (const auto& pair : idCount) {
        if (pair.second > 1) {
            cout << pair.first;
            found = true;
        }
    }

    if (!found) {
        cout << -1;
    }
    cout << endl;
}
int main() {
    int n;
    cin >> n;
    vector<int> ids(n);

    for (int i = 0; i < n; ++i) {
        cin >> ids[i];
    }

    findCommonIds(ids);

    return 0;
}

/*Time Complexity
Reading input → O(n)
Counting IDs with unordered_map: Inserting each element into the hash table → O(1) average per element → total O(n).
Looping over the map to print common IDs: In the worst case, all n elements are unique, so the map size is n → O(n).

Total Time Complexity: O(n) + O(n) + O(n) = O(n)
Average case: O(n)
Worst case (hash collisions) → could degrade to O(n²), but rare.

Space Complexity
vector<int> ids → O(n)
unordered_map<int, int> idCount → stores at most n keys → O(n)
A few bool/int variables → O(1)

Total Space Complexity: O(n) for array + O(n) for map → O(n)
*/
