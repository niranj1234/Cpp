// Given a number N and an array of N elements, find the Bitwise OR of the array elements.
// Input Size : N <= 100000
// Sample Testcase :
// INPUT
// 2
// 2 4
// OUTPUT
// 6

#include <iostream>  
#include <vector>  

using namespace std;

int bitwise(const vector<int>& num) {
    
    int bt = 0;
    
    for( int i=0; i<num.size();++i){
        bt |= num[i];
    }

    return bt;
}

int main() {


    int n; 
    cin >> n; 


    vector<int> num(n);

    for (int i = 0; i < n; ++i) {
        cin >> num[i];
    }

    int result_indices = bitwise(num);
    
    cout << bitwise(num) << endl;

    return 0; 
}
