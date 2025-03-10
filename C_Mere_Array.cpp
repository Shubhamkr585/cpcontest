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
 void solve() {
ll n;
cin >> n;
vec a(n);
ll mini=INF;
for(int i = 0; i < n; i++){
    cin>>a[i];
    mini=min(mini,a[i]);
}
if(n==1){
    cout<<"YES\n";
    return;
}
vec b;
for(int i=0;i<n;i++){
    if(a[i]%mini==0)
    b.push_back(a[i]);
}
sort(all(b));
ll j=0;
for(int i=0;i<n;i++){
    if(a[i]%mini==0){
        a[i]=b[j++];
    }
}
for(int i=0;i<n-1;i++){
    if(a[i]>a[i+1])
    {
        cout<<"NO\n";
        return;
    }
}
cout<<"YES\n";
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