#include<bits/stdc++.h>
#define vec vector<ll>
#define ll long long int
using namespace std;
#define all(vec) vec.begin(),vec.end()
ll kandane(vec &a,ll l,ll r){
    ll maxtill=a[l],maxi=a[l];
    for(ll i=l+1;i<=r;i++){
        if(maxtill+a[i]>a[i])
        maxtill+=a[i];
        else
        maxtill=a[i];
    maxi=max(maxi,maxtill);
    }
   return maxi;
}
int main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t=1;
cin>>t;
while(t--){
ll n;
cin>>n;
vec a(n);
ll sum=0;
for(ll i=0;i<n;i++){
    cin>>a[i];
    sum+=a[i];
}
ll missfirst=kandane(a,1,n-1);
ll misslst=kandane(a,0,n-2);
if(sum>missfirst && sum>misslst)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}
return 0;
}