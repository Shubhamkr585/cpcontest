#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll countUniqueSubarrays(vector<ll>& a) {
    ll n = a.size();
    map<ll, ll> first_occurrence, last_occurrence;
    vector<ll> br(n, 0), suffix_sum(n, 0);

    // Find first and last occurrences
    for (ll i = 0; i < n; ++i) {
        if (first_occurrence.find(a[i]) == first_occurrence.end()) {
            first_occurrence[a[i]] = i;
        }
        last_occurrence[a[i]] = i;
    }

    // Mark rightmost occurrences in br
    for (ll i = 0; i < n; ++i) {
        if (last_occurrence[a[i]] == i) {
            br[i] = 1;
        }
    }

    // Build suffix sum array
    suffix_sum[n - 1] = br[n - 1];
    for (ll i = n - 2; i >= 0; --i) {
        suffix_sum[i] = suffix_sum[i + 1] + br[i];
    }



    // Count valid subarrays
    ll result = 0;
    for (ll i = 0; i < n; ++i) {
        if (first_occurrence[a[i]] == i) { // Check if it's the leftmost occurrence
            result += suffix_sum[i];
        }
    }

    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; ++i) {
            cin >> a[i];
        }

        ll answer = countUniqueSubarrays(a);
        cout << answer << endl;
    }
    return 0;
}