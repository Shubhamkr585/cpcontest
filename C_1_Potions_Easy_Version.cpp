#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<vector<ll>> dp(n + 1, vector<ll>(n + 1, -1));
    dp[0][0] = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (dp[i][j] >= 0) {
                dp[i + 1][j] = max(dp[i + 1][j], dp[i][j]);
                if (dp[i][j] + a[i] >= 0) {
                    dp[i + 1][j + 1] = max(dp[i + 1][j + 1], dp[i][j] + a[i]);
                }
            }
        }
    }


    //print the dp table
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }

    int ans = 0;
    for (int j = 0; j <= n; j++) {
        if (dp[n][j] >= 0) ans = j;
    }

    cout << ans << endl;
}

int main() {
    fastio;
    solve();
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
 
// #define ll long long
// #define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
 
// const ll NEG_INF = -1000000000000000000LL;
 
// int n;
// vector<int> a;
// vector<vector<ll>> memo;
// vector<vector<bool>> vis;
 
// ll rec(int i, int j) {
//     if(i == 0) return (j == 0 ? 0 : NEG_INF);
//     if(vis[i][j]) return memo[i][j];
//     ll skip = rec(i - 1, j);
//     ll take = NEG_INF;
//     if(j > 0) {
//         ll candidate = rec(i - 1, j - 1);
//         if(candidate != NEG_INF && candidate + a[i - 1] >= 0)
//             take = candidate + a[i - 1];
//     }
//     vis[i][j] = true;
//     return memo[i][j] = max(skip, take);
// }
 
// int main(){
//     fastio;
//     cin >> n;
//     a.resize(n);
//     for (int i = 0; i < n; i++) cin >> a[i];
//     memo.assign(n + 1, vector<ll>(n + 1, NEG_INF));
//     vis.assign(n + 1, vector<bool>(n + 1, false));
//     int ans = 0;
//     for (int j = 0; j <= n; j++){
//         if(rec(n, j) >= 0)
//             ans = j;
//     }
//     cout << ans << "\n";
//     return 0;
// }








