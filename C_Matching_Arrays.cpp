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
ll n,x;
cin >> n>>x;
vector<pair<ll,int>>a(n),b(n);
for(int i=0;i<n;i++){
ll x;cin>>x;
    a[i]={x,i};
}
for(int i=0;i<n;i++)
{
    ll x;cin>>x;
    b[i]={x,i};
}

sort(all(a));
sort(all(b));
ll mini=0,maxi=0,val=0;
//calculating the maximum that we can achieve 
int j=0;
for(int i=0;i<n;i++){
    if(a[i].first>b[j].first)
    {
        maxi++,j++;
    }
}
j=0;
for(int i=0;i<n;i++){
if(b[i].first>=a[j].first)
{
    val++,j++;
}
}
mini=n-val;
if(x>=mini && x<=maxi){
cout<<"YES"<<endl;
vec per(n,-1);
int j=0;
for(int i=0;i<n && x>0;i++){
if(a[n-1-i].first>b[j].first){
    per[a[n-1-i].second]=b[j].first;
    j++;
    x--;
}
}
int i=0;
while(i<n && j<n){
    if(per[i]==-1){
        per[i]=b[j].first;
        j++;
    }
    i++;
}
for(auto it:per)
cout<<it<<" ";
cout<<endl;
}
else
cout<<"NO"<<endl;
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