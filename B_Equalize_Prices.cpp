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
cin >> n >> k;
vec a(n);
for(int i=0;i<n;i++){
    cin >> a[i];
}
ll mini=INT64_MAX,maxi=INT64_MIN,sum=0;
for(int i=0;i<n;i++){
    mini=min(mini,a[i]+k);
    maxi=max(maxi,a[i]-k);
}
if(mini>=maxi){
    cout << mini << endl;
    return;
}
cout << -1 << endl;
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