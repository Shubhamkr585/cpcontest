#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll lower_bound(const vector<long long>&a, ll target, ll start) {
    ll end =a.size();
    while (start < end) {
        ll mid = (start + end) / 2;
        if (a[mid] < target) {
            start = mid + 1;
        } else {
            end = mid;
        }
    }
    return start;
}


ll upper_bound(vector<ll>&a, ll target, ll start) {
    ll end =a.size();
    while (start < end) {
        ll mid = (start + end) / 2;
        if (a[mid] <= target) {
            start = mid + 1;
        } else {
            end = mid;
        }
    }
    return start;
}

int main() {
    int t;
    cin >> t; 

    while (t--) {
        int n;
        ll x, y;
        cin >> n >> x >> y;

        vector<ll> a(n);
        ll sum = 0;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            sum += a[i];
        }

    
        sort(a.begin(), a.end());

        ll cnt = 0;

       
        for (ll i = 0; i < n; ++i) {
            ll lb = sum - y - a[i];
            ll ub = sum - x - a[i];

            ll left = lower_bound(a, lb, i + 1);
            ll right = upper_bound(a, ub, i + 1);

           
            cnt+= (right - left);
        }

        cout <<cnt<< endl; 
    }

    return 0;
}