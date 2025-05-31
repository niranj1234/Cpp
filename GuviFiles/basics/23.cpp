// Write a code to get an integer N and print the values from N to 1.


// Input Description:
// A single line contains an integer N.

// Output Description:
// Print the values from N to 1 in a separate line.

// Sample Input :
// 10
// Sample Output :
// 10
// 9
// 8
// 7
// 6
// 5
// 4
// 3
// 2
// 1

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int N;
    cin>>N;
    
    for(int i= N; i>0;i--){
        cout<<i<<endl;
    }
    

    return 0;
}
