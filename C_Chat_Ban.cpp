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
ll k,x;
cin >> k>>x;
ll size=k*k;
if(size<=x) {
    cout<<2*k-1<<endl;
    return;
}
ll ans1=0,ans2=0,val1=0;
ll low=1,high=k;
while(low<=high){
ll mid=(low+high)/2;
val1=(mid*(mid+1))/2;
if(val1<=x){
    ans1=mid;
    low=mid+1;
}
else high=mid-1;
}
x-=(ans1*(ans1+1))/2;
high=k-1,low=1;
val1=(high*(high+1))/2;
while(x>0 && low<=high){
  ll mid=(low+high)/2;
  ll val2=((mid-1)*mid)/2;
  if(val1-val2>=x){
    ans2=k-mid;
    low=mid+1;
  }
  else
  high=mid-1;
}
cout<<ans1+ans2<<endl;
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