#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(),x.end()
#define REP(i,N) for (int i = 0; i <(N); i++)
#define ll long long int
#define endl '\n'
#define vec vector<ll>
// #define map map<ll,ll>
#define us unordered_set<ll>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
 void solve() {
ll n;
cin >> n;
vec a(n);
for(int i = 0; i < n; i++) 
cin>>a[i];
map<ll,vector<ll>> m;
for(int i = 0; i < n; i++){
    m[a[i]-i].push_back(i);
}
ll maxi=0,sum=0;
for(auto it:m){
    sum=0;
    for(int i=0;i<(int)it.second.size();i++)
    sum+=a[it.second[i]];
    maxi=max(maxi,sum);
}
cout<<maxi<<endl;

}
int main() {
    fastio;
 
solve();

    return 0;
}