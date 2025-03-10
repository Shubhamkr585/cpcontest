#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

void solve() {
    int n;
    double l;
    cin >> n >> l;
    vector<double> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    double time = 0.0;
    double v1 = 1.0, v2 = 1.0;
    double pos1 = 0.0, pos2 = l;
    int i = 0, j = n - 1;
    
    // Process until all flags are handled.
    while (i <= j) {
        // Time for car1 to reach next flag and car2 to reach next flag (from the right)
        double t1 = (a[i] - pos1) / v1;
        double t2 = (pos2 - a[j]) / v2;
        
        if (t1 < t2) {
            // Car1 reaches its next flag first
            time += t1;
            pos1 = a[i];
            pos2 -= v2 * t1; // Car2 advances while t1 seconds elapse.
            v1++;  // Increase speed for car1
            i++;
        } else {
            // Car2 reaches its next flag first
            time += t2;
            pos2 = a[j];
            pos1 += v1 * t2; // Car1 advances while t2 seconds elapse.
            v2++;  // Increase speed for car2
            j--;
        }
    }
    
    // Finally, the two cars meet between pos1 and pos2.
    time += (pos2 - pos1) / (v1 + v2);
    cout << fixed << setprecision(6) << time << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
