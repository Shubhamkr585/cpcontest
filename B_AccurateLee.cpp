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
string s,ans="";
cin>>s;
stack<char>st;
int i=0;
while(i<n){
    if(s[i]=='0')
    ans+='0';
    else break;
    i++;
}
for(int j=n-1;j>=i;j--){
    if(s[j]=='1')
    ans+='1';
    else{
        ans='0'+ans;
        break;
    }
}
if(ans=="")
cout<<s<<endl;
else
cout<<ans<<endl;

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