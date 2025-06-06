// The area of an equilateral triangle is ¼(√3a2) where "a" represents a side of the triangle. You are provided with the side "a". Find the area of the equilateral triangle.


// Input Description:
// The side of an equilateral triangle is provided as the input.

// Output Description:
// Find the area of the equilateral triangle and print the answer up to 2 decimal places after rounding off.

// Sample Input :
// 20
// Sample Output :
// 173.21

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    // Write C++ code here
    int side;
    cin >> side;
    
    if (side>0){
        
        double a = (sqrt(3)/4) * side * side;
        
        cout << fixed << setprecision(2) << a <<endl; 
    }
    return 0;
}
