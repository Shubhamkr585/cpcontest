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
ll n;
cin >> n;
ll arr[n];
ll mx1=0,sum1=0,mx2=0,sum2=0;
for (int i = 0; i < n; i++) {
    cin >> arr[i];
    sum1+=arr[i];
    mx1=max(mx1,sum1);
}
ll  m ;
cin>>m;
ll b[m];
for (int i = 0; i < m; i++) {
    cin>>b[i];
    sum2+=b[i];
    mx2=max(mx2,sum2);
}
cout<<mx1+mx2<<endl;
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