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
ll single=0,needed=0,ans=0;
for (int i=0; i<n; i++)
cin>>a[i];
for(int i=0; i<n; i++){
    if(a[i]==1){
        single++;
    }
    else{
        needed+=single;
        single=0;
    }
    ans=max(ans,single+(needed?needed/2+1:0));
    
   
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