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
ll power(ll x){
ll ans=0;
ll p=1;
while(x>=4)
{
    p*=2;  
    x/=4;
       
}
ans+=p;   
return ans;
}
 void solve() {
ll n;
cin >> n;
if(n<=3){
    cout << 1 << endl;
    return;
}
cout << power(n)<< endl;
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