// Given numbers A,B find A^B.
// Input Size : 1 <= A <= 5 <= B <= 50
// Sample Testcase :
// INPUT
// 3 4
// OUTPUT
// 81

#include<iostream>
#include<cmath>

using namespace std;
int main() {
    int N, L;

    cin >> N >> L;

    int R;

    R = pow(N,L);

    cout<< R<<endl;
    return 0;
}
