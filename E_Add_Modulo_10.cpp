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
ll nextelement(ll ele){
    return 1ll*(ele+ ele%10);
}
 void solve() {
ll n;
cin >> n;
vec a(n);
bool flag=false;
for(ll i=0;i<n;i++){
    cin>>a[i];
    if(a[i]%5==0){
        flag=true;
        a[i]=nextelement(a[i]);
    }
}
if(flag){
    ll mini=*min_element(a.begin(),a.end());
    ll maxi=*max_element(a.begin(),a.end());
    cout<<(mini==maxi?"Yes\n":"No\n");
    return;
}
bool flag4=false,flag14=false;
for(ll i=0;i<n;i++){
    ll ele=a[i];
    while(ele%10!=4)
    ele=nextelement(ele);
    if(ele%20==4){
        flag4=true;
    }
    else
    flag14=true;
}
cout<<(flag4==flag14?"No\n":"Yes\n");
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