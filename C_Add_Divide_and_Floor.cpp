#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t; 
    while (t--) {
        int n;
        cin >> n; 
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        int x = *min_element(a.begin(), a.end());
        int y = *max_element(a.begin(), a.end());
        vector<int> res;

        while (x != y) {
            res.push_back(x % 2);
            x = (x + res.back()) / 2;
            y = (y + res.back()) / 2;
        }

        cout << res.size() << endl;
        if (res.size() <= n) {
            for (int val : res) {
                cout << val << " "; 
            }
            cout << endl;
        }
    }
    return 0;
}