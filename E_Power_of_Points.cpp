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
vec a(n);
REP(i,n) cin >> a[i];
vector<pair<ll,ll>>pos;
for(int i=0;i<n;i++){
    pos.push_back({a[i],i});
}
sort(all(pos));
sort(all(a));
if(n==1){
    cout<<1<<endl;
    return;
}
vec ans(n,0);
vec pref(n,0),suff(n,0);
pref[0]=a[0];
for(int i=1;i<n;i++)
pref[i]=pref[i-1]+a[i];
suff[n-1]=a[n-1];
for(int i=n-2;i>=0;i--)
suff[i]=suff[i+1]+a[i];
ans[0]=suff[0] -(a[0]-1)*n;

for(int i=1;i<n;i++){
ans[i]=suff[i]-(a[i]-1)*(n-i) + abs(i*(a[i]+1)-pref[i-1]);
}
vec final(n);
for(int i=0;i<n;i++){
   final[pos[i].second]=ans[i];
}
for(auto i:final)
cout<<i<<" ";
 
cout<<"\n";
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