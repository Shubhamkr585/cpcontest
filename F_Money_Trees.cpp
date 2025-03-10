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
cin >> n>>k;
vec a(n),h(n);
for(int i=0;i<n;i++)
cin>>a[i];
for(int i=0;i<n;i++)
cin>>h[i];
ll j=0,sum=0,maxlen=0,prev=h[0];
for(ll i=0;i<n;i++){
    sum+=a[i];
    while(sum>k){
        sum-=a[j];
        j++;
    }
    while( j<n && prev%h[i]!=0 && j<i){
        sum-=a[j];
        j++;
    }
    // cout<<"j & i "<<j<<" "<<i<<"   " ;
    maxlen=max(maxlen,i-j+1);
    // cout<<"maxlength: "<<maxlen<<endl;
    prev=h[i];
}
cout<<maxlen<<endl;
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