#include <bits/stdc++.h>
using namespace std;
// #define all(x) x.begin(),x.end()
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
vector<vector<ll>>p(m,vector<ll>(3));
for(int i=0; i<m; i++){
    cin >> p[i][0]>> p[i][1];
    p[i][2]=i+1;
}
// sort(all(p));
vector<vector<ll>>cp=p;
sort(cp.begin(),cp.end(),[&](auto & x,auto &y){return x[1]<y[1];});
ll weight=0;
vector<pair<ll,ll>>ans;
for(int i=0;i<2*n;i+=2){
    weight+=cp[i][1]+cp[i+1][1];
    ans.push_back({cp[i][0],cp[i][2]});
    ans.push_back({cp[i+1][0],cp[i+1][2]});
}
cout<<weight<<endl;
sort(ans.begin(),ans.end());
int j=ans.size()-1,i=0;
while(i<j){
    cout<<ans[i].second<<" "<<ans[j].second<<endl;
    i++,j--;
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