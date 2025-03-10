#include<bits/stdc++.h>
#define vec vector<ll>
#define ll long long int
using namespace std;
#define all(vec) vec.begin(),vec.end()
int main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t=1;
// cin>>t;
// while(t--){
ll n,x,k;
cin>>n>>k>>x;
vec a(n);
for(int i=0;i<n;i++)
cin>>a[i];
sort(all(a));
ll ans=1,j=1;
vec diff;
while(j<n){
    if(a[j]-a[j-1]>x){
        ans++;
      diff.push_back(a[j]-a[j-1]);
    }
    j++ ;
}
sort(all(diff));
for(int i=0;i<diff.size();i++){
    ll r=diff[i]%x==0?diff[i]/x-1:diff[i]/x;
    if(k>=r){
        k-=r;
        ans--;
    }
    else
    break;
}
cout<<ans<<endl;
// }
return 0;
}