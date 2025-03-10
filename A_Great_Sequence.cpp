#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vec vector<ll>
#define map map<ll, ll>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

void solve() {
    ll n, x;
    cin >> n >> x;
    ll cnt = 0;
    map<ll, ll> mp;
    vec a(n);
    
    // Read the input and count occurrences
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
    }

    // Iterate through the unique elements
    for (auto& [key, value] : mp) {
        while (mp[key] > 0) {
            ll target = key * x;
            if (mp[target] > 0) {
                // Pair found, decrement both counts
                mp[key]--;
                mp[target]--;
            } else {
                // No pair found, increment count of needed additions
                cnt++;
                mp[key]--; // Decrement the current element as it's unpaired
            }
        }
    }

    cout << cnt << endl; // Output the count of needed additions
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