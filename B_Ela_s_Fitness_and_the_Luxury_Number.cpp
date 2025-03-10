#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
struct State {
    int v, p;
    ll cost;
    bool operator>(const State &other) const {
        return cost > other.cost;
    }
};
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n, m;
    ll X;
    cin >> n >> m >> X;
 
    vector<vector<int>> adj_orig(n+1);  
    vector<vector<int>> adj_rev(n+1);   
 
    for (int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        adj_orig[u].push_back(v);
        adj_rev[v].push_back(u); 
    }
 
    vector<vector<ll>> dist(n+1, vector<ll>(2, INF));
    dist[1][0] = 0;
 
    priority_queue<State, vector<State>, greater<State>> pq;
    pq.push({1, 0, 0});
 
    while (!pq.empty()){
        State cur = pq.top();
        pq.pop();
 
        int v = cur.v, p = cur.p;
        ll d = cur.cost;
 
        if (d != dist[v][p]) continue; 
 
        if (p == 0) { 
            for (int nxt : adj_orig[v]) {
                if (dist[nxt][0] > d + 1) {
                    dist[nxt][0] = d + 1;
                    pq.push({nxt, 0, dist[nxt][0]});
                }
            }
        } else { 
            for (int nxt : adj_rev[v]) {
                if (dist[nxt][1] > d + 1) {
                    dist[nxt][1] = d + 1;
                    pq.push({nxt, 1, dist[nxt][1]});
                }
            }
        }
 
        int np = 1 - p; 
        if (dist[v][np] > d + X) {
            dist[v][np] = d + X;
            pq.push({v, np, dist[v][np]});
        }
    }
 
    ll ans = min(dist[n][0], dist[n][1]);
    cout << ans << "\n";
 
    return 0;
}
