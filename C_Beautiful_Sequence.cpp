#include <bits/stdc++.h>
using namespace std;
 
const long long MOD = 998244353;
 
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
 
        long long dp0 = 1, dp1 = 0, dp2 = 0, dp3 = 0;
 
        for (int i = 0; i < n; i++){
            int x = a[i];
            if(x == 1){
            
                dp1 = (dp1 + dp0) % MOD;
            } else if(x == 2){
               
                dp2 = ( (dp2 * 2LL) % MOD + dp1 ) % MOD;
            } else if(x == 3){
                
                dp3 = (dp3 + dp2) % MOD;
            }
        }
 
        cout << dp3 % MOD << "\n";
    }
    return 0;
}
