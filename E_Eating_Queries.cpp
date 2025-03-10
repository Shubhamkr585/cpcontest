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
ll n,q;
cin >> n>>q;
vec a(n);
for(int i=0;i<n;i++)
cin>>a[i];
sort(all(a),[&](auto x,auto y) { return x>y; });
vec pref(n,0);
pref[0]=a[0];
for(int i=1;i<n;i++){
    pref[i]=pref[i-1]+a[i];
}
for(int i=1;i<=q;i++){
    ll x;
    cin>>x;
    ll lb=lower_bound(pref.begin(),pref.end(),x)-pref.begin();
    if(lb==n){
        cout<<-1<<endl;
    }
    else{
        cout<<lb+1<<endl;
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