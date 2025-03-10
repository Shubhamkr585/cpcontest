#include <iostream>
#include <vector>
using namespace std;

const int SIZE = 11;
long long e[SIZE];       // Factorials
long long dp[SIZE];      // Precomputed counts

// Precompute factorials and dp values
void precompute() {
    e[0] = 1;
    for (int n = 1; n < SIZE; ++n) {
        e[n] = n * e[n - 1];
    }

    dp[0] = 0;
    for (int n = 1; n < SIZE; ++n) {
        dp[n] = dp[n - 1] + 9 * e[9] / e[10 - n];
    }
}

// Calculate the number of unique-digit numbers in range [1, x)
long long calc(long long x) {
    if (x > 9876543210LL) {  // Beyond maximum unique-digit number
        return dp[10];       // Return the count of all valid numbers
    }

    vector<int> digits(SIZE, 0);
    int n = 0;

    // Extract digits of x
    while (x > 0) {
        digits[n++] = x % 10;
        x /= 10;
    }

    long long ans = dp[n - 1];  // Start with precomputed values
    vector<bool> mark(10, false);  // To track used digits

    // Compute for the same number of digits as `x`
    
    for (int i = n - 1; i >= 0; --i) {
        int d = (i == n - 1) ? 1 : 0;  // Leading digit cannot be zero
        while (d < digits[i]) {
            if (!mark[d]) {
                ans += e[9 - (n - 1 - i)] / e[10 - n];
            }
            ++d;
        }
        if (mark[digits[i]]) {  // If digit is already used, break
            break;
        }
        mark[digits[i]] = true;
    }

    return ans;
}

// Main function to handle multiple test cases
int main() {
    precompute();  // Precompute factorials and dp values

    int t;
    cin >> t;  // Number of test cases

    while (t--) {
        long long l, r;
        cin >> l >> r;

        // Count numbers with no repeated digits in range [l, r]
        long long resL = calc(l);
        long long resR = calc(r +1);
        cout << resR - resL << endl;
    }

    return 0;
}
