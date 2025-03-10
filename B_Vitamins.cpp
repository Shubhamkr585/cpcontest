#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(),x.end()
#define REP(i,N) for (int i = 0; i <(N); i++)
#define ll long long int
#define endl '\n'
#define vec vector<ll>
#define us unordered_set<ll>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define MOD 1000000007
 void solve() {
ll n;
cin >> n;
vector<pair<ll,string>>v(n);

for (int i = 0; i < n; i++) {
   cin >> v[i].first;
  string s;
  cin>>s;
  transform(s.begin(), s.end(), s.begin(), ::tolower);
  sort(s.begin(),s.end());
  v[i].second=s;
}

map<string,int>mp={{"a",0},{"b",1},{"c",2},{"ab",3},{"bc",4},{"ac",5},{"abc",6}};
vector<ll>minimum(7,MOD);
for (int i = 0; i < n; i++) {
    minimum[mp[v[i].second]]=min(minimum[mp[v[i].second]],v[i].first);
}
ll ans=minimum[6];

 ans=min(ans,minimum[0]+minimum[1]+minimum[2]);
 ans=min(ans,minimum[0]+minimum[4]);
 ans=min(ans,minimum[1]+minimum[5]);
 ans=min(ans,minimum[2]+minimum[3]);
 ans=min({ans,minimum[3]+minimum[4],minimum[3]+minimum[5],minimum[4]+minimum[5]});
 if(ans>=MOD)
 cout<<-1<<endl;
 else
 cout<<ans<<endl;

}
int main() {
    fastio;
 
solve();
    
    return 0;
}