// Write a code get an integer number as input and print the odd and even digits of the number separately.


// Input Description:
// A single line containing an integer.

// Output Description:
// Print the even and odd integers of the integer in a separate line.

// Sample Input :
// 1234
// Sample Output :
// 2 4
// 1 3

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int a;
    cin >> a;
    string b = to_string(a);
    vector<int> even;
    vector<int> odd;
    
sort(b.begin(), b.end());
    
    for (size_t i = 0; i < b.length(); i++) {
        int c = b[i] - '0'; 
        if (c % 2 == 0) {
            even.push_back(c); 
        }
    }

    for (char j : b) {
        int d = j - '0'; 
        if (d % 2 != 0) {
            odd.push_back(d); 
        }
    }
 
//print even number
for(size_t x=0; x<even.size();++x){
    cout<<even[x];
    if(x< even.size()-1){
        cout<<" ";
    }
}
      cout << endl; 
//print odd number
for(size_t x=0; x<odd.size();++x){
    cout<<odd[x];
    if(x< odd.size()-1){
        cout<<" ";
    }
}
    
    cout << endl;
    return 0;
}
