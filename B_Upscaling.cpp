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
ll n;
cin >> n;
string ans1="",ans2="";
bool flag=true;
string hash="##",dot="..";
for(int i=0; i<n; i++){
  if(flag){
    ans1+=hash;
    ans2+=dot;
  }
  else{
    ans1+=dot;
    ans2+=hash;
  }
  flag=!flag;
}
for(int i=1;i<=n;i++){
    if(i&1)
cout<<ans1<<"\n"<<ans1<<"\n";
else 
    cout<<ans2<<"\n"<<ans2<<"\n";
}
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