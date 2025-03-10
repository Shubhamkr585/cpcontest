
#include <bits/stdc++.h>
using namespace std;
void max_length(int N, int x,
				vector<int>& v)
{
	int i, a;
	vector<int> preff(N), suff(N);
	int ct = 0;
	for (i = 0; i < N; i++) {
		a = v[i];
		if (a % x == 0) {
			ct += 1;
		}
	}
	if (ct == N) {	
		cout << -1 << endl;
		return;
	}

	suff[N-1]=v[N-1];
    for(int i=N-2;i>=0;i--) 
    suff[i]=suff[i+1]+v[i];
	preff[0]=v[0];
	for (i = 1; i < N; i++) {
		preff[i]=preff[i-1]+v[i];
	}
	int ans = 0;
	for (i = 0; i < N; i++) {
		if (suff[i] % x != 0) {
			ans = max(ans, N - i);
		}
		if (preff[i] % x != 0) {
			ans = max(ans, i + 1);
		}
	}
    cout << ans << endl;
}



int main() {

    int t = 1;
    cin >> t;
    while (t--) {
    int n,x;
cin>>n>>x;
vector<int> v(n);
for (int i = 0; i < n; i++)
{
    cin>>v[i];
}

max_length(n,x,v);
    }
    return 0;
}