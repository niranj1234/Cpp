// Given 3 numbers N , L and R. Print 'yes' if N is between L and R else print 'no'.
// Sample Testcase :
// INPUT
// 3
// 2 6
// OUTPUT
// yes

#include<iostream>
using namespace std;
int main(){
    int N,L,R; // Missing semicolon here
    cin >> N;
    cin>> L >> R;
    if(N > L && N < R){
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;  
    }
}
