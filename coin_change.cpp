#include <bits/stdc++.h>
using namespace std;

// Function to find minimum coins using DP
int minCoins(vector<int>& coins, int amount) {
    int n = coins.size();
    vector<int> dp(amount + 1, INT_MAX);

    dp[0] = 0; // 0 coins needed for amount 0

    for (int i = 1; i <= amount; i++) {
        for (int j = 0; j < n; j++) {
            if (coins[j] <= i && dp[i - coins[j]] != INT_MAX) {
                dp[i] = min(dp[i], 1 + dp[i - coins[j]]);
            }
        }
    }

    return (dp[amount] == INT_MAX) ? -1 : dp[amount];
}

int main() {
    int n, amount;
    cout << "Enter number of coin types: ";
    cin >> n;
    vector<int> coins(n);
    cout << "Enter coin denominations: ";
    for (int i = 0; i < n; i++) cin >> coins[i];

    cout << "Enter total amount: ";
    cin >> amount;

    int result = minCoins(coins, amount);
    if (result == -1)
        cout << "Not possible to form the amount with given coins." << endl;
    else
        cout << "Minimum coins required: " << result << endl;

    return 0;
}
