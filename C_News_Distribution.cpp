#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)

class DisjointSet {
public:
    vector<int> parent, compSize;
    DisjointSet(int n) {
        parent.resize(n + 1);
        compSize.resize(n + 1, 1);  
        for (int i = 0; i <= n; i++) {
            parent[i] = i;
        }
    }
    
    int find(int x) {
        if (parent[x] == x)
            return x;
        return parent[x] = find(parent[x]);
    }
    
    void unionSet(int a, int b) {
        a = find(a);
        b = find(b);
        if (a == b) return;
        if (compSize[a] < compSize[b])
            swap(a, b);
        parent[b] = a;
        compSize[a] += compSize[b];
    }
};

void solve() {
    int n, m;
    cin >> n >> m;
    DisjointSet ds(n);
    
    for (int i = 0; i < m; i++) {
        int k;
        cin >> k;
        if (k == 0) continue;
        vector<int> group(k);
        for (int j = 0; j < k; j++) {
            cin >> group[j];
        }
        int first = group[0];
        for (int j = 1; j < k; j++) {
            ds.unionSet(first, group[j]);
        }
    }
    
    for (int i = 1; i <= n; i++) {
        cout << ds.compSize[ds.find(i)] << " ";
    }
    cout << "\n";
}

int main() {
    fastio;
    solve();
    return 0;
}
