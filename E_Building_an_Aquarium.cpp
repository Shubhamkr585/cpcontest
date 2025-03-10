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
#define INF 10000000000

bool check(vec& a,ll mid,ll x){
    ll size = a.size();
    // ll lb=lower_bound(a.begin(),a.end(),mid)-a.begin();
    ll sum=0;
    for(int i=0;i<size;i++){
     sum+=max(0ll,mid-a[i]);
     if(sum>x)
     return false;
    }
    return true;
}

 void solve() {
ll n,x;
cin >> n >>x;
vec a(n);
for(auto &i:a)
cin>>i;
sort(all(a));
ll low=1,high=INF,ans=1;
while(low<=high){
ll mid=(low+high)/2;

if(check(a,mid,x)){
    ans=mid;
    low=mid+1;
}
else{
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