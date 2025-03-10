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
for(ll i=0;i<n;i++)
    cin >> a[i];
  vec turns(n,0);
for(int i=0;i<n;i++){
if(a[i]-i<=0){
    cout<<i+1<<endl;
    return;
}
turns[i]=(a[i]+n-1-i)/n;
}
int index=0,mini=turns[0];
for(int i=0;i<n;i++){

    if(turns[i]<mini){
        mini=turns[i];
        index=i;
    }
}

cout<<index+1<<endl;
}
int main() {
    fastio;

solve();
    
    return 0;
}