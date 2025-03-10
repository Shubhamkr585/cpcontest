#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(),x.end()
#define REP(i,N) for (int i = 0; i <(N); i++)
#define ll long long int
#define endl '\n'
#define vec vector<ll>
#define map map<ll,ll>
#define us unordered_set<ll>
#define INF 10000000000
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

ll gcd(ll a, ll b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
 void solve() {
ll n;
cin >> n;
vec a(n);

for(auto &i : a) {
    cin >> i;
}
ll g=0;
for(int i=0;i<n;i++){
    ll index=i,maxi=-1;
    for(int j=0;j<n;j++){
        if(  a[j]!=-1 && gcd(g,a[j])>maxi){
            maxi=gcd(g,a[j]);
            index=j;
        }
}
cout<<a[index]<<" ";
g=maxi;
a[index]=-1;
}
cout<<endl;
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