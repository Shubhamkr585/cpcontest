#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(),x.end()
#define REP(i,N) for (int i = 0; i <(N); i++)
#define int long long 
#define endl '\n'
#define vec vector<int>
#define map map<int,int>
#define us unordered_set<int>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
 void solve() {
    int n;
    cin >> n;
    vec a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int db=0;  
    int left=0,right= 0; 
    for (int l = 0; l < n; l++){
        int dc = 0;  
        
        if (dc < db) {
            db = dc;
            left = l;
            right = l;
        }
        for (int r = l + 1; r < n; r++){
            if (a[r] > a[l])
                dc += 1;
            else if (a[r] < a[l])
                dc -= 1; 
            if (dc < db) {
                db = dc;
                left = l;
                right = r;
            }
        }
    }
    cout <<left+1<<" "<<right+1<< "\n";
}
signed main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) {
solve();
    }
    return 0;
}

