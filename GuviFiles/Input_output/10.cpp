// Write a code to get the input in the given format and print the output in the given format.


// Input Description:
// A single line contains a string.

// Output Description:
// Print the characters in a string separated by comma.

// Sample Input :
// guvi
// Sample Output :
// g,u,v,i

// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <string> 
#include <sstream>
int main() {
    // Write C++ code here
    std::string name;
    std::cin>>name;
    
    std::vector<char> a;
    
    for (char i: name){
        a.push_back(i);
        
    }
    
    std::stringstream os;
    for (size_t i = 0; i < a.size(); ++i) {
        os << a[i];
        if (i < a.size() - 1) {
            os << ",";
        }
    }

    std::cout << os.str() << std::endl;

    return 0;
}
----------------------------------------------------------------------------------
// Better approach 
    
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);              
    for (size_t i = 0; i < s.size(); ++i) {
        if (i) cout << ',';       
        cout << s[i];
    }
    cout << '\n';
    return 0;
}
