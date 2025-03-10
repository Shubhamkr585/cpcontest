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
set<ll>st;
st.insert(1);
st.insert(0);
st.insert(n);
for(int i=2;i*i<=n;i++){
    st.insert(n/i);
    st.insert(i);
}
cout<<(int)st.size()<<endl;
for(auto i:st){
    cout<<i<<" ";
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