// Problem Statement:
// Given a sentence and string S, find how many times S occurs in the given sentence.If S is not found in the sentence print -1

// Input Description:
// Input Size : |sentence| <= 1000000(complexity O(n)).

// Output Description:
// The output is the number of times S occurs in the given sentence, or -1 if S is not found.

// Sample Input:
// I enjoy doing codekata
// codekata

// Sample Output:
// 1

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class WordCounter {
private:
    string sentence;
    string searchWord;
    int count;

public:
    // Constructor
    WordCounter(const string& s, const string& w) : sentence(s), searchWord(w), count(0) {}

    // Count occurrences of searchWord in sentence
    void countOccurrences() {
        stringstream ss(sentence);
        string word;
        while (ss >> word) {
            if (word == searchWord) {
                count++;
            }
        }
    }

    // Print result
    void printResult() const {
        if (count > 0)
            cout << count << endl;
        else
            cout << -1 << endl;
    }
};

int main() {
    string sentence, search;
    getline(cin, sentence);  // Read the full sentence
    cin >> search;           // Word to search

    WordCounter wc(sentence, search);
    wc.countOccurrences();
    wc.printResult();

    return 0;
}
