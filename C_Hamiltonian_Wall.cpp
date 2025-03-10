#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

bool canPaintWall(int m, string row1, string row2) {
    vector<vector<int>> dp(m + 1, vector<int>(4, INF));
    
    // Initial state
    dp[0][0] = 0;
    
    for (int j = 0; j < m; ++j) {
        int currentMask = (row1[j] == 'B' ? 1 : 0) | (row2[j] == 'B' ? 2 : 0);
        
        for (int prevMask = 0; prevMask < 4; ++prevMask) {
            if (dp[j][prevMask] == INF) continue;
            
            // Try filling the current column in different valid ways
            for (int newMask = 0; newMask < 4; ++newMask) {
                if ((newMask | currentMask) != newMask) continue; // Must cover all 'B's
                if ((prevMask & newMask) == 0) continue; // Must be connected
                
                dp[j + 1][newMask] = min(dp[j + 1][newMask], dp[j][prevMask] + 1);
            }
        }
    }
    
    return dp[m][1] != INF || dp[m][2] != INF || dp[m][3] != INF;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        int m;
        cin >> m;
        string row1, row2;
        cin >> row1 >> row2;
        
        cout << (canPaintWall(m, row1, row2) ? "YES" : "NO") << "\n";
    }
    
    return 0;
}
