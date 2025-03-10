#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(),x.end()
#define REP(i,N) for (int i = 0; i <(N); i++)
#define ll long long int
#define endl '\n'
#define vec vector<ll>
// #define map map<ll,ll>
#define us unordered_set<ll>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
 void solve() {
ll n;
cin >> n;
vector<string>a(n);
map<string,string>mp;
for(int i = 0; i < n; i++){
string s;
cin>>s;
mp[s]=s;
a[i]=s;
}
string ans;
for(int i=0;i<n;i++){
    bool found = false;
    for(int j=0;j<a[i].length()-1;j++){
        string s1=a[i].substr(0,j+1);
        string s2=a[i].substr(j+1);
        // cout<<s1<<" "<<s2<<endl;
        if(mp[s1]+mp[s2]==a[i]){
        ans.push_back('1');
        found=true;
        break;
        }

    }
    if(!found) ans.push_back('0');
}
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