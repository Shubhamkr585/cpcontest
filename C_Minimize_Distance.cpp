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
ll calculate(vec &a,ll k){
    //calculate
    ll size = a.size();
    if(k>=size) return 2*a[size-1];
    ll rem=size%k;
    ll ans=0;
    if(rem>0){
        ans+=2*a[rem-1];
    }
    for(ll i=rem;i<a.size();i+=k){
        if (i + k - 1 < size) {
            ans += 2 * a[i + k - 1];
        }
    }
    return ans;

}
 void solve() {
ll n,k;
cin >> n>>k;
vec neg,pos;
ll max_bags=0,curr_dis=0;
for(int i=0; i<n; i++){
    ll x;
    cin >> x;
    if(x<0)
    neg.push_back(abs(x));
    else if(x>0)
    pos.push_back(x);
}
sort(all(pos));
sort(all(neg));
//if only negative
if(pos.size()==0 && neg.size()==0)
cout<<0<<endl;
else if(pos.size()==0){
    cout<<calculate(neg,k)-neg[neg.size()-1]<<endl;
}
else if(neg.size()==0){
    cout<<calculate(pos,k)-pos[pos.size()-1]<<endl;
}
else{
    ll positive=calculate(pos,k);
    ll negative=calculate(neg,k);
    ll maxi=max(pos[pos.size()-1],neg[neg.size()-1]);
    cout<<positive+negative-maxi<<endl;
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