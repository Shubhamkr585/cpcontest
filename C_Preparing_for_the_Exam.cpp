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
ll n,m,k;
cin >> n>>m>>k;
vec a(m);
set<ll> st;
for(int i = 0; i <m;i++)
cin>>a[i];
for(int i = 0; i <k;i++)
{
    ll x;
    cin>>x;
    st.insert(x);
}
for(int i=0;i<m;i++){
    if(st.find(a[i])!=st.end())
    {
        if(st.size()>=n)
        cout<<1;
        else
        cout<<0;
    }
    else{
        if((1+st.size())>=n)
        cout<<1;
        else
        cout<<0;
    }
 
}
cout<<endl;

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