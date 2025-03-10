#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(),x.end()
#define rep(i,N) for (int i = 0; i <(N); i++)
#define ll long long int
#define endl '\n'
#define vec vector<ll>
#define map map<ll,ll>
#define us unordered_set<ll>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
 void solve() {

    int n,m;
    cin>>n;

    vector<pair<ll,ll>> ve(n);
    rep(i,n){
      cin>>ve[i].first;
      ve[i].second=i+1ll;
    }
    sort(all(ve));
    int ans=0;
    for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
        if(ve[i].first*ve[j].first > 2*n)break;
        if(ve[i].first *ve[j].first == ve[i].second +ve[j].second)ans++;
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