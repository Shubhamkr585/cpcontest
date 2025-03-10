#include <iostream>
#include <queue>
#include <vector>

using namespace std;

// void solve() {
//     int n;
//     cin >> n;
//     vector<int> s(n);
//     for (int i = 0; i < n; ++i) {
//         cin >> s[i];
//     }

//     long long ans = 0;
//     priority_queue<int> buffs; // Max-heap (using default behavior of priority_queue)

//     for (int e : s) {
//         if (e > 0) {
//             buffs.push(e); // Push the positive value
//         } else if (!buffs.empty()) {
//             ans += buffs.top(); // Get the maximum value from the heap
//             buffs.pop(); // Remove the maximum value from the heap
//         }
//     }

//     cout << ans << endl;
// }

int main() {
    int t;
    vector<int>a={2,4,5};
    int lb=lower_bound(a.begin(),a.end(),7)-a.begin();
    int p=ternary_search(a.begin(),a.end(),5);
    cout<<p<<endl;
    cout<<lb<<endl;
    return 0;
}