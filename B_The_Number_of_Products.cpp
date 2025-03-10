#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve( vector<ll>& arr) {
    ll n = arr.size();
    ll negative_count = 0; // To store the count of negative product subarrays
    ll odd_count = 0;      // To track the number of negatives encountered
    ll prefix_even = 1;    // Count of subarrays with an even number of negatives
    ll prefix_odd = 0;     // Count of subarrays with an odd number of negatives

    for (ll num : arr) {
        if (num < 0) {
            // Toggle the parity of odd_count when encountering a negative number
            odd_count++;
        }

        // Check the parity of odd_count
        if (odd_count % 2 == 0) {
            // Even parity: add prefix_odd subarrays ending here
            negative_count += prefix_odd;
            prefix_even++;
        } else {
            // Odd parity: add prefix_even subarrays ending here
            negative_count += prefix_even;
            prefix_odd++;
        }
    }

    ll total=(n*(n+1))/2;
    cout<<negative_count<<" "<<total-negative_count<<endl;
}

int main() {
    ll n;
    cin>>n;
     vector<ll>a(n);
     for(ll i=0;i<n;i++)
        cin>>a[i];
        solve(a);
    return 0;
}
