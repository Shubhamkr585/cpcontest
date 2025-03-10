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
//  ll solve(ll index,ll n,vector<ll>& a,vec & dp) {
// //base case
//     if(index==n) return 0ll;
//     if(index>n) return n+1ll;
//      if(dp[index]!=-1) return dp[index];
// //exclude
// ll nottake=1+solve(index+1,n,a,dp);
// ll take=n+1;
// take=solve(index+a[index]+1,n,a,dp);
// return dp[index]= min(take,nottake);

// }
void solve(){
 ll n;
        cin>>n;
        vec a(n);
        for(int i = 0; i < n; i++)
        cin>>a[i];
        vec dp(n+1,0);
        for(ll i=n-1;i>=0;i--){
            if(i+a[i]<n)
            dp[i]=min(dp[i+a[i]+1],1+dp[i+1]);
            else
            dp[i]=1+dp[i+1];
        }
        cout<<dp[0]<<endl;
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