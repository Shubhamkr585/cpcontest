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
#define INF 10000000000
 void solve() {
ll n,d,m;
cin >> n>>d>>m;
vec pref(n+1,0);
for(int i = 0; i<m;i++){
    ll l,r;
    cin>>l>>r;fati
    for(int j = l; j <=r;j++)
    pref[j]++;
}
ll maxi=0,posmax=0,mini=INF,minpos=0;

for(int i = 1; i<=n;i++){
if(pref[i]>maxi){
    maxi=pref[i];
    posmax=i;
}
if(pref[i]<mini){
    mini=pref[i];
    minpos=i;
}
}
cout<<posmax<<" "<<minpos<<endl;
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