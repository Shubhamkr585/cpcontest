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
ll n,p,cost;
cin >> n>>p;

vector<pair<ll,ll>> a(n);

for (int i = 0; i < n; i++) {
    cin>>a[i].first;
}
for(int i=0;i<n;i++)
cin>>a[i].second;

sort(a.begin(),a.end(),[&](auto & a,auto & b){return a.second<b.second;});

ll rem=n-1,i=0;//aur n-1 tk khabar bhejna h
cost=p;
while(i<n && a[i].second<=p){
    if(a[i].first<rem){
        cost+=a[i].first*a[i].second;
        rem-=a[i].first;
    }
    else{
        cost+=rem*a[i].second;
        cout<<cost<<endl;
        return;
    }
    i++;
}
cost+=rem*p;
cout<<cost<<endl;



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