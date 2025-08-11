// You are given a number with duplicate digits your task is to remove the immediate duplicate digits and print the result


// Input Description:
// You are given a long string of digits

// Output Description:
// Print the desired result print -1 if result length is 0

// Sample Input :
// 1331
// Sample Output :
// 11

#include <iostream>
#include <string>
using namespace std;

string filterImmediateDuplicates(int input) {
    string b = to_string(input);
    string res = "";

    int i = 0;
    while (i < b.length()) {
        // Check for immediate duplicates
        if (i < b.length() - 1 && b[i] == b[i + 1]) {
            // Skip all consecutive same characters
            char dupChar = b[i];
            while (i < b.length() && b[i] == dupChar) {
                i++;
            }
        } else {
            res += b[i];
            i++;
        }
    }
    return res;
}

int main() {
    int input;
    cin >> input;
    string output = filterImmediateDuplicates(input);
    cout << output << endl;
    return 0;
}
