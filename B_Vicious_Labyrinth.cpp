#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define REP(i, N) for (int i = 0; i < (N); i++)
#define ll long long int
#define endl '\n'
#define vec vector<ll>
#define map map<ll,ll>
#define us unordered_set<ll>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
 
void solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    a[n-2] = n;
    a[n-1] = n - 1;
    ll val = (k % 2 == 1 ? n : n - 1);
    REP(i, n-2) a[i] = val;
    for(auto x : a) cout << x << " ";
    cout << "\n";
}
 
int main() {
    fastio;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}
