#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

ll cube(ll x) {
    return x * x * x;
}

ll integer_cbrt(ll n) {
    ll low = 1, high = 1e6;
    while (low <= high) {
        ll mid = (low + high) / 2;
        ll cube_mid = cube(mid);
        if (cube_mid == n) return mid;
        else if (cube_mid < n) low = mid + 1;
        else high = mid - 1;
    }
    return low - 1; 
}

void solve() {
    ll n;
    cin >> n;
    if (n == 0 || n == 1) {
        cout << "NO" << endl;
        return;
    }
    for (ll i = 1; cube(i) <= n; i++) {
        ll remaining = n - cube(i);
        if(remaining == 0){
            break;
        }
        ll cuberoot = integer_cbrt(remaining);
        if (cube(cuberoot) == remaining ) {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}