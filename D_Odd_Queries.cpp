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
ll n,q;
cin >> n >>q;
vec a(n);
REP(i,n) cin >> a[i];
vec pre(n+1,0);

for (int i = 1; i <= n; i++)
{
    pre[i] = pre[i-1]+a[i-1];
}
while (q--)
{
    ll l,r,k;
    cin >> l >> r >> k;
    ll left=pre[l-1];
    ll right=pre[n]-pre[r];
    ll mid=(r-l+1)*k;
    ll ans=left+mid+right;
    cout << (ans%2==1?"YES":"NO") << endl;
}
    

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