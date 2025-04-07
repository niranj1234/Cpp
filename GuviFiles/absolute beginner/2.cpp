// You are given a number A in Kilometers. Convert this into B: Meters and C: Centi-Metres.


// Input Description:
// A number "A" representing some distance in kilometer is provided to you as the input.

// Output Description:
// Convert and print this value in meters and centimeters.

// Sample Input :
// 2
// Sample Output :
// 2000
// 200000

#include <iostream>
using namespace std; 

int main() {
    // Write C++ code here
    int in;
    cin>> in;
    
    cout << in *1000 <<endl;
    cout << in *100000 <<endl;
    
    return 0;
}


// #include <iostream>
// using namespace std;
// struct AreaResults {
//     int meters;
//     int centimeters;
// };
// AreaResults area(int l) {
//     AreaResults result;
//     result.meters = l * 1000;
//     result.centimeters = l * 100000;
//     return result;
// }
// int main() {
//     int length;
//     cin >> length;
//     AreaResults result = area(length);
//     cout << result.meters << endl;
//     cout << result.centimeters << endl;
//     return 0;
// }
