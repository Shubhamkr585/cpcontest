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
cin >> n >>k;
ll sum=(n*(n-1))/2;
ll low=k,high=n+k-1,ans=high;
ll sumoffset=(low*(low-1))/2;
ll sr=(high*(high+1))/2-sumoffset;

while(low<=high){
ll mid=(low+high)/2;
ll sm=(mid*(mid+1))/2-sumoffset;
// cout<<"high= "<<sr<<" low= "<<sm<<endl;
if(sr-sm>=sm){
    ans=min(sr-2*sm,ans);
    low=mid+1;
}
else{
    ans=min(ans,2*sm-sr);
    high=mid-1;
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