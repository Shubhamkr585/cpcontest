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
ll n,sum=0;
cin >> n;
vec a(n);
for(int i=0;i<n;i++){
cin>>a[i];
sum+=a[i];
}
if(sum&1){
    cout<<-1<<endl;
    return;
}
vector<pair<ll,ll>>par;
for(ll i=0;i<n-1;i+=2){
if(a[i]==a[i+1])
{
 par.push_back({i+1,i+2});   
}
else{
    par.push_back({i+1,i+1});
    par.push_back({i+2,i+2});
}


}
cout<<par.size()<<endl;
for(auto it:par)
cout<<it.first<<" "<<it.second<<endl;
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