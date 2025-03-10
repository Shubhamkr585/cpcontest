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
pair<ll,ll> sum(ll n){
    ll sm=10,big=-1;
    while(n){
        ll rem=n%10;
        sm=min(sm,rem);
        big=max(big,rem);
        n/=10;
    }
    return {sm,big};
}
 void solve() {
ll n,k;
cin >> n >>k;
ll i=1;
while(true){
if(i==k){
    cout<<n<<endl;
    return;
}
pair<ll,ll> p=sum(n);
if(p.first==0){
    cout<<n<<endl;
    return;
}   
else n+=p.first*p.second;
i++;


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