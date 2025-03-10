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
#define MOD 1000000007
 void solve() {
ll n,k;
cin >> n>>k;
vec a(n+1);
for(int i=1;i<=n;i++)
cin>>a[i];

sort(a.begin()+1,a.end());

vec pref(n+1,0);
pref[1]=a[1];
for(int i=2;i<=n;i++)
pref[i]=pref[i-1]+a[i];

// apply bs on 1 to n (bs on ans)
ll low=1,high=n,ans=-1,val=MOD;

while(low<=high){
    ll mid=(low+high)/2;
    ll factor=(mid*(mid+1)*mid)/2;
    
    if(factor+pref[mid]<=k){
        ans=mid;
        val=factor+pref[mid];
        low=mid+1;
    }
    else{
        high=mid-1;
    }

}
if(ans==-1){
    cout<<"0 0\n";
    return;
}

cout<<ans<<" "<<val<<endl;


}
int main() {
    fastio;
    solve();
    return 0;
}