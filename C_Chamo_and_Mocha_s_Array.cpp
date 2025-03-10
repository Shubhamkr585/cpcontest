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
ll n;
cin>>n;
vec a(n);
for(int i=0;i<n;i++)
    cin>>a[i];

if(n==2){
    cout<<min(a[0],a[1])<<endl;
    continue;
}
ll bada=0;
for(ll i=0;i<n-2;i++){
    ll maxi=max(a[i],max(a[i+1],a[i+2]));
    ll mini=min(a[i],min(a[i+1],a[i+2]));
    ll mid=a[i]+a[i+1]+a[i+2]-maxi-mini;
    if(mid>bada){
        bada=mid;
}
}
cout<<bada<<endl;
}
return 0;
}