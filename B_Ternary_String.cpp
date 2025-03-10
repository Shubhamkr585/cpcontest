#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(),x.end()
#define REP(i,N) for (int i = 0; i <(N); i++)
#define ll long long int
#define endl '\n'
#define vec vector<ll>
#define map map<char,ll>
#define us unordered_set<ll>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
 void solve() {
ll n,ans=1e9;
string s;
cin>>s;
n=s.length();
int i=0,j=0;
map mp;

for(i=0;i<n;i++){
  mp[s[i]]++;
  while(mp['1']>=1 && mp['2']>=1 && mp['3']>=1){
    ans=min(i-j+1ll,ans);
    mp[s[j]]--;
    j++;
 }

}
cout<<(ans!=1e9?ans:0)<<endl;
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