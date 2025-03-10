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
bool check(ll n){
    while(n>0){
        ll d=n%10;
        if(d==7)
        return true;
        n/=10;
}
return false;
}
 void solve() {
ll n;
cin >> n;
ll reset=n,mini=9;
if(check(n)){cout<<0<<endl;return;} 
vec possiblity={9,99,999,9999,99999,999999,9999999,99999999,999999999};
for(int i=0;i<possiblity.size();i++){
    ll ele=possiblity[i];
    for(int j=0;j<possiblity.size();j++){
        n+=ele;
        if(check(n)){
            mini=min(mini,j+1);
        }
    }
    n=reset;
}

cout<<mini<<endl;

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