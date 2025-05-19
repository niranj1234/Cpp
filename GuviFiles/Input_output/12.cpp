// You are provided with a number, "N". Find its factorial.


// Input Description:
// A positive integer is provided as an input.

// Output Description:
// Print the factorial of the integer.

// Sample Input :
// 2
// Sample Output :
// 2


#include <iostream>
#include <cmath>

using namespace std;
int main() {
    int a,fact=1;
    cin >> a;

for(int i =1; i<a+1;i++){
    fact = fact *i;
    
}
        cout << fact <<endl;  
    return 0;
}
