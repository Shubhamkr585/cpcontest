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
ll n,ans=1e6;
cin >> n;
vec v(n);
for (int i = 0; i < n; i++) {
    cin >> v[i];
}
map<ll,pair<ll,ll>> mp;//{lastindex,minlen}
for(int i=0;i<n;i++){
    if(mp.find(v[i])!=mp.end()){
        mp[v[i]].second=min(mp[v[i]].second,i-mp[v[i]].first+1);
        mp[v[i]].first=i;
    }
    else{
        mp[v[i]]={i,1e6};
    }
}

for(auto it:mp){
ans=min(ans,it.second.second);
}
cout<<(ans==1e6?-1:ans)<<endl;
}
int main() {
    fastio;
    
solve();
    
    return 0;
}