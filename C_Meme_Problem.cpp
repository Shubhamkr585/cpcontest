#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
typedef double lld;
 
void solve() {
    lld d;
    cin >> d;
    
    if(d == 0){
        cout << "Y 0.000000000 0.000000000" << endl;
        return;
    }
    if(d > 0 && d < 4){
        cout << "N" << endl;
        return;
    }
    
    lld low = 0.0, high = d/2.0;
    for (int iter = 0; iter < 100; iter++) {
        lld mid = (low + high) / 2.0;
        lld prod = mid * (d - mid);
        if(prod < d) {
            low = mid;
        } else {
            high = mid;
        }
    }
    lld a = high;       
    lld b = d - a;     
    
    cout << "Y " << fixed << setprecision(9) << b << " " << a << endl;
}
 
int main() {
    fastio;
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
