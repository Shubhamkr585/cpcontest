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
set<ll>st1,st2;
for (int i = 0; i < n; i++) {
    ll x;
    cin>>x;
    st1.insert(x);
}
for (int i = 0; i < n; i++) {
    ll x;
    cin>>x;
  st2.insert(x);
}
ll sum=st1.size()+st2.size();
if(sum>3){
    cout<<"YES"<<endl;

}
else{
    cout<<"NO"<<endl;
}

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