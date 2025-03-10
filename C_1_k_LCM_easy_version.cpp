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
ll n,k;
cin >> n>>k;
if(n%2==1){
    ll ans=(n-1)/2;
    cout<<1<<" "<<ans<<" "<<ans<<endl;
}
else{
    if(n%4==0){
        cout<<n/2<<" "<<n/4<<" "<<n/4<<endl;
    }
    else{
        cout<<2<<" "<<n/2-1<<" "<<n/2-1<<endl;
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