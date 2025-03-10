#include <bits/stdc++.h>
#define vec vector<long long>
#define ll long long int
using namespace std;

bool solve(ll n, ll m) {
    queue<ll> q;
    unordered_set<ll> visited;

    q.push(n);
    visited.insert(n);

    while (!q.empty()) {
        ll current = q.front();
        q.pop();

        if (current == m) return true;

    
        if (current % 3 == 0) {
            ll next1 = (2 * current) / 3;
            ll next2 = current / 3;

            if (next1 >= 0 && visited.find(next1) == visited.end()) {
                visited.insert(next1);
                q.push(next1);
            }
            if (next2 >= 0 && visited.find(next2) == visited.end()) {
                visited.insert(next2);
                q.push(next2);
            }
        }
    }

    return false;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t = 1;
    cin >> t;
    while (t--) {
        ll n, m;
        cin >> n >> m;
        if (solve(n, m))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
