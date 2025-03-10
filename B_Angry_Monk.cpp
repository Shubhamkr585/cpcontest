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
ll n,k,sum=0,mx=0;
cin >> n>>k;
vec v(k);
for (int i = 0; i < k; i++)
{
    cin >> v[i];
    sum+=2*v[i]-1;
    mx=max(mx,v[i]);
}
sum-=(2*mx-1);
cout<<sum<<endl;

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