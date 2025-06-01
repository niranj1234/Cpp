// Let P represent Paper, R represent Rock and S represent Scissors. Given 2 out of the 3 determine which one wins. If its a draw print 'D'.
// Sample Testcase :
// INPUT
// R P
// OUTPUT
// P

#include <iostream>  // For cin, cout, endl

using namespace std;

char rockpaper(char a,char b ){
    
    if(a==b ){
        return 'D'; 
    }
    
    if(a =='P' && b=='S' || a =='S' && b=='P'){
        return 'S';
        
    }
    
    if(a=='R' && b== 'S' || a=='S' && b== 'R'){
        return 'R';
    }
    if(a=='R' && b=='P' || a=='P' && b=='R'){
    return 'P';
    }
    return '?';
}

int main() {
    char player1_choice, player2_choice;


    cin >> player1_choice >> player2_choice;

    char winner = rockpaper(player1_choice, player2_choice);

    cout << winner << endl;

    return 0;
}
