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
#define inf 10000000000
bool sqrt(ll n){
    ll low=1,high=inf;
    ll ans=0;
    while(low<=high){
        ll mid=(low+high)/2;
        if(mid*mid==n)
            {
                ans=mid;
                break;
            }
        else if(mid*mid<n)
            low=mid+1;
        else high=mid-1;
    }
    return ans!=0;
}
 void solve() {
ll n;
cin >> n;
ll cp=n;
if(n%2==0 && sqrt(n/2))
cout<<"YES"<<endl;
else if(n%4==0 && sqrt(n/4))
cout<<"YES"<<endl;
else cout<<"NO"<<endl;

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