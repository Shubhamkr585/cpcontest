#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(),x.end()
#define REP(i,N) for (int i = 0; i <(N); i++)
#define ll long long int
#define endl '\n'
#define vec vector<ll>
#define map map<ll,ll>
#define us unordered_set<ll>
#define INF 1000000000
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
bool possible(vector<pair<ll,ll>>&p,ll mid){
    ll n=p.size();
    ll minpos=0,maxpos=0;
   ll l=0, rr =  0;
        for (auto it:p){
            l = max(l - mid, it.first);
            rr = min(rr + mid, it.second);
            if (l > rr)
                return false;
        }
        return true;
}
 void solve() {
ll n;
cin >> n;
vector<pair<ll,ll>>a;
for(int i=0;i<n;i++){
    ll x,y;
    cin>>x>>y;
    a.push_back({x,y});
}
ll low=0,high=INF,ans=high;
while(low<=high){
    ll mid=(low+high)/2;

    if(possible(a,mid)){
        ans=mid;
        high=mid-1;
    }
    else{
       low=mid+1;
    }
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