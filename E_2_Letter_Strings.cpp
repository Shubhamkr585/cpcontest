#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;

        
        int ans = 0;
        map<pair<int,int>,int>mp;
        for(int i = 0;i < n; ++i) {
            string s; cin >> s;
            for(int j = 0;j < 2; ++j) {
                for(char c = 'a'; c <= 'k'; ++c) {
                    if(c == s[j]) continue;
                    string a = s; a[j] = c;
                    ans += mp[{a[0] - 'a',a[1] - 'a'}];
                }
            }
            ++mp[{s[0] - 'a',s[1] - 'a'}];
        }
        cout << ans << "\n";
    }
}