#include <bits/stdc++.h>
using namespace std;

void solve() {
    string a, b, c;
    cin >> a >> b >> c;
    int m = a.size(), n = b.size();
    // dp[i][j]: maximum matches using first i chars of a and first j chars of b.
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, -1));
    dp[0][0] = 0;
    
    // Fill the DP table.
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            int pos = i + j; // Position in string c.
            if (i < m) {
                int add = (a[i] == c[pos]) ? 1 : 0;
                dp[i + 1][j] = max(dp[i + 1][j], dp[i][j] + add);
            }
            if (j < n) {
                int add = (b[j] == c[pos]) ? 1 : 0;
                dp[i][j + 1] = max(dp[i][j + 1], dp[i][j] + add);
            }
        }
    }
    
    int maxMatches = dp[m][n];
    int ans = (m + n) - maxMatches;
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}



//memo code






// #include <iostream>
// #include <vector>
// #include <string>
// #include <algorithm>
// using namespace std;

// string a, b, c;
// int m, n;
// // memo[i][j] stores the maximum matches obtainable starting from a[i] and b[j]
// vector<vector<int>> memo;

// int dp(int i, int j) {
//     // When string a is exhausted, we only have b left.
//     if (i == m) {
//         int count = 0;
//         // For every remaining character in b, the position in c is (m+j + (k-j)) = m + k.
//         for (int k = j; k < n; k++) {
//             if (b[k] == c[m + k])
//                 count++;
//         }
//         return count;
//     }
//     // When string b is exhausted, we only have a left.
//     if (j == n) {
//         int count = 0;
//         // For every remaining character in a, the position in c is (i+n + (k-i)) = n + k.
//         for (int k = i; k < m; k++) {
//             if (a[k] == c[n + k])
//                 count++;
//         }
//         return count;
//     }
    
//     // If already computed, return the cached value.
//     if (memo[i][j] != -1)
//         return memo[i][j];
    
//     int pos = i + j; // current position in c
//     int option1 = ((a[i] == c[pos]) ? 1 : 0) + dp(i + 1, j);
//     // Option 2: take the next character from b.
//     int option2 = ((b[j] == c[pos]) ? 1 : 0) + dp(i, j + 1);
    
//     int best = max(option1, option2);
//     memo[i][j] = best;
//     return best;
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     int t;
//     cin >> t;
//     while(t--){
//         cin >> a >> b >> c;
//         m = a.size();
//         n = b.size();
//         // Initialize memo table with -1
//         memo.assign(m + 1, vector<int>(n + 1, -1));
//         int maxMatches = dp(0, 0);
//         int ans = (m + n) - maxMatches;
//         cout << ans << "\n";
//     }
//     return 0;
// }
