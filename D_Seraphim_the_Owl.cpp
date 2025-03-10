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
ll n,m;
cin>>n>>m;
vec a(n+1),prefix(n+1),b(n+1);
prefix[0]=0;
for(int i=1;i<=n;i++){
    cin>>a[i];
}
for(int i=1;i<=n;i++)
{
    cin>>b[i];
    prefix[i]=prefix[i-1]+b[i];
}
ll req=0;
int i,j=n;
bool nahimila=false;
for( i=n;i>=m;i--){
    if(i==m && a[i]>=b[i]){
        nahimila=true;
    }
    if(a[i]<b[i]){
        req+=a[i]+prefix[j]-prefix[i];
        j=i-1;
    }
}
ll mini=INT64_MAX;
if(nahimila){
for(i=m;i>=1;i--){
    ll value=a[i]+prefix[j]-prefix[i];
    mini=min(mini,value);
}
req+=mini;
}

cout<<req<<endl;
}
return 0;
}