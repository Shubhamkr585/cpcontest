#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(ll n, const vector<ll>& a) {
    set<ll> sub;
    sub.insert(0);
    ll sum = 0;

    for (ll i = 0; i < n; ++i) {
        sum = 0;
        for (ll j = i; j < n; ++j) {
            sum += a[j];
            sub.insert(sum);
        }
    }

    cout << sub.size() << "\n";
    for (ll sum : sub) {
        cout << sum << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        solve(n, a);
    }

    return 0;
}