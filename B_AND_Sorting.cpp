#include<bits/stdc++.h>
#define vec vector<ll>
#define ll long long int
using namespace std;
#define all(vec) vec.begin(),vec.end()
void solve(){
int n;
    cin >> n;
    int ans = (1 << 30) - 1;
    for(int i=0;i<n;++i) {
    	int x;
    	cin >> x;
    	if(x != i) {
    		ans &= x;
    	}
    }
    cout << ans << "\n";
}
int main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t=1;
cin>>t;
while(t--){
solve();
}
return 0;
}