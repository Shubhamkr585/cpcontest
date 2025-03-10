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
#define MAX_SIZE 1000001
vec dp(MAX_SIZE,0);
 void solve() {
ll n;
cin >> n;
cout<<(dp[n]==1?"YES":"NO")<<endl;

}
int main() {
    fastio;
    for(ll i=0;i<=494;i++){
        ll sum=i*2021ll;
        while(sum<=MAX_SIZE-1){
            dp[sum]=1;
            sum+=2020ll;
        }
        
    }
    int t = 1;
    cin >> t;
    while (t--) {
solve();
dp.clear();
    }
    return 0;
}