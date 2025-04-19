// You will be provided with a number. Print the number of days in the month corresponding to that number.

// Note: In case the input is February, print 28 days. If the Input is not in valid range print "Error".


// Input Description:
// The input is in the form of a number.

// Output Description:
// Find the days in the month corresponding to the input number. Print Error if the input is not in a valid range.

// Sample Input :
// 8
// Sample Output :
// 31

// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    
    // Write C++ code here
    int monthNumber;
    cin>> monthNumber;
    
    if (monthNumber < 1 || monthNumber > 12) {
        std::cout << "Error" << std::endl;
    } else {
        switch(monthNumber) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
            cout << 31 <<endl;
            break;   
            
            case 4:
            case 6:
            case 9: 
            case 11:
            cout << 30 << endl;
            break;
            
        case 2: 
        cout << 28 << std::endl;
        break;
        
        default:
        cout<< "Error"<<endl;
        break;
            
        }
}
}
