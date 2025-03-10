#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(),x.end()
#define ll long long int
#define endl '\n'
#define vec vector<ll>
#define map map<ll,ll>
#define us unordered_set<ll>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
 void solve() {
ll m,a,b,c;
cin >> m>>a>>b>>c;
ll sum=0;
ll f=min(m,a);
ll s=min(m,b);
ll l=2*m-f-s;
c=min(l,c);
sum=f+s+c;
cout<<sum<<endl;
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