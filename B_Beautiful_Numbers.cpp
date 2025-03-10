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
ll n;
cin >> n;
vec a(n+1),dp(n+1,0),index(n+1);
dp[1]=1;
dp[n]=1;
for(int i=1;i<=n;i++){ 
    cin>>a[i];
    index[a[i]]=i;
    }

set<ll>st;
st.insert(index[1]);
for(int i=2;i<n;i++){
    st.insert(index[i]);
    ll start=*st.begin();
    
    ll end=*st.rbegin();
    if(end-start+1==i)
    dp[i]=1;
    else
    dp[i]=0;

}


for(int i=1;i<=n;i++){
    cout << dp[i];
}
cout<<"\n";


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