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
cin >> n >>k;
vec a(n);
set<ll>st;
for(int i=0;i<n;i++){
    cin>>a[i];
    st.insert(a[i]);
}
ll ans=1e9;
while(!st.empty()){

    ll x=*st.begin();
    st.erase(st.begin());
    ll cnt=0,i=0;
    while(i<n){
        if(a[i]==x){
            i++;

    }
    else{
        cnt++;
        i+=k;
    }
    }
    ans=min(ans,cnt);
}
cout<<ans<<endl;
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