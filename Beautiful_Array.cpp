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
vec a(n),rem(4,0);
REP(i,n) {
    cin >> a[i];
    rem[a[i]%4]++;
}
ll maxi=max(rem[1],rem[3]);
ll mini1=min(rem[1],rem[3]);
rem[1]-=mini1,rem[3]-=mini1;
ll mini2=rem[2]/2ll;
rem[2]=rem[2]%2ll;
rem[0]+=mini1+mini2;
ll ans=mini1+mini2;
if(rem[1]%4==2ll && rem[2]==1ll ){
    ans+=2ll;
    rem[1]-=2ll;
    rem[2]=0;
}
if(rem[3]%4==2ll && rem[2]==1ll ){
    ans+=2;
    rem[3]-=2;
    rem[2]=0;
}
if(rem[2]==1 ){
    cout<<-1<<endl;
    return;
}

if(rem[1]%4!=0 || rem[3]%4!=0){
    cout<<-1<<endl;
    return;
}
ans+=1ll*max(rem[1]/4,rem[3]/4);
cout<<ans<<endl;
}
int main() {
    fastio;
int t=1;
cin>>t;
while(t--){
solve();
}

    return 0;
}