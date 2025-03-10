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
for(int i=0;i<n;i++)
cin>>a[i];
if(k==n){
    vec b;
    for(int i=1;i<n;i+=2)
    b.push_back(a[i]);
    ll index=1,i=0;
    for(i=0;i<b.size();i++){
        if(b[i]!=i+1){
            cout<<i+1<<endl;
            return;
        }
        index++;
    }
    cout<<i+1<<endl;
    return;
}
ll index=1;
for(int i=1;i<n-k+2;i++){
    if(a[i]!=index){
        cout<<index<<endl;
        return;
    }
    
}
cout<<2<<endl;

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