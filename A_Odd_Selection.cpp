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
ll n,x;
cin >> n>>x;
vec even,odd;
for(int i=0;i<n;i++)
{
    ll x;
    cin>>x;
    if(x&1)
    odd.push_back(x);
    else
    even.push_back(x);

}
if(x>n || odd.size()==0 ||   n==odd.size()&& x%2==0){
    cout<<"No\n";
    return;
}

if(x==n){
    if(odd.size()%2==1)
    cout<<"Yes\n";
    else
    cout<<"No\n";
    return;
}
else if(odd.size()>=1)
cout<<"Yes\n";
else cout << "No\n";


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