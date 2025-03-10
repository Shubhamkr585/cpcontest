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
vec a(n);
ll maxi=INT_MIN,mini=INT_MAX,pos1=0,pos2=0;

for(ll i=0;i<n;i++){
 cin>>a[i];
}
  for(ll i=0;i<n-1;i++){
    if(abs(a[i]-a[i+1])>=2){
        cout<<"YES"<<endl;
    cout<<i+1<<" "<<i+2<<endl;
    return;
    }
}
cout<<"NO"<<endl;
  
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