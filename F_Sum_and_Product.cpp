#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        map<ll, ll> freq;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            freq[a[i]]++;
        }
        int q;
        cin >> q;
        while(q--) {
            ll x, y;
            cin >> x >> y;
            ll D = x * x - 4 * y;
            if (D < 0) {
                cout << 0 << " ";
                continue;
            }
            ll r = (ll) sqrt(D);
            if (r * r != D) { 
                cout << 0 << " ";
                continue;
            }
            if ((x + r) % 2 != 0) {
                cout << 0 << " ";
                continue;
            }
            ll u = (x + r) / 2;
            ll v = (x - r) / 2;
            if (u == v) {
                ll count = freq[u];
                cout << (count * (count - 1)) / 2 << " ";
            } else {
                cout << freq[u] * freq[v] << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}
