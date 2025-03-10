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
n%=m;
if(n==0){
    cout<<0<<endl;
    return;
}


    ll ans=0;
    
    ll pro=n,i=0,ini=n;
    while(i<=29){
        pro*=2;
        if(pro%m==0){
            
            cout<<ans+pro-ini<<endl;
            return;
    }

    if(pro>m){
        ans+=pro-ini;
        pro-=m;
        ini=pro;
    }
    
    i++;
   
}
cout<<-1<<endl;
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