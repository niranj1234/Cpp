// You are given A = Length of a rectangle & B = breadth of a rectangle. Find its area “C”.

// (A and B are natural numbers)


// Input Description:
// The inputs are two natural numbers representing the length and the breadth of a rectangle.

// Output Description:
// Find the area of the rectangle formed by the provided input. Round off the answer to the first decimal place if required.

// Sample Input :
// 2
// 3
// Sample Output :
// 6

#include <iostream> 
using namespace std;


int main() {
    int length, breadth; 

    cin >> length;


    cin >> breadth;

    int result = length * breadth; 
    
    cout << result << endl; 

    return 0;
}
