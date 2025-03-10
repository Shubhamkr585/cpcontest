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
ll n,k;
cin >> n >> k;
vec a(n);
set<ll>st;
for(int i=0;i<n;i++){
    cin>>a[i];
    st.insert(a[i]);
}
if(st.size()>k){
    cout << -1 << endl;
    return;
}
cout<<n*k<<endl;
for(int i=0;i<n;i++){
    for(auto it:st)
    cout<<it<<" ";
    for(int j=0;j<k-(int)st.size();j++)
    cout<<n<<" ";
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