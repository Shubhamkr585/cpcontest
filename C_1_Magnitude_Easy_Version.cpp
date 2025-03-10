#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
const ll INF = 1e18;
const ll NEG_INF = -1e18;
 
void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll sum = 0, mn = 0;
    for (int i = 0; i < n; ++i) sum += a[i], mn = min(mn, sum);
    cout << sum - 2 * mn << '\n';
    
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}
