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
ll n,m;
cin >> n >>m;
vec a(n),b(m);
for(int i=0;i<n;i++)
cin>>a[i];
for(int i=0;i<m;i++)
cin>>b[i];
sort(all(a));
for(int i=0;i<m;i++){
    int lb=upper_bound(all(a),b[i])-a.begin();
    cout<<lb<<" ";
}
cout<<endl;


}
int main() {
    fastio;
   
solve();
    
    return 0;
}