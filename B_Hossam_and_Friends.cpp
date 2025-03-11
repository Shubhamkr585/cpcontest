#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    int n, m;
    cin >> n >> m;
    vector<pair<int,int>> conflicts;
    for (int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        if(x > y) swap(x, y);
        conflicts.push_back({x, y});
    }
    sort(conflicts.begin(), conflicts.end(), [](auto &a, auto &b){
        return a.second < b.second;
    });
    
    long long ans = 0;
    int barrier = 0; 
    int idx = 0;
    int size = conflicts.size();
    for (int r = 1; r <= n; r++){
        while (idx < size && conflicts[idx].second == r) {
            barrier = max(barrier, conflicts[idx].first);
            idx++;
        }
        ans += (r - barrier);
    }
    cout << ans << "\n";
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
