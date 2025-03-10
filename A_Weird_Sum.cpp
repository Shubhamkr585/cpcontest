#include <bits/stdc++.h>
using namespace std;
#define sort(vec) sort(vec.begin(),vec.end())
#define ll long long int
#define endl '\n'
#define vec vector<ll>
// #define uo unordered_set<ll>
#define mp map<ll,ll>
#define us unordered_set<ll>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
 void solve() {
ll n,m;
cin>>n>>m;

vector<vector<ll>>ans(100001);
for(ll i=1;i<=n;i++){
    for(ll j=1;j<=m;j++){
        ll x;
        cin>>x;
        ans[x].push_back(i+j);
    }
}
for(ll i=1;i<=100000;i++){
    if(ans[i].size()>1)
    sort(ans[i]);
}
for(ll i=1;i<=3;i++){
    for(auto it :ans[i])
    cout<<it<<" ";
    cout<<endl;
}
ll sum=0;
for(ll i=1;i<=100000;i++){
    if(ans[i].size()>1){
        ll currsum=0,size=ans[i].size();
        for(ll j=1;j<size;j++)
        currsum+=ans[i][j]-ans[i][0];
        sum+=currsum;
        ll diff=0;
        size--;
        for(ll j=1;j<ans[i].size()-1;j++){
            diff=ans[i][j]-ans[i][j-1];
            currsum=currsum-diff*size;
            sum+=currsum;
            size--;
        }
    }
}
cout<<sum<<endl;

}
int main() {
    fastio;
    solve();
    return 0;
}