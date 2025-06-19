// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/submissions/1669591525/

class Solution {
public:
    int strStr(string haystack, string needle) {
        // Handle the empty needle case as per problem definition
        if (needle.empty()) {
            return 0;
        }

        size_t found_pos = haystack.find(needle);

        if (found_pos == string::npos) {
            // If not found, find() returns std::string::npos
            return -1;
        } else {
            // Otherwise, it returns the starting index
            return static_cast<int>(found_pos);
        }
    }
};


// #include <iostream>
// using namespace std;

// int main() {
  
//   string str2 = "app";
//   string str = "an apple";
  
//   int found=str.find(str2);

//   if (found != string::npos){
//     cout << "first 'app' found at: " << int(found) << endl;
//   }
// }
