#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define REP(i, N) for (int i = 0; i < (N); i++)
#define ll long long int
#define endl '\n'
#define vec vector<ll>
#define map map<ll, ll>
#define us unordered_set<ll>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

void solve() {
    ll n;
    cin >> n;
    vec a(n);
    ll maxi = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        maxi = max(a[i], maxi);
    }
    if (n == 2) {
        cout << abs(a[0] - a[1]) << "\n";
        return;
    }
    if (a[0] == maxi || a[n - 1] == maxi) {
        cout << maxi << endl;
        return;
    }
    if (n == 3) {
        ll ans = abs(abs(a[0] - a[1]) - a[2]);
        ans = max({a[0], ans, a[2]});
        cout << ans << endl;
        return;
    }
    vec ind;
    for (int i = 0; i < n; i++) {
        if (a[i] == maxi)
            ind.push_back(i);
    }
    ll maxi1 = -1, maxi2 = -1;
    for (int i = 0; i < ind.size(); i++) {
        if (ind[i] != 1 && ind[i] != n - 2) {
            cout << maxi << endl;
            return;
        } else if (ind[i] == 1) {
            maxi1 = abs(a[0] - maxi);
        } else if (ind[i] == n - 2) {
            maxi2 = abs(a[n - 1] - maxi);
        }
    }
    ll sec = 0;
    sort(all(a), greater<ll>());

    for (int i = 0; i < n; i++) {
        if (a[i] != maxi) {
            sec = a[i];
            break;
        }
    }
    cout << max({(ll)maxi1, (ll)maxi2, (ll)sec}) << endl;
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


