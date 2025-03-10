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
ll dpsolution(vec & a,ll i,ll n,ll p,ll green,ll blue){
    if(i==n) return 0;
    if(p>a[i]) return dpsolution(a,i+1,n,p+a[i]/2,green,blue)+1ll;
    ll ans1=(green? (dpsolution(a,i,n,p*2,green-1,blue)):0);
    ll ans2=(blue? dpsolution(a,i,n,p*3,green,blue-1):0);
    return max(ans1,ans2);
}
 void solve() {
ll n,p;
cin >> n>>p;
vec a(n);
REP(i,n) cin >> a[i];
sort(all(a));
cout<<dpsolution(a,0,n,p,2,1)<<endl;

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