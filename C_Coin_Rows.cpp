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
ll n;
cin >> n;
vec a(n),b(n);
for(int i=0;i<n;i++)
cin>>a[i];
for(int i=0;i<n;i++)
cin>>b[i];
if(n==1){
    cout<<0<<endl;
    return ;
}
if(n==2){
    cout<<min(a[1],b[0])<<endl;
    return;
}
else{
   //suffix of the first and the prefix of the second
   vec suff(n,0);
   vec pref(n,0);
   suff[n-1]=a[n-1],pref[0]=b[0];
   for(int i=n-2;i>=0;i--)
   suff[i]=suff[i+1]+a[i];
   for(int i=1;i<n;i++)
   pref[i]=pref[i-1]+b[i];
   //print the suff and the prefix
//    for(int i=0;i<n;i++)
//    cout<<suff[i]<<" ";
//    cout<<endl;
//    for(int i=0;i<n;i++)
//    cout<<pref[i]<<" ";
//    cout<<endl;
   for(int i=0;i<n;i++){
    if(i==n-1){
        cout<<pref[i-1]<<endl;
        return;
    }
    if(suff[i+1]<pref[i]){
        if(i==0)
        cout<<suff[0]<<endl;
        else
        cout<<max(pref[i-1],suff[i+1])<<endl;
        return ;
    }
   }
}

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