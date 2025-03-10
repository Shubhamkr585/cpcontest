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
for(auto &x : a) {
    cin>>x;
}
for(int i = 0; i < n; i++)
cin>>b[i];

 ll maxsofar=a[0],i=0,j=0,index=0;
 while(i<n){
    if(a[i]==b[i])
    {
        i++;
    }
    else if(a[i]<b[i]){
         bool ok = false;
        ll matching=b[i];
        i++;
        while(i<n && matching == b[i]  ){
            if(a[i]==matching){
            ok = true;
            break;
            }
            i++;
        }
       
        if(!ok){
            cout<<"NO"<<endl;
            return;
        }
      

    }
    else{
        cout<<"NO"<<endl;
        return;
    }
 }
 cout<<"YES"<<endl;
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