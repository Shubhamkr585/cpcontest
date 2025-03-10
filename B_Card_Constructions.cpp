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
ll n,count=0,ans=0,val=1;
cin >> n;
n*=2;
while(n>2){
    ll low=1,high=1e9,val=0;
    while(n>2 && low<=high){
        ll mid=(low+high)/2;
        if(3*mid*mid+mid<=n){
            val=max(3*mid*mid+mid,val);
            if(count+1>ans){
                ans=count+1;
                
            }
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    count++;
    n-=val;
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