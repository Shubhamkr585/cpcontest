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
string s;
cin>>s;
ll dash=0,ud=0;
for(int i=0;i<n;i++){
    if(s[i]=='-') dash++;
    else ud++;
}
if(dash%2==1)
cout<<((dash/2)*(dash+1)/2)*ud<<endl;
else
cout<<((dash/2)*(dash/2)*ud)<<endl;
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