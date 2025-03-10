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
for(int i = 0; i < n; i++)
cin>>a[i];
ll cnt1=0,cnt2=0,cnt3=0;
ll k=0;
for(int i=0; i<n; i++){
    if(a[i]==1)
    k++;
    else
    cnt1+=k;
}
k=0;
bool flag=false;
for(int i=0;i<n;i++){
    if(a[i]==0){
        if(!flag){
            flag=true;
            k++;
        }
        else
        cnt2+=k;
    }
    else
    k++;
}
k=0;
for(int i=n-1;i>=0;i--){
    if(a[i]==1)
    {
        a[i]=0;
        break;
    }
}
for(int i=0;i<n;i++){
    if(a[i]==1)
    k++;
    else
    cnt3+=k;
}
ll ans=max(cnt1,max(cnt2,cnt3));
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
