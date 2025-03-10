#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }
        
        int countComponents = 0;
        int currentMax = 0;
        // Note: our permutation is 1-indexed in terms of values.
        // When processing 0-indexed array, we check if currentMax == i+1.
        for (int i = 0; i < n; i++) {
            currentMax = max(currentMax, p[i]);
            if (currentMax == i + 1)
                countComponents++;
        }
        
        cout << countComponents << "\n";
    }
    
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
 
// // DSU with union by rank and path compression.
// class DisjointSet {
// public:
//     vector<int> parent, rank;
//     DisjointSet(int n) {
//         parent.resize(n);
//         rank.resize(n, 0);
//         for (int i = 0; i < n; i++)
//             parent[i] = i;
//     }
    
//     int findUPar(int node) {
//         if (parent[node] == node)
//             return node;
//         return parent[node] = findUPar(parent[node]);
//     }
    
//     void unionByRank(int u, int v) {
//         int rootU = findUPar(u);
//         int rootV = findUPar(v);
//         if (rootU == rootV)
//             return;
//         if (rank[rootU] < rank[rootV])
//             parent[rootU] = rootV;
//         else if (rank[rootU] > rank[rootV])
//             parent[rootV] = rootU;
//         else {
//             parent[rootV] = rootU;
//             rank[rootU]++;
//         }
//     }
// };
 
// // DSU method based on the observation that the inversion graph’s connected
// // components are contiguous segments. We “join” adjacent indices if there is no cut.
// // A cut occurs at position i (1-indexed) if prefix maximum p[1..i] equals i.
 
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> p(n);
//         for (int i = 0; i < n; i++) {
//             cin >> p[i];
//         }
 
//         // Create DSU for n vertices (we use 0-indexing).
//         DisjointSet dsu(n);
 
//         // currentMax will track the maximum value seen so far (in the prefix).
//         int currentMax = 0;
//         // We “connect” adjacent indices if no break appears between them.
//         // A break (i.e. no union) occurs when currentMax equals (i+1)
//         // because that means the first i+1 numbers are exactly {1, 2, ..., i+1}
//         // and so there cannot be any inversion connecting position i and i+1.
//         for (int i = 0; i < n - 1; i++) {
//             currentMax = max(currentMax, p[i]);
//             if (currentMax != i + 1) {
//                 // There is no component break between positions i and i+1,
//                 // so union these adjacent vertices.
//                 dsu.unionByRank(i, i + 1);
//             }
//         }
 
//         // Count the number of distinct DSU parents.
//         // Each distinct parent represents one connected component.
//         set<int> components;
//         for (int i = 0; i < n; i++) {
//             components.insert(dsu.findUPar(i));
//         }
 
//         cout << components.size() << "\n";
//     }
    
//     return 0;
// }

class DisjointSet {
    vector<int> rank, parent;
public:
    DisjointSet(int n) {
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        for (int i = 0; i <= n; i++) {
            parent[i] = i;
        }
    }

    int findUPar(int node) {
        if (node == parent[node])
            return node;
        return parent[node] = findUPar(parent[node]);
    }

    void unionByRank(int u, int v) {
        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);
        if (ulp_u == ulp_v) return;
        if (rank[ulp_u] < rank[ulp_v]) {
            parent[ulp_u] = ulp_v;
        }
        else if (rank[ulp_v] < rank[ulp_u]) {
            parent[ulp_v] = ulp_u;
        }
        else {
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
    }
};



//code to find the number of connected components






