// You are given with Principle amount($), Interest Rate(%) and Time (years) in that order. Find Simple Interest.

// Print the output up to two decimal places (Round-off if necessary).

// (S.I. = P*T*R/100)


// Input Description:
// Three values are given to you as the input. these values correspond to Principle amount, Interest Rate and Time in that particular order.

// Output Description:
// Find the Simple interest and print it up to two decimal places. Round off if required.

// Sample Input :
// 1000 2 5
// Sample Output :
// 100.00

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {

int a;
double b,c,d ;
cin >> a>>b >> c;

d= (a*b*c)/100;
cout<< fixed<< setprecision(2)<< d <<endl;

return 0;
}
