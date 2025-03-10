#include <bits/stdc++.h>
using namespace std;
#define sort(vec) sort(vec.begin(),vec.end())
#define ll long long int
#define endl '\n'
#define vec vector<ll>
#define uo unordered_set<ll>
#define mp map<ll,ll>
#define us unordered_set<ll>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
ll cal(ll num,ll x){
    ll sum=0;
    while(num>0 && x>0){
        if(sum>LLONG_MAX-x){
            return LLONG_MAX;
        }
        sum+=x;
        x/=2;
        num--;
    }
    return sum;
}
int32_t main() {
	int t;
	cin>>t;
	while(t--){
	    ll x, n;
	    cin>>x>>n;
	    ll l = 1;
	    ll r = 1e18;
	    ll ans = -1;
	    while(l <= r){
	        int mid = (l + r) / 2;
	        int temp = cal(n, mid);
	        if(temp == x){
	            ans = mid;
	            break;
	        }
	        if(temp < x){
	            l = mid + 1;
	        }else{
	            r = mid - 1;
	        }
	    }
	    cout<<ans<<"\n";
	}
}