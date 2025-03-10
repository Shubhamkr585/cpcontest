#include <bits/stdc++.h>
using namespace std;
#define sort(vec) sort(vec.begin(),vec.end())
#define ll long long int
#define endl '\n'
#define vec vector<ll>
#define uo unordered_set<ll>
#define mp map<ll,ll>
#define us unordered_set<ll>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
 void solve() {
ll n;
cin >> n;
vec a(1001);
for(int i=0;i<n;i++){
    ll x;
    cin>>x;
    a[x]++;
}
vec b;
for(int i=1;i<=1000;i++){
    if(a[i])
    b.push_back(a[i]);
}
sort(b);
ll i=0,size=n,cnt=0,ns=b.size(),ans=0;
for(int i=0;i<n;i++){
    if(b[i]==1)
    cnt++;
    else
    break;
}
ns=ns-cnt;
cnt=(cnt+1)/2;
ans+=cnt*2+ns;
cout<<ans<<endl;
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