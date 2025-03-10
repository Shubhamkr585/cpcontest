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
ll n,x,zor=0;
cin >> n >>x;
if(n==1){
    cout<<x<<endl;
    return;
}
vec bit(31,0);
//store the set bits of x in vec 
for (int i = 0; i < 31; i++) {
    if(x&(1<<i)){
        bit[i]=1;
    }
}
vec ans;
ans.push_back(0);
ll i=1,rem=n-1;
for ( i = 1; i < n && rem>0; i++) {
   
    vec bit2(31,0);
    for(int j = 0; j < 31; j++){
        if(i&(1<<j)){
            bit2[j]=1;
        }
    }
    bool flag=false;
    for(int j = 0; j < 31; j++){
        if(bit2[j]==1 && bit[j]==0){
            flag=true;
            break;
        }
    }
    if(flag)
    break;
    zor=zor|i;
    ans.push_back(i);
    rem--;
}
// cout<<zor<<endl;
if(zor==x && ans.size()==n){
    for(int j=0;j<ans.size();j++){
        cout<<ans[j]<<" ";
    }
    cout<<endl;
    return;
}
if(ans.size()==n){
ans.pop_back();
rem++;
}
for(ll k=0;k<rem;k++){
    ans.push_back(x);
}


for(int j=0;j<ans.size();j++){
    cout<<ans[j]<<" ";
}
cout<<endl;

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