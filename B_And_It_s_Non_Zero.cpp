#include <bits/stdc++.h>
using namespace std;

#define MAX_N 200000
#define NUM_BITS 20

// Precomputed prefix sum arrays for each bit position
vector<vector<int>> prefixSums(MAX_N + 1, vector<int>(NUM_BITS,0));
vector<int>cnt(MAX_N + 1,0);

// Function to solve the problem
void solve() {
    int left, right;
    cin >> left >> right;
    
    int maxi=0;
    for(int i=0; i<NUM_BITS; i++) {
        maxi=max(maxi,prefixSums[right][i]-prefixSums[left-1][i]);
}
    cout << right-left+1-maxi << endl;

}
int main() {
    // Precompute prefix sum arrays
    for (int i = 1; i <= MAX_N; i++) {
        int maxi=0;
        for (int bit = 0; bit < NUM_BITS; bit++) {
            if (i & (1 << bit)) {
                prefixSums[i][bit] = prefixSums[i - 1][bit] + 1;
            } else {
                prefixSums[i][bit] = prefixSums[i - 1][bit];
            }
            maxi=max(maxi,prefixSums[i][bit]);
        }
        cnt[i]=maxi;
    }

    int numTestCases;
    cin >> numTestCases;

    while (numTestCases--) {
        solve();
    }

    return 0;
}