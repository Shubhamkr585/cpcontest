#include <bits/stdc++.h>
 
using namespace std;
 
const int MAX = 200007;
const int MOD = 1000000007;
 
void solve() {
	int n=8;
	// cin >> n;
	int a[]={0,1,1,2,3,8,2,1,4};
	// for (int i = 1; i <= n; i++) {
	// 	cin >> a[i];
	// }
	long long res = 0;
	vector<int> v;
	for (int i = 1; i <= n; i++) {
		if (a[i] >= i) {continue;}
		res += (long long)(lower_bound(v.begin(), v.end(), a[i]) - v.begin());
        cout<<"current value "<<res<<"index "<<i<<endl;
		v.push_back(i);
	}
	cout << res << '\n';
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt=1;
    //  cin >> tt;
      for (int i = 1; i <= tt; i++) {solve();}
}