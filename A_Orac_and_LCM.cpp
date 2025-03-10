#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(),x.end()
#define REP(i,N) for (int i = 0; i <(N); i++)
#define ll long long int
#define endl '\n'
#define vec vector<ll>
#define map map<ll,multiset<ll>>
#define us unordered_set<ll>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
map mp;
ll power(ll x, ll y){
int temp;
if (y == 0)
return 1;
temp = power(x, y / 2);
if (y % 2 == 0)
return temp * temp;
else
return x * temp * temp;
}
void primefactorisation(ll n){
    for(ll i=2;i*i<=n;i++){
        ll cnt=0;
        while(n%i==0){
            n=n/i;
            cnt++;
        }
        if(cnt)
        mp[i].insert(cnt);
    }
    if(n > 1)
    mp[n].insert(1ll);
}
 void solve() {
ll n;
cin >> n;
vec v(n);
for (ll i = 0; i < n; i++) {
    cin >> v[i];
}
for (ll i = 0; i < n; i++) {
    primefactorisation(v[i]);
}
// for(auto it:mp){
//     cout << it.first << " " << it.second.size() << endl;
// }
ll ans=1ll;
for (auto i : mp) {
   
    if (i.second.size() == n){
        //getting the 2nd element of the multiset
        auto pow=(i.second.begin());
        pow++;
        ans*=power(i.first,*pow);
    }
    else if (i.second.size() == n-1) {
       ll pow=*(i.second.begin());
        ans*=power(i.first,pow);
    }
}
cout << ans << endl;
 }
int main() {
    fastio;
solve();
  
    return 0;
}