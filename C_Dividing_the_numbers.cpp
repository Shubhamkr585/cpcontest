#include <bits/stdc++.h>
using namespace std;

void solve(int n) {
    long long totalSum = (1LL * n * (n + 1)) / 2;
    long long target = totalSum / 2;
    vector<int> group1, group2;
    long long sum1 = 0;

    // Start picking numbers from n down to 1 greedily
    for (int i = n; i >= 1; --i) {
        if (sum1 + i <= target) {
            sum1 += i;
            group1.push_back(i);
        } else {
            group2.push_back(i);
        }
    }

    // Compute absolute difference
    long long sum2 = totalSum - sum1;
    cout << abs(sum1 - sum2) << "\n";
    
    // Print the first group
    cout << group1.size() << " ";
    for (int num : group1) {
        cout << num << " ";
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    solve(n);
    
    return 0;
}
