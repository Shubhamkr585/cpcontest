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

vec arr(n);
for (int i = 0; i < n; i++) {
    ll a;
    cin >> a;
arr[i] = a;
 
}
sort(all(arr));
int i=0,j=n-1,ans=0;
while(i<j){
    if(arr[i]+arr[j]==k){
        ans++;
        i++;
        j--;
    }
    else if(arr[i]+arr[j]<k){
        i++;
    }
    else{
        j--;
    }
}
cout << ans << endl;
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