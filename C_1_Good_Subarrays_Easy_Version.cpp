#include <bits/stdc++.h>
using namespace std;
 
// Sparse table for Range Minimum Query (RMQ)
struct SparseTable {
    int n;
    vector<int> log;
    vector<vector<int>> st;
    
    SparseTable(const vector<int>& arr) {
        n = arr.size();
        log.resize(n + 1);
        for (int i = 2; i <= n; i++) {
            log[i] = log[i/2] + 1;
        }
        int maxK = log[n] + 1;
        st.resize(maxK, vector<int>(n));
        for (int i = 0; i < n; i++){
            st[0][i] = arr[i];
        }
        for (int k = 1; k < maxK; k++){
            for (int i = 0; i + (1 << k) <= n; i++){
                st[k][i] = min(st[k-1][i], st[k-1][i + (1 << (k-1))]);
            }
        }
    }
    
    // Query the minimum value in the range [L, R] (inclusive)
    int query(int L, int R) {
        int j = log[R - L + 1];
        return min(st[j][L], st[j][R - (1 << j) + 1]);
    }
};
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        // Build array b where b[i] = a[i] - (i+1) for 0-indexed i.
        vector<int> b(n);
        for (int i = 0; i < n; i++){
            b[i] = a[i] - (i+1);
        }
        
        // Build the RMQ structure using a sparse table on array b.
        SparseTable st(b);
 
        long long ans = 0;
        // For each starting index L, determine the maximum r (0-indexed) 
        // such that for every i in [L, r], b[i] >= -L.
        for (int L = 0; L < n; L++){
            int low = L, high = n; // We search for the first index where condition fails.
            while(low < high){
                int mid = low + (high - low) / 2;
                // If the minimum in [L, mid] is less than -L, condition fails.
                if(st.query(L, mid) < -L)
                    high = mid;
                else
                    low = mid + 1;
            }
            // 'low' is the first index where the condition fails,
            // so there are (low - L) good subarrays starting at L.
            ans += (long long)(low - L);
        }
 
        cout << ans << "\n";
    }
    
    return 0;
}
