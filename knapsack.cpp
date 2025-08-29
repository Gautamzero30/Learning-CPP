#include <bits/stdc++.h>
using namespace std;

// Function to solve 0/1 Knapsack using DP
int knapsack(vector<int>& wt, vector<int>& val, int W) {
    int n = wt.size();
    vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0));

    // Build table in bottom-up manner
    for (int i = 1; i <= n; i++) {
        for (int w = 1; w <= W; w++) {
            if (wt[i - 1] <= w) {
                dp[i][w] = max(val[i - 1] + dp[i - 1][w - wt[i - 1]], dp[i - 1][w]);
            } else {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    return dp[n][W]; // Maximum value
}

int main() {
    int n, W;
    cout << "Enter number of items: ";
    cin >> n;
    vector<int> wt(n), val(n);

    cout << "Enter weights of items: ";
    for (int i = 0; i < n; i++) cin >> wt[i];

    cout << "Enter values of items: ";
    for (int i = 0; i < n; i++) cin >> val[i];

    cout << "Enter knapsack capacity: ";
    cin >> W;

    cout << "Maximum value in knapsack: " << knapsack(wt, val, W) << endl;
    return 0;
}
