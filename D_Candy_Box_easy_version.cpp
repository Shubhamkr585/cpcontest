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
map mp;
for (int i = 0; i < n; i++) {
    ll x;
    cin >> x;
    mp[x]++;
}
vec order;
for (auto x : mp) {
    order.push_back(x.second);
}
sort(all(order),greater<ll>());

ll ans=order[0],last=order[0];
int size=order.size(),i=1;
while(i<size && last>0){
   if(order[i]==last){
       ans+=order[i]-1;
       last=order[i]-1;
   }
   else if(order[i]>last){
        ans+=last-1;
        last--;
   }
   else{
       ans+=order[i];
       last=order[i];
   }
   i++;
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