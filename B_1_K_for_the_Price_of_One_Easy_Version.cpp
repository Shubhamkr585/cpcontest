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
ll n,p,k;
cin >> n>>p>>k;
ll ans=0;
for(int i=0;i<n;i++) cin>>a[i];
sort(all(a));
if(n%2==0){
    for(int i=1;i<n;i+=2){
      if(p-a[i]>=0){
        p-=a[i];
        ans+=2;
      }
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



