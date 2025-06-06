// Kabali is a brave warrior who with his group of young ninjas moves from one place to another to fight against his opponents. Before Fighting he just calculates one thing, the difference between his ninja number and the opponent's ninja number. From this difference he decides whether to fight or not. Kabali's ninja number is never greater than his opponent.
// Input
// The input contains two numbers in every line. These two numbers in each line denotes the number ninjas in Kabali's clan and his opponent's clan . print the absolute difference of number of ninjas between Kabali's clan and his opponent's clan. Each output should be in seperate line.
// Sample Testcase :
// INPUT
// 100 200
// OUTPUT
// 100

#include <iostream>
using namespace std;   
int main() {
    int kabaliNinjas, opponentNinjas;
    
    while (cin >> kabaliNinjas >> opponentNinjas) {
        if (kabaliNinjas > opponentNinjas) {

            continue; // Skip to the next iteration if the condition is violated
        }
        
        int difference = opponentNinjas - kabaliNinjas;
        cout << difference << endl;
    }
    
    return 0;
}
