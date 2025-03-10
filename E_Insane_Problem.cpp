#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(),x.end()
#define ll long long int
#define endl '\n'
#define vec vector<ll>
#define map map<ll,ll>
#define us unordered_set<ll>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
ll power(ll x,ll i) { 
    if(i==0) return 1ll;
    ll ans=1;
    for(ll j=1;j<=i;j++){ ans*=x;}
    return ans;
}
 void solve() {
ll n;
ll  k,l1,r1,l2,r2;
cin>>k>>l1>>r1>>l2>>r2;
ll ans=0;
for(ll i=0;i<30;i++){
ll x=power(k,i);
ll low=l1,high=r1,val=0;
while(low<=high){
    ll mid=l1+(r1-l1)/2;
    cout<<"yes"<<endl;
    if(mid*x>=l2 && mid*x<=r2)
    {
        val=mid;
        low=mid+1;
    }
    else
    high=mid-1;
}
ans+=val-l1+1;
}
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