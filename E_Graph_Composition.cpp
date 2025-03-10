#include <bits/stdc++.h>
using namespace std;
 
struct DSU {
    int n;
    vector<int> parent, size;
    DSU(int n): n(n), parent(n+1), size(n+1, 1) {
        for (int i = 0; i <= n; i++) parent[i] = i;
    }
    int find(int a) {
        if (parent[a] == a)
            return a;
        return parent[a] = find(parent[a]);
    }
    bool unionn(int a, int b) {
        a = find(a), b = find(b);
        if (a == b) return false;
        if (size[a] < size[b]) swap(a, b);
        parent[b] = a;
        size[a] += size[b];
        return true;
    }
};
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        int n, m1, m2;
        cin >> n >> m1 >> m2;
 
        vector<pair<int,int>> edgesF, edgesG;
        for (int i = 0; i < m1; i++){
            int u, v;
            cin >> u >> v;
            edgesF.push_back({u, v});
        }
        for (int i = 0; i < m2; i++){
            int u, v;
            cin >> u >> v;
            edgesG.push_back({u, v});
        }
 
        // Build DSU for G to capture the desired connectivity.
        DSU dsuG(n);
        for (auto &e: edgesG) {
            int u = e.first, v = e.second;
            dsuG.unionn(u, v);
        }
 
        // Process F's edges.
        int removals = 0; // Count edges in F that connect vertices from different G components.
        DSU dsuFprime(n); // DSU for F, but only union edges that are "good"
        for (auto &e: edgesF) {
            int u = e.first, v = e.second;
            // If u and v are in different components in G, then F has an edge where there shouldn't be one.
            if (dsuG.find(u) != dsuG.find(v)) {
                removals++;
            } else {
                // Edge is inside a G component. Use it to join F's pieces.
                dsuFprime.unionn(u, v);
            }
        }
 
        // For each component in G, count how many separate parts F has.
        // For each G component, if there are k parts in F, we need to add k-1 edges.
        unordered_map<int, unordered_set<int>> compMap;
        for (int i = 1; i <= n; i++){
            int compG = dsuG.find(i);
            int compF = dsuFprime.find(i);
            compMap[compG].insert(compF);
        }
 
        int additions = 0;
        for (auto &entry: compMap) {
            int parts = entry.second.size();
            additions += (parts - 1);
        }
 
        cout << removals + additions << "\n";
    }
 
    return 0;
}
