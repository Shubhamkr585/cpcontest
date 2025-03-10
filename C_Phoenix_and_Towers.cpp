#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(),x.end()
#define REP(i,N) for (int i = 0; i <(N); i++)
#define ll long long int
#define endl '\n'
#define vec vector<ll>
// #define map map<ll,ll>
#define us unordered_set<ll>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
 void solve() {
ll n,m,x;
cin >> n>>m>>x;
set<pair<ll,ll>>st;
vec a(n);
for(int i = 0; i < n; i++)
cin>>a[i];
for(int i=1;i<=m;i++){
st.insert({0,i});
}
cout<<"YES\n";
for(int i=0;i<n;i++){
    auto ele=*(st.begin());
    st.erase(ele);
    cout<<ele.second<<" ";
    st.insert({a[i]+ele.first,ele.second});
}
cout<<"\n";

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