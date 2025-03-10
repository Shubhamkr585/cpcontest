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
for(int i=0;i<n;i++)
cin>>a[i];
 sort(all(a));
         ll l = 0, ans = n ;
        for (int r = 2; r < n; r++) {
            while (r - l >= 2 && a[l] + a[l+1] <= a[r]) l++;
            ans = min(ans, n - (r - l + 1));
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