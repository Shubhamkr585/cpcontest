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


ll check(vec &a,ll mid,ll h){
    ll cnt=0,pos=0,n=a.size();
    for(int i=0;i<n;i++){
      
      if(pos>=a[i]){
        cnt+=mid-(pos-a[i]+1);
      }
      else{
        cnt+=mid;
      }
      pos=a[i]+mid-1;
      if(cnt>=h) return cnt;
    }
    return cnt;
}
 void solve() {
ll n,h;
cin >> n >> h;
vec a(n);
for(int i=0;i<n;i++) cin>>a[i];
ll low=1,high=1e18,ans=1;
// bs on answer
while(low<=high){
    ll mid=low+high >>1;
    if(check(a,mid,h)>=h){
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