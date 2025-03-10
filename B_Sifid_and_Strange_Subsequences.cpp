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
ll cnt=0,zero=0;
bool flag=false;
for(int i=0;i<n;i++) {
    ll x;
    cin>>x;
    if(x<0) cnt++;
    if(x==0) zero=1;
    else flag=true;
}
if(flag) cnt++;
cnt+=zero;
cout<<cnt<<endl;
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