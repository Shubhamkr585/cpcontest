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
ll n;
cin >> n;
vec a(n+1);
for(int i=1;i<=n;i++)
cin>>a[i];
ll ans=*max_element(a.begin()+1,a.end());
cout<<ans<<endl;

}
int main() {
    fastio;

solve();
    
    return 0;
}