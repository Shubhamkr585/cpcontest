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
ll n,k;
cin >> n>>k;
vec a(n);
for(auto & i:a)
cin>>i;
sort(all(a));
ll ans=a[0],i=1;
for( i=1;i<n && k>0;i++){
ll req=i*(a[i]-a[i-1]);
if(req<=k){
ans=a[i];
k-=req;
}
else break;
}
if(k>0)
ans+=k/i;
k%=i;
cout<<ans*n+ k<<endl;
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