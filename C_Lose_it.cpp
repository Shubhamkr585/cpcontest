#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(),x.end()
#define REP(i,N) for (int i = 0; i <(N); i++)
#define ll long long int
#define endl '\n'
#define vec vector<ll>
// #define map map<ll,ll>
#define us unordered_set<ll>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
 void solve() {
ll n;
cin >> n;
vec dp(6,0),a(n);
map<ll,ll>mp={{4,0},{8,1},{15,2},{16,3},{23,4},{42,5}};
REP(i,n) {
   ll x;
   cin>>x;
   a[i]=mp[x];
}
for(int i=0;i<n;i++){
    ll ele=a[i];
    ll cnt=dp[ele]+1;
    bool flag=true;
    for(int j=0;j<ele;j++){
        if(dp[j]<cnt) {flag=false;break;}
    }
    if(flag)
    dp[ele]=cnt;

}
ll ans=dp[5]*6;
cout<<n-ans<<endl;

}
int main() {
    fastio;
   
solve();
    
    return 0;
}