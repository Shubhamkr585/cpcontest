#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long int
#define vec vector<ll>

void solve() {
    ll n;
    cin >> n;
    vec a(n + 1), ans(n + 1, 0);  // 'ans' initialized to 0 for memoization

    for (int i = 1; i <= n; i++) 
        cin >> a[i];

    for (int i = 1; i <= n; i++) {
        if (ans[i] == 0) {  // Unvisited node
            vec path;
            ll current = i;

            // Traverse the cycle
            while (ans[current] == 0) {
                path.push_back(current);
                ans[current] = -1;  // Temporary marker to detect cycles
                current = a[current];
            }

            ll cycle_length = (ans[current] == -1) ? path.size() : ans[current];

            // Assign cycle length to all nodes in the current path
            for (ll node : path) 
                ans[node] = cycle_length;
        }
    }

    // Output the answer
    for (int i = 1; i <= n; i++) 
        cout << ans[i] << " ";
    cout << "\n";
}

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
