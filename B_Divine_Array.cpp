#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a)
        cin >> x;
    vector<vector<int>> ans;
    ans.push_back(a);
    
    while (true) {
        vector<int> next(n);
        vector<int> freq(n + 1, 0);  
        for (int i = 0; i < n; i++) {
            freq[a[i]]++;
        }
        for (int i = 0; i < n; i++) {
            next[i] = freq[a[i]];
        }
   
        if (next == a) {
            ans.push_back(next);
            break;
        }
        a = next;
        ans.push_back(a);
    }
    
    int q;
    cin >> q;
    int stableIndex = ans.size() - 1; 
    while (q--) {
        int index;
        long long k;
        cin >> index >> k;
        index--;
        if (k >= ans.size())
            cout << ans[stableIndex][index] << "\n";
        else
            cout << ans[k][index] << "\n";
    }
}

int main(){
    fastio;
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
