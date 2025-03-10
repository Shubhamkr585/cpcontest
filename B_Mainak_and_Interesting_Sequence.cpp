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
cin >> n>>m;
if(n==1){
    cout<<"Yes"<<endl;
    cout<<m<<endl;
    return;
}
if(n>m){
    cout<<"No"<<endl;
    return;
}
if(n%2==0){
    ll lastele=(m-n+2);
    if(lastele%2==1){
        cout<<"No"<<endl;
        return;
    }
cout<<"Yes"<<endl;
    
    for(int i=1;i<=n-2;i++){
    cout<<1<<" ";
}
lastele/=2;
cout<<lastele<<" "<<lastele<<endl;
return;
}
else{
cout<<"Yes"<<endl;
for(int i=1;i<=n-1;i++){
    cout<<1<<" ";
}
cout<<m-n+1<<endl;
}

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