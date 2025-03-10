#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(),x.end()
#define ll long long int
#define endl '\n'
#define vec vector<ll>
#define map map<ll,ll>
#define us unordered_set<ll>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
 void solve() {
ll N;
string s;

        cin >> N >> s;
        bool hasP = false, hasS = false;
        for(int i = 0; i < N;i++) {
            if (s[i] == 'p' && i != N - 1) hasP = true;
            else if (s[i] == 's' && i != 0) hasS = true;
        }
        if(!(hasP && hasS))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) {
solve();
    }
    return 0;
}