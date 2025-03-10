#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(),x.end()
#define ll long long int
#define endl '\n'
#define vec vector<ll>
#define map map<ll,ll>
#define us unordered_set<ll>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
 void solve() {
ll n,k;
cin >> n>>k;
vec a(n+1,0);
ll value=1;
for(int i=k;i<=n;i+=k){
    a[i]=value;
    value++;
}
for(int i=1;i<=n;i++){
if(a[i]==0){
    a[i]=value;
    value++;
}
}
for(int i=1;i<=n;i++)
cout<<a[i]<<" ";
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