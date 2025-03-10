#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void solve() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        // DP table: dp[i][j] -> Minimum sum for the first i elements with j operations
        vector<vector<long long>> dp(n + 1, vector<long long>(k + 1, LLONG_MAX));

        // Base case
        dp[0][0] = 0;

        // Fill DP table
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j <= k; j++) {
                // No operation
                dp[i][j] = dp[i - 1][j] + a[i];
                
                // Apply operation (if possible)
                if (j > 0 && i > 1) {
                    dp[i][j] = min(dp[i][j], dp[i - 1][j - 1] + a[i - 1]);
                }
                if (j > 0 && i < n) {
                    dp[i][j] = min(dp[i][j], dp[i - 1][j - 1] + a[i + 1]);
                }
            }
        }

        // Minimum sum after n elements with up to k operations
        long long result = LLONG_MAX;
        for (int j = 0; j <= k; j++) {
            result = min(result, dp[n][j]);
        }

        cout << result << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}
