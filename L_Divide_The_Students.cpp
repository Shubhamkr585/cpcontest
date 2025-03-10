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

    ll a,b,c;
    cin>>a>>b>>c;
    if(b>=a && b>=c){
        cout<<(a+b+c)/3+(a+b+c)%3<<endl;
        return;
    }
    ll x=min(a,c);
    ll y=max(a,c);
    ll diff=(y-x)/2;
    cout<<max({x+diff,b,y-diff})<<endl;


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