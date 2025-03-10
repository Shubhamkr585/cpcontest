#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int tot = n + m + 1;
        vector<vector<int>> a(2, vector<int>(tot));
        for (int i = 0; i < tot; i++){
            cin >> a[0][i];
        }
        for (int i = 0; i < tot; i++){
            cin >> a[1][i];
        }
        int bounds[2] = { n, m };
        int bad = -1, badType = -1;
        int cur[2] = {0, 0};
        int ans = 0;
        vector<int> types(tot, 0);
        for (int i = 0; i < tot - 1; i++){
            int curType = 0;
            if(a[0][i] < a[1][i])
                curType = 1;
            if(cur[curType] == bounds[curType]){
                curType = 1 - curType;
               
                if(bad == -1){
                    bad = i;
                    badType = 1 - curType;  
                }
            }
            types[i] = curType;
            ans += a[curType][i];
            cur[curType]++;
        }
        
        vector<int> res;
        for (int i = 0; i < tot - 1; i++){
            int val = ans - a[types[i]][i];
            if(bad != -1 && i < bad && types[i] == badType){
                val = val + a[badType][bad] - a[1 - badType][bad] + a[1 - badType][tot - 1];
            }
            else{
                val = val + a[types[i]][tot - 1];
            }
            res.push_back(val);
        }
        res.push_back(ans);
        
        for(auto v : res)
            cout << v << " ";
        cout << "\n";
    }
    return 0;
}
