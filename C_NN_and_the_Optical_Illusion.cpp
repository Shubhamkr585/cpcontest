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
#define pi 3.14159265358979323846
#define eps 1e-7
 void solve() {
double n,r;
cin >> n >>r;
double low=0.0000001,high=r,ans=r,it=0;
while(high-low>eps){
   double mid=(low+high)/2.00000;
   double val=(r*pi)/(n-pi);
   if(val<0){
       high=mid;
   }
   else if(val>mid){
    ans=mid;
    low=mid;
   }
   else{
    
    high=mid;
   }
   it++;
   if(it>1000000)break;
}
cout<<fixed<<setprecision(7)<<ans<<endl;

}
int main() {
    fastio;
  
solve();
    
    return 0;
}