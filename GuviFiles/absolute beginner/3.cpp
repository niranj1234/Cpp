// You are given with a number A i.e. the temperature in Celcius. Write a program to convert this into Fahrenheit. 

// Note: In case of decimal values, round-off to two decimal places.


// Input Description:
// A number is provided in Celcius as the input of the program.

// Output Description:
// The output shall be the temperature converted into Fahrenheit corresponding to the input value print up to two decimal places and round off if required.

// Sample Input :
// 12
// Sample Output :
// 53.60

// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    
    // Write C++ code here
    double a,num, ans;
    cin>> num;
    
    a  = (num * 9 / 5) + 32;
    cout << round(a * 100) / 100 << endl;    

    return 0;
}


