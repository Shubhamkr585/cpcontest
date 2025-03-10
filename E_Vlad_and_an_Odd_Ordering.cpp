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
#define mod 1000000007
 void solve() {
ll n,k;
cin >> n >>k ;
ll oddcnt=(n+1ll)/2ll;
ll times=k/oddcnt+1ll;
if(k<=oddcnt){
    cout<<2*k-1ll<<endl;
    return;
}
k%=oddcnt;
cout<<(2*k-1ll)*times<<endl;
}
int main() {
    ll ans=1,k=343;
    for(int i=1;i<=8;i++){
    ans=((ans%mod)*(k%mod))%mod;
    }
    cout<<ans<<endl;
    return 0;
}