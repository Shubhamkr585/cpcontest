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
bool allzero=true,allone=true;
for(int i=1;i<=n;i++){
cin>>a[i];
if(a[i]==0)
allzero=false;
else
allone=false;
}
if(allzero && !allone){
     cout<<n+1<<" ";
    for(int i=1;i<=n;i++)
    cout<<i<<" ";
    cout<<"\n";
    return;
   
}
if(allone){
    for(int i=1;i<=n;i++)
    cout<<i<<" ";
    cout<<n+1<<endl;
    return;
}
ll lastzero;
for(int i=1;i<=n;i++){
if(a[i]==0)
    lastzero=i;
}
for(int i=1;i<=n;i++){
    cout<<i<<" ";
    if(i==lastzero)
    cout<<n+1<<" ";
}
cout<<"\n";
}
int main() {
//     fastio;
//     int t = 1;
//     cin >> t;
//     while (t--) {
// solve();
    // }
    vec a={2,4,5,7,8,9};
    int ub=upper_bound(a.begin(),a.end(),5)-a.begin();
    cout<<ub;
    return 0;
}