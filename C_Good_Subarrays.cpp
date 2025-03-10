#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(),x.end()
#define REP(i,N) for (int i = 0; i <(N); i++)
#define ll long long int
#define endl '\n'
#define vec vector<ll>
#define us unordered_set<ll>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
 void solve() {
ll n;
cin >> n;
string s;
cin>>s;

map<ll,ll>mp;
vec pref(n,0);
pref[0]=(s[0]-'0');
for(int i=1;i<n;i++){
    pref[i]=pref[i-1]+(s[i]-'0');
}
mp[0]=1;
for(int i=0;i<n;i++){
    mp[pref[i]-i-1]++;
}
ll ans=0;
for(auto it:mp){
    ans+=it.second*(it.second-1)/2;
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