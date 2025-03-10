#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll INF = LLONG_MAX;
int N, M;
vector<vector<pair<int, ll>>> graph;
ll best = INF;
void dfs(int u, ll xorVal, int visited) {
    if(u == N) {
        best = min(best, xorVal);
        return;
    }
    for(auto &edge : graph[u]){
        int v = edge.first;
        ll w = edge.second;
        if(visited & (1 << (v-1))) continue;
        dfs(v, xorVal ^ w, visited | (1 << (v-1)));
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> N >> M;
    graph.resize(N+1);
    for(int i = 0; i < M; i++){
        int u, v;
        ll w;
        cin >> u >> v >> w;
        graph[u].push_back({v, w});
        graph[v].push_back({u, w});
    }
    dfs(1, 0, 1 << (1-1));
    cout << best << "\n";
    return 0;
}
