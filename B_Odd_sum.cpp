#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll NEG_INF = -1000000000000000000LL;

int n;
vector<ll> a;
vector<vector<ll>> memo;
vector<vector<bool>> vis;
ll f(int i, int p) {
    
      memo[n][0] = 0;
      memo[n][1] = NEG_INF;
    for(int i =n-1; i>=0; i--){
        for(int p = 0; p < 2; p++){
            ll best=memo[i+1][p];
            int new_parity = (a[i] % 2 == 0) ? p : 1 - p;
            ll candidate = a[i] + memo[i+1][new_parity];
            best = max(best, candidate);
            memo[i][p] = best;
        }
    }
    return memo[0][1];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    memo.assign(n+1, vector<ll>(2, NEG_INF));
    vis.assign(n+1, vector<bool>(2, false));
    ll ans = f(0, 1);
    cout << ans << "\n";
    
    return 0;
}



// if(i == n) {
    //     return (p == 0) ? 0 : NEG_INF; 
    // }
    // if(vis[i][p]) return memo[i][p];
    
    // ll res = f(i+1, p);
    
    // int new_parity = (a[i] % 2 == 0) ? p : 1 - p;
    // ll candidate = a[i] + f(i+1, new_parity);
    
    // res = max(res, candidate);
    
    // vis[i][p] = true;
    // memo[i][p] = res;
    // return res;