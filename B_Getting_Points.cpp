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
ll n,p,l,t,extra=0;
cin >> n >> p >> l >> t ;
extra= ((n+6)/7);
ll work=0;
work=extra/2;
ll oneday=2*t+l;
if(oneday*work>=p){
    cout<<n-((p+oneday-1)/oneday)<<"\n";
    return ;
}
else{
    p=p-oneday*work;
}

    extra%=2;
    if(extra==1){
        work++;
        p=p-t-l;
        if(p<=0){
            cout<<n-work<<endl;
            return;
        }
    }

ll low=1,high=n-work,ans=0;
while(low<=high){
    ll mid=(low+high)/2;
   ll points=mid*l;
   if(points>=p){
    ans=mid;
    high=mid-1;
   }
   else{
    low=mid+1;
   }
 
}
cout<<n-ans-work<<endl;


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