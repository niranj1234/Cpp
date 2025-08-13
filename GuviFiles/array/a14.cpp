// Shreya is a brilliant girl. She likes to memorize the numbers. These numbers will be shown to her. As an examiner develop an algorithm to test her memory.

// CONSTRAINTS

// 1<=Y,N,T<=1000


// Input Description:
// First line contains no. of test cases(Y). Next line contains a number N. Next line contains n space separated numbers Next line contains a number T denoting the number of questions asked from you regarding the given array. Next line contains T space separated numbers.

// Output Description:
// Print the occurrence of each number if present else “NOT PRESENT”

// Sample Input :
// 10
// 1 1 1 2 2 2 3 8 9 7
// 5
// 1 2 3 0 5
// Sample Output :
// 3 3 1 Not Present Not Present

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<string> memorize(const vector<int> &n, const vector<int> &t) {
    unordered_map<int, int> freq;

    // Count frequencies in n
    for (int num : n) {
        freq[num]++;
    }

    vector<string> result;
    for (int q : t) {
        if (freq.find(q) != freq.end()) {
            result.push_back(to_string(freq[q]));
        } else {
            result.push_back("Not Present");
        }
    }

    return result;
}

int main() {
    int firstline;
    cin >> firstline;

    vector<int> n(firstline);
    for (int i = 0; i < firstline; ++i) {
        cin >> n[i];
    }

    int num;
    cin >> num;

    vector<int> t(num);
    for (int i = 0; i < num; ++i) {
        cin >> t[i];
    }

    vector<string> result = memorize(n, t);

    // Print space-separated output
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i];
        if (i < result.size() - 1) cout << " ";
    }
    cout << endl;

    return 0;
}
