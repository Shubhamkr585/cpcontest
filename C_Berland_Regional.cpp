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
//  void solve() {
// ll n;
// cin >> n;
// map<ll,priority_queue<ll,vector<ll>,greater<ll>>mp;
// for(int i=0;i<n;i++){
//     ll x;
//     cin>>x;
//     mp[x].push(x);
// }
// for(auto it:map){
//     if(it.second.size()>1)
// }
// }
int main() {
    fastio;
//     int t = 1;
//     cin >> t;
//     while (t--) {
// solve();
//     }

    vec a={1,2,3,4,5};
    cout<<lower_bound(all(a),3)-a.begin()<<endl;
    return 0;
}