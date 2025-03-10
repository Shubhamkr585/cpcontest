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
vec a(n+1),dp(n+1,0);
for(int i=1;i<=n;i++) cin >> a[i];
for(int i=1;i<=n;i++) {
    dp[i]+=a[i];
    if(a[i]+i<=n) dp[a[i]+i]=max(dp[a[i]+i],dp[i]);
}

ll ans=0;
for(int i=1;i<=n;i++) ans=max(ans,dp[i]);
cout << ans << endl;

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