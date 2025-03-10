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
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vec a(n);
    ll maxi = 0;
    REP(i, n) {
        cin >> a[i];
       maxi = max(maxi, a[i]);
    }
    auto possible = [&](ll P) -> bool {
        ll ops = 0, i = 0;
        while (i < n) {
            if (s[i] == 'R' && a[i]> P) {
                i++;
                continue;
            }
            bool need = false;
            while (i < n && !(s[i] == 'R' && a[i] > P)) {
                if (s[i] == 'B' && a[i] > P)
                    need = true;
                i++;
            }
            if (need)
                ops++;
        }
        return ops <= k;
    };
    ll low = 0, high =maxi, ans = high;
    while (low <= high) {
        ll mid = (low + high) / 2;
        if (possible(mid)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    cout << ans << endl;
}

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
