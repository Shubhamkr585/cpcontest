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
ll n,k;
cin >> n >> k;
vec a(n);
REP(i,n) cin >> a[i];
sort(a.begin(),a.end(),greater<ll>());
map mp;

for(int i = 0; i < n; i++){
    if(mp.find(a[i]*k) == mp.end())
        mp[a[i]] = 1;
}

cout << mp.size() << endl;

}
int main() {
    fastio;

solve();
   
    return 0;
}