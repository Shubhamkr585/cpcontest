#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(),x.end()
#define REP(i,N) for (ll i = 0; i < (N); i++)
#define ll long long int
#define endl '\n'
#define vec vector<ll>
#define map map<ll,ll>
#define us unordered_set<ll>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
 
void solve(){
    ll n; cin >> n;
    ll size = 2 * n;
    vec b(size);
    REP(i, size) cin >> b[i];
    sort(all(b), greater<ll>());
    ll sum1=0,sum2=0;
    for(int i=0;i<2*n;i+=2){
        sum1+=b[i];
        sum2+=b[i+1];
    }
    sum1-=b[0];
    
   
    ll b1=b[0]+sum2-sum1;
    ll a1=b[0];
    b[0]=b1;
    
    cout<<a1<<" ";
    for(int i=0;i<2*n;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
    
}
 
signed main(){
    fastio;
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}
