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
ll n,m,k,ans=0;
cin >> n >>m >>k;
vec bit(21,0),b(m+1);
for(int i=0;i<=m;i++){
    cin>>b[i];
}
for(int i=0;i<=20;i++){
if(b[m] & (1<<i))
bit[i]=1;
}
for(int i=0;i<m;i++){
    ll cnt=0;
    for(int j=0;j<=20;j++){
       ll bitval=b[i] & (1<<j)?1:0;
       if(bitval!=bit[j])
       cnt++;
}
if(cnt<=k)
ans++;
cnt=0;
}
cout<<ans<<endl;

}
int main() {
    fastio;

solve();
    
    return 0;
}