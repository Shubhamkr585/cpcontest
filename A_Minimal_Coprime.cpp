//#pragma GCC optimize("Ofast, unroll-loops")

#include <iostream>
#include <vector>
#include <set>
#include <iomanip>
#include <queue>
#include <cmath>
#include <algorithm>
#include <map>
#include <stack>
#include <cassert>
#include <unordered_map>
#include <bitset>
#include <random>
#include <unordered_set>
#include <chrono>

using namespace std;

# define int long long
# define m2(v) (v << 1)
# define all(a) a.begin(), a.end()
# define rall(a) a.rbegin(), a.rend()
# define sz(a) (int) a.size()

using ld = long double;
using ll = long long;
using ull = unsigned long long;
using str = string;
using pi = pair<int, int>;

const int INF = 1e18;
const ld PI = 3.1415926535897932384626433832795;
const int MOD = 998244353;
const ld eps = 1e-12;

mt19937 rnd(chrono::steady_clock::now().time_since_epoch().count());

template<typename T>
bool chmin(T &a, const T &b) {
    if (b < a) {
        a = b;
        return true;
    }
    return false;
}

template<typename T>
bool chmax(T &a, const T &b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

int cnt = 0;
vector<vector<int>> g;
vector<bool> used;

void solve() {
    int n;
    cin >> n;
    g.assign(n, {});
    used.assign(n, false);

    multiset<int> ms;
    vector<int> deg(n);
    cnt = 0;

    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        g[u].push_back(v);
        g[v].push_back(u);
        deg[u]++;
        deg[v]++;
    }

    for (int i = 0; i < n; i++) {
        ms.insert(deg[i]);
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        ms.extract(deg[i]);
        for (auto u : g[i]) {
            ms.extract(deg[u]);
        }
        if (!ms.empty()) {
            chmax(ans, deg[i] + *ms.rbegin() - 1);
        }
        ms.insert(deg[i]);
        for (auto u : g[i]) {
            ms.insert(deg[u]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (auto u : g[i]) {
            chmax(ans, deg[i] + deg[u] - 2);
        }
    }

    cout << ans << '\n';
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout << fixed << setprecision(16);

#ifdef LOCAL
    freopen("a.in", "r", stdin);
#endif

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}