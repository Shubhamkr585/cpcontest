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
ll n,m;
cin >> n >>m;
vec a(n),b(m);
for(int i=0;i<n;i++)
cin>>a[i];
for(int i=0;i<m;i++)
cin>>b[i];
auto check=[&](ll mid)->bool{
int i=0,j=0;
while(i<n){
    while(j<m &&abs(a[i]-b[j])>mid)
    j++;
    if(j==m)
    return false;
    i++;
}
return true;
};
ll low=0,high=1e10,ans=1e10;
while(low<=high){
    ll mid=(low+high)/2;
    if(check(mid)){
        ans=mid;
        high=mid-1;
    }
    else low=mid+1;
}
cout<<ans<<endl;
}
int main() {
    fastio;

solve();
    
    return 0;
}