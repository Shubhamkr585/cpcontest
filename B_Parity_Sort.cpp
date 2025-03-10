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
vec a(n),even,odd;
for(int i = 0; i < n; i++) {
    cin >> a[i];
    if(a[i] % 2 == 0) {
        even.push_back(a[i]);
    } else {
        odd.push_back(a[i]);
    }
}
sort(even.begin(), even.end());
sort(odd.begin(), odd.end());
int ptr1=0,ptr2=0;
for(int i = 0; i < n; i++) {
if(a[i]% 2 == 0) {
    a[i] = even[ptr1++];
} else {
    a[i] = odd[ptr2++];
}
}
for(int i=0;i<n-1;i++){
    if(a[i]>a[i+1]){
        cout<<"NO\n";
        return;
    }
}
cout<<"YES\n";
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