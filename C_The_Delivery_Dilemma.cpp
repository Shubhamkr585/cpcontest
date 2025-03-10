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
vector<pair<ll,ll>>p(n);
ll maxi=0;
for(int i=0;i<n;i++){
cin>>p[i].first;
maxi=max(maxi,p[i].first);
}
for(int i=0;i<n;i++)
cin>>p[i].second;

sort(all(p),[&](auto &x,auto & y){
    return x.second<y.second;
});
if(p[0].second>=maxi){
    cout<<maxi<<endl;
    return;
}
vec pref(n);

pref[0]=p[0].second;
for(int i=1;i<n;i++)
pref[i]=pref[i-1]+p[i].second;
int i=0;
for(int i=0;i<n;i++){
    if(p[i]>)
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