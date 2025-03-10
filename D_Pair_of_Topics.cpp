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
vec c(n);
for (int i = 0; i < n; i++) {
    cin >> c[i];
}
for(int i=0;i<n;i++){
   ll x;
   cin>>x;
   c[i]-=x;
}
sort(all(c));

ll ans=0;
for(int i=0;i<n;i++){
    ll ub=upper_bound(c.begin()+i+1,c.end(),-c[i])-(c.begin());
    ans+=n-ub;
}
cout<<ans<<endl;
 }
int main() {
    fastio;
    
solve();
    
    return 0;
}
#include<bits/stdc++.h>
#define vec vector<ll>
#define ll long long int
using namespace std;
#define all(vec) vec.begin(),vec.end()
int main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t=1;
cin>>t;
while(t--){
ll n;
cin>>n;

}
return 0;
}