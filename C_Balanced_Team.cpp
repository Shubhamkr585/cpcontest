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
ll n;
cin >> n;
vec a(n);
for(auto &i:a)cin >> i;
sort(all(a));
ll maxi=1,i=1,j=0;
while(i<n) {
    while(a[i]-a[j]>5)j++;
    maxi=max(maxi,i-j+1);
    i++;
}
cout << maxi << endl;
}
int main() {
    fastio;
    int t = 1;
 
solve();
    
    return 0;
}