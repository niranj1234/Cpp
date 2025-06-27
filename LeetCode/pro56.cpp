//https://leetcode.com/problems/length-of-last-word/

class Solution {
public:
    int lengthOfLastWord(string s) {
        istringstream iss(s);
        string word;
        vector<string> words;

        while(iss>>word){
            words.push_back(word);
        }
        return words.back().length();
    }
};
