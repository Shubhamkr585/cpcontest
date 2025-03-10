#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        std::string s;
        std::cin >> s;

        std::vector<int> digits(s.size());
        for (int i = 0; i < s.size(); ++i) {
            digits[i] = s[i] - '0';
        }

        int n = digits.size();
        int m;
        std::cin >> m;

        std::string left, right;
        std::cin >> left >> right;

        int maxIndex = 0;
        for (int i = 0; i < m; ++i) {
            int leftDigit = left[i] - '0';
            int rightDigit = right[i] - '0';

            int newMaxIndex = maxIndex;
            for (int digit = leftDigit; digit <= rightDigit; ++digit) {
                int currentIndex = maxIndex;
                while (currentIndex < n && digits[currentIndex] != digit) {
                    ++currentIndex;
                }
                newMaxIndex = std::max(newMaxIndex, currentIndex);
            }
            maxIndex = newMaxIndex + 1;
        }

        std::cout << (maxIndex > n ? "YES" : "NO") << std::endl;
    }

    return 0;
}