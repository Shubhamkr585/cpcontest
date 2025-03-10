#include<bits/stdc++.h>
#define vec vector<ll>
#define ll long long int
using namespace std;
#define all(vec) vec.begin(),vec.end()
int main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t=1;
cin>>t;
while(t--){
ll n,x;
cin>>n>>x;
ll ans=1;
for(ll i=1;i*i<=n;i++){
if(n%i==0){
    if(x<=n/i)
    ans=max(ans,i);
    if(x<=i)
    ans=max(ans,n/i);
}
}
cout<<ans<<endl;
}
return 0;
}