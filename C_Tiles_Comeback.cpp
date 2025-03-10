#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(),x.end()
#define REP(i,N) for (int i = 0; i <(N); i++)
#define ll long long int
#define endl '\n'
#define vec vector<ll>
// #define map map<ll,ll>
#define us unordered_set<ll>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
 void solve() {
ll n,k;
cin >> n>>k;
vec a(n);
map<ll,ll>mp;
for(int i=0;i<n;i++){
cin>>a[i];
}
if(k==1 ||n==1){
    cout<<"YES\n";
    return;
}
if(n==2){
if(a[0]==a[1])
    cout<<"YES\n";
    else cout<<"NO\n";
    return;
}

int i=1;
int cnt1=1,cnt2=1;
for(;i<n-1 && cnt1<k;i++){
    if(a[i]==a[0])
    cnt1++;
}
for(;i<n-1 && cnt2<k;i++){
    if(a[i]==a[n-1])
    {
        cnt2++;
        if(cnt2>=k) break;
    }
}

if(cnt1>=k&&cnt2>=k || a[0]==a[n-1] && cnt1+cnt2>=k) cout<<"YES";
else cout<<"NO";
cout<<"\n";

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