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
#define INF 10000000000
 void solve() {
ll n;
cin >> n;
vec a(n);
for(auto & it:a)
cin>>it;
ll sum=0;
for(int i=0;i<n;){
    if(a[i]<0){
        ll maxi=-INF;
        while(i<n && a[i]<0){
            maxi=max(maxi,a[i]);
            i++;
        }
        sum+=maxi;
    }
    else{
        ll maxi=-INF;
        while(i<n && a[i]>0){
            maxi=max(maxi,a[i]);
            i++;
        }
        sum+=maxi;
    }
}
cout<<sum<<endl;
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