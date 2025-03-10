#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(),x.end()
#define REP(i,N) for (ll i = 0; i <(N); i++)
#define ll long long int
#define endl '\n'
#define vec vector<ll>
#define us unordered_set<ll>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
 void solve() {
    ll n, m;
    cin>>n>>m;
    vector<vector<ll>> grid(n, vector<ll>(m));
    map<ll,bool> found,adj;
    for (ll i = 0; i < n; i++){
        for (ll j = 0; j < m; j++){
            cin >> grid[i][j];
            found[grid[i][j]] = 1;  }
    }
    ll dr[2] = {0, 1};
    ll dc[2] = {1, 0};
    for (ll i = 0; i < n; i++){
        for (ll j = 0; j < m; j++){
            ll col = grid[i][j];
            for (ll d = 0; d < 2; d++){
                ll ni = i + dr[d], nj = j + dc[d];
                if (ni < n && nj < m){
                    if (grid[ni][nj] == col)
                        adj[col] = 1;
                }
            }
        }
    }
    ll d= found.size();
    ll r=0;
    for(auto &p:found){
        ll col=p.first;
        if(adj[col]) r++;
    }
    if(d == 1){
        cout << 0 << "\n";
        return;
    }
    ll ans;
    if(r > 0) 
        ans = (d + r) - 2;
    else 
        ans = d - 1;
    cout << ans << "\n";

}

signed main(){
  fastio;
    ll t; 
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
