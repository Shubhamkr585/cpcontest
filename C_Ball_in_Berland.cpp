#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int a, b, k;
        cin >> a >> b >> k;
        vector<int> boys(k), girls(k);
       
        vector<ll> freqB(a + 1, 0), freqG(b + 1, 0);
        
       
        for (int i = 0; i < k; i++) {
            cin >> boys[i];
            freqB[boys[i]]++;
        }
        //there will be repetitions when freq is more than 1 and due to rep the number of 
        //invalid pairs will be freq*(freq-1)/2
        for (int i = 0; i < k; i++) {
            cin >> girls[i];
            freqG[girls[i]]++;
        }
        ll total = (ll)k * (k - 1) / 2;
        ll invalid = 0;
        for (int i = 1; i <= a; i++) {
                invalid += freqB[i] * (freqB[i] - 1) / 2;
        }
        
        for (int i = 1; i <= b; i++) {
                invalid += freqG[i] * (freqG[i] - 1) / 2;
        }
      
        ll answer = total - invalid;
        cout << answer << "\n";
    }
    
    return 0;
}
