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
ll n,d,mx=0;
cin >> n >>d;
vector<pair<ll,ll>>a(n);
for(int i = 0; i < n; i++) {
    cin >> a[i].first >> a[i].second;
    mx=max(mx,a[i].second);
}
ll sum=0;
sort(a.begin(),a.end());
int i=0,j=0;
while(i<n){
    sum+=a[i].second;
    while(j<i && a[i].first-a[j].first>=d){
        sum-=a[j].second;
        j++;
    }
    mx=max(mx,sum);
    i++;
}
cout<<mx<<endl;
}
int main() {
    fastio;
    
solve();
    return 0;
}