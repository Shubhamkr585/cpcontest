#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(),x.end()
#define REP(i,N) for (int i = 0; i <(N); i++)
#define ll long long int
#define endl '\n'
#define vec vector<ll>
#define map map<ll,ll>
#define us unordered_set<ll>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
void solve() {
	int n;
	cin >> n;
    unordered_set<int>st;
	vector<int> pos, neg, a;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
        st.insert(x);
		if (x > 0) {pos.push_back(x);}
		else if (x < 0) {neg.push_back(x);}
		else {
			if (a.size() < 2) {a.push_back(x);}
		}
	}
	if (pos.size() > 2 || neg.size() > 2) {cout << "NO\n"; return;}
	
	for (int i : pos) {a.push_back(i);}
	for (int i : neg) {a.push_back(i);}
	
	for (int i = 0; i < a.size(); i++) {
		for (int j = i + 1; j < a.size(); j++) {
			for (int k = j + 1; k < a.size(); k++) {
				if(st.find(a[i]+a[j] + a[k]) == st.end()) {
                    cout << "NO\n";
                    return;
			}
            }
		}
	}
	cout << "YES\n";
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