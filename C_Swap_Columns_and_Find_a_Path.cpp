#include <bits/stdc++.h>
using namespace std;
#define all(vec) (vec.begin(),vec.end())
#define ll long long int
#define endl '\n'
#define vec vector<ll>
#define uo unordered_set<ll>
#define mp map<ll,ll>
#define us unordered_set<ll>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
 void solve() {
ll n;
cin >> n;
vector<pair<ll,ll>>p(n);
for(int i=0;i<n;i++)
cin>>p[i].first;
for(int i=0;i<n;i++)
cin>>p[i].second;
ll maxi=-1e9,ans=0;
for(int i=0;i<n;i++){
if(p[i].first>p[i].second){
ans+=p[i].first;
maxi=max(maxi,p[i].second);
}
else{
ans+=p[i].second;
maxi=max(maxi,p[i].first);
}
}
cout<<ans+maxi<<endl;
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