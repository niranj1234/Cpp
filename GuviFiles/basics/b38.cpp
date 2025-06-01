// The Caesar Cipher technique is one of the earliest and simplest method of encryption technique. It’s simply a type of substitution cipher, i.e., each letter of a given text is replaced by a letter some fixed number of positions down the alphabet. For example with a shift of 1, A would be replaced by B, B would become C, and so on. The method is apparently named after Julius Caesar, who apparently used it to communicate with his officials.For the given input string(S) and shift print the encrypted string.
// Sample Testcase :
// INPUT
// ABCdEFGHIJKLMNOPQRSTUVWXYz 23
// OUTPUT
// XYZaBCDEFGHIJKLMNOPQRSTUVw

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string word1; 
    int shift;

    cin >> word1 >>  shift;


    string S = word1 ;

    // Normalize the shift value (as before)
    shift = shift % 26;
    if (shift < 0) {
        shift += 26;
    }

    for (char &c : S) {
        if (isalpha(c)) {
            char base;
            if (isupper(c)) {
                base = 'A';
            } else {
                base = 'a';
            }
            c = static_cast<char>((c - base + shift) % 26 + base);
        }
    }

    cout << S << endl;
    return 0;
}
