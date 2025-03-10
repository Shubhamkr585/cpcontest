#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
typedef long long ll;

// Global variables for simplicity.
int n; 
// For each vertex, store (neighbor, edge_order)
vector<vector<pair<int,int>>> adj;
// dp[u] = minimum reading in which vertex u is drawn.
vector<int> dp;

// DFS: u is the current vertex, parent is its parent in the tree,
// lastEdge is the order index of the edge that was used to draw u.
void dfs(int u, int parent, int lastEdge) {
    for(auto &p : adj[u]){
        int v = p.first, edgeIdx = p.second;
        if(v == parent) continue;
        // If the edge used to reach v comes after the edge used to reach u,
        // then v is drawn in the same reading; otherwise, v requires an extra reading.
        int newReading = dp[u] + (edgeIdx < lastEdge ? 1 : 0);
        dp[v] = newReading;
        dfs(v, u, edgeIdx);
    }
}

void solve(){
    cin >> n;
    // Clear and resize global vectors.
    adj.assign(n + 1, vector<pair<int,int>>());
    dp.assign(n + 1, 0);
    
    // Read the n-1 edges. Edge orders are from 1 to n-1.
    for (int i = 1; i <= n - 1; i++){
        int u, v;
        cin >> u >> v;
        // Since the tree is undirected, add edges in both directions.
        adj[u].push_back({v, i});
        adj[v].push_back({u, i});
    }
    
    // Root the tree at vertex 1.
    dp[1] = 1; // Vertex 1 is drawn in reading 1.
    // Use 0 as the "lastEdge" for the root; any edge index (>=1) will be > 0.
    dfs(1, 0, 0);
    
    // The answer is the maximum dp value among all vertices.
    int ans = 0;
    for (int i = 1; i <= n; i++){
        ans = max(ans, dp[i]);
    }
    cout << ans << "\n";
}

int main(){
    fastio;
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
