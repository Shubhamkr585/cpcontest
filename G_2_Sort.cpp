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
 void solve() {
ll n,k;
cin >> n>>k;
vec a(n);
for(int i=0;i<n;i++)
cin>>a[i];
ll j=0,cnt=0;
for(ll i=1;i<n;i++){
    if(a[i]*2>a[i-1]){
        if(i-j==k){
            cnt++;
            j++;
        }
    }
    else{
               j=i;
    }
}
cout<<cnt<<endl;

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