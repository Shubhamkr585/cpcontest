#include<bits/stdc++.h>
#define vec vector<ll>
#define ll long long int
using namespace std;
#define all(vec) vec.begin(),vec.end()

ll height(ll x, const vec &maximum) {
    ll low = 0, high = maximum.size() - 1;
    while (low <= high) {
        ll mid = low + (high - low) / 2;
        if (x >= maximum[mid]) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return low - 1;
}

void solve() {
    ll n, q;
    cin >> n >> q;
    vec a(n), b(q);

    for (ll i = 0; i < n; i++) cin >> a[i];
    for (ll i = 0; i < q; i++) cin >> b[i];

    vec prefix(n);
    prefix[0] = a[0];
    for (ll i = 1; i < n; i++) {
        prefix[i] = prefix[i-1] + a[i];
    }

    vec maximum(n);
    maximum[0] = a[0];
    for (ll i = 1; i < n; i++) {
        maximum[i] = max(maximum[i-1], a[i]);
    }

    for (ll i = 0; i < q; i++) {
        ll ans = height(b[i], maximum);  
        if (ans == -1)
            cout << 0 << " ";  
        else
            cout << prefix[ans] << " ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
