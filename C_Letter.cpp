#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

const ll INF = 1e9;

ll rec(int i, int state, const string &s, vector<vector<ll>> &memo) {
    int n = s.size();
    if(i == n) return 0;
    if(memo[i][state] != -1) return memo[i][state];
    
    ll cost;
    if(state == 0) {
        ll cost1 = (isupper(s[i]) ? 0LL : 1LL) + rec(i + 1, 0, s, memo);
        ll cost2 = (islower(s[i]) ? 0LL : 1LL) + rec(i + 1, 1, s, memo);
        cost = min(cost1, cost2);
    } else {
        cost = (islower(s[i]) ? 0LL : 1LL) + rec(i + 1, 1, s, memo);
    }
    memo[i][state] = cost;
    return cost;
}

void solve() {
    string s;
    cin >> s;
    int n = s.size();
    vector<vector<ll>> memo(n, vector<ll>(2, -1));
    cout << rec(0, 0, s, memo) << "\n";
}

int main() {
    fastio;
   
    solve();
    return 0;
}
