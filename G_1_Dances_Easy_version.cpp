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
ll n,m;
cin >> n>>m;
vec a(n),b(n);
a[0]=1;
for(int i=1;i<n;i++)
cin>>a[i];
for(int i=0;i<n;i++)
cin>>b[i];
sort(all(a));
sort(all(b));
int j=0,i=0,cnt=0;
while(j<n){
    if(a[i]<b[j]){
       i++; 
       cnt++;
    }
    j++;
}
cout<<n-i<<endl;

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