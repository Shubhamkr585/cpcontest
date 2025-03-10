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

ll gcd(ll a, ll b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}
 void solve() {
ll n;
cin >> n;
vec v(n);
for (int i = 0; i < n; i++) {
    cin >> v[i];
}
ll g=0,ans=v[0];bool mark1=true,mark2=true;
for(int i=0;i<n-1;i++){
    g=gcd(g,v[i]);
    if(g!=ans || g!=v[i]){
        mark1=false;
        break;
    }
}
g=0,ans=v[n-1];
for(int i=n-1;i>=1;i--){
    g=gcd(g,v[i]);
    if(g!=ans || g!=v[i]){
        mark2=false;
        break;
    }
}
// cout<<mark1<<" "<<mark2<<endl;
if(mark1 || mark2){
    cout << "YES" << endl;
}   
else{
    cout << "NO" << endl;
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