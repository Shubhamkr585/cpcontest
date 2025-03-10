#include<bits/stdc++.h>
using namespace std;
#define vec vector<ll>
#define lli long long int
#define All(x)            (x).begin(), (x).end()
using vii = vector<lli>;
int main(void){

	int t(1), tcase(0);
	cin >> t; 
	while(++tcase, t--){
		//cout << "--------Case #" << tcase << ": --------\n";
		lli n = 0;
		cin >> n; 
		vector<pair<lli, lli>> a(n);
		vii p(n);
		for(lli i = 0; i < n; ++i){
			cin >> a[i].first;
			a[i].second = i;
		}
		sort(All(a));
        p[0]=a[0].first;
		for(lli i = 1; i < n; ++i){
			 p[i] = a[i].first + p[i - 1];
		}
		vii ans(n, 0);
		for(lli i = 0; i < n - 1; ++i){
			if(p[i] >= a[i + 1].first){
				ans[i] = 1;
			}
		}
		for(lli i = n - 1; i >= 0; --i){
			if(ans[i]) ans[i] += ans[i + 1];
			a[i].first = 0;
		}
		for(lli i = 0; i < n; ++i){
			a[i].first = i - 1;
			a[i].first += ans[i] + 1;
		}
		sort(All(a), [](auto a, auto b){return a.second < b.second;});
		for(auto i: a){
			cout << i.first << ' ';
		}
		cout <<endl;
	}
	return 0;
}

