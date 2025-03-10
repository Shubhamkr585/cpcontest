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
ll n ,m;
cin >> n>>m;
vector<pair<ll,ll>>sum(n);
vector<vector<ll>>a(n,vector<ll>(m));
for(int i = 0; i < n; i++){
    ll s=0;
    for(int j = 0; j < m; j++){
        cin >> a[i][j];
        s+=a[i][j];
    }
    sum[i].first=s;
    sum[i].second=i;
}
sort(all(sum),[&](pair<ll,ll>&a,pair<ll,ll>&b){return a.first>b.first;});
vec hash(n);
for(int i = 0; i < n; i++){
    hash[i]=sum[i].second;
}
ll ans=0,ss=0;
for(int i=0;i<n;i++){
   
    for(int j=0;j<m;j++){
        ss+=a[sum[i].second][j];
        ans+=ss;
}
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