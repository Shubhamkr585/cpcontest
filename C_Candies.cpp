#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(),x.end()
#define REP(i,N) for (int i = 0; i <(N); i++)
#define ll long long int
#define endl '\n'
#define vec vector<ll>
#define map map<ll,ll>
#define us unordered_set<ll>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
 void solve() {
ll n;
cin >> n;
vec a(n+1),prefix(n+1,0);
for (int i = 1; i <= n; i++) cin>>a[i];
prefix[1] = a[1];
for (int i = 2; i <= n; i++) {
    prefix[i] = prefix[i-1] + a[i];
}
ll m;
cin >> m;
for (int i = 0; i < m; i++) {
    ll l, r;
    cin >> l >> r;
    cout << (prefix[r] - prefix[l-1])/10 << endl;
}
 }
int main() {
    fastio;

solve();
    
    return 0;
}