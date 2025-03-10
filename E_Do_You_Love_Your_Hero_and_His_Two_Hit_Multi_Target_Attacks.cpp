#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        int k;
        cin >> k;
        if(k == 0){
            cout << 1 << "\n";
            cout << 0 << " " << 0 << "\n";
            continue;
        }
        vector<int> groups;
        int rem = k;
        while(rem > 0){
            int m = (int)((1 + sqrt(1.0 + 8.0 * rem)) / 2);
            if(m < 2) m = 2;
            groups.push_back(m);
            rem -= (m * (m - 1)) / 2;
        }
        vector<pair<int, int>> staffs;
        int curX = 0, curY = 0;
        for(auto m : groups){
            for (int i = 1; i <= m; i++){
                staffs.push_back({curX + i, curY});
            }
            curX += 500;
            curY += 500;
        }
        cout << staffs.size() << "\n";
        for(auto p : staffs)
            cout << p.first << " " << p.second << "\n";
    }
    return 0;
}
