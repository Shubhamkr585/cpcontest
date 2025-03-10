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
vec a(n+2);
a[0]=INT32_MIN;
a[n+1]=INT32_MAX;
for(int i=1;i<=n;i++){
    cin>>a[i];
}
vec next(n+1),prev(n+1);
next[1]=0;
prev[n]=0;
for(int i=1;i<=n-1;i++){
    if(a[i]-a[i-1]>a[i+1]-a[i])
        next[i+1]=next[i]+1;
        else
        next[i+1]=next[i]+a[i+1]-a[i];
}
for(int i=n;i>=2;i--){
    if(a[i]-a[i-1]<a[i+1]-a[i])
        prev[i-1]=prev[i]+1;
        else
        prev[i-1]=prev[i]+a[i]-a[i-1];
}
ll m;
cin>>m;
for(int i=0;i<m;i++){
    ll l,r;
    cin>>l>>r;
     if(l<r){
         cout<<next[r]-next[l]<<endl;
     }
     else
     cout<<prev[r]-prev[l]<<endl;
}
}
return 0;
}