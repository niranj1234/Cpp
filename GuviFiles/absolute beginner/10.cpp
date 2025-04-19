// You are provided with a number "N", Find the Nth term of the series: 1, 4, 9, 16, 25, 36, 49, 64, 81, .......

// (Print "Error" if N = negative value and 0 if N = 0).


// Input Description:
// An integer N is provided to you as the input.

// Output Description:
// Find the Nth term in the provided series.

// Sample Input :
// 18
// Sample Output :
// 324

// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {

    int a ,o =1;
    cin >> a;
    
    if (a<0){
        cout << "Error"; 
    }
    else if(a==0){
        cout<< 0;
    }
    else{
        cout << a*a <<endl;
        }

    }
