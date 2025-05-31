// Find the minimum among 10 numbers.
// Sample Testcase :
// INPUT
// 5 4 3 2 1 7 6 10 8 9
// OUTPUT
// 1

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> numbers(10);
    for(int i = 0; i < 10; i++) {
        cin >> numbers[i];
    }
    int minNumber = numbers[0];
    for(int i = 1; i < 10; i++) {
        if(numbers[i] < minNumber) {
            minNumber = numbers[i];
        }
    }
    cout << minNumber << endl;
    return 0;
}
