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
ll n,k;
cin >> n >>k;
string s;
cin>>s;
ll ans=0;
for(char T:{'a','b'}){
    ll cp=k;
    int j=0,frt=0,i=0;
    while(i<n){
        if(s[i]!=T){
           frt++;
        }
        while(j <= i && frt > k){
            if(s[j] != T)
                frt--;
            j++;
        }
        
        ans=max(ans,i-j+1ll);
        i++;
    }

}
cout<<ans<<endl;

}
int main() {
    fastio;
    int t = 1;
solve();
    
    return 0;
}