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
ll n,q;
cin >> n >>q;
vec colors(51,0);
for(int i=1;i<=n;i++){
    ll x;
    cin >> x;
    if(!colors[x]){
        colors[x]=i;
    }
}
while(q--){
    ll x;
    cin >> x;
    cout << colors[x] << " ";
    
    for(int i=1;i<=50;i++){
        if( i!=x &&colors[i]<=colors[x]){
            colors[i]++;
        }
    }
    colors[x]=1;
}
cout<<endl;

}
int main() {
    fastio;

solve();
    
    return 0;
}