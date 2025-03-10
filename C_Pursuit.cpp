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
vec a(n),b(n);

for (auto &x : a) cin >> x;

for (auto &x : b) cin >> x;

sort(all(a));

sort(all(b));
vector<ll>pref1, pref2(n+1,0);
for(int i=1;i<=n;i++){
    pref2[i]=pref2[i-1]+b[i-1];
}
pref1.push_back(0);
for(int i=1;i<=n;i++){
    pref1.push_back(pref1[i-1]+a[i-1]);
}
// for(auto it:pref1){
//     cout<<it<<" ";
//     cout<<endl;
// }
if(pref1[n]>=pref2[n]){
    cout<<0<<endl;
    return;
}
ll ans = 0;
ll pos=n/4,size = n;
ll liyascore=pref2[n]-pref2[n/4];
ll myscore=pref1[n]-pref1[n/4];
cout<<liyascore<<"  "<<myscore<<endl;
while(liyascore>myscore){ 
    ll ele=pref1[n];
     if((n+1)/4>size/4 && pos!=0){
        pos--;
        pos=max(pos,0ll);
        liyascore=pref2[size]-pref2[pos];
    }
    pref1.push_back(ele+100ll);
    n++;
    myscore=pref1[n]-pref1[n/4];
   
    ans++;
}
cout<<liyascore<<endl;
cout<<ans<<endl;
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