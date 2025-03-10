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
vec a(n);
set<ll>st,st2;
for(int i = 0; i <n;i++){
cin>>a[i];
st.insert(a[i]);
}

for(int i = 1; i <1024;i++){
for(int j=0;j<n;j++){
st2.insert(a[j]^i);
}
if(st2 ==st){
    cout<<i<<endl;
    return;
}

st2.clear();
}
cout<<-1<<endl;

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