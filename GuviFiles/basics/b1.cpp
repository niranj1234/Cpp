// Write a code to get the input and print it 5 times.


// Input Description:
// A single line contains an integer N.

// Output Description:
// Output contains 5 lines with each line having the value N.

// Sample Input :
// 4
// Sample Output :
// 4
// 4
// 4
// 4
// 4


#include<iostream>
using namespace std;
int main() {
    int n;

    cin >> n;
    int i =0;
    while( i!=5){
        cout<<n;
        if(i <4) {
            cout << "\n"; // Print a new line after every 5 numbers
        }
        ++i;
    }
    cout << endl; 

    return 0;
}


// #include<iostream>
// using namespace std;
// int main() {
//     int n;

//     cin >> n;
//     for(int i=0; i<5;++i){
//         cout<<n;
//         if(i <4) {
//             cout << "\n"; // Print a new line after every 5 numbers
//         }
//     }
//     cout << endl; 

//     return 0;
// }