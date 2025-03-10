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
#define INF 1e9
vec dp;
ll dpsolution(ll n,ll a,ll b,ll c){
    if(n<0){
        return -INF;
    }
    if(n==0)
    return 0;
    if(dp[n]!=-1) return dp[n];
    ll take1=dpsolution(n-a,a,b,c);
    ll take2=dpsolution(n-b,a,b,c);
    ll take3=dpsolution(n-c,a,b,c);
    return dp[n]= 1+max(take1,max(take2,take3));
    
}
 void solve() {
ll n,a,b,c;
cin >> n >>a >>b >>c;
dp.assign(n+1,-1);
cout<<dpsolution(n,a,b,c)<<endl;
dp.clear();

}
int main() {
    fastio;

solve();
    
    return 0;
}