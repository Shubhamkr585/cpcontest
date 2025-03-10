#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define vec vector<ll>
#define mp map<ll,ll>
#define us unordered_set<ll>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

void solve() {
    ll n, m, h;
    cin >> n >> m >> h;
    vector<vector<ll>> input(n, vector<ll>(m));
    
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < m; j++) {
            cin >> input[i][j];
        }
    }

    vec rudolf = input[0];
    sort(rudolf.begin(), rudolf.end());
    ll pen = 0, pts = 0;

    for (ll j = 0; j < m; j++) {
        if (pen + rudolf[j]) {
            pen += rudolf[j];
            pts++;
        } else break;
    }

    // {points, penalty}
    vector<pair<ll, ll>> p(n);
    for (ll i = 0; i < n; i++) {
        sort(input[i].begin(), input[i].end());
        ll penalty = 0, points = 0;
        for (ll j = 0; j < m; j++) {
            if (penalty + input[i][j]) {
                penalty += input[i][j];
                points++;
            } else break;
        }
        p[i] = {points, penalty};
    }

    // Sort based on points and penalty
    sort(p.begin(), p.end(), [](const pair<ll, ll>& x, const pair<ll, ll>& y) {
        return (x.first > y.first || (x.first == y.first && x.second < y.second));
    });

    ll pos = 0;
    for (ll i = 0; i < n; i++) {
        if (p[i].first == pts && p[i].second == pen) {
            pos = i + 1;
            break;
        }
    }
    
    cout << pos << endl;
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}