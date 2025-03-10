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
vec a(n),b(n);
for(int i=0;i<n;i++)
cin>>a[i];
for(int i=0;i<n;i++)
cin>>b[i];
vector<pair<ll,ll>>p(n);
for(int i=0;i<n;i++){
    p[i]={a[i],b[i]};
}
// sort(all(p),[&](auto &x,auto &y) { return x.first<y.first;});
ll allow=1e9,req=0;
for(int i=0;i<n;i++){
  if(p[i].first-req<p[i].second){
    if(p[i].second-p[i].first+req>allow){
        cout<<"NO"<<endl;
        return;
    }
    else {
        allow=0;
        req+=p[i].second-p[i].first;
    }
    // cout<<req<<endl;
  }
  else{
    allow=min(allow,p[i].first-p[i].second);
  }
//   cout<<" allow"<<allow<<endl;
}
cout<<"YES"<<endl;
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