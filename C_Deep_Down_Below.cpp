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
vector<pair<ll,ll>>x(n);//{maxi,size}
ll i=0ll;
while(i<n){
    ll temp;
    cin>>temp;
    ll size=temp;
    ll maxi=0,pos=0;
    while(temp>0){
        ll val;
        cin>>val;

     maxi=max(maxi,val-pos);
     pos++;
     temp--;
    }
    x[i]={maxi,size};
    i++;
}
sort(all(x));

ll ans=0,sum=0;
for(int i=0;i<n;i++)
{
ans=max(ans,x[i].first-sum);
    sum+=x[i].second;

}
cout<<ans+1<<endl;
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