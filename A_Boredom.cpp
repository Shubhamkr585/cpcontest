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
#define MOD 100001
 void solve() {
ll n;
cin >> n;
vec a(n), b(MOD, 0),dp(MOD,0);
for(int i = 0; i < n; i++) {
    cin >> a[i];
    b[a[i]]++;
}
dp[1]=b[1];
for(int i = 2; i < MOD; i++) {
    dp[i] = max(dp[i - 1], dp[i - 2] + b[i] * i);
}
cout << dp[MOD - 1] << endl;

}
int main() {
    fastio;
 
solve();
    
    return 0;
}