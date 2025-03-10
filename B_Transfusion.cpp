#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(),x.end()
#define ll long long int
#define endl '\n'
#define vec vector<ll>
#define mp map<ll,ll>
#define us unordered_set<ll>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
 void solve() {
ll n;
cin >> n;
vec a(n);
ll sum=0;
for(int i=0;i<n;i++){
cin>>a[i];
sum+=a[i];
}
if(sum%n!=0){
    cout<<"NO"<<endl;
    return;
}

ll avg=sum/n,total=0;
// cout<<avg<<endl;
for(int i=1;i<n-1;i++){
  ll req=avg-a[i-1];
  a[i-1]=avg;
  a[i+1]=a[i+1]-req;
}
bool ok=true;
for(int i=0;i<n;i++){
    if(a[i]!=avg){
        cout<<"NO"<<endl;
        return;
    }
}
    cout<<"YES"<<endl;
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