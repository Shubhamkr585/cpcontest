#include <bits/stdc++.h>
using namespace std;
#define ll long long

// Check if it's possible to bake 'cookies' cookies
bool possible(ll cookies, const vector<ll>& a, const vector<ll>& b, ll k) {
    ll needed = 0;
    int n = a.size();
    for(int i = 0; i < n; i++) {
        // grams required for ingredient i
        ll req = cookies * a[i];
        // if available grams are less than required, add the shortage
        if(b[i] < req) {
            needed += (req - b[i]);
            // if shortage exceeds magic powder, not possible
            if(needed > k) return false;
        }
    }
    return (needed <= k);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
  
    int n;
    ll k;
    cin >> n >> k;
    vector<ll> a(n), b(n);
    
    // Read ingredient requirements per cookie
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    // Read available grams for each ingredient
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    
    // Binary search for the maximum number of cookies
    ll low = 0, high = 1;
    // First, find an upper bound where baking 'high' cookies is not possible
    while(possible(high, a, b, k)) {
        high *= 2;
    }
    
    ll ans = 0;
    while(low <= high) {
        ll mid = (low + high) / 2;
        if(possible(mid, a, b, k)) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    cout << ans << "\n";
    return 0;
}
