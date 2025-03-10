#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

void solve() {
    ll n;
    cin >> n;

    ll i = sqrt(2*n-1);
    if (i % 2 == 0) i++;  

    while (i >= 1) {
        ll b = (i * i - 1) / 2;
        ll c = (i * i + b * b);

        if (c <= n * n) {
            cout << (i - 1) / 2 << endl;
            return;
        }

        i -= 2; 
    }

    cout << 0 << endl;  
}

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}




