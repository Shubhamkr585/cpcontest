#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(),x.end()
#define ll long long int
#define endl '\n'
#define vec vector<ll>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

void solve() {
    ll n, size, q;
    cin >> n >> size >> q;
    vec a(size), b(size);
    
    for (int i = 0; i < size; i++) cin >> a[i];
    for (int i = 0; i < size; i++) cin >> b[i];

    while (q--) {
        ll dis;
        cin >> dis;
        ll time = 0;

        ll lb = lower_bound(all(a), dis) - a.begin();

        if (lb > 0) {
            ll extra = (b[lb] - b[lb - 1]) * (dis - a[lb - 1]) / (a[lb] - a[lb - 1]);
            time = b[lb - 1] + extra;
        } else {
            time = (dis * b[0]) / a[0];
        }

        cout << time << " ";
    }
    cout << endl;
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
