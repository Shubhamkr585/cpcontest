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
string s1,s2;
cin >> s1 >> s2;
int pos2=0;
int cnt=1;
for(int i=1;i<n;i++){
if(s1[i]==s2[pos2]){
    if(cnt==1)
    cnt*=2;
    else
    cnt++;
    pos2=i;
}
else if(s1[i]=='0' && s2[pos2]=='1'){
    cnt=1;
    pos2=i;
}
else{
    cout<<(s1.substr(0,i) + s2.substr(pos2))<<endl;
      cout<<cnt<<endl;
      return;
}
}
cout<<(s1.substr(0,n) + s2.substr(pos2))<<endl;
cout<<cnt<<endl;
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