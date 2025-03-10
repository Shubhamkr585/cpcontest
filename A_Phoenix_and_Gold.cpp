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
ll n,w;
cin >> n>>w;
vec a(n);
ll sum=0;
for(int i = 0; i < n; i++)
{
cin>>a[i];
sum+=a[i];
}
if(sum==w){
    cout<<"NO\n";
    return;
}
sum=0;
cout<<"YES\n";
for(int i=0;i<n;i++){
sum+=a[i];
if(sum==w){
    cout<<a[i+1]<<" "<<a[i]<<" ";
    i++;
}
else
cout<<a[i]<<" ";

}
cout<<"\n";
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