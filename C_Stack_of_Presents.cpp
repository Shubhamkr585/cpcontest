#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n), b(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    // Map to store the position of each present in the stack
    vector<ll> pos(n + 1);
    for (int i = 0; i < n; i++) {
        pos[a[i]] = i;
    }

    ll ans = 0;
    ll lastPos = -1; // Tracks the last position processed

    for (int i = 0; i < m; i++) {
        ll present = b[i];
        if (pos[present] > lastPos) {
            // Number of unprocessed presents above this one
            ll unprocessed = pos[present] - i;
            ans += 2 * unprocessed + 1;
            lastPos = pos[present];
        } else {
            // Present is already processed, takes 1 second
            ans += 1;
        }
    }

    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }