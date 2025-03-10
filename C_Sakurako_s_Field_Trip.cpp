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
for(ll i=0;i<n;i++){
    cin>>a[i];
}
int s=0;
int e=n-1;
while(s<e){
if(a[s]==a[s+1]){
    swap(a[s+1],a[e-1]);
}
if(a[e]==a[e-1]){
    swap(a[s+1],a[e-1]);
}
s++;
e--;
}
// for(int i=0;i<n;i++)
// cout<<a[i]<<" ";
int ans=0,count=0,maxi=0;
for(int i=0;i<n-1;i++){
    if(a[i]==a[i+1])
    {
        count++;
        maxi=max(maxi,count);
    }
    else{
    count=0;
    ans+=maxi;
    maxi=0;
    }
}
ans+=maxi;
cout<<ans<<endl;
}
return 0;
}