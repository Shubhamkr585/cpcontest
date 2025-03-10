#include "bits/stdc++.h"
using namespace std;
#define ll long long          
#define all(v)  v.begin(), v.end()
ll query(int l, int r, vector<ll>& p) {
    return p[r] - (l ? p[l - 1] : 0);
}
void solve() {  
    int n, s; cin >> n >> s;
    vector<ll> a(n), p(n);
    for(int i=0;i<n;i++) {
        cin >> a[i];
        p[i] = a[i];
        if(i) p[i] += p[i - 1];
    }

    int ans = INT_MAX;

    for(int i = 0; i < n; ++i) {
        int l = i, r = n - 1, pos = -1;
        while(l <= r) {
            int mid = l + r >> 1;
            if(query(i, mid, p) <= s) {
                pos = mid;
                l = mid + 1;
            } else r = mid - 1;
        }
        if(pos == -1 || query(i, pos, p) != s) continue;
        ans = min(ans, n - (pos - i + 1));
    }

    cout << (ans == INT_MAX ? -1 : ans) << "\n";
} 
     
int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}   