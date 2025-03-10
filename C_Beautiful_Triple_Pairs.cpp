#include <iostream>
#include <vector>
#include <map>
#include <tuple>

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    map<tuple<int, int, int>, int> mp;
    map<tuple<int, int>, int> cnt;

    for (int i = 0; i < n - 2; i++) {
        mp[{a[i], a[i + 1], a[i + 2]}]++;
    }

    for (auto it : mp) {
        auto ele = it.first;
        auto freq = it.second;
        cnt[{get<0>(ele), get<1>(ele)}] += freq;
        cnt[{get<1>(ele), get<2>(ele)}] += freq;
        cnt[{get<0>(ele), get<2>(ele)}] += freq;
    }

    int ans = 0;
    for (auto it : mp) {
        auto ele = it.first;
        auto freq = it.second;
        if (cnt[{get<0>(ele), get<1>(ele)}] > 1) {
            ans += (cnt[{get<0>(ele), get<1>(ele)}] - 1) ;
        }
        if (cnt[{get<1>(ele), get<2>(ele)}] > 1) {
            ans += (cnt[{get<1>(ele), get<2>(ele)}] - 1) ;
        }
        if (cnt[{get<0>(ele), get<2>(ele)}] > 1) {
            ans += (cnt[{get<0>(ele), get<2>(ele)}] - 1) ;
        }
    }

    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}