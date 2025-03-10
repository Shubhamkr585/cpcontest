#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(),x.end()
#define rep(i,N) for (int i = 0; i <(N); i++)
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
map mp;
rep(i,n){ cin>>a[i];
mp[a[i]]++;
}
ll ans1=0,ans2=0;
for(auto it:mp){
if(it.second==1)
ans1++;
else 
ans2++;
}
cout<<(ans1+1)/2+ans2<<endl;
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