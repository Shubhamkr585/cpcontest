#include<bits/stdc++.h>
#define vec vector<ll>
#define ll long long int
using namespace std;
#define all(vec) vec.begin(),vec.end()
#define mod 1000000007
int main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t=1;
cin>>t;
while(t--){
ll n,k,sum=0;
cin>>n>>k;
vec a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
    sum+=a[i];
}
ll maxsum=0,sumtillnow=0;
for(int i=0;i<n;i++){
    if(sumtillnow+a[i]>=a[i])
    sumtillnow+=a[i];
    else
    sumtillnow=a[i];
    maxsum=max(maxsum,sumtillnow);
}
if(maxsum==0){
    cout<<(sum%mod +mod)%mod<<endl;
    continue;
}
ll subarray=maxsum;
for(ll i=1;i<=k;i++){
   sum+=subarray;
   subarray+=subarray; 
   subarray=(subarray%mod+mod)%mod;
}
sum=(sum%mod+mod)%mod;
cout<<sum<<endl;
}
return 0;
}