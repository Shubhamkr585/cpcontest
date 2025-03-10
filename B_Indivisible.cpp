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
if(n==1){
    cout<<1<<endl;
    return;
}
if(n%2==1){
    cout<<-1<<endl;
    return;
}
vec a(n+1);
for(int i=1;i<=n;i+=1)
a[i]=i;
for(int i=2;i<=n;i+=2)
cout<<a[i]<<" "<<a[i-1]<<" ";
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