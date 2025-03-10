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
void print(vec & a){
    for(auto &i : a) {
        cout<<i<<" ";
    }
    cout<<endl;
}
 void solve() {
ll n;
cin >> n;
vec a(n), b(n), mini(n),maxi(n);

for(auto &i : a) {
    cin >> i;
}

for(int i = 0; i < n; i++) {
   cin>>b[i];
}
ll j=0;

for(int i = 0; i < n && j<n; ) {
    if(b[j]>=a[i]){
    mini[i]=b[j]-a[i];
   i++;
    }
    else{
        mini[i]=0;
    j++;
    }
}
 j=n-1;
for(int i=n-1;i>=0;i--){
maxi[i]=b[i]-mini[i];
}
print(mini);
print(maxi);
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