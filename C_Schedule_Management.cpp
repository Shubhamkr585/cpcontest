#include <bits/stdc++.h>
using namespace std;
#define sort(vec) sort(vec.begin()+1,vec.end())
#define ll long long int
#define endl '\n'
#define vec vector<ll>
#define uo unordered_set<ll>
#define mp map<ll,ll>
#define us unordered_set<ll>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
 void solve() {
ll n,m;
cin >> n>>m;
vec a(n+1);
for(ll i=0;i<m;i++)
{
    ll x;
    cin>>x;
    a[x]++;
}
sort(a);
priority_queue<ll,vector<ll>,greater<ll>>minheap;
priority_queue<ll>maxheap;
for(ll i=1;i<=n;i++){
    minheap.push(a[i]);
    maxheap.push(a[i]);
}
while(maxheap.top()-minheap.top()>2 && maxheap.top()>2){
    ll maxi=maxheap.top();
    ll mini=minheap.top();
    maxheap.pop();
    minheap.pop();
    mini+=2;
    maxi-=1;
    maxheap.push(maxi);
    minheap.push(mini);
}
cout<<max(minheap.top(),maxheap.top())<<endl;

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