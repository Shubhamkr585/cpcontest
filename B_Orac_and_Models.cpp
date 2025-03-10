#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(),x.end()
#define REP(i,N) for (int i = 1; i <=(N); i++)
#define ll long long int
#define endl '\n'
#define vec vector<ll>
#define map map<ll,ll>
#define us unordered_set<ll>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
// ll solve(ll index,ll prev,ll n,vec &a,vector<vector<ll> > &dp){
//     if(index>n) return 0ll;
//     if(dp[index][prev]!=-1) return dp[index][prev];
//     ll take=0,nottake=0;
//     if(prev==0 || index%prev==0 && a[index]>a[prev]){
//         take=max(1+solve(index+1,index,n,a,dp),solve(index+1,prev,n,a,dp));
//     }
//     else{
//       nottake=solve(index+1,prev,n,a,dp);
//     }
//     return dp[index][prev]= max(take,nottake);


//dp table
// vector<ll>curr(n+1,0ll),next(n+1,0);
// for(ll i=0;i<=n;i++)
// next[i]=0;
// for(ll i=n;i>=1;i--){
//     for(ll j=n;j>=0;j--){
//         if(j==0 || i%j==0 && a[i]>a[j]){
//             curr[j]=max(1ll+next[i],next[j]);
//         }
//         else{
//             curr[j]=next[j];
//         }
//     }
//     next=curr;
// }
// cout<<next[0]<<endl;

// }
 void solve() {
ll n;
cin >> n;
vec a(n+1);
REP(i,n)
cin>>a[i];
vec f(n+1,1);

// for(int i = 1; i<=n; i++)
// 			f[i] = 1;
		for(int i = 1; i<=n; i++) {
			for(int j = i*2; j<=n; j += i){
				if(a[i]<a[j]){
					f[j] = max(f[j],f[i]+1);}
            }
        }
		ll ans = 0;
		for(int i = 1; i<=n; i++)
			ans = max(ans,f[i]);
		cout << ans << endl;
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

