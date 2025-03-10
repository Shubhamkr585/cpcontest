#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(),x.end()
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
bool ok = true;
for(int i=0;i<n;i++){
cin>>a[i];
if(a[i]!=0)
ok=false;
}
if(ok)
{
    cout<<0<<endl;
    return;
}
ll first=-1,second=-1,third=-1;
for(int i=0;i<n;i++){
   if(a[i]!=0){
    if(first==-1)
    first=i;
    else{
    if(third!=-1 && third>first && i>third)
    {
        cout<<2<<endl;
        // cout<<first<<" "<<second<<" "<<third<<endl;
        return;
    }
   }
}
else if(third==-1 && first!=-1)
third=i;
}

cout<<1<<endl;
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