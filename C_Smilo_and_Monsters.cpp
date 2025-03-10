#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(),x.end()
#define ll long long int
#define endl '\n'
#define vec vector<ll>
#define map map<ll,ll>
#define us unordered_set<ll>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
 void solve() {
ll n;
cin >> n;
vec a(n);
for(auto &i : a) {
    cin >> i;
}

sort(all(a));
ll ans = 0,count=0;
ll low=0,high=n-1;
while(low<high){
    if(a[high]<=a[low]+count){
        a[low]-=a[high]-count;
        
        ans+=a[high]-count+1;
        count=0;
        high--;
    }
    else{
        ans+=a[low];
        count+=a[low];
        low++;
    }
}
if(a[low]<=2){
    cout<<ans+a[low]<<endl;
    return;
}
ll temp=(a[low]-count+1)/2+1;
cout << ans +temp  << endl;

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