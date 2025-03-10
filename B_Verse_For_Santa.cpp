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
ll n,s;
cin >> n>>s;
vec a(n+1);
for(int i=1;i<=n;i++)
cin>>a[i];
ll maxi=0,ans=0,sum=0;
for(int i=1;i<=n;i++){
sum+=a[i];
if(a[i]>maxi){
    ans=i;
    maxi=a[i];
}
if(sum>s){
    cout<<ans<<endl;
    return;
}
}
cout<<0<<endl;

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