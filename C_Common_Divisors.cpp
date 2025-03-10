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
ll gcd(ll a,ll b){
    if(b==0)
    return a;
    return gcd(b,a%b);
}
 void solve() {
ll n;
cin >> n;
ll GCD = 0,ans=0;
vec a(n);
for (int i = 0; i < n; i++) {
    cin >> a[i];
}
for (int i = 0; i < n; i++) 
    GCD=gcd(a[i],GCD);
for(ll i = 1; i*i <= GCD; i++)
{
    if(GCD%i==0){
        if(GCD/i!=i)
        ans+=2;
        else
        ans++;
    }
}
cout << ans << endl;
}
int main() {
    fastio;
    
solve();
    
    return 0;
}