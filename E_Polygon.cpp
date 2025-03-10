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
ll n;
cin >> n;
vector<vector<int>>a(n,vector<int>(n));
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        char ch;
        cin>>ch;
        a[i][j]=ch-'0';

    }
}
 bool ans = true;
    for (int i = n - 2; i >= 0; --i) {
      for (int j = n - 2; j >= 0; --j) {
        if (a[i][j] && !a[i + 1][j] && !a[i][j + 1]) {
          ans = false;
        }
      }
    }

    cout << (ans ? "YES" : "NO") << endl;
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