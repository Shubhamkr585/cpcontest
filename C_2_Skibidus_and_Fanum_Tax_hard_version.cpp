
#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(),x.end()
#define REP(i,N) for (int i = 0; i <(N); i++)
#define ll long long
#define endl '\n'
#define vec vector<ll>
#define map map<ll,ll>
#define us unordered_set<ll>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define MOD 1000000000000000000LL
 void solve() {
    ll n, m;
    cin >> n >> m;
    vec a(n),b(m);
    for (int i = 0;i < n; i++) {
        cin >> a[i];
    }
    for (int i=0; i < m; i++) {
        cin >> b[i];
    }
    sort(all(b));
    
  
    ll p1 = -MOD; 
    bool yes = true;
  
    for (int i = 0; i < n; i++){
        
        ll z1 = LLONG_MAX;
        if(a[i] >= p1) {
            z1 = a[i];
        }
        ll y1 = LLONG_MAX;
        ll t = p1 + a[i];
        auto it = lower_bound(b.begin(), b.end(), t);
        if(it != b.end()){
            y1 = (*it) - a[i];
        }
        ll curr = min(z1, y1);
        if(curr == LLONG_MAX){
            yes = false;
            break;
        }
        p1 = curr;
    }
    cout << (yes ? "YES" : "NO") << "\n";

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