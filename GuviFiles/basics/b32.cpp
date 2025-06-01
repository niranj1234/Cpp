// Given a string S consisting of 2 words reverse the order of two words .
// Input Size : |S| <= 10000000
// Sample Testcase :
// INPUT
// hello world
// OUTPUT
// world hello

#include <string> 
#include <iostream>
using namespace std;
int main() {

    string S; 
    
    getline(cin, S);
    
    size_t space_pos = S.find(' ');

    string word2 = S.substr(space_pos + 1);

    string word1 = S.substr(0, space_pos);

    cout << word2 << " " << word1 << std::endl;

    return 0; 
}
