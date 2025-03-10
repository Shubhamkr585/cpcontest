#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(),x.end()
#define REP(i, N) for (int i = 0; i < (N); i++)
#define ll long long int
#define endl '\n'
#define vec vector<ll>
#define map map<ll, ll>
#define us unordered_set<ll>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

void solve() {
    ll n, k, x;
    cin >> n >> x >> k;
    string s;
    cin >> s;
    ll cnt = 0;
    ll t = 0; 
    bool rt = false;
    ll pos = x;  
    ll i;
    for (i = 0; i < n && t < k; i++) {
        if (s[i] == 'L')
            pos--;
        else 
            pos++;
        t++; 
        if (pos == 0) {
            cnt++; 
            rt = true;
            break;  
        }
    }
    if (!rt) {  
        cout << cnt << "\n";
        return;
    }
ll rem = k - t, ct = -1;
    pos = 0;  
    for (int j = 0; j < n; j++) {
        if (s[j] == 'L')
            pos--;
        else
            pos++;
        if (pos == 0) {
            ct = j + 1; 
            break;
        }
    }
    if (ct == -1) {
        cout << cnt << "\n";
        return;
    }
    ll cy = rem / ct;
    cnt += cy;
    ll pp = rem % ct;
    pos = 0;  
    for (int j = 0; j < pp; j++) {
        if (s[j] == 'L')
            pos--;
        else
            pos++;
        if (pos == 0) {
            cnt++; 
            break;
        }
    }   
    cout << cnt << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
