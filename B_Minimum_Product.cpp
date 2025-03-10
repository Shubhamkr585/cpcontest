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
ll a,b,c,d,n,cp;
cin>>a>>b>>c>>d>>n;
cp=n;
vector<pair<ll,ll>>v={{c,a},{d,b}};
vector<pair<ll,ll>>v1={{a,c},{b,d}};
sort(v.begin(),v.end());
ll diff1=(v[0].second-v[0].first);
if(n>=diff1){
    a=v[0].first;
    n-=diff1;
}
else{
    a=v[0].second-n;
    n=0;
}
ll diff2=(v[1].second-v[1].first);
if(n>=diff2){
    b=v[1].first;
    n-=diff2;
}
else{
    b=v[1].second-n;
    n=0;
}
ll x,y;
sort(v1.begin(),v1.end());
ll diff3=(v1[0].first-v1[0].second);
if(cp>=diff3){
    x=v1[0].second;
    cp-=diff3;
}    
else{
    x=v1[0].first-cp;
    cp=0;
}
ll diff4=(v1[1].first-v1[1].second);
if(cp>=diff4){
    y=v1[1].second;
    cp-=diff4;
}
else{
    y=v1[1].first-cp;
    cp=0;
}
cout<<min(x*y,a*b)<<endl;

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