#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define REP(i, N) for (int i = 0; i < (N); i++)
#define ll long long int
#define endl '\n'
#define vec vector<ll>
#define us unordered_set<ll>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

void solve() {
    ll n;
    cin >> n;
    vec a(n);
    vec b(n);
    
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    
    ll sum = 0;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > b[i + 1])
            sum += (a[i] - b[i + 1]);
    }
    sum += a[n - 1];
    
    cout << sum << endl; 
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