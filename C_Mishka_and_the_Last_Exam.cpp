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
#define MAXN 1e18+1
 void solve() {
ll n;
cin >> n;
vec a(n/2),ans(n);
for (int i = 0; i < n/2; i++) {
    cin >> a[i];
}

ll ptr=0,curr_maxi=MAXN,curr_mini=-1;
for (int i = 0; i < n/2; i++) {
   if(a[i]<=curr_maxi){
       ans[n-1-ptr]=a[i];
       ans[ptr]=0;
       curr_maxi=a[i];
   }
   else{
       ans[n-1-ptr]=curr_maxi;
       ans[ptr]=a[i]-curr_maxi;
      
   }
   
   ptr++;
}

for (int i = 1; i < n/2+1; i++) {
    if(i>0 && ans[i-1]>ans[i]){
    ans[n-1-i]-=(ans[i-1]-ans[i]);
        ans[i]=ans[i-1];
        
    }
}
for(int i=n/2;i<n-1;i++){
if(ans[n/2]>ans[n/2+1]){
    ans[n/2-1]+=ans[n/2]-ans[n/2+1];
    ans[n/2]=ans[n/2+1];
}
}


for (int i = 0; i < n; i++) {
    cout<<ans[i]<<" ";
}
cout<<endl;

}
int main() {
    fastio;

solve();
  
    return 0;
}