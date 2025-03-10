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
ll n,k;
cin >> n >> k;
 vec a(n), upd(n/2,0);
 for (int i = 0; i < n; i++) 
 cin>>a[i];
 sort(all(a));
 if(n==1){
    cout<<a[0]+k<<endl;
    return;
 }
 ll size=1;
 for(int i=n/2+1;i<n;i++){
     upd[i-n/2-1]=size*(a[i]-a[i-1]);
     size++;
 }

 ll ans=a[n/2],i=n/2+1;
 while(i<n && k>0){
    if(k>=upd[i-n/2-1]){
        k-=upd[i-n/2-1];
        ans=a[i++];
    }
    else{
        ll gp=i-n/2;
        ans+=k/gp;
        k=0;
        break;
    }
 }
 if(k>0){
     ans+=(k)/(n/2+1);
 }
 cout<<ans<<endl;
 



}
int main() {
    fastio;
    
solve();
    
    return 0;
}