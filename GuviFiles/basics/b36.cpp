// Given base(B) and height(H) of a triangle find its area.
// Input Size : N <= 1000000
// Sample Testcase :
// INPUT
// 2 4
// OUTPUT
// 4

#include <iostream>  
using namespace std;

double area(int x,int y ){
    double r = (x * y)/2.0;    
    return r;
}

int main() {
    int b, h;
    cin >> b >> h;
    double a = area(b, h);
    cout << a << endl;
    return 0;
}
