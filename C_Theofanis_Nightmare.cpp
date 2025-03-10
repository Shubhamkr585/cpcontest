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
    int n;
    cin>>n;
    int arr[n];
    long long suf[n+1] = {0};
    for(int i = 0;i < n;i++){
        cin>>arr[i];
    }
    for(int i = n-1;i >= 0;i--){
        suf[i] = suf[i+1] + arr[i];
    }
    long long ans = suf[0];
    for(int i = 1;i < n;i++){
        if(suf[i] > 0){
            ans += suf[i];
        }
    }
    cout<<ans<<"\n";
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