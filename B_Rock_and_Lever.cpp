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
#define MAXBITS 30
 void solve() {
ll n;
cin >> n;
vec cnt(MAXBITS,0);
vec a(n);

for(int i = 0; i < n; i++){
    ll x;
    cin>>x;
    int bit;
    for(int j = 0; j < MAXBITS; j++){
        if(x & (1ll << j)) bit=j;
    }
    cnt[bit]++;
}
ll ans=0;
for(int i = 0; i < MAXBITS;  i++){
    if(cnt[i])
    ans+=(cnt[i]*(cnt[i]-1))/2;
}
cout<<ans<<endl;


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