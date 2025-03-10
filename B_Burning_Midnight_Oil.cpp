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
// write the lamda function that takes mid as one of the variable
auto check=[&] (ll mid) -> bool {
ll sum=0;
while(mid>0){
    sum+=mid;
    if(sum>=n)
    return true;
    mid/=k;
}
return false;

};
ll low=1,high=n,ans=high;
while(low<=high){
    ll mid=low+high>>1;
    if(check(mid)){
        ans=mid;high=mid-1;
    }
    else low=mid+1;
}
cout<<ans<<endl;

}
int main() {
    fastio;
    int t = 1;

solve();
    
    return 0;
}