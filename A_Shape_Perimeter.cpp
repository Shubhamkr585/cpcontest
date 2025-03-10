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
ll n,m;
cin >> n>>m;
ll maxix=0,s1,s2,maxiy=0,miniy=1000;

for (int i = 0; i < n; i++) {
    ll x,y;
    cin>>x>>y;
    if(i==0){
        s1=x,s2=y;
    }
   
    maxix+=x;
    maxiy+=y;
    
}
// cout<<maxix<<" "<<maxiy<<endl;
ll ans=2*(maxix+maxiy+m+m-s1-s2);
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