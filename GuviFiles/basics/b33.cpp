// Given a list of N coins, their values (V1, V2, … , VN), and the total sum S. Find the minimum number of coins the sum of which is S (we can use as many coins of one type as we want), if it is not possible to select coins in such a way that they sum up to S then print '-1'.
// Example: Given coins with values 1, 3, and 5. And the sum S is 11.
// Output: 3, 2 coins of 3 and 1 coin of 5
// Input Size : N<=10000
// Example:
// INPUT
// 3 11
// 1 3 5
// OUTPUT
// 3

#include <iostream>  // For cin, cout, endl
#include <vector>    // For std::vector
#include <algorithm> // For std::min

using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N,S;
    cin >> N >> S;

    vector<int> coins(N); 
    for (int i = 0; i < N; ++i) {
        cin >> coins[i];
    }

    // dp[i] will store the minimum number of coins required to make sum 'i'.
    // Initialize all elements to 'S + 1', which acts as an "infinity" value.
    // If a sum 'i' remains 'S + 1', it means that sum is unreachable.
    vector<int> dp(S + 1, S + 1);


    dp[0] = 0;


    for (int current_sum = 1; current_sum <= S; ++current_sum) {

        for (int j = 0; j < N; ++j) {
            int coin_value = coins[j];

            // Check if the current coin can be used:
            // 1. 'current_sum - coin_value >= 0': Ensure we don't go below 0 (negative sum).
            // 2. 'dp[current_sum - coin_value] != S + 1': Ensure that the subproblem
            //    (current_sum - coin_value) is actually reachable (not infinity).
            if (current_sum - coin_value >= 0 && dp[current_sum - coin_value] != S + 1) {
                // If the conditions are met, we can potentially form 'current_sum'.
                // Update dp[current_sum] with the minimum of its current value
                // and (1 + dp[current_sum - coin_value]).
                // The '+ 1' accounts for the current 'coin_value' being used.
                dp[current_sum] = min(dp[current_sum], dp[current_sum - coin_value] + 1);
            }
        }
    }

    // After filling the DP table, dp[S] holds the result for the target sum S.
    if (dp[S] == S + 1) {

        cout << -1 << endl;
    } else {

        cout << dp[S] << endl;
    }

    return 0;
}
