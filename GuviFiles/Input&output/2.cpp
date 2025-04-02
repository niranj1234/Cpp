// Write a code to get the input in the given format and print the output in the given format


// Input Description:
// A single line contains integers separated by space

// Output Description:
// Print the integer list of integers separated by space

// Sample Input :
// 2 3 4 5 6 7 8
// Sample Output :
// 2 3 4 5 6 7 8


// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <sstream>
#include <vector>


using namespace std;
int main() {
    // Write C++ code here
    string i;
    getline(cin,i);
    
    stringstream ss(i);
    
    vector<int> a;
    int n;
    
    while(ss >> n){
        a.push_back(n);
    }
    
    for(size_t j = 0;j<a.size();++j ){
        cout<< a[j];
        if(j<a.size()-1){
            cout<< " ";
        }
    }
    cout <<endl;
    return 0;
}
