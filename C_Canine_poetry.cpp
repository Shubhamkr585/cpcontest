#include <bits/stdc++.h>

using namespace std;

void solve() {
    string s;
    cin >> s;
    int n = s.size();
    
    vector<bool> used(n, false);
    int ans = 0;

    for (int i = 1; i < n; ++i) {
        bool need_to_use = false;
 
        // Check previous character
        if (s[i] == s[i - 1] && !used[i - 1]) 
            need_to_use = true;

        // Check the character before the previous one
        if (i > 1 && s[i] == s[i - 2] && !used[i - 2]) 
            need_to_use = true;

        used[i] = need_to_use;
        ans += used[i];
    }

    cout << ans << '\n';
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
