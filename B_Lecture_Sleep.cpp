#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(),x.end()
#define REP(i,n) for (int i = 0; i <(n); i++)
#define ll long long int
#define endl '\n'
#define vec vector<ll>
#define map map<ll,ll>
#define us unordered_set<ll>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
 void solve() {
ll n,k,sum=0;
cin >> n>>k;
vec a(n),b(n);
REP(i,n){
    cin>>a[i];
}
REP(i,n){
    cin>>b[i];
}
ll maxSum=0,j=0,i=0,s=0;
while(i<n){
    if(b[i])
    sum+=a[i];
    else
    s+=a[i];
    while(i-j>=k){
     if(!b[j])
     s-=a[j];
     j++;
    }
    maxSum=max(maxSum,s);
    i++;
}
sum+=maxSum;
cout<<sum<<endl;
}
int main() {
    fastio;
    int t = 1;
    // cin >> t;
    // while (t--) {
solve();
    // }
    return 0;
}