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
#define MOD 10000000007
ll check(vec &a,ll mid){
    ll diff=0;
    for(int i=0;i<a.size()-1;i++){
      if(a[i]==-1 && a[i+1]!=-1){
        diff=max(diff,abs(a[i+1]-mid));
      }
      else if(a[i]!=-1 && a[i+1]==-1){
        diff=max(diff,abs(a[i]-mid));
      }
      else if(a[i]!=-1 && a[i+1]!=-1){
        diff=max(diff,abs(a[i]-a[i+1]));
      }
    }
    return diff;
}
 void solve() {
ll n;
cin >> n;
vec a(n);
ll mn=MOD,mx=-MOD;
for(int i=0;i<n;i++){
cin>>a[i];
}

	for(int i = 0;i<n;i++){
		if(i > 0 && a[i] == -1 && a[i - 1] != -1)
			mn = min(mn , a[i - 1]) , mx = max(mx , a[i - 1]);
		if(i < n - 1 && a[i] == - 1 && a[i + 1] != -1)
			mn = min(mn , a[i + 1]) , mx = max(mx , a[i + 1]);
	}
	ll res = (mx + mn) / 2;
	ll ans = 0;
	for(int i=0;i<n;i++){
		if(a[i] == -1)
			a[i] = res;
		if(i)
			ans = max(ans,abs(a[i] - a[i - 1]));
	}
    cout<<ans<<" "<<res<<endl;
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