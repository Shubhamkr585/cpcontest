#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(),x.end()
#define REP(i,N) for (int i = 0; i <(N); i++)
#define ll long long int
#define endl '\n'
#define vec vector<ll>
#define us unordered_set<ll>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
 void solve() {
ll n,q;
cin >> n >>q;
map<ll,pair<ll,ll>>mp;
vec a(n);
for(int i=0;i<n;i++)
cin>>a[i];


//iterating for each index
for(int i=0;i<n;i++){
    if(mp.find(a[i])!=mp.end()){
        mp[a[i]].second=i;
    }
    else{
        mp[a[i]]={i,i};
    }
}
while(q--){
    ll x,y;
    cin>>x>>y;
    if(mp.find(x)!=mp.end() && mp.find(y)!=mp.end()){
        if(mp[x].first<=mp[y].second){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else{
        cout<<"NO"<<endl;
    }
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