#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    vector<int> left(m), right(m);
    for (int i = 0, j = 0; i < m; i++) {
        while (s[j] != t[i]) {
            j++;
        }
        left[i] = j;
        j++;
    }
    for (int i = m - 1, j = n - 1; i >= 0; i--) {
        while (s[j] != t[i]) {
            j--;
        }
        right[i] = j;
        j--;
    }
    int lo = 1, hi = n, ans = 1;
    auto can = [&](int width) -> bool {
        for (int i = 0; i < m - 1; i++) {
            if (right[i + 1] - left[i] >= width)
                return true;
        }
        return false;
    };
    
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (can(mid)) {
            ans = mid;  
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }
    
    cout << ans << "\n";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
  
        solve();
    
    return 0;
}
